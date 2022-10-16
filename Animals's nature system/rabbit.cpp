#include "rabbit.h"

rabbit::rabbit(int a, int ll) :life(a, ll) {}

void rabbit::print() {
	cout << "Rabbit\n";
	life::print();
}