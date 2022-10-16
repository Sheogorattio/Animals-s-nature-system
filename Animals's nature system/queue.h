#pragma once
#include"fox.h"
#include"grass.h"
#include"rabbit.h"
#include"life.h"
#include"noLife.h"
struct node {
	life data;
	node* next = nullptr;
	node* prev = nullptr;
	node();
	node(const life& obj);
};


class queue
{
	node* tail;
	node* head;
	int currentSize;
public:
	queue();
	~queue();
	bool isEmpty();
	void add(const life& obj);
	void extract();
	void print();
};



