#include "brown_bear.h"
#include <stdlib.h>

//PROTOTYPES
static void eat_veggies(bear_t* this);
static void study_hard(bear_t* this);
static void delete_brown_bear(bear_t* this);

//Brown bears prefer veggies over fish
static void eat_veggies(bear_t* this){
	this->health += 2;
}

//Brown bears know how to study
static void study_hard(bear_t* this){
	this->health--;
	this->happiness += 5;
}

static void delete_brown_bear(bear_t* this){
	free(this);
}

bear_t* create_brown_bear(void){
	bear_t* brown_bear = create_bear();

	//Because the brown bear does things different then the normal bear, it's
	//functions are overridden here.
	brown_bear->eat = eat_veggies;
	brown_bear->study = study_hard;
	brown_bear->dtor = delete_brown_bear;
	brown_bear->name = "brown_bear";

	return brown_bear;
}
