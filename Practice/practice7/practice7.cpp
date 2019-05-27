#include "pch.h"
#include <iostream>
#include <string>
#include <clocale>

using namespace std;

class Animal
{
public:
	string sound;

	Animal(string a) : sound(a) {}
	virtual void info() {}
};

class Pet
{
public:
	string name;
	string skill;
	int age;

	Pet(string b, string c, int d) : name(b), skill(c), age(d) {}
};

class Cat : public Animal, public Pet
{
public: Cat(string a, string b, string c, int d) : Animal(a), Pet(b, c, d) {}
		void info()
		{
			cout << "Кошка" << endl << "Звук: " << sound << endl << "Кличка: " << name << endl << "Навык :" << skill << endl << "Возраст: " << age;
			cout << "\n";
		}
};

class Dog : public Animal, public Pet
{
public: Dog(string a, string b, string c, int d) : Animal(a), Pet(b, c, d) {}
		void info()
		{
			cout << "Собака" << endl << "Звук: " << sound << endl << "Кличка: " << name << endl << "Навык :" << skill << endl << "Возраст: " << age;
			cout << "\n";
		}
};

class Parrot : public Animal, public Pet
{
public: Parrot(string a, string b, string c, int d) : Animal(a), Pet(b, c, d) {}
		void info()
		{
			cout << "Попугай" << endl << "Звук: " << sound << endl << "Кличка: " << name << endl << "Навык :" << skill << endl << "Возраст: " << age;
			cout << "\n";
		}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Cat Pet1("Мяу", "Мурка", "Ловить мышей", 2);
	Pet1.info();

	Dog Pet2("Гав", "Чарли", "Приносить вещи", 2);
	Pet2.info();

	Parrot Pet3("Привет", "Кеша", "Повторять слова", 2);
	Pet3.info();

	system("pause");

	return 0;

}
