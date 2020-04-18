/*Prints The Programs Logo In ASCII Art*/ 
#include "defines.h"
// #include "SHA256/sha256.h"

void logo(void){
    system("clear");
    cout << " ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄         ▄      \n";
    cout << "▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌               \n";
    cout << "▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░▌       ▐░▌     \n";
    cout << "▐░▌          ▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌     \n";
    cout << "▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌     \n";
    cout << "▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌     \n";
    cout << " ▀▀▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀█░█▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌     \n";
    cout << "          ▐░▌▐░▌       ▐░▌▐░▌     ▐░▌  ▐░▌       ▐░▌▐░▌       ▐░▌     \n";
    cout << " ▄▄▄▄▄▄▄▄▄█░▌▐░▌       ▐░▌▐░▌      ▐░▌ ▐░▌       ▐░▌▐░▌       ▐░▌     \n";
    cout << "▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌     \n";
    cout << " ▀▀▀▀▀▀▀▀▀▀▀  ▀         ▀  ▀         ▀  ▀         ▀  ▀         ▀      \n";
    cout << "\n==================== Your Personal Dietician =====================\n";
    cout <<"\n\n\n";
}


void print_menu(void){
    cout << "\n\n";
    cout << "[1] Login" << endl;
    cout << "[2] Create account" << endl;
    cout << "[3] Exit" << endl;
}


bool check_input(string input, int lower_limit,int upper_limit){
    
    int choice;
    stringstream toInt(input);
    toInt >> choice;

    if(choice <= upper_limit && choice >= lower_limit){
        return true;
    }
    return false;
}


bool fexists(string filename)
{
  ifstream ifile(filename);
  if (ifile){
      return true;
  }
  else{
      return false;
  }
}

string password_input(void){
    string password = "";
    char ch = '\0';
    bool flag = true;
    bool first_call = true;
    int first_in = 1;

    
    while(ch != '\n' || flag ){

        if(ch == '\n' && first_in == 1){
            first_in = 0;
            flag = false;
        }

        ch = getch();
        if (ch == 127 && password.size() > 0){
            cout << '\b'<< " "<< '\b';
            password.pop_back();
        }
        else if (password.size() == 0 && ch == 127){
        }
        else if (ch != '\n'){
            cout << '*';
            password.push_back(ch);
        }

        if(first_call){
            cout << '\b'<< " "<< '\b';
            first_call = false;  
        }

   }

//    password.pop_back();

   return password;
}

bool check_password(string password, string password_path){
    string new_hash = sha256(password);

    ifstream pass(password_path);

    vector<string> old_hash{
        istream_iterator<string>(pass),
        istream_iterator<string>()
    };

    if(old_hash[0] == new_hash){
        return true;
    }
    else{
        return false;
    }

}


string login_page(void){

    string username = "", password;
    logo();
    bool access = false;

    cout << "\nENTER USERNAME : ";
    cin >> username;

    if(fexists("./Users/"+username+"DB")){
        string password_path = "./Users/"+username+"DB/password.txt";
        cout << "ENTER PASSWORD :  " ;
        password = password_input();
        access = check_password(password,password_path);
       
        if (access){

            logo();
            cout << "\n\t\t       WELCOME "<< username <<endl;
            return username;
        }
        else{
            cout << "\n\t\t\tACCESS DENIED ! " << endl;
        }


    }

    return "";


    
}



