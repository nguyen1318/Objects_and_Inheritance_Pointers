#include "bear.h"
#include "brown_bear.h"
#include "grizzly_bear.h"
#include "panda_bear.h"
#include <stdio.h>

int main(void){

	bear_t* bear = create_bear();
	bear_t* brown_bear = create_brown_bear();
	bear_t* grizzly_bear = create_grizzly_bear();
	bear_t* panda_bear = create_panda_bear();
	int i;
	for(i = 0; i < 100; i++){
		bear->live(bear);
		brown_bear->live(brown_bear);
		grizzly_bear->live(grizzly_bear);
		panda_bear->live(panda_bear);
	}

	printf("%20s > health: %5d, happiness: %5d\n", bear->name, bear->health,
			bear->happiness);

	printf("%20s > health: %5d, happiness: %5d\n", brown_bear->name, brown_bear->health,
			brown_bear->happiness);

	printf("%20s > health: %5d, happiness: %5d\n", grizzly_bear->name, grizzly_bear->health,
			grizzly_bear->happiness);

	printf("%20s > health: %5d, happiness: %5d\n", panda_bear->name, panda_bear->health,
			panda_bear->happiness);

	bear->dtor(bear);
	brown_bear->dtor(brown_bear);
	grizzly_bear->dtor(grizzly_bear);
	panda_bear->dtor(panda_bear);

	return 0;
}
