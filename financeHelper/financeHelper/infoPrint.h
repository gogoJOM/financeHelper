#pragma once
#include <string>
#include <iostream>
#include "mainFile.h"

class CInfoPrint {

public:
	virtual void write (std::string a_info) = 0;
};

class CIntroInfoPrint : public CInfoPrint {

public:
	virtual void write(std::string a_info);
};

class CResInfoPrint : public CInfoPrint {

public:
	virtual void write(std::string a_info);
};