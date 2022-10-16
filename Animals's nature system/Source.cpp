#include<iostream>
#include"life.h"
#include"queue.h"
#include"rabbit.h"
using namespace std;
int main(){
	life* arr = new rabbit[5];
	queue Q;
	for (int i = 0; i < 5; i++) {
		arr[i].setLifeLimit(i + 1);
		arr[i].setYears(i);
		Q.add(arr[i]);
	}
	Q.print();
	/*cout << "\n\n\n\n";
	Q.extract();
	Q.print();*/
	//queue Q;
	//life ob1(0, 0);
	//life ob2(2, 2);
	//Q.add(ob1);
	//Q.add(ob2);
	//Q.extract();
	//Q.print();
	/*Q.extract();
	system("cls");
	Q.print();*/
	/*for (int i = 0; i < 5; i++) {
		Q.extract();
	}*/
}