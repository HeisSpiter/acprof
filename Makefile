all: build

aspect: functions.cpp main.cpp prof.ah
	ac++ -v 9 -c classes.cpp -o classes_comp.cpp -p . -a prof.ah
	ac++ -v 9 -c functions.cpp -o functions_comp.cpp -p . -a prof.ah
	ac++ -v 9 -c main.cpp -o main_comp.cpp -p . -a prof.ah

build: aspect
	g++ -Wall -pedantic -ansi -g -o main main_comp.cpp classes_comp.cpp functions_comp.cpp -lm

normal: main.cpp
	g++ -Wall -pedantic -ansi -g -o main main.cpp classes.cpp functions.cpp -lm

clean:
	rm -rvf main_comp.cpp functions_comp.cpp classes_comp.cpp *~
