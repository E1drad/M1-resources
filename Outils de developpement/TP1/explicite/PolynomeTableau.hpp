/*
 * PolynomeTableau.hpp
 *
 *  Created on: 26 sept. 2016
 *      Author: Charles BEGAUDEAU
 */

#ifndef POLYNOMETABLEAU_HPP_
#define POLYNOMETABLEAU_HPP_

#include <vector>
#include <math.h> 
#include <iostream>


class Polynome {
private :
	std::vector<double>* coef;
	int degree;
	
public :
	Polynome(int degree, double coef[]);
	~Polynome();
	double calcul(double elt);
	
};



#endif /* POLYNOMETABLEAU_HPP_ */