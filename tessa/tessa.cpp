// tessa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <istream>
#include "Encryption.h"

using namespace std;

static string ver = "0.3.0";
static string author = "Loidbae";
static string date = "04-18-2019";

int stop; // for infinite repeats

void SimpleCaesarEncrypter()
{
	cin.ignore();
	string input;
	Encryption format;
	int offset;

	cout << "[Encrypt]: ";
	getline(cin, input);
	format.erase(input, ' ');

	cout << "Enter how many times the characters should get offset \n";
	cout << "[Offset]: ";
	cin >> offset;
	format.encrypt(input, offset);

	system("Pause");

}

void SimpleCaesarDecrypter()
{
	cin.ignore();
	string input;
	Encryption format;
	int offset;

	cout << "[Decrypt]: ";
	getline(cin, input);
	format.erase(input,' ');

	cout << "Enter offset value used to encrypt \n";
	cout << "[Offset]: ";
	cin >> offset;
	format.decrypt(input, offset);

	system("Pause");

}

int SelectCase()
{
	cout<<"[Select]: ";
	cin.clear();
	cin >> stop;

	while (!cin.good() || stop > 3 || stop < 0)
	{
		cout << "[Select]: ";
		cout << "#SelectCase# Error invalid input\n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "[Select]: ";
		cin >> stop;
		if (cin.good() && stop <= 3 && stop > 0)
		{
			return stop;
		}
	}

	return stop;
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
		cout << "3 - Please don't leave :(\n";
		cout << "\n";

		switch (SelectCase())
		{
		case 1:
			SimpleCaesarEncrypter();
			system("cls");
			break;

		case 2:
			SimpleCaesarDecrypter();
			system("cls");
			break;

		default:
			cout << "awww :,(\n";
			system("Pause");
			break;
		}


	}
	




    
}
/*-----------------------------[Bugs]-------------------------------

- input "wow cool yay" re_inserts to "wow coo lyay" for some reason. (fixed)
- SelectCase breaks after too many inputs. And also breaks on non integer inputs. (fixed)






*/
/*##################################################################
#  							  -Polish-							   #
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
