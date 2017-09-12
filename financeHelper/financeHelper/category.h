#pragma once
#include <string>
#include <iostream>
#include "mainFile.h"

enum categoryType {
	FOOD,
	TRANSPORT,
	CLOTHES,
	HOLIDAY,
	SALARY,
	SALE,
	OTHER
};

struct SCategoryComplect {
	SCategoryComplect() {}
	SCategoryComplect(categoryType a_type, int a_coef) : m_type(a_type), m_coef(a_coef) {}
	categoryType m_type;
	int m_coef;
};

class CCategory {

public:
	virtual void writeInfo (std::string a_info) = 0;
	virtual void writeInfo (int a_info) = 0;
	virtual ~CCategory() {}
private:
	SCategoryComplect m_complect;
};

class CIncCategory : public CCategory {

public:
	CIncCategory() {}
	virtual ~CIncCategory() {}

	virtual void writeInfo (std::string a_info);
	virtual void writeInfo (int a_info);
};

class CExpCategory : public CCategory {

public:
	virtual void writeInfo (std::string a_info);
	virtual void writeInfo (int a_info);

	virtual ~CExpCategory() {}
};