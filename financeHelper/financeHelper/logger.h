#pragma once
#include <string>
#include <fstream>
//#include <ctime>
//#include <iomanip>

class CLogger {

public:
	virtual void printDebug(std::string a_print) = 0;
	virtual void printError(std::string a_print) = 0;
	virtual ~CLogger() {}
};

class CFileLogger : public CLogger {

public:
	CFileLogger();

	virtual void printDebug(std::string a_print) {}
	virtual void printError(std::string a_print) {}

private:
	std::ofstream m_logFile;
};