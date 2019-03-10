#include <iostream>
#include <string>

using namespace std;

class book
{
	public:
	
	string author;
	string bookname;
	int parts;
	int pages;

	
};



int main() {

	setlocale(LC_ALL, "Russian")
	
	book Firstbook;
	Firstbook.author = "Рэй Брэдбери";
	Firstbook.bookname = "451 по Фаренгейту";
	Firstbook.parts = 3;
	Firstbook.pages = 246;
	
	cout<< Firstbook.author << endl;
	cout<< Firstbook.bookname << endl;
	cout<< Firstbook.parts << endl;
	cout<< Firstbook.pages << endl;
	
	

	return 0;
}
