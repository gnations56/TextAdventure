#include "Inventory.h"
#include "Item.h"

Inventory::Inventory(string name, string description, int size)
{
	this->name = name;
	this->description = description;
	this->size = size;
}

void Inventory::addItem(Item item)
{
	items.push_back(item);
}

bool Inventory::checkIfFits(Item item)
{
	if ( (size += item.getSize()) > size) {
		return false;
	}
	return true;
}

Item Inventory::getItemByName(string name)
{
	for (Item i : items) {
		if (i.getCompareName() == name) {
			return i;
		}
	}

}

Item Inventory::getItemBySize(int size)
{
	for (Item i : items) {
		if (i.getSize() == size) {
			return i;
		}
	}
}

list<Item> Inventory::getItemList()
{
	return items;
}

Inventory::Inventory() {
	this->name = "";
	this->description = "";
	this->size = 0;
}
