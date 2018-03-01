all: pointTest distanceTest

point.o:
	g++ -c point.cc

pointTest: point.o
	g++ point.cpp -o pointTest

clean1:
	rm -f point.o pointTest

distance.o:
	g++ -c pointDistance.cc

distanceTest: distance.o
	g++ pointDistance.cpp -o distanceTest

clean2:
	rm -f distance.o distanceTest
