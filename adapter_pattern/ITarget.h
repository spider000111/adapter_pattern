#pragma once
#include <iostream>
#include "adaptee.h"

class ITarget
{

public:
	virtual void request() = 0;
};

class Adapter: public ITarget {
	adaptee& ext_adaptee;
public:
	Adapter(adaptee& a):ext_adaptee(a) {}
	void request() {
		ext_adaptee.specific_request();
	}

};