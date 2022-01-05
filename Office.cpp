#include "pch.h"
//#include "Office.h"

Office* firstPointer;

Office::Office() {

	prodNum = 0;
	prodDesc[33] = '\0';
	manuNum = 0;
	prodPrice = 0.00;
	markUp = 0.00;
	prodQuant = 0;
	nextPointer = NULL;

}

void Office::listRecords(char* reportName) {

	ofstream outputFile;
	Office* currentPointer;
	char Separator[60] = "___________________________________________________________";
		
	outputFile.open((char*)(void*)Marshal::StringToHGlobalAnsi
		(String::Concat(Directory::GetCurrentDirectory(),
		"\\OfficeFileForOutput.txt")));

	if (!outputFile) {
		Application::Exit();
		return;
	}

	outputFile << endl << Separator << endl << endl;
	outputFile << setw(38) << setfill(' ') << reportName << endl;
	outputFile << Separator;
	outputFile << endl << endl << setw(15) << setfill(' ') << "ID number"
		<< setw(16) << setfill(' ') << "Description"
		<< setw(19) << setfill(' ') << "Manufacturer's ID"
		<< setw(11) << setfill(' ') << "Price"
		<< setw(12) << setfill(' ') << "MarkUp"
		<< setw(17) << setfill(' ') << "Quantity"
		<< endl << Separator << endl << Separator << endl;

	currentPointer = firstPointer;
	while (currentPointer != NULL) {

		outputFile << endl;
		outputFile << right;
		outputFile << endl << setw(9) << setfill(' ')
			<< currentPointer->getProdNum();
		outputFile << setw(16) << setfill(' ')
			<< currentPointer->getProdDesc();
		outputFile << setw(12) << setfill(' ')
			<< currentPointer->getManuNum();
		outputFile << setw(8) << setfill(' ')
			<< "$" << currentPointer->getProdPrice();
		outputFile << setw(9) << setfill(' ')
			<< "%" << currentPointer->getMarkUp();
		outputFile << setw(12) << setfill(' ')
			<< currentPointer->getProdQuant();
		currentPointer = currentPointer->getNextPointer();

	}

	outputFile << endl << Separator << endl; 

	outputFile.close();
	return;
}

Void Office::insertItem(int newProdNum, char newProdDesc[],
	int newManuNum, double newProdPrice, double newMarkUp,
	int newProdQuant, Office* currentPointer) {

	Office* traversePointer;
	Office* trailPointer;
	bool found;

	prodNum = newProdNum;
	strcpy_s(prodDesc, newProdDesc);
	manuNum = newManuNum;
	prodPrice = newProdPrice;
	markUp = newMarkUp;
	prodQuant = newProdQuant;

	if (firstPointer == NULL) {
		firstPointer = currentPointer;
	}
	else {
		
		traversePointer = firstPointer;
		found = false;

		while (traversePointer != NULL && !found) {

			if (traversePointer->prodNum >= newProdNum) {
				found = true;
			}
			else {
				trailPointer = traversePointer;
				traversePointer = traversePointer->getNextPointer();
			}
		}

		if (traversePointer == firstPointer) {
			nextPointer = firstPointer;
			firstPointer = currentPointer;

		}

		else {
			trailPointer->nextPointer = currentPointer;
			nextPointer = traversePointer;

		}
	}
}

int Office::countItems() {

	Office* currentPointer;
	int itemCounter = 0;

	for (currentPointer = firstPointer;
		currentPointer != NULL;
		currentPointer = currentPointer->getNextPointer()) {

		itemCounter++;
		}

	return(itemCounter);

}

int Office::getProdNum() const {
	return prodNum;
}

char* Office::getProdDesc() const {
	return prodDesc;
}

int Office::getManuNum() const {
	return manuNum;
}

double Office::getProdPrice() const {
	return prodPrice;
}

double Office::getMarkUp() const {
	return markUp;
}

int Office::getProdQuant() const {
	return prodQuant;
}

double Office::getRetailPrice(double prodPrice, double markUp) const {
	double retailPrice;
	retailPrice = prodPrice * markUp;
	return retailPrice;
}

Office* Office::getNextPointer() const {
	return nextPointer;
}

void Office::setProdNum(int newProdNum) {
	prodNum = newProdNum;
}

void Office::setProdDesc(char newProdDesc[]) {
	strcpy_s(prodDesc, newProdDesc);
}

void Office::setManuNum(int newManuNum) {
	manuNum = newManuNum;
}

void Office::setProdPrice(double newProdPrice) {
	prodPrice = newProdPrice;
}

void Office::setMarkUp(double newMarkUp) {
	markUp = newMarkUp;
} 

void Office::setProdQuant(int newProdQuant) {
	prodQuant = newProdQuant;
}

void Office::setNextPointer(Office* newNextPointer) {
	nextPointer = newNextPointer;
}