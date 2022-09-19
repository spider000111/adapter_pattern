#pragma once
#include "ITarget.h"

class Client
{
	ITarget& tar;
public :
	Client(ITarget& a): tar(a) {
	}

	void process() {
		tar.request();
	}
};

