#ifndef BEAR_H
#define BEAR_H

//Basics of a bear: name, what it eats, what it drinks, how it sleeps, how it
//studies, status of existence, and destructor value that frees it back into the
//wild
typedef struct bear_t{
	char* name;
	void (*eat)(struct bear_t* this);
	void (*drink)(struct bear_t* this);
	void (*sleep)(struct bear_t* this);
	void (*study)(struct bear_t* this);
	void (*live)(struct bear_t* this);
	void (*dtor)(struct bear_t* this);
	int health;
	int happiness;
} bear_t;

bear_t* create_bear(void);

#endif
