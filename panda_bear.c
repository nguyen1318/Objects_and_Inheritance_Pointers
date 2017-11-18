#include "panda_bear.h"
#include <stdlib.h>

//PROTOTYPES
static void eat_pizza(bear_t* this);
static void drink_whisky(bear_t* this);
static void study_none(bear_t* this);
static void delete_panda_bear(bear_t* this);

//Panda bear eat's pizza for some reason. Not bamboo...
static void eat_pizza(bear_t* this){
	this->health--;
	this->happiness++;
}

//Whisky is good for the soul. So why drink water?
static void drink_whisky(bear_t* this){
	this->health -= 2;
	this->happiness += 2;
}

//Studying and homework sucks...
static void study_none(bear_t* this){
	this->happiness -= 5;
	this->health = -100;
}

void delete_panda_bear(bear_t* this){
	free(this);
}

bear_t* create_panda_bear(void){
	bear_t* panda_bear = create_bear();

	//Overridden methods, since the panda bear is different from the average
	//bear.
	panda_bear->eat = eat_pizza;
	panda_bear->drink = drink_whisky;
	panda_bear->study = study_none;
	panda_bear->dtor = delete_panda_bear;
	panda_bear->name = "panda_bear";

	return panda_bear;
}
