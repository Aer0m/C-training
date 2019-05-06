
#include "pch.h"
#include <iostream>

using namespace std;

int Sum(int a, int b) {

	return a + b;
}

double Sum(double a, double b) {

	return a + b;
}






int main()
{
	
	cout << Sum(4, 5) << endl;
	
	cout << Sum(2.5, 3.2);

  return 0;
}
