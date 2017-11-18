all: lab5

lab5: bear_sim_3000.o bear.o brown_bear.o grizzly_bear.o panda_bear.o
	gcc -Wall bear_sim_3000.o bear.o brown_bear.o grizzly_bear.o panda_bear.o\
	 -o bear_sim_3000

bear_sim_3000.o: bear_sim_3000.c
	gcc -c -Wall bear_sim_3000.c -o bear_sim_3000.o

bear.o: bear.c
	gcc -c -Wall bear.c -o bear.o

brown_bear.o: brown_bear.c
	gcc -c -Wall brown_bear.c -o brown_bear.o

grizzly_bear.o: grizzly_bear.c
	gcc -c -Wall grizzly_bear.c -o grizzly_bear.o

panda_bear.o: panda_bear.c
	gcc -c -Wall panda_bear.c -o panda_bear.o

clean: 
	rm bear_sim_3000
	rm bear_sim_3000.o
	rm bear.o
	rm brown_bear.o
	rm grizzly_bear.o
	rm panda_bear.o
