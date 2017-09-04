#include "infoPrint.h"
#include <Windows.h>

void printOneLine(std::string a_line)
{
	std::cout << a_line << std::endl;
}

void CIntroInfoPrint::write(std::string a_info)
{
	printOneLine("������ ���������� �������� �������������� ���� �������.");
	printOneLine("");
	printOneLine("����� ������ ��������� ������ �� ���������� � ����� �������� - ������� 1.");
	printOneLine("����� ���������� ������� ������ - ������� 0.");
	printOneLine("");
	std::cin >> CMainFile::getInstance().getIsChange();// >> std::endl;
	if (CMainFile::getInstance().isChange())
		printOneLine("����� �������������.");
	else
		printOneLine("����� ������ ����������.");
}

void CResInfoPrint::write(std::string a_info)
{
	printOneLine(a_info);
}