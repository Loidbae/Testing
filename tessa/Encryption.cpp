#include "pch.h"
#include "Encryption.h"

using namespace std;


void Encryption::erase(std::string& input, char character)
{
	//Searches for whitespaces, if found remembers them and removes them.

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
}

void Encryption::re_insert(std::string& input) const
{
	//Re-inserts the remembered whitespace positions.

	for (int i = 0; i < counter; i++)
	{
		input.insert(rem32[i], " ");
	}
	cout << input << "\n";
}

void Encryption::encrypt(std::string& input, int offset)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		input[i] = input[i] + offset;
		while (input[i] < 33 || input[i] > 126)
		{
			if (input[i] < 33)
			{
				input[i] = input[i] + offset;
			}
			else if (input[i] > 126)
			{
				input[i] = input[i] - offset;
			}
		}
	}
	re_insert(input);
}

void Encryption::decrypt(std::string & input, int offset)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		input[i] = input[i] - offset;
		while (input[i] < 33 || input[i] > 126)
		{
			if (input[i] < 33)
			{
				input[i] = input[i] - offset;
			}
			else if (input[i] > 126)
			{
				input[i] = input[i] + offset;
			}
		}
	}
	re_insert(input);
}

