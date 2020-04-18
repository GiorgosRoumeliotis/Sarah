#include "ingredients.h"
#include "vitamins.h"
#define MAX_ING 1000
#define SIZE_OF_VIT 57
#include <fstream>

vector<vector<string>> load(string filename);

Ingredients::Ingredients()
{

}

/*
Load Ingredients Data Base
*/
int Ingredients::load_data_base_main(string file_name, string file_id, string file_calories_per_gram){

    int data_size;

    ifstream name_in(file_name);
    ifstream id_in(file_id);
    ifstream calories_in(file_calories_per_gram);


    vector <vector <string> > name_arr = load(file_name);



    for(int i = 0; i < name_arr.size() ; i++){
        for(int j = 0; j < name_arr[i].size(); j++){
            name.push_back(name_arr[i][j]) ;
        }
    }

    vector<int> id_arr{
        istream_iterator<int>(id_in),
        istream_iterator<int>()
    };

    vector<float> calories_arr{
        istream_iterator<float>(calories_in),
        istream_iterator<float>()
    };


    for (int i = 0 ; i < id_arr.size() ; i++){
//        name.push_back(name_arr[i]) ;
        id.push_back(id_arr[i]);
        calories.push_back(calories_arr[i]);
    }

    data_size = name.size();
    return data_size;
}


int Ingredients::load_data_base_diet(string file_protein, string file_carbs,string file_fibers){

    int data_size;

    ifstream protein_in(file_protein);
    ifstream carbs_in(file_carbs);
    ifstream fibers_in(file_fibers);

    // initialize the vector from the values in the file:
    vector<float> protein_arr{
        istream_iterator<float>(protein_in),
        istream_iterator<float>()
    };

    vector<float> carbs_arr{
        istream_iterator<float>(carbs_in),
        istream_iterator<float>()
    };

    vector<float> fibers_arr{
        istream_iterator<float>(fibers_in),
        istream_iterator<float>()
    };

    for (int i = 0 ; i < protein_arr.size() ; i++){
        protein.push_back(protein_arr[i]) ;
        carbs.push_back(carbs_arr[i]);
        fibers.push_back(fibers_arr[i]);
    }

    data_size = protein_arr.size();
    return data_size;
}

int Ingredients::load_data_base_VitaminsAndFats(string file_vitamins, string file_fat){

    int data_size;
    ifstream vitamins_in(file_vitamins);
    ifstream fat_in(file_fat);



    // initialize the vector from the values in the file:
    vector<string> vitamins_arr{
        istream_iterator<string>(vitamins_in),
        istream_iterator<string>()
    };

    vector<float> fat_arr{
        istream_iterator<float>(fat_in),
        istream_iterator<float>()
    };


    for (int i = 0 ; i < vitamins_arr.size() ; i++){
        vitamins.push_back(vitamins_arr[i]);
        fat.push_back(fat_arr[i]);
        // cout << vitamins_arr[i] << endl;
    }

    data_size = vitamins_arr.size();
    return data_size;
}

int Ingredients::load_data_base_exeptions(string file_vegan, string file_gluten , string file_lactose){

    int data_size;
    ifstream vegan_in(file_vegan);
    ifstream gluten_in(file_gluten);
    ifstream lactose_in(file_lactose);



    // initialize the vector from the values in the file:
    vector<int> vegan_arr{
        istream_iterator<int>(vegan_in),
        istream_iterator<int>()
    };

    vector<int> gluten_arr{
        istream_iterator<int>(gluten_in),
        istream_iterator<int>()
    };


    vector<int> lactose_arr{
        istream_iterator<int>(lactose_in),
        istream_iterator<int>()
    };




    for (int i = 0 ; i < vegan_arr.size() ; i++){
        vegan.push_back(vegan_arr[i]);
        gluten.push_back(gluten_arr[i]);
        lactose.push_back(lactose_arr[i]);
        // cout << vitamins_arr[i] << endl;
    }

    data_size = vegan_arr.size();
    return data_size;
}

void Ingredients::add_ingredients(string iname, float icalories, float iprotein, float icarbs, float ifibers, float ifat, int ivegan, int igluten, int ilactose, string ivitamins){
    name.push_back(iname) ;
    calories.push_back(icalories);
    protein.push_back(iprotein);
    carbs.push_back(icarbs);
    fibers.push_back(ifibers);
    fat.push_back(ifat);
    vegan.push_back(ivegan);
    gluten.push_back(igluten);
    lactose.push_back(ilactose);
    vitamins.push_back(ivitamins);
    id.push_back(id[id.size()-1]+1);
}


