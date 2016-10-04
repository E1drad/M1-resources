impl_poly = PolynomeList
CC=g++
CFLAGS=-c -Wall -Wextra -std=c++11
LDFLAGS=
SOURCES=Main.cpp Polynome.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=Polynome
all: rename1 rename2 $(SOURCES) $(EXECUTABLE)
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

.PHONY: rename1
rename1: 
	cp $(impl_poly).cpp Polynome.cpp
		
.PHONY: rename2
rename2: 
	cp $(impl_poly).hpp Polynome.hpp

clean:
	rm Polynome
	rm Polynome.cpp
	rm Polynome.hpp
	rm *.o
