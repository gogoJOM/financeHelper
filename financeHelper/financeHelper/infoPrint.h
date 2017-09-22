#pragma once
#include <string>
#include <iostream>
#include "mainFile.h"

enum infoType {
	INTRO,
	CATEGORY,
	EINPUT,
	ECONTINUE, 
	RES,
	HELP
};

class CInfoPrint {

public:
	static void write(infoType a_info);
};