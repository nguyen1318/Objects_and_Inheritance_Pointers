#include "grizzly_bear.h"
#include <stdlib.h>

//PROTOTYPES
static void study_little(bear_t* this);
static void delete_grizzly_bear(bear_t* this);

static void study_little(bear_t* this){
	//Does nothing
	//"Is a typical bear, with very little studying."
	//"Studying just a little has no effect on a bear."
}

void delete_grizzly_bear(bear_t* this){
	free(this);
}

bear_t* create_grizzly_bear(void){
	bear_t* grizzly_bear = create_bear();

	//Overridden methods, since girzzly bear does these differently from a
	//normal bear.
	grizzly_bear->study = study_little;
	grizzly_bear->dtor = delete_grizzly_bear;
	grizzly_bear->name = "grizzly_bear";

	return grizzly_bear;
}
