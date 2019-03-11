all: proi_1

proi_1: proi_1.o polynomial.o
	g++ -std=c++11 -g -o proi_1 proi_1.o polynomial.o

proi_0.o: proi_1.cpp
	g++ -std=c++11 -g -c proi_1.cpp

university.o: polynomial.cpp
	g++ -std=c++11 -g -c polynomial.cpp

clean:
	rm *0 proi_1
