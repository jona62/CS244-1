all: rectTest

rectangle.o:
	g++ -c rectangle.cc

rectTest: rectangle.o
	g++ rectangle.cpp -o rectTest

clean:
	rm -f rectangle.o rectTest
