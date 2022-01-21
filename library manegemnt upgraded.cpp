#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct Student{
private:
	int roll_no;
	char name[30];
public:

	void read()
	{
		cout << "Enter Roll Number" << endl;
		cin >> roll_no;
		cout << "Enter Your Name" << endl;
		cin >> name;
	}

	void print()
	{
		cout << endl;
		cout << "Roll Number: " << roll_no << endl;
		cout << "Name: " << name << endl << endl;
	}
};
struct Book {
private:
	int book_no;
	char book_name[50];
	char author_name[30];

public:

	void create_book()
	{
		cout << "------ New Book Entry ----" << endl;
		cout << " Enter The Book Number " << endl;
		cin >> book_no;
		cout << "Enter The Name of the Book " << endl;
		cin >>book_name;
		cout << "Enter The Name of the Author " << endl;
		cin >> author_name;
	}
	void Show_book()
	{
		cout << "Book Number: " << book_no << endl;
		cout << "Book Name: " << book_name << endl;
		cout << "Book Author: " << book_name << endl;
	}

};
void main_menu(){
	cout << "-------------------------------------------" << endl;
	cout << "|                                          |" << endl;
	cout << "|                                          |" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "|                                          |" << endl;
	cout << "| Welcome To The Library Management System |" << endl;
	cout << "|                                          |" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "|                                          |" << endl;
	cout << "|                                          |" << endl;
	cout << "-------------------------------------------" << endl << endl << endl;

	cout << "-------------------------------------------" << endl;
	cout << "|	 MAIN MENU	   				            |" << endl;
	cout << "|                                          |" << endl;
	cout << "-------------------------------------------" << endl;

	
	cout<< " 1.Student" << endl
		<< " 2.Librarian" << endl
		<< " 3.Admin" << endl
		<< " 4.Exit" << endl;
	cout << "Please select any option given above..." << endl;
}

void student_menu(){
	cout << "Welcome To the student Menu" << endl;
	cout << "Enter the department you want to search for the book" << endl << endl
		<< "Search For Book From the given departs" << endl
		<< "1.CS Depart" << endl
		<< "2.Finance" << endl
		<< "3.Ecnomics" << endl
		<< "4.Marketing" << endl
		<< "5.Urdu literature" << endl
		<< "6.Database system" << endl;
}

void librarian_menu(){
	cout << "Welcome to the Librarian Menu" << endl;
	cout << "1.Add a book" << endl
		<< "2.Sort a book" << endl
		<< "3.Search a book" << endl
		<< "3.Display a book" << endl
		<< "4.Update Book information" << endl;
}

void admin_menu(){
	cout << "Welcome Admin" << endl;
	cout << "1.Add a book" << endl
		<< "2.Sort a book" << endl
		<< "3.Search a book" << endl
		<< "3.Display a book" << endl
		<< "4.Update Book information" << endl
		<< "5.Delete a book" << endl;
}

int main()
{
	system("CLS");
	char choice = 'n';
	while (choice != '1' && choice != '2' && choice != '3' && choice != '4')
	{
		main_menu();
		cin >> choice;
	}
	if (choice == '1')
	{
		choice = 'n';
		while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6')
		{
			system("CLS");
			struct Student std;

			std.read();
			std.print();

			student_menu();
			cin >> choice;
		}

	}
	else if (choice == '2')
	{
		do {
			librarian_menu();
			cin >> choice;
			if (choice == '1')
			{

				struct Book std;

				std.create_book();
				std.Show_book();
			}
			else
			{
				cout << librarian_menu;
				cin >> choice;
			}
		} while (choice != '1' && choice != '2' && choice != '3' && choice != '4');

	}
	else if (choice == '3')
	{
		do {
			admin_menu();
			cin >> choice;
		} while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5');

	}
	else
	{
		cout << "Wrong Menu Entered" << endl;
		exit;
	}

	system("pause");
	return 0;
}
