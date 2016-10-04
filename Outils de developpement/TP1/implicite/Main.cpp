/*
 * Main.cpp
 *
 *  Created on: 26 sept. 2016
 *      Author: Charles BEGAUDEAU
 */
#include "Polynome.hpp"
#include <iostream>
#include <string>

int main(void){
	int degree;
	int x;
	std::cout << "Degree du polynome : ";
	std::cin >> degree;
	
	std::cout << "\nEcrire les coef dans l'ordre croissant des puissances associees."<< std::endl;
	
	double tab[degree];
	for(int i = 0; i <= degree; ++i){
		std::cout << "Ecrire le coef de degree " << i << " : " << std::endl;
		std::cin >> tab[i];
	}
	for(int i = 0; i <= degree; ++i){
		std::cout << "tab at "<< i << " : " << tab[i] << std::endl;
	}
	Polynome* polynome = new Polynome(degree, tab);
	std::cout << "Valeur de x : " << std::endl;
	std::cin >> x;
	std::cout << polynome->calcul(x) << std::endl; 

	return 0;
}