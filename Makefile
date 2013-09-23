all: aspect

aspect_mt: classes.cpp functions.cpp main.cpp prof.ah
	ag++ -v 9 -p . -a prof.ah -D ACPROF_WITH_MULTITHREAD -o main_mt --Xcompiler -Wall -pedantic -ansi -g -lpthread main.cpp classes.cpp functions.cpp

aspect: classes.cpp functions.cpp main.cpp prof.ah
	ag++ -v 9 -p . -a prof.ah -o main_acp --Xcompiler -Wall -pedantic -ansi -g main.cpp classes.cpp functions.cpp

normal: main.cpp
	g++ -Wall -pedantic -ansi -g -o main_std main.cpp classes.cpp functions.cpp -lm

clean:
	rm -rvf *~