void Ingredients::save_ingredients(void){
    ofstream id_add("Tables/ID.txt", ios_base::app | ios_base::out);
    ofstream calories_add("Tables/CaloriesPerGram.txt", ios_base::app | ios_base::out);
    ofstream protein_add("Tables/Protein.txt", ios_base::app | ios_base::out);
    ofstream carbs_add("Tables/Carbs.txt", ios_base::app | ios_base::out);
    ofstream fibers_add("Tables/Fibers.txt", ios_base::app | ios_base::out);
    ofstream fat_add("Tables/Fat.txt", ios_base::app | ios_base::out);
    ofstream vegan_add("Tables/Vegan.txt", ios_base::app | ios_base::out);
    ofstream gluten_add("Tables/Gluten.txt", ios_base::app | ios_base::out);
    ofstream lactose_add("Tables/Lactose.txt", ios_base::app | ios_base::out);
    ofstream vitamins_add("Tables/Vitamins.txt", ios_base::app | ios_base::out);
    ofstream name_add("Tables/Name.txt", ios_base::app | ios_base::out);

    id_add << id[id.size()-1] << "\n";
    calories_add << calories[calories.size()-1] << "\n";
    protein_add << protein[protein.size()-1] << "\n";
    carbs_add << carbs[carbs.size()-1] << "\n";
    fibers_add << fibers[fibers.size()-1] << "\n";
    fat_add << fat[fat.size()-1] << "\n";
    vegan_add << vegan[vegan.size()-1] << "\n";
    gluten_add << gluten[gluten.size()-1] << "\n";
    lactose_add << lactose[lactose.size()-1] << "\n";
    vitamins_add << vitamins[vitamins.size()-1] << "\n";
    name_add << name[name.size()-1] << "\n";
}


vector<vector<string>> load(string filename){



    vector <vector <string> > data;
    ifstream infile(filename);

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

    if (!infile.eof()){
        cerr << "ERROR FILE NOT FOUND!\n";
    }

    return data;

}

void Ingredients::print_ingredients(void){
    cout << fixed;
    cout << setprecision(3);
    cout << "+----+-----------------+-----------------+-----------------+-----------------+-----------------+----+----+----+-------------------------------------+" << endl;
    cout << "| ID | CALORIES /  gr. |     PROTEIN     |      CARBS      |      FIBERS     |       FAT       | VE | GF | LF |             INGREDIENTS             |" << endl;
    cout << "+----+-----------------+-----------------+-----------------+-----------------+-----------------+----+----+----+-------------------------------------+" << endl;
    for(int i = 0 ; i < name.size(); i++){
        cout << " "<< id[i] <<" |      " << calories[i] <<"      |      " << protein[i] <<"      |      " << carbs[i] <<"      |       " << fibers[i] << "     |      " ;
        cout << fat[i] << "      | "<< vegan[i] <<"  | " << gluten[i] <<  "  | " << lactose[i] <<"  |   "<< name[i] << endl;
        cout << "+----+-----------------+-----------------+-----------------+-----------------+-----------------+----+----+----+-------------------------------------+" << endl;

    }
}

