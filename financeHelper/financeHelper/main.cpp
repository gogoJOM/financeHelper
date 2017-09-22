#include <iostream>
#include "initial.h"
#include "category.h"
#include "infoPrint.h"
#include "logger.h"
#include <Windows.h>

int main(int argc, char** argv)
{
	SetConsoleOutputCP(1251);
	Start();
	//CIntroInfoPrint introInfo;
	//introInfo.write("");
	CFileLogger fLog;
	fLog.printDebug(" ");

	std::cout << "Нажмите ENTER клавишу, чтобы закончить." << std::endl;
	char c, c1;
	c1 = getchar();
	while (1) {
		c = getchar();
		if (c == '\n')
			break;
	}
	return 0;
}