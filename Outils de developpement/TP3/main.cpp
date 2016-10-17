/**
 * Main.cpp
 * 
 * This program takes in input a data file with meta-data indicated by >  and data in lines
 * and produces a pdf with a statistical graph displaying the data.
 * 
 * This program is distributed as is and comes with no guarantees. 
 * 
 *     @Version: 1.0
 *     @Date:    17 october 2016
 *     @Authors: Charles BEGAUDEAU Charlene SERVANTIE
 */

#include "pdflib.hpp"
#include <iostream>
#include <string>
#include <fstream>


/**
 * \brief	Main function that loads the PDFlib and makes the pdf out of the input file.
 * \details	Main function load PFDlib and try to open the input file, it throws an exception
 * if the file does not exist or if the composition of the input file is incorrect.
 * \param	args string the name of the input file.
 */
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