void vitamin(unsigned short int vitamins_of_ingred){


    if(vitamins_of_ingred == A){
        cout << "Found Vitamin : A" << endl;
    }
    else if(vitamins_of_ingred == B1){
        cout << "Found Vitamin : B1" << endl;
    }
    else if(vitamins_of_ingred == B2){
        cout << "Found Vitamin : B2" << endl;
    }
    else if(vitamins_of_ingred == B3){
        cout << "Found Vitamin : B3" << endl;
    }
    else if(vitamins_of_ingred == B5){
        cout << "Found Vitamin : B5" << endl;
    }
    else if(vitamins_of_ingred == B6){
        cout << "Found Vitamin : B6" << endl;
    }
    else if(vitamins_of_ingred == B7){
        cout << "Found Vitamin : B7" << endl;
    }
    else if(vitamins_of_ingred == B9){
        cout << "Found Vitamin : B9" << endl;
    }
    else if(vitamins_of_ingred == B12){
        cout << "Found Vitamin : B12" << endl;
    }
    else if(vitamins_of_ingred == C){
        cout << "Found Vitamin : C" << endl;
    }
    else if(vitamins_of_ingred == D){
        cout << "Found Vitamin : D" << endl;
    }
    else if(vitamins_of_ingred == E){
        cout << "Found Vitamin : E" << endl;
    }
    else if(vitamins_of_ingred == K){
        cout << "Found Vitamin : K" << endl;
    }
    else if(vitamins_of_ingred == Omega_3){
        cout << "Found Vitamin : Omega 3" << endl;
    }
    else if(vitamins_of_ingred == Omega_6){
        cout << "Found Vitamin : Omega 6" << endl;
    }
    else if(vitamins_of_ingred == Amino_Acids){
        cout << "Found Vitamin : Amino Acids" << endl;
    }
    else if(vitamins_of_ingred == Anthocyanins){
        cout << "Found Vitamin : Anthocyanins" << endl;
    }
    else if(vitamins_of_ingred == Antioxidants){
        cout << "Found Vitamin : Antioxidants" << endl;
    }
    else if(vitamins_of_ingred == Beta_Carotene){
        cout << "Found Vitamin : Beta Carotene" << endl;
    }
    else if(vitamins_of_ingred == Calcium){
        cout << "Found Vitamin : Calcium" << endl;
    }
    else if(vitamins_of_ingred == Carotenoids){
        cout << "Found Vitamin : Carotenoids" << endl;
    }
    else if(vitamins_of_ingred == Chromium){
        cout << "Found Vitamin : Chromium" << endl;
    }
    else if(vitamins_of_ingred == Choline){
        cout << "Found Vitamin : Choline" << endl;
    }
    else if(vitamins_of_ingred == Catechins){
        cout << "Found Vitamin : Catechins" << endl;
    }
    else if(vitamins_of_ingred == Copper){
        cout << "Found Vitamin : Copper" << endl;
    }
    else if(vitamins_of_ingred == Fiber){
        cout << "Found Vitamin : Fibers" << endl;
    }
    else if(vitamins_of_ingred == Flavonoids){
        cout << "Found Vitamin : Flavonoids" << endl;
    }
    else if(vitamins_of_ingred == Iron){
        cout << "Found Vitamin : Iron" << endl;
    }
    else if(vitamins_of_ingred == Iodine){
        cout << "Found Vitamin : Iodine" << endl;
    }
    else if(vitamins_of_ingred == Lycopene){
        cout << "Found Vitamin : Lycopene" << endl;
    }
    else if(vitamins_of_ingred == Mn25){
        cout << "Found Vitamin : Mn25" << endl;
    }
    else if(vitamins_of_ingred == Mg12){
        cout << "Found Vitamin : Mg12" << endl;
    }
    else if(vitamins_of_ingred == Polyphenols){
        cout << "Found Vitamin : Polyphenols" << endl;
    }
    else if(vitamins_of_ingred == Potassium){
        cout << "Found Vitamin : Potassium" << endl;
    }
    else if(vitamins_of_ingred == Phosphorus){
        cout << "Found Vitamin : Phosphorus" << endl;
    }
    else if(vitamins_of_ingred == Probiotics){
        cout << "Found Vitamin : Probiotics" << endl;
    }
    else if(vitamins_of_ingred == Selenium){
        cout << "Found Vitamin : Selenium" << endl;
    }
    else if(vitamins_of_ingred == Zinc){
        cout << "Found Vitamin : Zinc" << endl;
    }


}


vector<int> Ingredients::get_ing_id(void){
    return id;
}

vector<string> Ingredients::get_ing_name(void){
    return name;
}


vector<string> Ingredients::get_vitamins(void){
    return vitamins;
}

vector<vector<int>> Ingredients::load_vitamin_anal_table(void){


    vector<vector<string>> loading_data = load("../../DataBase/Vitamins/IngedientsVitaminsDB.csv");
    vector<vector<int>> int_data(MAX_ING,vector<int>(SIZE_OF_VIT, 0));

    for(int i = 0; i < loading_data.size(); i++){
        for(int j = 0; j < loading_data[i].size();j++){
            stringstream toInt(loading_data[i][j]);
            toInt >> int_data[i][j];
            // cout << int_data[i][j] ;
        }

        // cout << endl;
    }

    return int_data;


}

