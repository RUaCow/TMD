#ifndef TmDmAnAgEr_H
#define TmDmAnAgEr_H



class Map;
class SDL_GUI;
union SDL_Event;


class TMDManager
{
	Map* map;
	SDL_GUI* gui;
	SDL_Event* event;

public:
	//constructor
	TMDManager(void);
	//destructor
	~TMDManager(void);

	//Run ...
	int RUN(void);
};

#endif