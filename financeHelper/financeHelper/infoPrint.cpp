#include "infoPrint.h"
#include <Windows.h>

void printOneLine(std::string a_line)
{
	std::cout << a_line << std::endl;
}

void CIntroInfoPrint::write(std::string a_info)
{
	printOneLine("Данное приложение помогает контролировать Ваши финансы.");
	printOneLine("");
	printOneLine("Чтобы внести некоторые данные об изменениях в Ваших финансах - введите 1.");
	printOneLine("Чтобы посмотреть текущий баланс - введите 0.");
	printOneLine("");
	std::cin >> CMainFile::getInstance().getIsChange();// >> std::endl;
	if (CMainFile::getInstance().isChange())
		printOneLine("Режим редактиования.");
	else
		printOneLine("Режим вывода информации.");
}

void CResInfoPrint::write(std::string a_info)
{
	printOneLine(a_info);
}