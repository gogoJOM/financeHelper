#include "infoPrint.h"
#include <Windows.h>

void printOneLine(std::string a_line)
{
	std::cout << a_line << std::endl;
}

void writeHelp();

void writeIntro()
{
	printOneLine("������ ���������� �������� �������������� ���� �������.");
	printOneLine("");
	printOneLine("������ ��������� � �� ������������ ������� ����������� ����.");
	printOneLine("");
	writeHelp();
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

void writeCategory()
{
	printOneLine("");
	printOneLine("������� \"help\", ����� ���������� ������ ���������.");
	printOneLine("");
	printOneLine("������� ����� ���������, �� ������ ������� ��������� ��������� � ����� �������.");
	printOneLine("");
}

void writeInput()
{
	printOneLine("");
	printOneLine("������� �����������/���������� ���������� �����:");
}

void writeContinue()
{
	printOneLine("");
	printOneLine("����� ���������� ������� ������ - ������� 1.");
	printOneLine("����� ���������� ������ - ������� 0.");

	std::cin >> CMainFile::getInstance().getIsChange();
}

void writeHelp()
{
	printOneLine("� ������ ����, �������� ���� �� ���������:");
	printOneLine("");
	printOneLine("��������� - 1");
	printOneLine("��� - 2");
	printOneLine("����������� - 3");
	printOneLine("����������� - 4");
	printOneLine("������� ����� - 5");
	printOneLine("������� - 6");
	printOneLine("������ - 7");
	printOneLine("����� - 8");
	printOneLine("������ - 9");
	printOneLine("");
	printOneLine("� ������ �������, �������� ���� �� ���������:");
	printOneLine("");
	printOneLine("�������� - 10");
	printOneLine("������� ����-���� - 11");
	printOneLine("������� - 12");
	printOneLine("������ - 13");
}

void writeRes()
{
	printOneLine("");
	printOneLine("��� ������ �� ������� ������:");
	printOneLine("");
	printOneLine(std::to_string(CMainFile::getInstance().getBalance()));
}

void CInfoPrint::write(infoType a_info)
{
	switch (a_info) {
	
	case INTRO:
		writeIntro();
		break;
	case CATEGORY:
		writeCategory();
		break;
	case EINPUT:
		writeInput();
		break;
	case ECONTINUE:
		writeContinue();
		break;
	case HELP:
		writeHelp();
		break;
	case RES:
		writeRes();
		break;
	}
}