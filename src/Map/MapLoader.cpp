//
// Created by gnations on 7/3/2019.
//

#include "MapLoader.h"

Room MapLoader::getRoom(int x, int y) {

	return getTile(x,y);
}

MapLoader::MapLoader(string filename) {

}

Document MapLoader::loadMap(const char *filename) {
	FILE* fp = fopen(filename,"r");
	char readBuffer[65536];
	FileReadStream is(fp,readBuffer, sizeof(readBuffer));
	map.ParseStream(is);
}

Room MapLoader::getTile(int x, int y) {
	Value xjson = map[std::to_string(x).c_str()].GetObject();
	Value yjson = xjson[std::to_string(y).c_str()].GetObject();
	Value roomjson = yjson["room"].GetObject();
	string description = roomjson["description"].GetString();
	Value




	return Room(std::basic_string(), Inventory());
}

