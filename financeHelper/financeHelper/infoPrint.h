#pragma once
#include <string>
#include <iostream>
#include "mainFile.h"

enum infoType {
	INTRO,
	CATEGORY,
	EINPUT,
	ECONTINUE, 
	RES
};

class CInfoPrint {

public:
	static void write(infoType a_info);
};