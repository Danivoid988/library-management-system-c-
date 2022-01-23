#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
struct Student{
private:
	int semester;
	int roll_no;
	string name;
	int depart;
public:
	void read_student()
	{
		cout << "Enter Your Semester " << endl;
		cin >> semester;
		cout << "Enter Roll Number" << endl;
		cin >> roll_no;
		cout << "Enter Your Name" << endl;
		cin.ignore();
		getline(cin,name);
		cout << "1.Cs || 2. IT || 3.BBA " << endl;
		cin >> depart;
		while (depart != 1 && depart != 2 && depart != 3)
		{
			cout << "Wrong Entry, Please Enter Again!" << endl;
			cout << "1.Cs || 2. IT || 3.BBA " << endl;
			cin >> depart;
		}
		cout << "Student Record Created" << endl;
	
	}

	void print_student()
	{
		cout << endl;
		cout << "Semester: " << semester << endl;
		cout << "Roll Number: " << roll_no << endl;
		cout << "Name: " << name << endl;
		cout << "Depart: " << depart << endl << endl;
	}

	bool find_student(int roll_number)
	{
		if (roll_no == roll_number)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string get_name()
	{
		return name;
	}
};
struct Book {
private:
	int B_ID;
	string B_name;
	string B_author;
	int available;
public:
	void read_book()
	{
		cout << "Enter Book ID " << endl;
		cin >> B_ID;
		cout << "Enter The Name Of the Book" << endl;
		cin.ignore();
		getline(cin, B_name);
		cout << "Enter The Name Of the Author" << endl;
		cin.ignore();
		getline(cin, B_author);
		cout << "Enter 1 (Available) || Enter 0 (Not Available)" << endl;
		cin >> available;
		while (available != 1 && available != 0)
		{
			cout << "Wrong Entry, Please Enter Again!" << endl;
			cout << "Enter 1 (Available) || Enter 0 (Not Available)" << endl;
			cin >> available;
		}
	}
		void print_Book()
		{
			cout << endl;
			cout << "Book ID: " << B_ID << endl;
			cout << "Book Name: " << B_name << endl;
			cout << "Author Name: " << B_author << endl;
			cout << "Available: " << available << endl << endl;
		}
		bool find_book(int book_id)
		{
			if (B_ID == book_id )
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		string get_name()
		{
			return B_name;
		}
};
struct Issue_Books{
private:
	int roll_num;
	string student_name;
	int b_number;
	string b_name;
	int status;
public:
	void input(int roll_number, string student_names, int b_numbers, string b_names, int statuss)
	{
		roll_num = roll_number;
		student_name = student_names;
		b_number = b_numbers;
		b_name = b_names;
		status = statuss;
	}
	bool check_status(int roll_number, string student_names, int b_numbers, string b_names, int statuss)
	{
		if (roll_num == roll_number && b_number == b_numbers && status == statuss)
		{
			return true;
		}
		else{
			return false;
		}
	}
	void change_status(int status)
	{
		status = status;
	}
	void print(int index)
	{
		if (index == status)
		{
			cout << "Student Roll Number: " << roll_num << endl;
			cout << "Student Name: " << student_name << endl;
			cout << "Book Number: " << b_number << endl;
			cout << "Book Name: " << b_name << endl;
			cout << "Status: " << status;
		}
	}
	


};
void main_menu();
void Student_menu();
void book_menu();
void Issue_Book();
void Return_Book();

Student S[1000];
int n_s = 0;

Book B[1000];
int n_b = 0;

Issue_Books I[1000];
int i_b = 0;


int main()
{
	system("CLS");
	char choice = 'n';
	while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '4')
	{
		main_menu();
		cin >> choice;
		if (choice == '1')
		{
			system("CLS");
			choice = 'n';
			while (choice != '1' && choice != '2' &&  choice != '0')
			{
				Student_menu();
				cin >> choice;
			}
		}
		else if (choice == '2')
		{
			system("CLS");
			choice = 'n';
			while (choice != '1' && choice != '2' &&  choice != '0')
			{
				book_menu();
				cin >> choice;
			}
		}
		else if (choice == '3')
		{
			system("CLS");
			choice = 'n';
			while (choice != '1' && choice != '2' &&  choice != '0')
			{
				Issue_Book();
				cin >> choice;
			}
		}
		else if (choice == '4')
		{
			system("CLS");
			choice = 'n';
			while (choice != '1' && choice != '2' &&  choice != '0')
			{
				Return_Book();
				cin >> choice;
			}
		}
		else if (choice == '0')
		{
			system("CLS");
			exit(0);
		}
		else
		{
			cout << "Wrong Entry! Please Wait...." << endl;
			system("pause");
			exit(0);
		}
	}


}
void main_menu()
{
	Sleep(200);
	cout << "*******************************************" << endl;
	Sleep(200);
	cout << "*                                          *" << endl;
	Sleep(200);
	cout << "*                                          *" << endl;
	Sleep(200);
	cout << "* Welcome To The Library Management System *" << endl;
	Sleep(200);
	cout << "*                                          *" << endl;
	Sleep(200);
	cout << "*                                          *" << endl;
	Sleep(200);
	cout << "*******************************************" << endl;

	
	Sleep(100);
	cout << "1. Student" << endl;
	cout << "2. Book" << endl;
	cout << "3. Issue Book" << endl;
	cout << "4. Return Book" << endl;
	cout << "0. To Exit" << endl;
}
void Student_menu()
{
	int choice;
	cout << "1. Register Student" << endl;
	cout << "2. Print all Student" << endl;
	cout << "0. Return To Main Menu" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cout << "Welcome student Please Register Your Self" << endl;
		S[n_s].read_student();
		n_s++;
	}
	else if (choice == 2)
	{
		cout << "Print All Students" << endl;
		for (int i = 0; i < n_s; i++)
		{
			S[i].print_student();
		}
	}
	else if (choice == 0)
	{ 
		main();
	}
	else
	{
		cout << "Wrong Menu Entered!" << endl;
	}
	system("pause");
	main();
}

