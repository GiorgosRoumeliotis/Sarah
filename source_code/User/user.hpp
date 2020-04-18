#include "imports.h"

class User{
    string name = "";
    string surname = "";
    string username  = "";
    string password = "";
    float height = 0.0;
    float weight = 0.0;
    // float meal_calories[5] = {0}; 
    float breakfast_cal = 0.0;
    float first_snack_cal = 0.0;
    float lunch_cal = 0.0;
    float second_snack_cal = 0.0;
    float dinner_cal = 0.0;
    int age = 0;
    int gender = 0;
    int meals = 5;
    int activity = 0;
    bool vegan = false; 
    bool gluten_free = false;
    bool lactose_free = false;
    bool diabetic = false;

public:
    /*Constructor*/
    User(string new_name, string new_surname);
    /*Setters*/
    string set_usrname(string new_username);
    string set_password(string new_password);
    float set_height(float new_height);
    float set_weight(float new_weight);
    int set_age(int new_age);
    int set_gender(int new_gender);
    int set_meals(int new_meals);
    int set_activity(int new_activity);
    bool set_vegan(bool new_vegan);
    bool set_gluten(bool new_gluten_free);
    bool set_lactose(bool new_lactose_free);
    bool set_diabetic(bool new_diabetic);
    /*Getters*/
    string get_name();
    string get_surname();
    string get_username();
    string get_password();
    float get_height();
    float get_weight();
    int get_age();
    int get_gender();
    int get_meals();
    int get_activity();
    bool get_vegan();
    bool get_gluten();
    bool get_lactose();
    bool get_diabetic();
    /*Functions*/
    int bmi_calculator(float height, float weight);
    float bmr_calculator(int gender, int age, float height, float weight);
    float needed_calories(int activity, int bmi, float bmr);
    float get_breakfast_cal(int meals, float calories);
    float get_first_snack_cal(int meals, float calories);
    float get_lunch_cal(int meals, float calories);
    float get_second_snack_cal(int meals, float calories);
    float get_dinner_cal(int meals, float calories);
    void save_account(void);
    // void load_username_info(string old_username,bool access);
    // void load_account(string old_name, string old_surname);
    void load_account(string old_username, string old_name, string old_surname);
};
