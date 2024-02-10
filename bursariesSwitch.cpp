#include <iostream>
#include <string>

using namespace std;

int main() {
  string category;
  char catg;
  cout << "| ***Welcome to the Bursaries program***\n";
  cout << "| Enter the Student category (Needy, Special, Single, Marginalized, Other): ";
  cin >> category;

  if (category == "Needy" || category =="needy" || category == "NEEDY" || category == "Special" || category =="special" || category == "SPECIAL"){
        catg = 'a';
    }
    else if (category == "Single" || category =="single" || category == "SINGLE"){
        catg = 'b';
    }
     else if (category == "Marginalized" || category =="marginalized" || category == "MARGINALIZED"){
        catg = 'c';
    }
     else if (category == "Other" || category =="other" || category == "OTHER"){
        catg = 'd';
    }

  switch (catg) {
       case 'a':
      cout << "| The amount allocated is: 40,000" << endl;
      break;

    case 'b':
          cout << "| The amount allocated is: 30,000" << endl;
      break;

    case 'c':
        cout << "| The amount allocated is: 35,000" << endl;
      break;
   
    case 'd':
      cout << "| The amount allocated is: 10,000" << endl;
      break;
    default:
      cout << "Invalid category" << endl;
  }

  return 0;
}
