#ifndef INGREDIENTS_H
#define INGREDIENTS_H

#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <ios>

using namespace std;


class Ingredients
{
    vector<string> name;
    vector<int> id;
    vector<float> calories;

    vector<int> vegan;
    vector<int> gluten;
    vector<int> lactose;

    vector<float> protein;
    vector<float> carbs;
    vector<float> fibers;

    vector<string> vitamins;
    vector<float> fat;

public:
    Ingredients();

    int load_data_base_main(string file_name, string file_id, string file_calories_per_gram);
    int load_data_base_diet(string file_protein, string file_carbs, string file_fibers);
    int load_data_base_VitaminsAndFats(string file_vitamins, string file_fat);
    int load_data_base_exeptions(string file_vegan, string file_gluten , string file_lactose);

    void print_ingredients(void);
    void add_ingredients(string iname, float icalories, float iprotein, float icarbs, float ifibers, float ifat, int ivegan, int igluten, int ilactose, string ivitamins);
    void save_ingredients(void);
    void vitamin_anal(string vitamins_of_ingred/*, short search_vitamin*/);
    void create_custom_db(bool vegan_type, bool gluten_type, bool lactose_type, vector<int> id_exceptions,string dbFilename); /*, bool gluten = true, bool lactose = true, int id[]*/
    vector<int> find_exeption_place(string user_db_path, vector<int> food_id);
    vector<vector<int>> load_vitamin_anal_table(void);

    vector<int> get_ing_id(void);
    vector<string> get_ing_name(void);
    vector<string> get_vitamins(void);
};

#endif // INGREDIENTS_H
