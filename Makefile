CXX = g++
CXXFLAGS	= -std=c++11 -Wall

all: animal

clean:
	rm Animal.o animal

animal: Animal.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp Animal.o -o animal

Animal.o: Animal.cpp
	$(CXX) $(CXXFLAGS) -c Animal.cpp

