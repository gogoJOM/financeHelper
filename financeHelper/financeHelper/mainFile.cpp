#include "mainFile.h"
#include <iostream>


void CMainFile::write(std::string a_info)
{
	if (m_mainStream.is_open())
		m_mainStream << a_info.c_str() << " ";
}

void CMainFile::write(int a_info)
{
	m_balance += a_info;
	if (m_mainStream.is_open())
		m_mainStream << a_info << std::endl;
	else
		std::cout << "error" << std::endl;
}

int CMainFile::getBalance()
{
	return m_balance;
}