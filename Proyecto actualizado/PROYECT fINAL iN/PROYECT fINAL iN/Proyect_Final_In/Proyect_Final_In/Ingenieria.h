#pragma once
#include <string>
#include <iostream>


ref class Ingenieria
{
private:
	System::String^ nombrealum;
	System::String^ ingenieria;
	int numcreditos;
	int cantclases;
	int valorcredito;
	int horasbeca;
	int numsemestres;
	double beca;
	float totalcarrera;
	float cuotaparqueo;
	float parqueototal;
	float valorTotal;
	float valorTbeca;

public:

	Ingenieria() {

		nombrealum = "";
		ingenieria = "";
		numcreditos = 0;
		cantclases = 0;
		valorcredito = 0;
		horasbeca = 0;
		numsemestres = 0;
		beca = 0;
		totalcarrera = 0;
		cuotaparqueo = 0;
		parqueototal = 0;
		valorTotal = 0;
		valorTbeca = 0;
	}
	~Ingenieria() {

	}



	void setnombrealum(System::String^ nombrealum) {
		this->nombrealum = nombrealum;
	}
	System::String^ getnombrealum() {
		return nombrealum;
	}

	void setingenieria(System::String^ ingenieria) {
		this->ingenieria = ingenieria;
	}
	System::String^ getingenieria() {
		return ingenieria;
	}

	void setnumcreditos(int numcreditos) {
		this->numcreditos = numcreditos;
	}
	int getnumcrditos() {
		return numcreditos;
	}

	void setcantclases(int cantclases) {
		this->cantclases = cantclases;
	}
	int getcantclases() {
		return cantclases;
	}

	void setvalorcredito(int valorcredito) {
		this->valorcredito = valorcredito;
	}
	int getvalorcredito() {
		return valorcredito;
	}

	void sethorasbeca(int horasbeca) {
		this->horasbeca = horasbeca;
	}
	int gethorasbeca() {
		return horasbeca;
	}

	void setnumsemestres(int numsemestres) {
		this->numsemestres = numsemestres;
	}
	int getnumsemestres() {
		return numsemestres;
	}

	void setbeca(double beca) {
		this->beca = beca;
	}
	double getbeca() {
		return beca;
	}

	void settotalcarrera(float totalcarrera) {
		this->totalcarrera = totalcarrera;
	}
	float gettotalcarrera() {
		return totalcarrera;
	}

	void setcuotaparqueo(float cuotacarrera) {
		this->cuotaparqueo = cuotacarrera;
	}
	float getcuotaparqueo() {
		return cuotaparqueo;
	}

	void setparqueototal(float parqueototal) {
		this->parqueototal = parqueototal;
	}
	float getparqueototal() {
		return parqueototal;
	}

	void setvalorTotal(float valorTotal) {
		this->valorTotal = valorTotal;
	}
	float getvalorTotal() {
		return valorTotal;
	}

	void setvalorTbeca(float valorTbeca) {
		this->valorTbeca = valorTbeca;
	}
	float getvalorTbeca() {
		return valorTbeca;
	}

};
