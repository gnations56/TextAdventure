//
// Created by ichika on 7/2/19.
//

#include "Tile.h"

TileType Tile::getTileType() {
	return type;
}

const char *Tile::getDescription() {
	return description.c_str();
}

Tile::Tile() {

}

void Tile::setType(TileType type) {
this->type = type;
}

void Tile::setDescription(string desc) {
this->description = desc;
}
