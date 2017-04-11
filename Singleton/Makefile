test:test.o EagerSingleton.o
	g++ test.o EagerSingleton.o -o test
test.o:test.cpp EagerSingleton.h
	g++ -c test.cpp -o test.o
EagerSingleton.o:EagerSingleton.cpp EagerSingleton.h
	g++ -c EagerSingleton.cpp -o EagerSingleton.o
clean:
	rm *.o test
