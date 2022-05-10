math: Tut12imp.o tut12utils.o
	g++ Tut12imp.o tut12utils.o -o math

Tut12imp.o: Tut12imp.cpp
	g++ -c Tut12imp.cpp

tut12utils.o: tut12utils.cpp
	g++ -c tut12utils.cpp

clean:
	del *.o math