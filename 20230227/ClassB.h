#pragma once
#include "ClassA.h"

class ClassB {
public:
	void setValue(ClassA& obj, int newVal);	
	int getValue() const;
};