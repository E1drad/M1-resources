/**
 * Header file of donnees.cpp
 * 
 *     @Version: 1.0
 *     @Date:    17 october 2016
 *     @Authors: Charles BEGAUDEAU Charlene SERVANTIE
 */
#ifndef DONNEES_HPP_
#define DONNEES_HPP_

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

/**
 * Donnees is the class representing the data from files
 *  with its metadata, column names and values
 */
class Donnees{
private:
  /**
   * \brief A vector of strings containing metadata
   */
  std::vector<string> metadatas;
  /**
   * \brief A vector of strings containing the column names
   */
  std::vector<string> columns;
  /**
   * \brief A vector of doubles containing the data from the columns
   */
  std::vector<double> datas;
 
public:
  /**
   * \brief Constructor of the Donnees class
   * \details Takes a file and parses it into the data. Uses a parser
   * \param file is a fstream 
   */
  Donnees(fstream file);
  /**
   * \brief Destructor of the Donnees class
   */
  ~Donnees();
  /**
   * \brief Getter of Metadata
   * \details Gets the metadata
   * \return a vector of strings
   */
  std::vector<string> getMetadatas();
  /**
   * \brief Getter of columns
   * \details Gets the column names
   * \return a vector of strings
   */
  std::vector<string> getColumns();
  /**
   * \brief Getter of data
   * \details Gets the data
   * \return a vector of double
   */
  std::vector<double> getDatas();
  /**
   * \brief Setter of metadata
   * \details Sets the metadata
   * \param meta : a vector of strings
   */
  void setMetadatas(vector<string> meta);
  /**
   * \brief Setter of columns
   * \details Sets the column names
   * \param column : a vector of strings
   */
  void setColumns(vector<string> column);
  /**
   * \brief Setter of data
   * \details Sets the data
   * \param data : a vector of double 
   */
  void setDatas(vector<double> data);
  
};

#endif /* DONNEES_HPP_ */
