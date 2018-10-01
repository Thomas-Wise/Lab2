// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cout << "cows list size: " << cows.getSize() << endl << endl;
	cout << "sum: " << cows.sum() << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsLast(3.26);
	cout << "cows list  :  " << cows << endl << endl;

	cout << "cows list size: " << cows.getSize() << endl << endl;
	cout << "sum: " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	cout << "cows list size: " << cows.getSize() << endl << endl;
	cout << "sum: " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.getSize() << endl << endl;
	cout << "sum: " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "horses list size: " << horses.getSize() << endl << endl;
	cout << "sum: " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	horses.insertAsLast(3.51);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.getSize() << endl << endl;
	cout << "sum: " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "horses list size: " << horses.getSize() << endl << endl;
	cout << "sum: " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.getSize() << endl << endl;
	cout << "sum: " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size: " << horses.getSize() << endl << endl;
	cout << "sum: " << horses.sum() << endl << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs list size: " << pigs.getSize() << endl << endl;
	cout << "sum: " << pigs.sum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.getSize() << endl << endl;
	cout << "sum: " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size: " << horses.getSize() << endl << endl;
	cout << "sum: " << horses.sum() << endl << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs list size: " << pigs.getSize() << endl << endl;
	cout << "sum: " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.getSize() << endl << endl;
	cout << "sum: " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size: " << horses.getSize() << endl << endl;
	cout << "sum: " << horses.sum() << endl << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs list size: " << pigs.getSize() << endl << endl;
	cout << "sum: " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}

