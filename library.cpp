#include <iostream>
using namespace std;

void main_menu(){

	cout << "Main MENU" << endl
		<< " 1.Student" << endl
		<< " 2.Librarian" << endl
		<< " 3.Admin" << endl
		<< " 4.Exit" << endl;
	cout << "Please select any option given above..." << endl;
}

void student_menu(){
	cout << "Welcome To the student Menu" << endl;
	cout << "Enter the department you want to search for the book press 1" << endl << endl
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
	char a = 'n';
	while (a != '1' && a != '2' && a != '3')
	{
		main_menu();
		cin >> a;
	}
	if(a == '1')
	{
		student_menu();
	}
	else if (a == '2')
	{
		librarian_menu();
	}
	else if (a == '3')
	{
		admin_menu();
	}
	else
	{
		exit;
	}
	
	system("pause");
	return 0;
}
