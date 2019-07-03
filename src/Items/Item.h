#pragma once
#include <string>
using std::string;

class Item
{
	public:
		Item(string name, string description, int size, int damage);
		string getCompareName();
		const char* getName();
		const char* getDescription();
		int getDamage();
		int getSize();

	private:
		int size;
		int damage;
		string name;
		string description;
};

