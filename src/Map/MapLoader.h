//
// Created by gnations on 7/3/2019.
//

#ifndef TEXTADVENTURE_MAPLOADER_H
#define TEXTADVENTURE_MAPLOADER_H

#include <string>
#include "../Rooms/Room.h"
#include "document.h"
#include "filereadstream.h"
using namespace rapidjson;

using std::string;
class MapLoader {

public:
	MapLoader(string filename);
	Room getRoom(int x, int y);
private:
	Document loadMap(const char *filename);
	Document map;

	Room getTile(int x, int y);
};


#endif //TEXTADVENTURE_MAPLOADER_H
