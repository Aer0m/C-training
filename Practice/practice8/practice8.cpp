#include "pch.h" 
#include <iostream> 
#include <fstream> 
#include <string> 
#include <windows.h> 

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");

	string buff;
	getline(cin, buff);
	ofstream fout("text.txt", ios_base::app);
	fout << buff << endl;
	fout.close();
	system("pause");
	return 0;
}
