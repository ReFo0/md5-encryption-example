#include <Windows.h>
#include <iostream>
#include "md5.h"

int main() 
{
	SetConsoleTitleA(md5("hello").c_str());
	std::cout << md5("refo");
	std::cin.get();
}