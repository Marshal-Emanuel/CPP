#include<iostream>
using namespace std;
//Emanuel Marsha Kioko
//EB3/52721/21 
int main(){
    for(int i = 1; i <= 5; i++){
        for (int j = 5; j >= i;j--){
            cout << "*";
        }
      cout << "\n";
    }
    return 0;
}
