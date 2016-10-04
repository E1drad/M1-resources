/*
 * PolynomeTableau.cpp
 *
 *  Created on: 26 sept. 2016
 *      Author: Charles BEGAUDEAU
 */

#include "Polynome.hpp"

 	Polynome::Polynome(int degree, double paramCoef[]){
 		this->degree = degree;
 		this->coef = new std::vector<double>();
 		for(int i = 0; i <= degree; ++i){
			this->coef->push_back(paramCoef[i]);
		}
 	}

	Polynome::~Polynome(){
 		
 	}


	double Polynome::calcul(double elt){
		double resultat = 0;
		for(unsigned int i = 0; i < this->coef->size(); ++i){
			resultat = resultat + pow(elt, i) * this->coef->at(i);
		}
		return resultat;
	}