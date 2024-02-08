#include<iostream>
using namespace std;

int main(){
    string salesAgent;
    int sales;
    double commissionRate;
    double commission;
    cout << "|  **Welcome to the commsision center program**\n";
    cout << "|  Enter sales agent name:\n";
    cin >> salesAgent;
    cout << "|  Enter sales volume made:\n";
    cin >> sales;
    cout << "\n";

    if(sales >=5000){
        commissionRate = 0.15; 
    }
    else if(sales >=4000){
        commissionRate = 0.12;
    }
     else if(sales >=3000){
        commissionRate = 0.09;
    }
     else if(sales >=2000){
        commissionRate = 0.06;
     }
     else if(sales < 2000){
        commissionRate = 0.03;
    }
    else {
        cout << "Incorrect input\n";
    }
    commission = sales * commissionRate;
    cout << "Sales agent is:"<< salesAgent << endl;
    cout << "Commsision earned:"<< commission <<endl;

}