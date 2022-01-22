#include<iostream>
#include<cmath>
#include<string>
#include<sstream> //library used to convert a value in a variable from string to another or vice versa
#include<bits/stdc++.h> //library containing functions that can be used to check the data type of a variable


using namespace std;

class Appetizer{
private:
    short BaseIn; //current base function
    short BaseTo; //future base function
public:
    void BaseValues(){
        cout << "From: " << "\t\t" << "To: \n"; //Question to user to input base values
        cin >> BaseIn; //Input value for the base at which the number is currently in
        cout << "\t\t"; //two tabs
        cin >> BaseTo; //Input value to which afore value is to be changed to
    }

    int BIn(){
        return BaseIn; //returns the value of the base the number is currently in
    }

    int BOut(){
        return BaseTo; //returns the value of the base the number is to be changed to
    }

    bool DigiTest10(int Base, string Number){
        short dig;
        stringstream vv;
        vv << Number;
        unsigned long long Num;
        //cout << sizeof(Num) <<endl
        vv >> Num;
        while (Num != 0){
            dig = Num % 10;
            if (dig >= Base) return false;
            Num /= 10;
        }
        return true;
    }

    bool DigiTest11(string Number){
        int DigLength = Number.length();
        short i = 0;
            while(i < DigLength){
                char digit = Number[i];
                int dig = (int)digit;
                try {
                    if (!(dig > 47 && dig < 58))throw dig;
                }
                catch(int dig1){
                    try {
                        if (dig1 == 97 || dig1 == 65)throw dig1;
                        return false;
                    }
                    catch(int dig2){
                        return true;
                    }
                }
                i+=1;
            }
            return true;
    }

    bool DigiTest12(string Number){
        int DigLength = Number.length();
        short i = 0;
            while(i < DigLength){
                char digit = Number[i];
                int dig = (int)digit;
                    if (!(dig > 47 && dig < 58)){
                        if (!(dig == 97 || dig == 65)){
                            if(!(dig == 98 || dig == 66)){
                                return false;
                            }
                        }
                    }
                    i+=1;
                }
            return true;
    }

     bool DigiTest13(string Number){
        int DigLength = Number.length();
        short i = 0;
            while(i < DigLength){
                char digit = Number[i];
                int dig = (int)digit;
                    if (!(dig > 47 && dig < 58)){
                        if (!(dig >= 97 && dig <= 99)){
                            if(!(dig >= 65 && dig <= 67 )){
                                return false;
                            }
                        }
                    }
                    i+=1;
                }
            return true;
    }

    bool DigiTest14(string Number){
        int DigLength = Number.length();
        short i = 0;
            while(i < DigLength){
                char digit = Number[i];
                int dig = (int)digit;
                    if (!(dig > 47 && dig < 58)){
                        if (!(dig >= 97 && dig <= 100)){
                            if(!(dig >= 65 && dig <= 68 )){
                                return false;
                            }
                        }
                    }
                    i+=1;
                }
            return true;
    }

    bool DigiTest15(string Number){
        int DigLength = Number.length();
        short i = 0;
            while(i < DigLength){
                char digit = Number[i];
                int dig = (int)digit;
                    if (!(dig > 47 && dig < 58)){
                        if (!(dig >= 97 && dig <= 101)){
                            if(!(dig >= 65 && dig <= 69 )){
                                return false;
                            }
                        }
                    }
                    i+=1;
                }
            return true;
    }

    bool DigiTest16(string Number){
        int DigLength = Number.length();
        short i = 0;
            while(i < DigLength){
                char digit = Number[i];
                int dig = (int)digit;
                    if (!(dig > 47 && dig < 58)){
                        if (!(dig >= 97 && dig <= 102)){
                            if(!(dig >= 65 && dig <= 70)){
                                return false;
                            }
                        }
                    }
                    i+=1;
                }
            return true;
    }
};
class Calculations{
public:
    int ValBase10(short PreBase, string BaseNumber){ //function to convert value to base10 if it is to be converted to base13
        int FinalLoop_Num; //variable to hold the value after each loop in the for loop
        short Str_Length = BaseNumber.length(); //Find the length of the string value of the value
        int  a = 0;
        short k = Str_Length - 1; //counter variable for the power used during calculation

        for (int i = 0; i < Str_Length; i++){
            char pre_Num = BaseNumber[i];
            stringstream ss;
            ss << pre_Num;
            string N;
            ss >> N;
            if (N == "A" || N == "a"){ //check if the number has an A signifying a "10"
                N = "10"; //set N equal to 10 to be used in the calculation
            }
            else if (N == "B" || N == "b"){ //check if the number has a B signifying an "11"
                N = "11"; //set N equal to 10 to be used in the calculation
            }
            else if (N == "C" || N == "c"){ //check if the number has a C signifying a "12"
                N = "12"; //set N equal to 12 to be used in the calculation
            }
            else if (N == "D" || N == "d"){ //check if the number has a D signifying a "13"
                N = "13"; //set N equal to 13 to be used in the calculation
            }
            else if (N == "E" || N == "e"){ //check if the number has an E signifying a "14"
                N = "14"; //set N equal to 14 to be used in the calculation
            }
            else if (N == "F" || N == "f"){ //check if the number has an F signifying a "15"
                N = "15"; //set N equal to 15 to be used in the calculation
            }
            stringstream cc;
            cc << N;
            short Num;
            cc >> Num; //convert the value to an integer
            //cout << typeid(pre_Num).name() << endl;
            FinalLoop_Num = (Num * pow (PreBase, k));
            a += FinalLoop_Num;
            k = k - 1;
        }
        return a;
    }

