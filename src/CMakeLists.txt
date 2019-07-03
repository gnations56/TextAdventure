set(core_SRCS Items/Inventory.cpp Items/Inventory.h Items/Item.cpp Items/Item.h Rooms/Tile.cpp Rooms/Tile.h Rooms/Wall.cpp Rooms/Wall.h Rooms/Room.cpp Rooms/Room.h Map/MapLoader.cpp Map/MapLoader.h)

add_library(core ${core_SRCS})
add_executable(exe main.cpp)
target_link_libraries(exe core)