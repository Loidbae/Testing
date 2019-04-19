// tessa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <istream>
#include "Encryption.h"

using namespace std;

static string ver = "0.2.0";
static string author = "Loidbae";
static string date = "04-18-2019";

int stop; // for infinite repeats

void StartEncrypt()
{
	cin.ignore();
	string input;
	Encryption format;

	
	cout << "[Text input]: ";
	getline(cin, input);
	format.erase(input,' ');
	format.re_insert(input);


}

int SelectCase()
{
	
	bool conditions_met = false;
	while (conditions_met == false)
	{
		cin >> stop;
		if (stop > 3 || stop <= 0)
		{
			cout << "nope...invalid";
		}
		else
		{
			conditions_met = true;
			return stop;
		}
	}
	
}

int main()
{
	while (stop != 3)
	{
		cout << "Ceasar Cipher version " << ver << "\n";
		cout << "by " << author << "\n";
		cout << "\n";
		cout << "1 - Encrypt\n";
		cout << "2 - Decrypt\n";
		cout << "3 - Don't leave me :(\n";
		cout << "[Select]: ";

		switch (SelectCase())
		{
		case 1:
			StartEncrypt();
			system("cls");
			break;

		case 2:

			break;

		default:
			system("Pause");
			break;
		}


	}
	




    
}
/*-----------------------------[Bugs]-------------------------------

- input "wow cool yay" re_inserts to "wow coo lyay" for some reason.
- SelectCase breaks after too many inputs.






*/
/*##################################################################
#  							   Polish							   #
#						   Title Animation						   #
#																   #
#																   #
#																   #
#																   #
#																   #
#																   #
#																   #
#																   #
#																   #
#																   #
#																   #
##################################################################*/
