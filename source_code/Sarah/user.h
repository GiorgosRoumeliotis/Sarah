#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>

#define Underweight 10
#define Healthy 11
#define Overweight 12
#define Obese 13
#define Male 14
#define Female 15
#define Sedentary_Life 16
#define Slightly_Active 17
#define Moderate_Active 18
#define Active_Lifestyle 19

using namespace std;

class User
{
    string name = "";
    string surname = "";
    string username = "";
    string password = "";
    float height = 0.0;
    float weight = 0.0;
    int age = 0;
    int gender = 0;
    int meals = 5;
    int activity = 0;
    bool vegan = false;
    bool gluten_free = false;
    bool lactose_free = false;
    bool diabetic = false;


    float breakfast_cal = 0.0;
    float first_snack_cal = 0.0;
    float lunch_cal = 0.0;
    float second_snack_cal = 0.0;
    float dinner_cal = 0.0;

public:
    User();
    User(string new_name, string new_surname);

    /*Setters*/

    void set_username(string new_username);
    void set_password(string new_password);
    void set_height(float new_height);
    void set_weight(float new_weight);
    void set_age(int new_age);
    void set_gender(int new_gender);
    void set_meals(int new_meals);
    void set_activity(int new_activity);
    void set_vegan(bool new_vegan);
    void set_gluten(bool new_gluten_free);
    void set_lactose(bool new_lactose_free);
    void set_diabetic(bool new_diabetic);

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

    /*Methods*/
    void save_account(void);
    int bmi_calculator(float height, float weight);
    float bmr_calculator(int gender, int age, float height, float weight);
    float needed_calories(int activity, int bmi, float bmr);
    float get_breakfast_cal(int meals, float calories);
    float get_first_snack_cal(int meals, float calories);
    float get_lunch_cal(int meals, float calories);
    float get_second_snack_cal(int meals, float calories);
    float get_dinner_cal(int meals, float calories);
    void load_account(string old_username, string old_name, string old_surname);

};

#endif // USER_H
