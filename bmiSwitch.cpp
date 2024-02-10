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
   int bmIndex = bmi;

   switch (bmIndex){
    case 0 ... 19:
    cout << "\nYour Body Mass Index is: "<< bmi << ". Lower than normal weight.\n";
    break;

    case 20 ... 25:
    cout << "\nYour Body Mass Index is: "<< bmi << ". Normal weight.\n";
    break;

    case  26 ... 30:
    cout << "\nYour Body Mass Index is: "<< bmi << ". Overweight. \n";
    break;

    case 31 ... 40:
    cout << "\nYour Body Mass Index is: " << bmi << ". Obese.";
    break;

    case 41 ... 100:
    cout << "\nYour body mass Index is: " << bmi << ". Extremely Obese";
    break;

    default:
    cout << "\n Incorrect input, try again later";
   }
   cout << "\n";
   return 0;
}
   