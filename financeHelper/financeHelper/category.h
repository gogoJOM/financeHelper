#pragma once
#include <string>
#include <iostream>
#include "mainFile.h"

class CCategory {

public:
	virtual void writeInfo (std::string a_info) = 0;
	virtual void writeInfo (int a_info) = 0;
	virtual ~CCategory() {}
};

class CIncCategory : public CCategory {

public:
	virtual void writeInfo (std::string a_info);
	virtual void writeInfo (int a_info);
};

class CExpCategory : public CCategory {

public:
	virtual void writeInfo (std::string a_info);
	virtual void writeInfo (int a_info);
};