#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>
#include "Assignment.h"
#include "AssignStatus.h"
#include "Date.h"
#include "StringTokenizer.h"

using namespace std;


//all of this was me just trying to correctly parse an example of a line of data and make assignments from it
int main()
{
	/*string Due;
	string assigned;
	string description;
	string allofit;

	cout<<"Please enter the data in the following manner: DueDate,Description,AssignDate with dates formatted as MM/DD/YYYY"<<endl;
	allofit = "12/03/1995,whodat,04/20/1995";//typing all this in myself got annoying
	String_Tokenizer parser(allofit,",");
	int index = 0;
	while(parser.has_more_tokens())
	{
	switch(index)
	{
	case 0:
	std::istringstream(parser.next_token())>>Due;
	break;
	case 1:
	std::istringstream(parser.next_token())>>description;
	break;
	case 2:
	std::istringstream(parser.next_token())>>assigned;
	break;
	}
	++index;
	}
	Assignment prject1(Due,description,assigned);
	cout<<"Please enter the data in the following manner: DueDate,Description,AssignDate with dates formatted as MM/DD/YYYY"<<endl;
	allofit = "01,16,1994,blablabla,01/16/1993";
	index = 0;
	while(parser.has_more_tokens())
	{
	switch(index)
	{
	case 0:
	std::istringstream(parser.next_token())>>Due;
	break;
	case 1:
	std::istringstream(parser.next_token())>>description;
	break;
	case 2:
	std::istringstream(parser.next_token())>>assigned;
	break;
	}
	++index;
	}
	Assignment project2(Due,description,assigned);
	cout<<prject1.GetAssignDate()<<endl;
	cout<<project2.GetdueDate()<<endl;
	cout<<prject1.getDescription()<<endl;
	cout<<project2.getStatus()<<endl;*/

	bool still_in_menu = true;

	ofstream fout("assignments.txt");

	while (still_in_menu)
	{
		cout << "Would you like to:" << endl;
		cout << "1. Display the assignments" << endl;
		cout << "2. Add an assignment" << endl;
		cout << "3. Edit an assignment's due date" << endl;
		cout << "4. Edit the description of an assignment" << endl;
		cout << "5. Complete an assignment" << endl;
		cout << "6. See the number of late assignments" << endl;
		cout << "7. Save the assignments to a text file" << endl;
		cout << "8. Exit" << endl << endl;

		cout << "Type a number (1-8) for the corresponding menu choice"
			<< endl << endl;

		int menu_choice;
		cin >> menu_choice;
		cout << endl;

		while (menu_choice < 1 || menu_choice > 8 || !menu_choice)
		{
			cout << "Please enter a valid number (1-8)" << endl << endl;
			cin >> menu_choice;
			cout << endl;
		}

		//int menu_choice_int = menu_choice - '0';

		/*while (menu_choice_int < 1 && menu_choice_int > 8)
		{
			cout << "Please enter a valid number (1-8)" << endl << endl;
			cin >> menu_choice;
			cout << endl;
		}

		int menu_choice_int2 = menu_choice - '0';
		*/
		switch (menu_choice)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			still_in_menu = false;
		}
	}
	system("pause");
	return 0;
}

/*string Due;
string assigned;
string description;
string allofit;

cout<<"Please enter the data in the following manner: DueDate,Description,AssignDate with dates formatted as MM/DD/YYYY"<<endl;
allofit = "12/03/1995,whodat,04/20/1995";//typing all this in myself got annoying
String_Tokenizer parser(allofit,",");
int index = 0;
while(parser.has_more_tokens())
{
switch(index)
{
case 0:
std::istringstream(parser.next_token())>>Due;
break;
case 1:
std::istringstream(parser.next_token())>>description;
break;
case 2:
std::istringstream(parser.next_token())>>assigned;
break;
}
++index;
}
Assignment prject1(Due,description,assigned);
cout<<"Please enter the data in the following manner: DueDate,Description,AssignDate with dates formatted as MM/DD/YYYY"<<endl;
allofit = "01,16,1994,blablabla,01/16/1993";
index = 0;
while(parser.has_more_tokens())
{
switch(index)
{
case 0:
std::istringstream(parser.next_token())>>Due;
break;
case 1:
std::istringstream(parser.next_token())>>description;
break;
case 2:
std::istringstream(parser.next_token())>>assigned;
break;
}
++index;
}
Assignment project2(Due,description,assigned);
cout<<prject1.GetAssignDate()<<endl;
cout<<project2.GetdueDate()<<endl;
cout<<prject1.getDescription()<<endl;
cout<<project2.getStatus()<<endl;*/
