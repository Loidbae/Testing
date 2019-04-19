#include "pch.h"
#include "Encryption.h"

using namespace std;

void Encryption::erase(std::string & getlineinput, char character)
{
	
	
	int found = getlineinput.find(character);
	if (found == getlineinput.npos)
	{
		cout << "#Encryption::erase# Error .find returned npos !\n";
	}
	else
	{
		for (size_t i = 0; found != getlineinput.npos; i++)
		{
			rem32[i] = found;
			counter++;
			getlineinput.erase(getlineinput.begin() + found);
			found = getlineinput.find(character, found + 1);
		}
	}

	cout << getlineinput << "\n";
}

void Encryption::re_insert(std::string& input)
{
	
	for (size_t i =0; i < counter;i++)
	{
		input.insert(rem32[i]," ");
	}
	cout << input << "\n";
	//system("Pause");
}
