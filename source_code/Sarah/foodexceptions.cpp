#include "foodexceptions.h"
#include "ui_foodexceptions.h"
#include "qdynamicbutton.h"
#include "ingredients.h"
#include <string>
#include <regex>

FoodExceptions::FoodExceptions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FoodExceptions)
{
    ui->setupUi(this);

    vector <vector <string> > data;
    ifstream infile("../../DataBase/tmp/ingredient_exceptions_name.txt");
    while (infile){
        string s;
        if (!getline( infile, s )) break;
        istringstream ss( s );
        vector <string> record;
        while (ss)
        {
        string s;
        if (!getline( ss, s, ',' )) break;
        record.push_back( s );
        }
        data.push_back( record );
    }


    vector<string> exceptions;

    for(int i = 0; i < data.size() ; i++){
        for(int j = 0; j < data[i].size(); j++){
            exceptions.push_back(data[i][j]) ;
        }
    }



    string path = "../../DataBase/Ingredients/";
    Ingredients ingredients;
    ingredients.load_data_base_main(path+"Tables/FakeData/Name.csv",path+"Tables/FakeData/ID.txt",path+"Tables/FakeData/CaloriesPerGram.txt");

    ing_name = ingredients.get_ing_name();
    ing_id = ingredients.get_ing_id();

    for(int i=0;i<ing_id.size();i++){
        checkboxes.push_back(QString::fromStdString(ing_name[i]));
    }
        for(int i = 0; i < checkboxes.size(); i++){
            QDynamicButton *button = new QDynamicButton(this);  // Create a dynamic button object
            button->setText(checkboxes[i]);
            for(int color = 0; color < exceptions.size(); color++){
                if(button->text() == QString::fromStdString(exceptions[color])){
                    button->setStyleSheet("color:red;");
                    button->click();
                    history_exceptions.push_back(button->getID());
                    button->add_to_ID(10000);
                }
            }
            ui->verticalLayout->addWidget(button);
            connect(button, SIGNAL(clicked()), this, SLOT(slotGetNumber()));
        }
}

FoodExceptions::~FoodExceptions()
{
    delete ui;
}

bool dynamic_search(string str, regex reg){
    sregex_iterator currentMatch(str.begin(), str.end() , reg);
    sregex_iterator lastMatch;
    if(currentMatch != lastMatch){
        currentMatch++;
        return true;
    }
    else{
        return false;
    }
}

void FoodExceptions::on_searchButton_pressed()
{
    smatch matches;
    string item = ui->lineEdit->text().toStdString();
    string reg = "(([A-Za-z]*)"+item+"([^ ]+)?)([A-Za-z]*)";
    regex regular(reg,regex_constants::icase);
    string button_name;

    for(int i = 0; i < ui->verticalLayout->count(); i++){
       QDynamicButton *button = qobject_cast<QDynamicButton*>(ui->verticalLayout->itemAt(i)->widget());
       button_name = button->text().toStdString();
        if(!(dynamic_search(button_name,regular)) && (ui->lineEdit->text().size() > 0)){
            button->hide();
        }
        else{
            button->show();
        }

        if(ui->lineEdit->text().size() == 0){
            button->show();
        }
    }
}


void FoodExceptions::slotGetNumber()
{
    QDynamicButton *button = (QDynamicButton*) sender();
    button->setStyleSheet("color:red;");
    if(button->getID() > 10000){
        button->sub_to_ID(10000);
        history_exceptions.push_back(button->getID());
        button->setStyleSheet("color:white;");
    }else{
        history_exceptions.push_back(button->getID());
        button->add_to_ID(10000);
    }


}


void FoodExceptions::on_Add_pushButton_pressed()
{
    if(history_exceptions.size() > 0){

        for(int i = 0; i < history_exceptions.size(); i++){
            int exception = 0;
            for (int j = 0; j < history_exceptions.size(); j++) {
                if(history_exceptions[i] == history_exceptions[j]){
                    exception++;
                }
            }

            if(exception%2 == 1){
                add_exceptions.push_back(history_exceptions[i]);
            }
        }

    if(add_exceptions.size() > 0){

            int temp;

            for(int i = 0; i < add_exceptions.size() - 1; i++){
                for(int j = 0; j < add_exceptions.size() - i - 1; j++){
                    if(add_exceptions[j] > add_exceptions[j+1]){
                        temp = add_exceptions[j];
                        add_exceptions[j] = add_exceptions[j+1];
                        add_exceptions[j+1] = temp;
                    }
                }
            }



            ofstream exceptions_file;
            string filename;
            filename = "../../DataBase/tmp/ingredient_exceptions.txt";
            exceptions_file.open (filename);

            unique_excep.push_back(add_exceptions[0]);

            for(int i = 1; i < add_exceptions.size() ;i++){
                if(unique_excep.at(unique_excep.size() - 1) != add_exceptions[i]){
                    unique_excep.push_back(add_exceptions[i]);
                }
            }


            for(int i = 0; i < unique_excep.size(); i++){
                while(unique_excep[i] > ing_id.size()){
                    unique_excep[i] = unique_excep[i] - ing_id.size();
                }
            }

            for(int i = 0; i < unique_excep.size(); i++){
                exceptions_file << ing_id[unique_excep[i]-1] << endl ;
            }

        }


        ofstream exceptions_name;
        string filename_name;
        filename_name = "../../DataBase/tmp/ingredient_exceptions_name.txt";
        exceptions_name.open(filename_name);

        for(int i = 0; i < unique_excep.size(); i++){
            exceptions_name << ing_name[unique_excep[i]-1] << "," << endl ;
        }

        add_exceptions.clear();
        history_exceptions.clear();
        unique_excep.clear();

        emit buttonClick();
        this->hide();
    }
}
