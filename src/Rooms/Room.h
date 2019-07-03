//
// Created by ichika on 7/2/19.
//

#ifndef TEXTADVENTURE_ROOM_H
#define TEXTADVENTURE_ROOM_H


#include "Tile.h"
#include "../Items/Inventory.h"

enum Directions {NORTH,SOUTH,EAST,WEST};

class Room : Tile{

public:
	Room(string description, Inventory inventory);

private:

	Inventory inventory;
	Tile tile;

};


#endif //TEXTADVENTURE_ROOM_H
