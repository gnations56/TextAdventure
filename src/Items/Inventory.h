#pragma once
#include<string>
#include<list>
#include "Item.h"
using std::string;
using std::list;
class Inventory {

public:
	Inventory();
	Inventory(string name, string description, int size);
	void addItem(Item item);
	list<Item>::iterator itemhandle;
	bool checkIfFits(Item item);
	Item getItemByName(string name);
	Item getItemBySize(int size);
	list<Item> getItemList();

private:
	string name;
	string description;
	list<Item> items;
	int size;

};
