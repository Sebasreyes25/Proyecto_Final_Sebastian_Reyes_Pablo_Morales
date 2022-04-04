#pragma once
#include <string>
#include <afxheaderctrl.h>
#include <msclr\marshal_cppstd.h>
#include <msclr/marshal.h>
#include <iostream>
#include "Presupuesto.h"


class ingenierias

{
private:


	std::string sistemas;
	std::string comercial;
	std::string industrial;
	std::string electronicaTelecomunicaciones;

public:



	void setsistemas(std::string sis)
	{
		this->sistemas = sis;
	}
	void setcomercial(std::string com)
	{
		this->comercial = com;
	}
	void setindustrial(std::string ind)
	{
		this->industrial = ind;
	}
	void setelectronicaTelecomunicaciones(std::string elec)
	{
		this->electronicaTelecomunicaciones = elec;
	}


	std::string getsistemas()
	{
		return this->sistemas;
	}
	std::string getcomercial()
	{
		return this->comercial;
	}
	std::string getindustrial()
	{
		return this->industrial;
	}
	std::string getelectronicaTelecomunicaciones()
	{
		return this->electronicaTelecomunicaciones;
	}



};