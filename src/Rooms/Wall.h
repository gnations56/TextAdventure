//
// Created by ichika on 7/2/19.
//

#ifndef TEXTADVENTURE_WALL_H
#define TEXTADVENTURE_WALL_H


#include "Tile.h"

class Wall : Tile {
	public:
		Wall(string description, TileType tile);
		Tile getTile();
	private:
		Tile tile;
};


#endif //TEXTADVENTURE_WALL_H
