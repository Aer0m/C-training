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
        cout<< "The name of the book: "<<bookname<<endl; //fucntion which is responsible for our permanent screen output
        cout<< "Number of parts: "<<parts<<endl;
        cout << "Number of pages: " << pages<<endl;
        

    }
	
};



int main() {
    string author1;
    cout <<"Hello, dude, I want you to show my first programm code with class and its method.\n";
    cout <<"Warning, you have to enter the name of needed author without any spaces in the input field! You can choose those two from the following strings of my code.\n";
    cout << "Enter the author: ";
    cin >> author1;

	book Firstbook {"RayBradbury","Fahrenheit 451", 3, 246}; //data (class object) and name of the author you can choose, to get the info about his book
	book Secondbook {"MichaelLermontov", "A Hero of Our Time", 2, 150}; //data (calss object) about the 2nd book
	
	
if (author1 == Firstbook.author) {
    
    Firstbook.output(); //output function call

    
}
	
else if (author1 == Secondbook.author) {
    
    Secondbook.output(); //also outpput
    
}
else cout << "No such author or books"; //incorrect data entered
	
	return 0;
}
