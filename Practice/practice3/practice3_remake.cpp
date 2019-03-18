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

    void output()
    {
        cout<< "Количество частей: "<<parts<<endl;
        cout << "Количество страниц: " << pages<<endl;
        

    }



	
};



int main() {
    string author1;
	setlocale(LC_ALL, "Russian");
   

cout <<"Введите автора ";
cin >>author1;


	book Firstbook {"Рэй Брэдбери","451 по Фаренгейту",3, 246};
	book Secondbook {"М.Ю. Лермонтов", "Герой нашего времени",2, 150};
	
if (author1 == Firstbook.author) {
    
    Firstbook.output();

    
}
	
else if (author1 == Secondbook.author) {
    
    Secondbook.output();
    
}
else cout << "Такой книги нет";
	return 0;
}
