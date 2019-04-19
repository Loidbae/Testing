#pragma once

#include <iostream>
#include <string>
#include <string.h>
#include <istream>
#include <array>

class Encryption
{
	

public:

	void erase(std::string& input, char character);
	void encrypt(std::string& input, int offset);

private:
	void re_insert(std::string& input);


	int counter = 0;
	std::array<int, 999> rem32;
};
