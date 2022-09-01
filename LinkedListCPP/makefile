llDemo: main.o Node.o LinkedList.o
	g++ -g main.o Node.o LinkedList.o -o llDemo

main.o: main.cpp Node.h LinkedList.h
	g++ -c -g main.cpp

LinkedList.o: LinkedList.cpp LinkedList.h  Node.h
	g++ -c -g LinkedList.cpp

Node.o: Node.cpp Node.h
	g++ -c -g Node.cpp

clean:
	rm *.o
	rm llDemo

run: llDemo
	./llDemo

debug: llDemo
	gdb llDemo
