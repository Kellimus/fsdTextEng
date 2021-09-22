# --- makefile for Quest For The Sword --- #

Quest_For_The_Sword: Quest_For_The_Sword.o
	g++ -o Quest_For_The_Sword *.o -Wall -std=c++11

Quest_For_The_Sword.o: Quest_For_The_Sword.cpp
	g++ -c Quest_For_The_Sword.cpp -Wall -std=c++11

clean:
	rm *.o Quest_For_The_Sword

compile: Quest_For_The_Sword.cpp
	g++ -c Quest_For_The_Sword.cpp -Wall -std=c++11

debug_main: Quest_For_The_Sword.cpp
	g++ -g Quest_For_The_Sword.cpp -Wall -std=c++11
