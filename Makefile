all: build

aspect: main.cpp prof.ah
	ac++ -v 9 -c main.cpp -o main_comp.cpp -p . -a prof.ah

build: aspect
	g++ -Wall -pedantic -ansi -g -o main main_comp.cpp -lm

normal: main.cpp
	g++ -Wall -pedantic -ansi -g -o main main.cpp -lm

clean:
	rm -rvf main_comp.cpp *~
