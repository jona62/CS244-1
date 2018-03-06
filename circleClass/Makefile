all: circleTest

circle.o:
	g++ -c circle.cc

circleTest: circle.o
	g++ circle.cpp -o circleTest

clean:
	rm -f circle.o circleTest
