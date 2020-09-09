glitter: critter.o glitterCritter.o main.o
	g++ -g critter.o glitterCritter.o main.o -o glitter

critter.o: critter.cpp critter.h
	g++ -g -c critter.cpp

glitterCritter.o: glitterCritter.cpp glitterCritter.h critter.h
	g++ -g -c glitterCritter.cpp

main.o: critter.h glitterCritter.h
	g++ -g -c main.cpp

run: glitter
	./glitter

debug: glitter
	gdb glitter

clean:
	rm *.o

