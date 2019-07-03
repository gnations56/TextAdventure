#include "Item.h"

Item::Item(string name, string description, int size, int damage)
{
	this->name = name;
	this->description = description;
	this->size = size;
	this->damage = damage;
}

string Item::getCompareName()
{
	return name;
}

const char* Item::getName()
{
	return name.c_str();
}

const char* Item::getDescription()
{
	return description.c_str();
}

int Item::getDamage()
{
	return damage;
}

int Item::getSize()
{
	return size;
}
