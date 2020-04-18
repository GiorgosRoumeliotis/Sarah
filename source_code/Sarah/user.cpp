#include "user.h"

User::User()
{

}

User::User(string new_name, string new_surname){
    name = new_name;
    surname = new_surname;
}

/*Setters*/

void User::set_username(string new_username){
    username = new_username;
}

void User::set_password(string new_password){
    password = new_password;
}

void User::set_height(float new_height){
    height = new_height;
}

void User::set_weight(float new_weight){
    weight = new_weight;
}

void User::set_age(int new_age){
    age = new_age;
}

/*Type Male or Female*/
void User::set_gender(int new_gender){
    gender = new_gender;
}

/*Give numbers : 3, 4 or 5*/
void User::set_meals(int new_meals){
    meals = new_meals;
}

/*Give numbers 0 to 7 */
void User::set_activity(int new_activity){
    activity = new_activity;
}

/*Set it true if Vegan*/
void User::set_vegan(bool new_vegan){
    vegan = new_vegan;
}

/*Set it true if gluten is danger*/
void User::set_gluten(bool new_gluten_free){
    gluten_free = new_gluten_free;
}

/*Set it true if lactose is danger*/
void User::set_lactose(bool new_lactose_free){
    lactose_free = new_lactose_free;
}

/*Set it true if Diabetic*/
void User::set_diabetic(bool new_diabetic){
    diabetic = new_diabetic;
}


/*Getters*/

string User::get_name(){
    return name;
}

string User::get_surname(){
    return surname;
}

string User::get_username(){
    return username;
}

string User::get_password(){
    return password;
}

float User::get_height(){
    return height;
}

float User::get_weight(){
    return weight;
}

int User::get_age(){
    return age;
}

int User::get_gender(){
    return gender;
}

int User::get_meals(){
    return meals;
}

int User::get_activity(){
    if(activity == 0){
        return Sedentary_Life;
    }
    else if (activity < 3){
        return Slightly_Active;
    }
    else if (activity >= 3 && activity < 5){
        return Moderate_Active;
    }
    else
    {
        return Active_Lifestyle;
    }
}

bool User::get_vegan(){
    return vegan;
}

bool User::get_gluten(){
    return gluten_free;
}


bool User::get_lactose(){
    return lactose_free;
}

bool User::get_diabetic(){
    return diabetic;
}

/*Methods*/

/*
Calculate Body Mass Index

BMI compares your weight to your height, and is
calculated by dividing your weight (in kilograms)
by your height (in meters squared). It gives you
an idea of whether you’re 'underweight', a
'healthy' weight, 'overweight', or 'obese' for
your height. BMI is one type of tool to help health
professionals assess the risk for chronic disease.
*/
int User::bmi_calculator(float height, float weight){
    float bmi = 0.0;

    bmi = weight/(height*height);
//     cout << bmi << endl;

    if (bmi < 18.5){
        // cout << "Underweight\n";
        return Underweight;
    }
    else if (bmi < 24.9 && bmi >= 18.5){
        // cout << "Healthy\n";
        return Healthy;
    }
    else if (bmi < 29.9 && bmi >= 25){
        // cout << "Overweight\n";
        return Overweight;
    }
    else{
        // cout << "Obese\n";
        return Obese;
    }
}


/*
Calculate Basal Metabolic Rate

Everybody requires a minimum number of calories to live.
This minimum number is called the basal metabolic rate (BMR).
Your BMR is the number of calories your organs need to
function while you perform no activity whatsoever. You can
think of it as the amount of energy you'd burn if you stayed
in bed all day.
*/
float User::bmr_calculator(int gender, int age, float height, float weight){
    float bmr = 1;
    if (gender == Male){
        bmr = 10*weight + 625*height - 5*age + 5;
    }
    else if (gender == Female)
    {
        bmr = 10*weight + 625*height - 5*age - 161;
    }
    return bmr;
}