void Ingredients::vitamin_anal(string vitamins_of_ingred){

    bool found;
    unsigned short int vitID;
    string token;
    ofstream vitamin_add("../../DataBase/Vitamins/IngedientsVitaminsDB.csv", ios_base::app | ios_base::out);
    int temp ;
    vector<int> vitamins_vector;

    for(int i = 0; i < vitamins_of_ingred.size(); i+=2){
            token = vitamins_of_ingred.substr(i,2);
            stringstream toInt(token);
            toInt >> vitID;

            if (vitID >= A && vitID <= Zinc){
                vitamins_vector.push_back(vitID);
            }

    }


    /*=============================================================================================================================================*/

        /*DEBUGING PRINT*/

        //  for(int i= A ; i <=Zinc;i++){
        //      vitamin_add << i << "," ;
        //  }
        //  vitamin_add << endl;


        for(int i = 0; i < vitamins_vector.size() - 1; i++){
            for(int j = 0; j < vitamins_vector.size() - i - 1; j++){
                if(vitamins_vector[j] > vitamins_vector[j+1]){
                    temp = vitamins_vector[j];
                    vitamins_vector[j] = vitamins_vector[j+1];
                    vitamins_vector[j+1] = temp;
                }
            }
        }

        vector<int> unique;

        unique.push_back(vitamins_vector[0]);
        // vitamin(unique[0]);
        int unq = 0;
        for(int i = 1; i <= vitamins_vector.size() - 1 ;i++){
            if(unique[unq] != vitamins_vector[i]){
                unq++;
                unique.push_back(vitamins_vector[i]);
                // vitamin(unique[unq]);
            }
        }

        bool flag = true;

            int j = 0;
            for(int i = A; i <= Zinc; i++ ){
                flag = true;
                while(unique[j] == i){
                    // cout<<"1,";
                    vitamin_add << 1 << "," ;
                    j++;
                    flag = false;
                }
                if(flag){
                    // cout << "0," ;
                    vitamin_add << 0 << "," ;
                }

            }

        vitamin_add << endl;

}


