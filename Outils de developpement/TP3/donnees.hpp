/**
 * Header file of donnees.cpp
 * Donnees is the class that represents the data in
 * Contains a string vector of metadata (title, note, subtitle), a string vector of column names
 * a double vector of the numbers in the file
 * getters / setters
 * 
 */
#ifndef DONNEES_HPP_
#define DONNEES_HPP_

#include <vector>
#include <string>
#include <fstream>

class Donnees{
private:
  std::vector<string> metadatas;
  std::vector<string> columns;
  std::vector<double> datas;
 
public:
  Donnees(fstream file);
  ~Donnees();
  std::vector<string> getMetadatas();
  std::vector<string> getColumns();
  std::vector<double> getDatas();
  void setMetadatas();
  void setColumns();
  void setDatas();
  
}  

#endif /* DONNEES_HPP_ */
