all: libcalP.so libcalT.so IF97
install: 
	 cp libcalP.so /usr/lib/
	 cp libcalT.so /usr/lib/
IF97: IF97.o calP.h calT.h
	g++ -o IF97 IF97.o -L./ -lcalP -lcalT
IF97.o: IF97.cpp
	g++ -c -o IF97.o IF97.cpp
libcalP.so: calP.o	
	g++ -shared -o libcalP.so calP.o
calP.o: calP.cpp
	g++ -c  -O3 -Wall -fPIC -o calP.o calP.cpp
libcalT.so: calT.o
	g++ -shared -o libcalT.so calT.o
calT.o: calT.cpp
	g++ -c  -O3 -Wall -fPIC -o calT.o calT.cpp
clean:
	rm -f libcalP.so libcalT.so IF97 IF97.o calP.o calT.o /usr/lib/libcalP.so /usr/lib/libcalT.so
	