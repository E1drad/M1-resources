/**
 * Header file of parser.cpp
 *     @Version: 1.0
 *     @Date:    17 october 2016
 *     @Authors: Charles BEGAUDEAU Charlene SERVANTIE
 */

#ifndef PARSER_HPP_
#define PARSER_HPP_

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

/**
 * Parser is the class parsing the files to get the data
 * and the metadata
 */
class Parser{
private:
  
public:
  void parse(fstream file);
  
};

#endif /* PARSER_HPP_ */
