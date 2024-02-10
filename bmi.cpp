#include<iostream>
using namespace std;
   //BMI calculator
    //eb3.52721.21 Emanuel Marshal Kioko
    int main(){
   float weight;
   float height;
   float bmi;
   cout << "| **Welcome to the BMI Calculator** \n";
   cout << "|  Enter your height in meters:\n";
   cin >> height;
   cout << "|  Enter your weight in kgs:\n";
   cin >> weight;
   bmi = weight / (height * height); 
   if(bmi < 20) {
      cout << "|  Your BMI is: " << bmi << "\nLower than normal weight.\n";
    }
   else if (bmi < 26){
     cout << "|  Your BMI is: " << bmi << "\nNormal weight.\n";
    }
   else if (bmi < 31) {
    cout << "|  Your BMI is: " << bmi << "\n Obese";
   }
   else if (bmi >40){
    cout << "|  Your BMI is: " << bmi << "\n Extreme obese";
   }
   else {
    cout << "~~Invalid input, please enter a number\n";
   }
   return 0;
}