    void FinalValue(short PreBase, int NumB10, string Number, short PostBase){
        string a;
        while(NumB10 != 0){
        short Mod = NumB10%PostBase;
        stringstream nn;
        nn << Mod;
        string a1;
        nn >> a1;
        if (a1 == "10") a1 = "A";
        else if (a1 == "11") a1 = "B";
        else if (a1 == "12") a1 = "C";
        else if (a1 == "13") a1 = "D";
        else if (a1 == "14") a1 = "E";
        else if (a1 == "15") a1 = "F";
        a = a1 + a;
        NumB10 /= PostBase;
        }
        cout << Number << " base " << PreBase << " = ";
        cout << a << " base " << PostBase << "\n\n";
    }
};






int main(){

    string EXIT = "Yes";
    while (EXIT == "Yes" || EXIT == "YES"  ){
        cout << "\nNUMBER BASE CONVERTER FROM 2 - 16.\n"; //header of converter app
        cout << "Input the bases involved in your conversion: \n\n"; //Question to user to input base values
        Appetizer AObject; //declaring an object for a class
        AObject.BaseValues(); //calling of function to take the value of the bases involved in the conversion
        while(AObject.BIn() < 2 || AObject.BIn() > 16 || AObject.BOut() < 2 || AObject.BOut() > 16){ //check if the value inputed is within range
            cout << "Value(s) either too high or too low. Base range is 2 - 16!!\n\n"; //display if value(s) is not within the calculator range
            AObject.BaseValues(); //calling of function to take the value of the bases involved in the conversion
        }
        Calculations CObject; //declaration of object for the calculation class
        string Number; //variable to hold the value of the number to be converted

        if (AObject.BIn() > 1 && AObject.BIn() < 11){
            cout << "Input the value in base " << AObject.BIn() << ": ";
            cin >> Number;
                while (AObject.DigiTest10(AObject.BIn(), Number) == false){
                    cout << "Invalid Number!!: Number isn't in base  " << AObject.BIn() <<"\n\n";
                    cout << "Input the value in base " << AObject.BIn() << ": ";
                    cin >> Number;
                }
            CObject.FinalValue(AObject.BIn(), CObject.ValBase10(AObject.BIn(), Number), Number, AObject.BOut());
        }

        else if (AObject.BIn() == 11){
            cout << "Input the value in base " << AObject.BIn() << ": ";
            cin >> Number;
                while (AObject.DigiTest11(Number) == false){
                    cout << "Invalid Number!!: Number isn't in base  " << AObject.BIn() <<"\n\n";
                    cout << "Input the value in base " << AObject.BIn() << ": ";
                    cin >> Number;
            }
            CObject.FinalValue(AObject.BIn(), CObject.ValBase10(AObject.BIn(), Number), Number, AObject.BOut());

        }
        else if (AObject.BIn() == 12){
            cout << "Input the value in base " << AObject.BIn() << ": ";
            cin >> Number;
            while (AObject.DigiTest12(Number) == false){
                cout << "Invalid Number!!: Number isn't in base  " << AObject.BIn() <<"\n\n";
                cout << "Input the value in base " << AObject.BIn() << ": ";
                cin >> Number;
            }
            CObject.FinalValue(AObject.BIn(), CObject.ValBase10(AObject.BIn(), Number), Number, AObject.BOut());
        }
        else if (AObject.BIn() == 13){
            cout << "Input the value in base " << AObject.BIn() << ": ";
            cin >> Number;
            while (AObject.DigiTest13(Number) == false){
                cout << "Invalid Number!!: Number isn't in base  " << AObject.BIn() <<"\n\n";
                cout << "Input the value in base " << AObject.BIn() << ": ";
                cin >> Number;
            }
            CObject.FinalValue(AObject.BIn(), CObject.ValBase10(AObject.BIn(), Number), Number, AObject.BOut());
        }
        else if (AObject.BIn() == 14){
            cout << "Input the value in base " << AObject.BIn() << ": ";
            cin >> Number;
            while (AObject.DigiTest14(Number) == false){
                    cout << "Invalid Number!!: Number isn't in base  " << AObject.BIn() <<"\n\n";
                    cout << "Input the value in base " << AObject.BIn() << ": ";
                    cin >> Number;
            }
            CObject.FinalValue(AObject.BIn(), CObject.ValBase10(AObject.BIn(), Number), Number, AObject.BOut());
        }
        else if (AObject.BIn() == 15){
            cout << "Input the value in base " << AObject.BIn() << ": ";
            cin >> Number;
            while (AObject.DigiTest15(Number) == false){
                    cout << "Invalid Number!!: Number isn't in base  " << AObject.BIn() <<"\n\n";
                    cout << "Input the value in base " << AObject.BIn() << ": ";
                    cin >> Number;
            }
            CObject.FinalValue(AObject.BIn(), CObject.ValBase10(AObject.BIn(), Number), Number, AObject.BOut());
        }
        else if (AObject.BIn() == 16){
            cout << "Input the value in base " << AObject.BIn() << ": ";
            cin >> Number;
            while (AObject.DigiTest16(Number) == false){
                    cout << "Invalid Number!!: Number isn't in base  " << AObject.BIn() <<"\n\n";
                    cout << "Input the value in base " << AObject.BIn() << ": ";
                    cin >> Number;
            }
            CObject.FinalValue(AObject.BIn(), CObject.ValBase10(AObject.BIn(), Number), Number, AObject.BOut());
        }
        cout << "Do you want to continue (Yes/No): ";
        cin >> EXIT;
    }

return 0;
}
