#include "pch.h"
#include "Encryption.h"

using namespace std;


void Encryption::erase(std::string & input, char character)
{
	int found = input.find(character);
	if (found == input.npos)
	{
		cout << "No spaces found...\n";
	}
	else
	{
		for (size_t i = 0; found != input.npos; i++)
		{
			rem32[i] = found;
			found = input.find(character, found + 1);
			counter++;
		}
		for (int i = 0; i < counter; i++)
		{
			input.erase(input.begin()+rem32[i]-i);
		}
	}
	cout << input << "\n";
}

void Encryption::encrypt(std::string & input, int offset)
{
}

void Encryption::re_insert(std::string& input)
{
	for (int i = 0; i < counter; i++)
	{
		input.insert(rem32[i], " ");
	}
	cout << input << "\n";
}
