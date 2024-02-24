#include<iostream>
#include<cmath>
using namespace std;

void volume(float radius);

int main(){
	float r;
	cout << "Enter the radius: " << endl;
	cin >> r;

	volume(r);
	return 0;
}

void volume(float r){
	const float PIE = 3.142;
	cout << "The volume of the sphere is: " << 4*(PIE* pow(r,3))/3;
}


