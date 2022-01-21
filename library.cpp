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
	char choice = 'n';
	while (choice != '1' && choice != '2' && choice != '3' && choice != '4'	)
	{
		main_menu();
		cin >> choice;
	}
	if (choice == '1')
	{
		choice = 'n';
		while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6')
		{
			student_menu();
			cin >> choice;
		}
		
	}
	else if (choice == '2')
	{
		do {
		librarian_menu();
		cin >> choice;
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