/*
Calculate Needed Calories Based On Activity
*/
float User::needed_calories(int activity, int bmi, float bmr){
    float calories = 0.0;

    if (bmi == Underweight){
        if (activity == Sedentary_Life){
            calories = 250 + 1.2*bmr;
        }
        else if (activity == Slightly_Active){
            calories = 250 + 1.375*bmr;
        }
        else if (activity == Moderate_Active){
            calories = 250 + 1.55*bmr;
        }
        else if (activity == Active_Lifestyle){
            calories = 250 + 1.725*bmr;
        }
    }
    else if (bmi == Healthy){
        if (activity == Sedentary_Life){
            calories = 1.2*bmr;
        }
        else if (activity == Slightly_Active){
            calories = 1.375*bmr;
        }
        else if (activity == Moderate_Active){
            calories = 1.55*bmr;
        }
        else if (activity == Active_Lifestyle){
            calories = 1.725*bmr;
        }
    }
    else if (bmi == Overweight){
        if (activity == Sedentary_Life){
            calories = 1.2*bmr - 250;
        }
        else if (activity == Slightly_Active){
            calories = 1.375*bmr - 250;
        }
        else if (activity == Moderate_Active){
            calories = 1.55*bmr - 250;
        }
        else if (activity == Active_Lifestyle){
            calories =  1.725*bmr - 250;
        }
    }
    else if (bmi == Obese){
        if (activity == Sedentary_Life){
            calories = 1.2*bmr - 500;
        }
        else if (activity == Slightly_Active){
            calories = 1.375*bmr - 500;
        }
        else if (activity == Moderate_Active){
            calories = 1.55*bmr - 500;
        }
        else if (activity == Active_Lifestyle){
            calories = 1.725*bmr - 500;
        }
    }
    return calories;
}


/*
Calories Per Meal
*/
float User::get_breakfast_cal(int meals, float calories){
    if (meals == 3){
        breakfast_cal = calories*0.3;
        return breakfast_cal;
    }
    else if (meals == 4){
        breakfast_cal = calories*0.25;
        return breakfast_cal;
    }
    else if (meals == 5){
        breakfast_cal = calories*0.30;
        return breakfast_cal;
    }
    else
    {
        return 0.0;
    }
}

float User::get_first_snack_cal(int meals, float calories){
    if (meals == 4){
        first_snack_cal = calories*0.05;
        return first_snack_cal;
    }
    else if (meals == 5){
        first_snack_cal = calories*0.1;
        return first_snack_cal;
    }
    else
    {
        return 0.0;
    }
}

float User::get_lunch_cal(int meals, float calories){
    if (meals == 3){
        lunch_cal = calories*0.35;
        return lunch_cal;
    }
    else if (meals == 4){
        lunch_cal = calories*0.4;
        return lunch_cal;
    }
    else if (meals == 5){
        lunch_cal = calories*0.4;
        return lunch_cal;
    }
    else
    {
        return 0.0;
    }
}

float User::get_second_snack_cal(int meals, float calories){
    if (meals == 5){
        second_snack_cal = calories*0.05;
        return second_snack_cal;
    }
    else
    {
        return 0.0;
    }
}

float User::get_dinner_cal(int meals, float calories){
    if (meals == 3){
        dinner_cal = calories*0.35;
        return dinner_cal;
    }
    else if (meals == 4){
        dinner_cal = calories*0.30;
        return dinner_cal;
    }
    else if (meals == 5){
        dinner_cal = calories*0.15;
        return dinner_cal;
    }
    else
    {
        return 0.0;
    }
}







/*
Save Users Infomations
*/
void User::save_account(void){
    ofstream account;
    string filename;
    filename = "../../DataBase/Users/"+username+"DB/"+surname+name+".txt";
    account.open (filename);
    account << height << endl ;
    account << weight << endl ;
    account << age << endl ;
    account << gender << endl ;
    account << meals << endl ;
    account << activity << endl ;
    account << vegan << endl ;
    account << gluten_free << endl ;
    account << lactose_free << endl ;
    account << diabetic << endl;
    account.close();

    ofstream nameS;
    string filenameS;
    filenameS = "../../DataBase/Users/"+username+"DB/UserStringInfo.txt";
    nameS.open(filenameS);
    nameS << name << endl;
    nameS << surname << endl;
    nameS << username << endl;
    nameS.close();

    ofstream passFile;
    string passwordFile;
    passwordFile = "../../DataBase/Users/"+username+"DB/password.txt";
    passFile.open(passwordFile);
    passFile << password << endl;
    passFile.close();
}

/*
Turning Saved Account Informations To Variables
*/
void User::load_account(string old_username, string old_name, string old_surname) {

    string filenameData = "../../DataBase/Users/"+old_username+"DB/"+old_surname+old_name+".txt";
    ifstream Data_in(filenameData);

    // initialize the vector from the values in the file:
    vector<float> info{
        istream_iterator<float>(Data_in),
        istream_iterator<float>()
    };

    height = info[0];
    weight = info[1];
    age = info[2];
    gender = info[3];
    meals = info[4];
    activity = info[5];
    vegan = info[6];
    gluten_free = info[7];
    lactose_free = info[8];
    diabetic = info[9];

//    for(int i=0;i<10;i++){
//        cout << info[i] << endl;
//    }
}
