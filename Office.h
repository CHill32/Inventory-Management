#ifndef OFFICE_H
#define OFFICE_H

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

class Office {

private:

	int prodNum;
	mutable char prodDesc[33];
	int manuNum;
	double prodPrice;
	double markUp;
	int prodQuant;
	Office *nextPointer;

public:

	Office();
	void listRecords(char*);
	void insertItem(int, char[], int, double, double,
		int, Office*);
	int countItems();

	int getProdNum() const;
	char* getProdDesc() const;
	int getManuNum() const;
	double getProdPrice() const;
	double getMarkUp() const;
	int getProdQuant() const;
	Office* getNextPointer() const;

	double getRetailPrice(double, double) const;


	void setProdNum(int);
	void setProdDesc(char[]);
	void setManuNum(int);
	void setProdPrice(double);
	void setMarkUp(double);
	void setProdQuant(int);
	void setNextPointer(Office*);

};

#endif