void profile_information_sheet(string name = "", string surname = "", string username = "",bool user_unq = false, bool password_empty = true, bool confirm_password_empty = true,bool pass_match = false,string gender = "", int age = 0, float height = 0.0, float weight = 0.0   ,int meals = 0, int activity = 0,bool ac_entered = false, string vegan = "",string gluten = "", string lactose = "", string diabetic = "") {

    string password = "";
    string password_co = "";
    char check_lactose = '-';
    char check_diabetic = '-';
    char check_gluten = '-';
    char check_vegan = '-';
    char check_meals = '-';
    char check_activity = '-';
    char check_weight = '-';
    char check_height = '-';
    char check_age = '-';
    char check_gender = '-';
    char check_usr = '-';
    char check_sur = '-';
    char check_name = '-';
    char check_pass = '-';
    char passC = '-';



    if(!password_empty){
        password = "********";
        passC = '+';
    }

    if(!confirm_password_empty){
        password_co = "********";
        if(pass_match){
            check_pass = '+';
        }
    }

    if(name.size()>0){
        check_name = '+';
    }

    if(surname.size() > 0){
        check_sur = '+';
    }
    if(username.size() > 0 && user_unq){
        check_usr = '+';
    }
    if(gender.size() > 0){
        check_gender = '+';
    }
    if(age > 0){
        check_age = '+';
    }
    if(height > 0){
        check_height = '+';
    }
    if(weight > 0){
        check_weight = '+';
    }
    if(ac_entered){
        check_activity = '+';
    }
    if(meals > 0){
        check_meals = '+';
    }
    if(vegan.size() > 0){
        check_vegan = '+';
    }
    if(gluten.size() > 0){
        check_gluten = '+';
    }
    if(lactose.size() > 0){
        check_lactose = '+';
    }
    if(diabetic.size() > 0){
        check_diabetic = '+';
    }


    cout << "\n+-----------------------------------------------------------------------------------------------------+\n" ;
    cout << "|                                     PROFILE INFORMATION SHEET                                       |\n" ;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n" ;
    cout << "| 01 | NAME                                               | "<< check_name<<" | " << name << endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n" ;
    cout << "| 02 | SURNAME                                            | " << check_sur <<" | "<< surname << endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "| 03 | USERNAME                                           | "  << check_usr <<" | "<< username << endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "| 04 | PASSWORD                                           | " << passC <<" | " << password  << endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "| 05 | CONFIRM PASSWORD                                   | "  << check_pass <<" | "<< password_co << endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "| 06 | GENDER                                             | "  << check_gender <<" | "<< gender<< endl ;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "| 07 | AGE                                                | "  << check_age <<" | "<< age <<endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "| 08 | HEIGHT (m)                                         | " << check_height <<" | " << height <<  endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "| 09 | WEIGHT (kg)                                        | " << check_weight <<" | " << weight << endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "| 10 | HOW MANY TIMES PER WEEK DO YOU WORK [0 - 7]        | " << check_activity <<" | " << activity << endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "| 11 | HOW MANY MEALS CAN YOU CONSUME PER DAY [3 - 5]     | " << check_meals <<" | " << meals <<endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "| 12 | ARE YOU A VEGAN [YES/NO]                           | " << check_vegan <<" | " << vegan <<   endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "| 13 | CAN YOU CONSUME GLUTEN [YES/NO]                    | " << check_gluten <<" | " << gluten <<endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "| 14 | CAN YOU CONSUME LACTOSE [YES/NO]                   | " << check_lactose <<" | " << lactose << endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "| 15 | ARE YOU A DIABETIC [YES/NO]                        | " << check_diabetic <<" | " << diabetic << endl;
    cout << "+----+----------------------------------------------------+---+---------------------------------------+\n";
    cout << "+----+------------------------------------------------------------------------------------------------+\n";
    cout << "| 16 |                                        SAVE AND EXIT                                           |\n";
    cout << "+----+------------------------------------------------------------------------------------------------+\n";
    cout << "+-----------------------------------------------------------------------------------------------------+\n";
    cout << "|                          ALL THE FIELDS SHOULD BE CHECKED (+) BEFORE SAVING                         |\n"; 
    cout << "+-----------------------------------------------------------------------------------------------------+\n";


}   

int toInt(string num){
    int intNum;
    stringstream toInt(num);
    toInt >> intNum;

    return intNum;
}

bool confirm_password_check(string this_password, string this_confirm){
    if (this_password == this_confirm){
        return true;
    }
    else{
        return false;
    }
    
}


