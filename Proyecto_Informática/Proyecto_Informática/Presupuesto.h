#pragma once
#include <iostream>
#include <string> 


class Presupuesto

{
private:

	int horas;
	std::string nom;
	float precio;
	int cuota;
	int total; 

public:


	void sethoras(int hor)
	{
		this->horas = hor;
	}
	void setnom(std::string nom)
	{
		this->nom = nom;
	}
	void setrpecio(float precio)
	{
		this->precio = precio;
	}
	void setcuota(int cuo)
	{
		this->cuota = cuo;
	}


	int gethoras()
	{
		return this->horas;
	}
	std::string getnom()
	{
		return this->nom;
	}
	float getprecio()
	{
		return this->precio;
	}
	int getcuota()
	{
		return this->cuota;
	}

};

