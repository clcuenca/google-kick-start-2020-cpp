COMPILER=g++
CPPFLAGS=-Wall -g -pedantic -pedantic-errors -std=c++11

plates:
	$(COMPILER) $(CPPFLAGS) -o plates plates.cpp

clean:
	rm plates