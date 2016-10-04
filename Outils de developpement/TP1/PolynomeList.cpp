/*
 * PolynomeList.cpp
 *
 *  Created on: 26 sept. 2016
 *      Author: Charles BEGAUDEAU
 */

#include "Polynome.hpp"

 	Polynome::Polynome(int degree, double paramCoef[]){
 		this->degree = degree;
 		this->coef = new std::list<double>();
 		for(int i = 0; i <= degree; ++i){
			this->coef->push_back(paramCoef[i]);
		}
 	}

 	Polynome::~Polynome(){

 	}

	double Polynome::calcul(double elt){
		double resultat;
		int j = 0;
		for(std::list<double>::iterator i = this->coef->begin(); i != this->coef->end(); ++i){
			resultat = resultat + pow(elt, j) * *i;
			j = j + 1;
		}
		return resultat;
	}