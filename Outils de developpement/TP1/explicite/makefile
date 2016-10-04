impl_poly = PolynomeList

all: rename1 rename2 Polynome

.PHONY: rename1
rename1: 
	cp $(impl_poly).cpp Polynome.cpp
		
.PHONY: rename2
rename2: 
	cp $(impl_poly).hpp Polynome.hpp

Polynome: Main.o Polynome.o
	g++ -o Polynome -Wall -Wextra -std=c++11 Main.o Polynome.o

Main.o: Main.cpp Polynome.hpp Polynome.hpp
	g++ -c -Wall -Wextra -std=c++11 Main.cpp 

Polynome.o: Polynome.cpp Polynome.hpp
	g++ -c -Wall -Wextra -std=c++11 Polynome.cpp

clean:
	rm Polynome
	rm Polynome.cpp
	rm Polynome.hpp
	rm *.o
