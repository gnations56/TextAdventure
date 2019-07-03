//
// Created by ichika on 7/2/19.
//

#include "Wall.h"

Wall::Wall(string description, TileType type) : Tile() {
	TileType wall = WALL;
this->tile = Tile();
tile.setDescription(description);
tile.setType(type);
}
