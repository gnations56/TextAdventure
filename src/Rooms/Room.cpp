//
// Created by ichika on 7/2/19.
//

#include "Room.h"

Room::Room(string description, Inventory inventory) : Tile() {
	this->inventory = inventory;
	this->tile = Tile();
	this->tile.setDescription(description);
	this->tile.setType(ROOM);
}
