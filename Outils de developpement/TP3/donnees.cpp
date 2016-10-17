/**
 * donnees.cpp
 * 
 * 
 * 
 * 
 * This program is distributed as is and comes with no guarantees. 
 * 
 *     @Version: 1.0
 *     @Date:    17 october 2016
 *     @Authors: Charles BEGAUDEAU Charlene SERVANTIE
 */

	/**
	 * \brief 	
	 * \param		
	 */
	Donnees::Donnees(fstream file){
		Parser parser = new Parser();
		parser->parse(file);
		this->metadatas = parser->getMetadatas();
		this->columns = parser->getColumns();
		this->datas = parser->getDatas();
	}

	Donnees::~Donnees(){

	}

	/**
	 * \brief 	
	 * \return	
	 */
	std::vector<string> Donnees::getMetadatas(){
		return this->metadatas;
	}

	/**
	 * \brief 	
	 * \return	
	 */
	std::vector<string> Donnees::getColumns(){
		return this->columns;
	}

	/**
	 * \brief 	
	 * \return	
	 */
	std::vector<double> Donnees::getDatas(){
		return this->datas;
	}

	/**
	 * \brief 	
	 * \param	
	 */
	void Donnees::setMetadatas(std::vector<string> metadatas){
		this->metadatas = metadatas;
	}

	/**
	 * \brief 	
	 * \param	
	 */
	void Donnees::setColumns(std::vector<string> columns){
		this->columns = columns;
	}

	/**
	 * \brief 	
	 * \param	
	 */
	void Donnees::setDatas(std::vector<double> datas){
		this->datas = datas;
	}
