#include<iostream>
using namespace std;
//          EB3/52721/21
int main(){

    float length;
    float width;
    cout << "|`````````````````````````````````````|"<< endl;
    cout << "|~~~ Area and perimeter calculator ~~~|" << endl;
    cout << "|  Enter the length of the rectangle: |\n";
    cin >> length;
    cout << "|  Enter the width of the rectangle:  |\n";
    cin >> width;

    float area = length*width;
    float perimeter = 2*(length + width);
    
    cout << "|  The area of the rectangle is: "<<area;
    cout << "\n|  The perimeter of the rectangle is: "<<perimeter;
   return 0;
}