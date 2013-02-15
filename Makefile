all: aspect

aspect: classes.cpp functions.cpp main.cpp prof.ah
	ag++ -v 9 -p . -a prof.ah -o main --Xcompiler -Wall -pedantic -ansi -g main.cpp classes.cpp functions.cpp

normal: main.cpp
	g++ -Wall -pedantic -ansi -g -o main main.cpp classes.cpp functions.cpp -lm

clean:
	rm -rvf main_comp.cpp functions_comp.cpp classes_comp.cpp *~
