#pragma once
#include <fstream>
#include <vector>
#include <string>
#include "logger.h"
#include <iostream>

typedef std::vector<std::string> vectorStr;

class CMainFile {
	CMainFile()
	{
		m_mainStream.open("base.txt", std::fstream::in | std::fstream::out | std::fstream::app);
		m_balanceStream.open("balance.txt", std::fstream::in);
		readFile();
		m_balanceStream.close();
		m_balanceStreamOut.open("balance.txt", std::fstream::out);
		if (m_fileContent.size() > 0)
			m_balance = stoi(m_fileContent[0]);
		else
			m_balance = 0;
	}

	~CMainFile() 
	{ 
		m_mainStream.close(); 
		if (m_fileContent.size() > 0)
			m_fileContent[0] = std::to_string(m_balance);
		else
			m_fileContent.push_back(std::to_string(m_balance));
		writeFile();
	}

public:
	static CMainFile& getInstance()
	{
		static CMainFile mainFile;
		return mainFile;
	}

	void write(std::string a_info);
	void write(int a_info);
	void writeBalance();

	int getBalance();

	bool& getIsChange() { return m_isChange; }
	bool isChange() { return m_isChange; }
private:
	void readFile();
	void writeFile();

	vectorStr m_fileContent;
	std::fstream m_mainStream;
	std::fstream m_balanceStream;
	std::fstream m_balanceStreamOut;
	int m_balance;
	bool m_isChange;
};