void book_menu()
{
	int choice;
	cout << "1. Register Book" << endl;
	cout << "2. Check all Books" << endl;
	cout << "0. Return To Main Menu" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cout << "Please Register A book" << endl;
		B[n_b].read_book();
		n_b++;

	}
	else if (choice == 2)
	{
		cout << "Print All Books" << endl;
		for (int i = 0; i < n_b; i++)
		{
			B[i].print_Book();
		}
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		cout << "Wrong Menu Entered!" << endl;
	}
	system("pause");
	main();

}

void Issue_Book()
{
	int choice;
	int roll_no;
	string student_name;
	string book_name;
	int book_id;
	int student_found = 0;
	int book_found = 0;
	cout << "1. Get A book" << endl;
	cout << "2. Check History" << endl;
	cout << "0. Return To Main Menu" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cout << "Get A Book" << endl;
		cout << "Enter Student Roll Number" << endl;
		cin >> roll_no;
		for (int i = 0; i < n_s; i++)
		{
			if (S[i].find_student(roll_no))
			{
				student_name = S[i].get_name();
				student_found = 1;
				break;
			}
		
		}
		cin.ignore();
		if (student_found == 1)
		{
			cout << student_name << endl;
			cout << roll_no << endl;
			cout << "Enter The Id of the Book" << endl;
			cin >> book_id;
			for (int j = 0; j < n_b; j++)
			{
				if (B[j].find_book(book_id))
				{
					book_name = B[j].get_name();
					book_found = 1;
					break;
				}
			}
			if (book_found == 1)
			{
				cout << book_name << endl;
				cout << book_id << endl;
				I[i_b].input(roll_no,student_name,book_id,book_name,1);
				i_b++;
			}
			else
			{
				cout << "Wrong Book Entered" << endl;
			}
		}
		else
		{
			cout << "Student Not Found!" << endl;
		}
	}
	else if (choice == 2)
	{
		cout << "Check History" << endl;
		for (int i = 0; i < i_b; i++)
		{
			I[i].print(1);
		}
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		cout << "Wrong Menu Entered!" << endl;
	}
	system("pause");
	main();
}
void Return_Book()
{
	int choice;
	int roll_no;
	string student_name;
	string book_name;
	int book_id;
	int student_found = 0;
	int book_found = 0;
	int issuebook_found = 0;
	cout << "1. Return a book" << endl;
	cout << "2. Check History" << endl;
	cout << "0. Return To Main Menu" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cout << "Return A Book" << endl;
		cout << "Enter Student Roll Number" << endl;
		cin >> roll_no;
		for (int i = 0; i < n_s; i++)
		{
			if (S[i].find_student(roll_no))
			{
				student_name = S[i].get_name();
				student_found = 1;
				break;
			}

		}
		if (student_found == 1)
		{
			cout << student_name << endl;
			cout << roll_no << endl;
			cout << "Enter The Id of the Book" << endl;
			cin >> book_id;
			for (int j = 0; j < n_b; j++)
			{
				if (B[j].find_book(book_id))
				{
					book_found = 1;
					book_name = B[j].get_name();
					break;
				}
			}
			if (book_found == 1)
			{
				for (int i = 0; i < i_b; i++)
				{
					if (I[i].check_status(roll_no, student_name, book_id, book_name, 1))
					{
						I[i].change_status(0);
						issuebook_found = 1;
						break;
					}
				}
				if (issuebook_found == 1)
				{
					cout << "Book Returned successfully" << endl;
				}
				else
				{
					cout << "Issue Wrong Book Entered" << endl;
				}

			}
			else
			{
				cout << "Wrong Book Entered" << endl;
			}
		}
		else
		{
			cout << "Student Not Found!" << endl;
		}
	}
	else if (choice == 2)
	{
		cout << "Check History" << endl;
		for (int i = 0; i < i_b; i++)
		{
			I[i].print(0);
		}
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		cout << "Wrong Menu Entered!" << endl;
	}
	system("pause");
	main();

}
