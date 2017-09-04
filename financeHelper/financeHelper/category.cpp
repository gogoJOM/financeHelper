#include "category.h"

void CIncCategory::writeInfo(std::string a_info)
{
	CMainFile::getInstance().write(a_info);
}

void CIncCategory::writeInfo(int a_info)
{
	CMainFile::getInstance().write(a_info);
}

void CExpCategory::writeInfo(std::string a_info)
{
	CMainFile::getInstance().write(a_info);
}

void CExpCategory::writeInfo(int a_info)
{
	int info = -a_info;
	CMainFile::getInstance().write(info);
}