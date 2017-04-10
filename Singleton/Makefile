test:test.o Singleton.o
	g++ test.o Singleton.o -o test
test.o:test.cpp Singleton.h
	g++ -c test.cpp -o test.o
Singleton.o:Singleton.cpp Singleton.h
	g++ -c Singleton.cpp -o Singleton.o
clean:
	rm *.o test
