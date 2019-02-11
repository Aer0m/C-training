#include <iostream>
#include<cmath>
 
using namespace std;
 
int main() {
 
	float a = 4.8;
	float b = -7.9;
 
	double n,m;
 
	if (a>=b) {
 
		n = pow(a-b, 1.0 / 3);
 
	}
 
	else if (a<b) {
 
		n = a*a + (a-b)/(sin(a*b));
		}
 
	if (n<b) {
 
		m = (n+a)/(-b) + sqrt(sin(a)*sin(a)-cos(n));
	}
 
	else if (n==b) {
		m = b*b + tan(n*a);
		}
	else if (n>b){
 
		m = b*b*b + n*a*a;
	}
 
 
	cout << a <<endl;
	cout << b <<endl;
	cout << n <<endl;
	cout << m;
 
	return 0;
 
}
