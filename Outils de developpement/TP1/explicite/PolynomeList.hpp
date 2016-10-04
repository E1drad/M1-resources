/*
 * PolynomeList.hpp
 *
 *  Created on: 26 sept. 2016
 *      Author: Charles BEGAUDEAU
 */

#ifndef POLYNOMELIST_HPP_
#define POLYNOMELIST_HPP_

#include <list>
#include <math.h> 
#include <iostream>


class Polynome {
private :
	std::list<double>* coef;
	int degree;
	
public :
	Polynome(int degree, double coef[]);
	~Polynome();
	double calcul(double elt);
	
};



#endif /* POLYNOMELIST_HPP_ */