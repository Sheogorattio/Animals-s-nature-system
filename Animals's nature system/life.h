#pragma once
#include <iostream>
using namespace std;
class life
{
protected:
	int years;
	int lifeLimit;
public:
	life() = default;
	life(int y, int ll = 0);
	life(const life& obj);
	 virtual void print();
	 void setYears(int i);
	 void setLifeLimit(int i);
	 int getYears();
	 int getLifeLimit();
	life* operator=(int a);
	life* operator = (const life& a);
};


