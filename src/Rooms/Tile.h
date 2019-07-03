//
// Created by ichika on 7/2/19.
//

#ifndef TEXTADVENTURE_TILE_H
#define TEXTADVENTURE_TILE_H

#include <string>
using std::string;

enum TileType {WALL,WINDOW,ROOM};

class Tile {
    public:
		Tile();
    	const char* getDescription();
    	TileType getTileType();
		void setDescription(string desc);
		void setType(TileType type);
	protected:
		string description;
		TileType type;



};


#endif //TEXTADVENTURE_TILE_H
