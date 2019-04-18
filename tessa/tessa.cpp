// tessa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

static string ver = "0.1.0";
static string author = "Loidbae";
static string date = "04-18-2019";

int stop; // for infinite repeats

void StartEncrypt()
{
	string input;

	
	cin >> input;
}

int SelectCase()
{
	bool conditions_met = false;
	while (conditions_met == false)
	{
		cin >> stop;
		if (stop > 3 || stop <= 0)
		{
			cout << "nope....not valid\n";
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
		cout << "Ceasar Cipher version " + ver + "\n";
		cout << "by " + author + "\n";
		cout << "\n";
		cout << "1 - Encrypt\n";
		cout << "2 - Decrypt\n";
		cout << "3 - Don't leave me :(\n";

		switch (SelectCase())
		{
		case 1:
			StartEncrypt();
			break;

		case 2:

			break;
		}


	}
	




    
}









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
