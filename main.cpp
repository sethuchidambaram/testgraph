//============================================================================
// Name        : densegraph.cpp
// Author      : sethu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"densegraph.h"
using namespace std;
#define vsize 20

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int vertices[vsize];
	densegraph d1(vsize);
	d1.insertedge(0,1);
	d1.insertedge(1,2);
	d1.insertedge(2,3);
	d1.insertedge(0,4);
	d1.insertedge(0,5);
	d1.insertedge(0,6);
	d1.insertedge(0,7);
	d1.insertedge(0,8);
	d1.insertedge(0,9);
	d1.insertedge(0,10);
	d1.insertedge(1,1);
	d1.insertedge(1,2);
	d1.insertedge(1,3);
	d1.insertedge(1,4);
/***	d1.insertedge(1,5);     ****/

	d1.insertedge(0,1);
	d1.insertedge(0,1);
	d1.insertedge(0,1);

    int no=d1.adjlist(0,vertices,vsize);

	cout << "the no of elements is" <<  no <<  endl;


	return 0;



}
