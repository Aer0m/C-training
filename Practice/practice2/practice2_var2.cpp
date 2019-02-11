#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
 
	float a = -0.6;
	float b = 5.3;
 
	double z,t;
 
	if (a<b) {
 
		z = sqrt(abs(a*a-b*b));
 
	}
 
	else if (a>=b) {
 
		z = 1 - 2*cos(a)*sin(b);
		}
 
	if (z<b) {
 
		t = pow(z+a*a*b, 1.0 / 3);
	}
 
	else if (z==b) {
	
		t = 1 - log(z)/log(10.0) + cos (a*a*b);
	
		}
	else if (z>b) {
 
		t = 1/cos(z*a);
	}
 
 
	cout << a <<endl;
	cout << b <<endl;
	cout << z <<endl;
	cout << t;
 
	return 0;
 
}
