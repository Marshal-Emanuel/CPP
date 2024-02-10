#include<iostream>
using namespace std;
 //eb3.52721.21
    //Emanuel Marshal Kioko
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
   switch (sales) {
        case 5000 ... 1000000:
            commissionRate = 0.15;
            break;
        case 4000 ... 4999:
            commissionRate = 0.12;
            break;
        case 3000 ... 3999:
            commissionRate = 0.09;
            break;
        case 2000 ... 2999:
            commissionRate = 0.06;
            break;
        default:
            commissionRate = 0.03;
            break;
    }
    commission = sales * commissionRate;
    cout << "Sales agent is:"<< salesAgent << endl;
    cout << "Commsision earned:"<< commission <<endl;

}