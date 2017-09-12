#include "logger.h"

CFileLogger::CFileLogger()
{
	m_logFile.open("log.txt", std::ofstream::app);

	std::time_t t = std::time(0);
	std::tm local;
	localtime_s(&local, &t);
	m_logFile << std::put_time(&local, "%F") << " ";
	m_logFile << std::put_time(&local, "%T") << std::endl;
}

void CFileLogger::printDebug(std::string a_print)
{
	m_logFile << "DEBUG: " << a_print << std::endl;
}

void CFileLogger::printError(std::string a_print)
{
	m_logFile << "ERROR: " << a_print << std::endl;
}

void CFileLogger::printWarn(std::string a_print)
{
	m_logFile << "WARNING: " << a_print << std::endl;
}

void COutputLogger::printDebug(std::string a_print)
{
	std::string outStr = "DEDUG: " + a_print + "\n";
	OutputDebugStringA(outStr.c_str());
}

void COutputLogger::printError(std::string a_print)
{
	std::string outStr = "ERROR: " + a_print + "\n";
	OutputDebugStringA(outStr.c_str());
}

void COutputLogger::printWarn(std::string a_print)
{
	std::string outStr = "WARNING: " + a_print + "\n";
	OutputDebugStringA(outStr.c_str());
}