#pragma once
#include <fstream>

class CMainFile {
	CMainFile()
	{
		m_mainStream.open("base.txt", std::fstream::in | std::fstream::out | std::fstream::app);
	}

	~CMainFile() { m_mainStream.close(); }

public:
	static CMainFile& getInstance()
	{
		static CMainFile mainFile;
		return mainFile;
	}

	void write(std::string a_info);
	void write(int a_info);

	int getBalance();

	bool& getIsChange() { return m_isChange; }
	bool isChange() { return m_isChange; }
private:
	std::fstream m_mainStream;
	int m_balance;
	bool m_isChange;
};