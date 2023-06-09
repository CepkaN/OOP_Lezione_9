#include<iostream>
#include"Node.h"

Node::Node(int data):_data(data),next(nullptr),prev(nullptr){}

int Node::GetData() {
	return _data;
}

Node::~Node() {
	//printf("Звено удалено.\n");          // чтобы iostream не подключать
	std::cout << "Звено удалено.\n";
}