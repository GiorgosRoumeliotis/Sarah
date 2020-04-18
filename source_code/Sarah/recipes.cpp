#include "recipes.h"
#include "ui_recipes.h"
#include "qdynamicbutton.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <list>
#include "ingredients.h"
using namespace std;

vector<string> parse_recipes(string file){

    vector <vector <string> > data;
    ifstream infile(file);
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

    vector<string> plr;

    for(int i = 0; i < data.size() ; i++){
        for(int j = 0; j < data[i].size(); j++){
            plr.push_back(data[i][j]) ;
        }
    }

    infile.close();
    return plr;
}

string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

Recipes::Recipes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Recipes)
{
    ui->setupUi(this);

    ui->scrollArea->hide();


    vector<string> recipes = parse_recipes("/home/groumeliotis/project/Sarah/DataBase/Recipes/recipesNames.csv");

    string path = "../../DataBase/Ingredients/";
    Ingredients ingredients;
    ingredients.load_data_base_main(path+"Tables/FakeData/Name.csv",path+"Tables/FakeData/ID.txt",path+"Tables/FakeData/CaloriesPerGram.txt");

    vector<string> ing_name = ingredients.get_ing_name();
    vector<int> ing_id = ingredients.get_ing_id();

     for(int i = 0; i < ing_name.size(); i++){
            QDynamicButton *button = new QDynamicButton(this);  // Create a dynamic button object
            button->setStyleSheet("QPushButton{background:transparent;font-size:18px;color:green; }QPushButton:hover{color:white;}");
            button->setText(QString::fromStdString(ing_name[i]));
            ui->verticalLayout_3->addWidget(button);
            connect(button, SIGNAL(clicked()), this, SLOT(slotIngr()));
     }

    for(int i = 0; i < recipes.size(); i++){
        QDynamicButton *button = new QDynamicButton(this);  // Create a dynamic button object
        button->setText(QString::fromStdString(recipes[i]));
        button->setStyleSheet("QPushButton{background:transparent;font-size:18px;color:green; }QPushButton:hover{color:white;}");
        ui->verticalLayout->addWidget(button);
        connect(button, SIGNAL(clicked()), this, SLOT(slotGetNumber()));
    }

}

void Recipes::slotGetNumber()
{
    QDynamicButton *button = (QDynamicButton*) sender();

    ui->HTML->setText("");
    ui->scrollArea->show();



    string recipe ="";

    string first_part = "<!Doctype html><html><body><style>*{background-color:black;color:orange;font-family: Avantgarde, TeX Gyre Adventor, URW Gothic L, sans-serif;}h1 , img, p{text-align:center;}.execution{text-align:center;}.ingredients h2{font-size:10px;}ul{text-align:left;}</style><h1>";
    string second_part = "</h1><br><div class=\"ingredients\"><small><h2><i>Ingredients</i></h2><ul>";
    string thrird_part = "</ul></small></div><div class=\"execution\"><br><br><h2>Instructions</h2><p>";
    string last_part = "</p></div></body></html>";

    string file = "../../DataBase/Recipes/"+removeSpaces(button->text().toStdString())+"/REC.txt";

    vector<string> rec = parse_recipes(file);
    recipe = first_part+button->text().toStdString()+second_part;

        int ing = 0;

        while(rec[ing]!= "+END+"){
            if(rec[ing] == "+INGREDIENT+"){
                ing++;
                while (rec[ing] != "+EXECUTION+") {
                    recipe = recipe + "<li>" + rec[ing] + "</li>";
                    ing++;
                }
                recipe = recipe + thrird_part;
            }
            if(rec[ing] == "+EXECUTION+"){
                ing++;
                while (rec[ing] != "+END+") {
                    recipe = recipe + rec[ing] + "<br>";
                    ing++;
                }
                recipe = recipe + last_part;

            }
        }

    ui->HTML->setText(QString::fromStdString(recipe));

    ifstream ccpff_in("../../DataBase/Recipes/"+removeSpaces(button->text().toStdString())+"/ccpff");

    vector<float> ccpff{
        istream_iterator<float>(ccpff_in),
        istream_iterator<float>()
    };

    ui->calories->setText(QString::number(ccpff[0]) + " kcal");
    ui->carbs->setText(QString::number(ccpff[1]) + "  g");
    ui->proteins->setText(QString::number(ccpff[2]) + " g");
    ui->fats->setText(QString::number(ccpff[3]) + " g");
    ui->fibers->setText(QString::number(ccpff[4]) + " g");
}

void Recipes::slotIngr()
{
    QDynamicButton *button = (QDynamicButton*) sender();
    button->setStyleSheet("color:red;");
    if(button->getID() > 10000){
        button->sub_to_ID(10000);
        button->setStyleSheet("color:green;");
    }else{
        button->add_to_ID(10000);
        ui->ingr->setText(button->text()+", ");
        ui->ingr->setStyleSheet("font-size:10px;");
    }


}

Recipes::~Recipes()
{
    delete ui;

}
