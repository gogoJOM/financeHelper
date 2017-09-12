#include "mainFile.h"
#include <sstream>


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

void CMainFile::writeBalance()
{
	auto endIt = m_fileContent.end() - 1;
	std::stringstream ss;
	std::time_t t = std::time(0);
	std::tm local;
	localtime_s(&local, &t);
	ss << std::put_time(&local, "%F");
	std::string date;
	ss >> date;
	std::string fileDate = *endIt;
	if (fileDate.find(date) == std::string::npos) {
		date += " " + std::to_string(m_balance);
		m_fileContent.push_back(date);
	}
	else {
		m_fileContent[m_fileContent.size() - 1] = date + " " + std::to_string(m_balance);
	}
}

int CMainFile::getBalance()
{
	return m_balance;
}

void CMainFile::readFile()
{
	if (m_balanceStream.is_open()) {
		std::string line;
		while (getline(m_balanceStream, line)) {
			m_fileContent.push_back(line);
		}
	}
}

void CMainFile::writeFile()
{
	writeBalance();
	for (auto it = m_fileContent.begin(); it < m_fileContent.end(); ++it)
		m_balanceStreamOut << *it << std::endl;
	m_balanceStreamOut.close();
}