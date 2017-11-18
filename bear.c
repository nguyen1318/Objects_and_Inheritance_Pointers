#include <stdlib.h>
#include "bear.h"

//PROTOTYPES
static void eat_fish(bear_t*);
static void drink_water(bear_t*);
static void sleep_lots(bear_t*);
static void live(bear_t*);
static void delete_bear(bear_t*);

static void eat_fish(bear_t* this){
	this->health++;
}

static void drink_water(bear_t* this){
	this->health++;
}

static void sleep_lots(bear_t* this){
	this->health++;
}


static void live(bear_t* this){

	//First, checks if this is NULL, then checks if this->pointer is NULL.
	//Runs only when both are not NULL
	if(this){
		if(this->eat){
			this->eat(this);
		}
	}
	if(this){
		if(this->drink){
			this->drink(this);
		}	
	}
	if(this){
		if(this->sleep){
			this->sleep(this);
		}
	}
	if(this){
		if(this->study){
			this->study(this);
		}
	}
}

static void delete_bear(bear_t* this){
	free(this);
}

bear_t* create_bear(void){
	bear_t* bear = (bear_t*)malloc(sizeof(bear_t));
	bear->eat=eat_fish;
	bear->drink=drink_water;
	bear->sleep=sleep_lots;
	bear->live=live;
	
	//Default bear does not study
	bear->study=NULL;

	bear->health=0;
	bear->happiness=0;
	bear->dtor=delete_bear;
	bear->name="bear";
	return bear;
}
