#include <iostream>
#include "category.h"
#include "infoPrint.h"
#include <Windows.h>

int main(int argc, char** argv)
{
	SetConsoleOutputCP(1251);
	CIntroInfoPrint introInfo;
	introInfo.write("");
	std::cout << "test" << std::endl;
	while (1);
	return 0;
}