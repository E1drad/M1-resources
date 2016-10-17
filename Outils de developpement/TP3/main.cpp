/*
 * Main.cpp
 *
 *  Created on: 17 octo. 2016
 *      Author: Charles BEGAUDEAU Charlene SERVANTIE
 */

#include "pdflib.hpp"
#include <iostream>
#include <string>
#include <fstream>

int



int main(string args){
	try {
		PDFlib *p;
		fstream f;
		f.open(namefile.c_str(), ios::in);//TODO : Add a Try catch
		

	} catch (PDFlib::Exception &ex) {
		std::cerr << "PDFlib exception: " << std::endl;
		std::cerr << "[" << ex.get_errnum() << "] " << ex.get_apiname()
			<< ": " << ex.get_errmsg() << std::endl;
		return 2;
	}
	return 0;
}