#include<iostream>
using namespace std;
//          EB3/52721/21
int main(){
    int n_items;
    const float VAT = 0.16;
    const float DISCOUNT = 0.05;
    float payable;
    cout << "|`````````````````````````````````````|"<< endl;
    cout << "| ~~ Welcome to the billing system ~~" <<endl;
    cout << "|  Enter number of items to buy:" <<endl;

    cin >> n_items;
    float items[n_items]; 
    float total;

    cout << "|  Enter price for:\n";

    for(int i = 1; i<=n_items; i++){
        cout << "|  Item " << i << ":\n";
        cin >> items[i];
    }

       for(int j = 1; j<=n_items; j++){
        total+=items[j];
    }
   

    //Adding VAT and Discount
    float vat = total * VAT;
    float discount = total * DISCOUNT;

    payable = total + vat - discount;
     cout << "|  **** RECIEPT ****\n";
     cout << "|  *Total:  Ksh" << total <<"\n|  *VAT @16% : Ksh"<< vat << "\n|  *Discount @5% : Ksh" << discount;
     cout << "\n|   ~~~Payable Amount : Ksh" << payable;
     cout << "\n|"; 
}