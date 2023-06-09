#include<iostream>
#include"List.h"

int main() {
	setlocale(LC_ALL, "Russian");
	List list;
	list.AddHead(7);
	list.AddHead(1);
	list.AddHead(10);

	list.AddTail(80);
	list.AddTail(90);
	list.AddTail(30);

	list.ShowListFromHead();
	std::cout << "\n\n";
	//list.ShowListFromTail();
	std::cout << "\n\n";

	std::cout<<list.FindElement(2)->GetData();
	std::cout << "\n\n";

	//list.ShowListFromHead();

	list.DeleteElement(2);
	//list.DeleteAll();
	std::cout << "\n\n";

	list.ShowListFromTail();
	std::cout << "\n";
	list.ShowListFromHead();




	return 0;
}