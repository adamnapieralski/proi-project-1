all: proi_1

proi_1: proi_1.o polynomial.o shell.o
	g++ -std=c++11 -g -o proi_1 proi_1.o polynomial.o shell.o

proi_1.o: proi_1.cpp
	g++ -std=c++11 -g -c proi_1.cpp

polynomial.o: polynomial.cpp
	g++ -std=c++11 -g -c polynomial.cpp

shell.o: shell.cpp
	g++ -std=c++11 -g -c shell.cpp

clean:
	rm *0 proi_1
