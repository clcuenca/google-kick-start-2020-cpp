COMPILER=g++
CPPFLAGS=-Wall -g -pedantic -pedantic-errors -std=c++11

metalharvest:
	$(COMPILER) $(CPPFLAGS) -o metalharvest metalharvest.cpp

clean:
	rm metalharvest