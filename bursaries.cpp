#include<iostream>
using namespace std;
    //BMI calculator
    //eb3.52721.21
    //Emanuel Marshal Kioko

int main(){

    string category;
    cout << "|  ***Welcome to the Bursaries program***\n";
    cout << "|  Enter the Student category (Needy, Special, Single, Marginalized, Other)";
    cin >> category;
    if (category == "Needy" || category =="needy" || category == "NEEDY" || category == "Special" || category =="special" || category == "SPECIAL"){
        cout << "|  The ammount allocated is: 40,000"<<endl;
    }
    else if (category == "Single" || category =="single" || category == "SINGLE"){
        cout << "|  The ammount allocated is :30,000" <<endl;
    }
     else if (category == "Marginalized" || category =="marginalized" || category == "MARGINALIZED"){
        cout << "|  The ammount allocated is :35,000" <<endl;
    }
     else if (category == "Other" || category =="other" || category == "OTHER"){
        cout << "|  The ammount allocated is :10,000" <<endl;
    }
    else {
        cout << "~~Invalid category";
    }
}