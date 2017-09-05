#include "logger.h"
#include <ctime>
#include <chrono>
#include <iomanip>

CFileLogger::CFileLogger()
{
	m_logFile.open("log.txt", std::ofstream::app);

	std::time_t t = std::time(0);
	std::tm local;// = std::localtime(&t);
	localtime_s(&local, &t);
	m_logFile << std::put_time(&local, "%F") << " ";
	m_logFile << std::put_time(&local, "%T") << std::endl;

}