#include "life.h"
life::life(int y, int ll)
{
	years = y;
	lifeLimit = ll;	
}
life::life(const life& obj)
{
	years = obj.years;
	lifeLimit = obj.lifeLimit;
}
void life::print()
{
	cout << "Years old:\t" << years << endl;
	cout << "Life limit:\t" << lifeLimit << endl;
}

life* life::operator=(int a) {
	years = a;
	lifeLimit = a;
	return this;
}

life* life::operator=(const life& obj) {
	years = obj.years;
	lifeLimit = obj.lifeLimit;
	return this;
}

void life::setYears(int i) {
	if (lifeLimit < i) {
		cout << i << " is incorrect age. " << i << ">" << lifeLimit << "(life limit)\n";
		return;
	}
	else if (i < 0) {
		cout << i << " is incorrect age. " << i << "<0\n";
		return;
	}
	years = i;
}

void life::setLifeLimit(int i) {
	if (i < 0) {
		cout << i << " is incorrect life limit. " << i << "<0\n";
		return;
	}
	lifeLimit = i;
	if (lifeLimit < years) years = lifeLimit;
}

int life::getYears() {
	return years;
}

int life::getLifeLimit() {
	return lifeLimit;
}