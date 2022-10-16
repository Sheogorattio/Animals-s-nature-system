#include "queue.h"

node::node() {
	data = 0;
}

node::node(const life& obj) {
	data = obj;
}


void queue::print() {
	node temp = *head;
	for (int i = 0; i < currentSize; i++) {
		temp.data.print();
		/*cout << "Age:\t" << temp.data.getYears() << endl;
		cout << "Life limit:\t" << temp.data.getLifeLimit() << endl;*/
		cout << "\n-------------------------------------------------------\n";
		if(temp.next!=nullptr) temp = *temp.next;
	}
}

queue::~queue() {
	int temp = currentSize;
	for (int i = 0; i < currentSize; i++) {
		extract();
	}
}

queue::queue() {
	tail= nullptr;
	head = nullptr;
	currentSize = 0;
}

bool queue::isEmpty() {
	return currentSize == 0;
}

void queue::add(const life& obj) {
	node*	_node = new node;
	_node->data = obj;
	if (currentSize == 0) {
		head = _node;
		tail = _node;
	}
	else {
		tail->next = _node;
		_node->prev = tail;
		tail = _node;
	}
	currentSize++;
}

void queue::extract() {
	if (currentSize == 1) {
		delete head;
		head = tail = nullptr;
	}
	else {
		node* temp = tail->prev;
		temp->next = nullptr;
		delete tail;
		tail = temp;
		temp = nullptr;
	}
	currentSize--;
}