void Ingredients::create_custom_db(bool veg, bool glu, bool lac, vector<int> id_exceptions,string dbFilename){
    vector<int> vegan_exception;
    vector<int> gluten_exception;
    vector<int> lactose_exception;

    bool check = true;

//    cout << fixed;
//    cout << setprecision(3);
//    cout << "+----+-----------------+-----------------+-----------------+-----------------+-----------------+----+----+----+-------------------------------------+" << endl;
//    cout << "| ID | CALORIES /  gr. |     PROTEIN     |      CARBS      |      FIBERS     |       FAT       | VE | GF | LF |             INGREDIENTS             |" << endl;
//    cout << "+----+-----------------+-----------------+-----------------+-----------------+-----------------+----+----+----+-------------------------------------+" << endl;


    if(veg){
        for(int i = 0 ; i < id.size(); i++){
            if(vegan[i] == veg){
                vegan_exception.push_back(id[i]);
            }
        }
    }
    else{
        for(int i = 0 ; i < id.size(); i++){
            vegan_exception.push_back(id[i]);
        }
    }

    if(glu){
        for(int i = 0 ; i < id.size(); i++){
            if(gluten[i] == glu){
                gluten_exception.push_back(id[i]);
            }
        }
    }
    else{
        for(int i = 0 ; i < id.size(); i++){
            gluten_exception.push_back(id[i]);
        }
    }

    if(lac){
        for(int i = 0 ; i < id.size(); i++){
            if(lactose[i] == lac){
                lactose_exception.push_back(id[i]);
            }
        }
    }
    else{
        for(int i = 0 ; i < id.size(); i++){
            lactose_exception.push_back(id[i]);
        }
    }

    ofstream id_add("../../DataBase/Users/"+dbFilename+"/ID.txt", ios_base::app | ios_base::out);
    ofstream calories_add("../../DataBase/Users/"+dbFilename+"/CaloriesPerGram.txt", ios_base::app | ios_base::out);
    ofstream protein_add("../../DataBase/Users/"+dbFilename+"/Protein.txt", ios_base::app | ios_base::out);
    ofstream carbs_add("../../DataBase/Users/"+dbFilename+"/Carbs.txt", ios_base::app | ios_base::out);
    ofstream fibers_add("../../DataBase/Users/"+dbFilename+"/Fibers.txt", ios_base::app | ios_base::out);
    ofstream fat_add("../../DataBase/Users/"+dbFilename+"/Fat.txt", ios_base::app | ios_base::out);
    ofstream vegan_add("../../DataBase/Users/"+dbFilename+"/Vegan.txt", ios_base::app | ios_base::out);
    ofstream gluten_add("../../DataBase/Users/"+dbFilename+"/Gluten.txt", ios_base::app | ios_base::out);
    ofstream lactose_add("../../DataBase/Users/"+dbFilename+"/Lactose.txt", ios_base::app | ios_base::out);
    ofstream vitamins_add("../../DataBase/Users/"+dbFilename+"/Vitamins.txt", ios_base::app | ios_base::out);
    ofstream name_add("../../DataBase/Users/"+dbFilename+"/Name.txt", ios_base::app | ios_base::out);

    for(int i = 0; i < vegan_exception.size(); i++){
        for (int j = 0; j < gluten_exception.size(); j++){
            for (int k = 0; k < lactose_exception.size(); k++){
                if ( vegan_exception[i] == gluten_exception[j] && vegan_exception[i] == lactose_exception[k] && gluten_exception[j] == lactose_exception[k]){
                    check = true;
                    for(int l = 0; l < id_exceptions.size(); l++){
                        if(vegan_exception[i] == id_exceptions[l]){
                            check = false;
                            break;
                        }
                    }
                    if(check){
                        id_add << id[vegan_exception[i] - 100] << endl;
                        calories_add << calories[vegan_exception[i] - 100] << endl;
                        protein_add << protein[vegan_exception[i] - 100] << endl;
                        carbs_add << carbs[vegan_exception[i] - 100] << endl;
                        fibers_add << fibers[vegan_exception[i] - 100] << endl;
                        fat_add << fat[vegan_exception[i] - 100] << endl;
                        vegan_add << vegan[vegan_exception[i] - 100] << endl;
                        gluten_add << gluten[vegan_exception[i] - 100] << endl;
                        lactose_add << lactose[vegan_exception[i] - 100] << endl;
                        name_add << name[vegan_exception[i] - 100] << endl;
                        vitamins_add << vitamins[vegan_exception[i] - 100] << endl;

//                        cout << " "<< id[vegan_exception[i] - 100] <<" |      " << calories[vegan_exception[i] - 100] <<"      |      " << protein[vegan_exception[i] - 100] <<"      |      ";
//                        cout << carbs[vegan_exception[i] - 100] <<"      |       " << fibers[vegan_exception[i] - 100] << "     |      " << fat[vegan_exception[i] - 100] << "      | ";
//                        cout << vegan[vegan_exception[i] - 100] <<"  | " << gluten[vegan_exception[i] - 100] <<  "  | " << lactose[vegan_exception[i] - 100] <<"  |   ";
//                        cout << name[vegan_exception[i] - 100] << endl;
//                        cout << "+----+-----------------+-----------------+-----------------+-----------------+-----------------+----+----+----+-------------------------------------+" << endl;
                    }
                }
            }
        }
    }

}



vector<int> Ingredients::find_exeption_place(string user_db_path, vector<int> food_id){

    int start;
    int last;
    int middle;
    vector<int>  place;

    string id_db = user_db_path+"ID.txt";

    ifstream create_exception_db(id_db);

    vector<int> user_id_db{
        istream_iterator<long int>(create_exception_db),
        istream_iterator<long int>()
    };




    for(int i = 0; i < food_id.size(); i++){

        start = 0 ;
        last = user_id_db.size() - 1 ;

        while (start <= last){
            middle = (start + last) / 2;
            if (user_id_db[middle] == food_id[i]){
                place.push_back(middle);
                break;
            }
            else if (user_id_db[middle] > food_id[i]){
                last = middle - 1;
            }
            else{
                start = middle + 1;
            }
        }

    }

    int temp ;

    for(int i = 0; i < place.size() - 1; i++){
        for(int j = 0; j < place.size() - i - 1; j++){
            if(place[j] > place[j+1]){
                temp = place[j];
                place[j] = place[j+1];
                place[j+1] = temp;
            }
        }
    }

    return place;


}

