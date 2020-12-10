/*
 * densegraph.h
 *
 *  Created on: May 28, 2020
 *      Author: sethu
 */

using namespace std;


class densegraph
{
private:
	int  *a;
	int  nv;
	int  edgecount;
public:

	    densegraph(int n);
	    void 	insertedge(int o,int p);
	 	 int noofedges();
	 	 int noofvertices();
	     int adjlist(int v,int *b,int size);
	     void printgraph();

};