void create_account(void){

    string choice; 


    string name  = "";
    string surname = "";
    string username = "";
    string password = "";
    string confirm_pwd = "";
    string gender = "";
    string age = "";
    float height = 0.0;
    float weight = 0.0;
    string activity = "";       
    string meals = "";       
    string vegan = "";             
    string gluten_free = "";
    string lactose_free = "";
    string diabetic  = ""; //must include to ingredients Class

    bool msg_empty  = false;
    bool msg_usr = false;
    bool msg_pass = false;

    bool loop = true;
    bool password_matched = false;
    bool username_unq = false;

    int int_choice;
    int int_gender;
    int int_age = 0;
    int int_activity = 0;
    int int_meals = 0;
    int int_vegan;
    int int_gluten;
    int int_lactose;
    int int_diabetic;

    bool bool_password = true, bool_co_password = true;
    bool act_entered = false;



    while (loop){

        system("clear");

        if(password.size() > 0){
            bool_password = false;
        }
        if(confirm_pwd.size() > 0){
            bool_co_password = false;
        }

        profile_information_sheet(name,surname,username,username_unq,bool_password,bool_co_password,password_matched,gender,int_age,height,weight,int_meals,int_activity,act_entered,vegan,gluten_free,lactose_free,diabetic);

        if(msg_empty){
            cout << "\nA FIELD IS EMPTY\n";
            cout << "\nPLEASE COMPLETE ALL THE FIELDS\n";
            msg_empty = false;
        }
        if(msg_usr){
            cout << "\nUSERNAME EXISTS\n";
            cout << "\nRE ENTER USERNAME\n";
            msg_usr = false;
        }
        if(msg_pass){
            cout << "\nPASSWORDS DO NOT MATCH\n";
            cout << "\nRE ENTER PASSWORDS\n";
            msg_pass = false;
        }


        do{
            cout << "\nENTER YOUR CHOICE : ";
            cin >> choice ; 
        }while(!check_input(choice,1,16));

        int_choice = toInt(choice);

        if(int_choice == 1){
            system("clear");
            cout << "NAME : ";
            cin >> name;
        }
        else if (int_choice == 2){
            system("clear");
            cout << "SURNAME : ";
            cin >> surname;
        }
        else if(int_choice == 3){
            system("clear");
            cout << "USERNAME : ";
            cin >> username;
            if(!fexists("Users/"+username+"DB")){
                username_unq = true;
            }
            else{
                username_unq = false;
            }
        }
        else if(int_choice == 4){
            system("clear");
            cout << "PASSWORD :  ";
            password = password_input();
            if(confirm_password_check(password, confirm_pwd)){
                password_matched = true;
            }
            else
            {
                password_matched = false;
            }
            
        }
        else if(int_choice == 5){
            system("clear");
            cout << "CONFIRM PASSWORD :  ";
            confirm_pwd = password_input();
            if(confirm_password_check(password, confirm_pwd)){
                password_matched = true;
            }
            else
            {
                password_matched = false;
            }
        }
        else if (int_choice == 6){
            system("clear");
            cout << "[1] MALE \n";
            cout << "[2] FEMALE\n\n\n";
            do{
                cout << "ENTER YOUR GENDER NUMBER : ";
                cin >> gender; 
            }while(!check_input(gender,1,2));
            int_gender = toInt(gender);
            if(int_gender == 1){
                int_gender = Male;
                gender = "MALE";
            }
            else{
                int_gender = Female;
                gender = "FEMALE";
            }               
        }
        else if (int_choice == 7){
            system("clear");
            do{
                cout << "AGE : ";
                cin >> age;
            }while (!check_input(age,1,130));
            int_age = toInt(age);
        }
        else if (int_choice == 8){
            system("clear");
            cout << "HEIGHT (m) : ";
            cin >> height;
        }
        else if (int_choice == 9){
            system("clear");
            cout << "WEIGHT (kg) : ";
            cin >> weight;
        }
        else if (int_choice == 10){        
            system("clear");
            do{
                cout << "HOW MANY TIMES PER WEEK DO YOU WORK [0 - 7] : ";
                cin >> activity;
            }while(!check_input(activity,0,7));
            act_entered = true;
            int_activity = toInt(activity);
        }
        else if(int_choice == 11){
            system("clear");
            do{
                cout << "HOW MANY MEALS CAN YOU CONSUME PER DAY [3 - 5] : ";
                cin >> meals;
            }while(!check_input(meals,3,5));
            int_meals = toInt(meals);
        }                                                                
        else if (int_choice == 12){
            system("clear");
            cout << "ARE YOU A VEGAN [YES/NO]\n";
            cout << "\n[0] NO";
            cout << "\n[1] YES\n\n";
            do{
                cout << "\nENTER YOUR CHOICE : ";
                cin >> vegan;
            }while(!check_input(vegan,0,1));
            int_vegan = toInt(vegan);
            if(int_vegan){
                vegan = "YES";
            }
            else{
                vegan = "NO";
            }
        }
        else if (int_choice == 13){
            system("clear");
            cout << "CAN YOU CONSUME GLUTEN [YES/NO]\n";
            cout << "\n[0] NO";
            cout << "\n[1] YES\n\n";
            do{
                cout << "\nENTER YOUR CHOICE : ";
                cin >> gluten_free;
            }while(!check_input(gluten_free,0,1));
            int_gluten = toInt(gluten_free);
            if(int_gluten){
                gluten_free = "YES";
                int_gluten = 0;
            }
            else{
                gluten_free = "NO";
                int_gluten = 1;
            }
            
        }
        else if(int_choice == 14){
            system("clear");
            cout << "CAN YOU CONSUME LACTOSE [YES/NO]\n";
            cout << "\n[0] NO";
            cout << "\n[1] YES\n\n";
            do{
                cout << "\nENTER YOUR CHOICE : ";
                cin >> lactose_free;   
            }while(!check_input(lactose_free,0,1)); 
            int_lactose = toInt(lactose_free);
            if(int_lactose){
                lactose_free = "YES";
                int_lactose = 0;
            }
            else{
                lactose_free = "NO";
                int_lactose = 1;
            }    
        }
        else if (int_choice == 15){
            system("clear");
            cout << "ARE YOU A DIABETIC [YES/NO]\n";
            cout << "\n[0] NO";
            cout << "\n[1] YES\n\n";
            do{
                cout << "\nENTER YOUR CHOICE : ";
                cin >> diabetic;  
            }while(!check_input(diabetic,0,1));
            int_diabetic = toInt(diabetic);
            if(int_diabetic){
                diabetic = "YES";
            }
            else{
                diabetic = "NO";
            }
            
        }     
        else if(int_choice == 16){
            int save;
            cout << "DO YOU WANT TO SAVE AND EXIT [YES/NO]\n\n";
            cout << "\n[0] NO";
            cout << "\n[1] YES\n\n\n";
            cout << "ENTER YOUR CHOICE : ";
            cin >> save;
            if(save){
                if(name.size() != 0 && surname.size() != 0 && username.size() != 0 && password.size() != 0 && confirm_pwd.size() != 0 && int_gender > 13 && height > 0 && weight > 0 && int_age > 0 && act_entered && int_meals != 0 && vegan.size() != 0 && gluten_free.size() != 0 && lactose_free.size() != 0 && diabetic.size() != 0 ){
                    if(username_unq){
                        if(password_matched){
                            loop = false;
                    
                            User new_account(name, surname);
                            string str_personsDB = "mkdir -p ./Users/"+username+"DB/";
                            char personsDB[str_personsDB.size() + 1];
                            strcpy(personsDB, str_personsDB.c_str());
                            system(personsDB);
                            new_account.set_gender(int_gender);
                            new_account.set_height(height);
                            new_account.set_weight(weight);
                            new_account.set_age(int_age);
                            new_account.set_activity(int_activity);
                            new_account.set_vegan(int_vegan);
                            new_account.set_gluten(int_gluten);
                            new_account.set_lactose(int_lactose);
                            new_account.set_meals(int_meals);
                            new_account.set_username(username);
                            new_account.set_diabetic(int_diabetic);
                            password = sha256(password);
                            new_account.set_password(password);
                            new_account.save_account();/*Save name & surname & password & diabetic*/
                        }
                        else{
                            msg_pass = true;
                        }
                        
                    }
                    else{
                        msg_usr = true ;
                    }
                }
                else{
                    msg_empty = true;
                }
            }
        }

    }


}


void user_page(string username){

    string filename = "./Users/"+username+"DB/UserStringInfo.txt";
    ifstream in(filename);

    // initialize the vector from the values in the file:
    vector<string> strInfo{ 
        istream_iterator<string>(in),
        istream_iterator<string>() 
    };

    User old_account(strInfo[0],strInfo[1]);

    /*IMPLIMENT BELOW CHOICES*/

    /*
        print_my_info()
        print_my_ingredient_data_base()
        print_all_ingredient_data_base()
        add_ingredient_data_base()
    */    

}


void choice_handler(string input){

    int choice;
    stringstream toInt(input);
    toInt >> choice;
    string loggedIn = "";
    switch (choice)
    {
    case 1:
        loggedIn = login_page();

        if(loggedIn.size() > 0){
            user_page(loggedIn);
        }

        
        break;
    case 2:
        create_account();
        break;
    default:
        exit(1);
        break;
    }


}



