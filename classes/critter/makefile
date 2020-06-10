game: critter.o car.o main.o
	g++ critter.o car.o main.o -o game

main.o: critter.h car.h main.cpp
	g++ -c main.cpp

car.o:	car.h critter.h car.cpp
	g++ -c car.cpp

critter.o: critter.h critter.cpp
	g++ -c critter.cpp

clean:
	rm *.o
	rm game

run:	game
	./game

