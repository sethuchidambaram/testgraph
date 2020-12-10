/*
 * densegraph.cpp
 *
 *  Created on: May 28, 2020
 *      Author: sethu
 */

#include"densegraph.h"



densegraph::densegraph(int n)
{
	this->a=new  int[n*n];
	this->nv=n;
	this->edgecount=0;
	int  i=0;
	while( i <  n*n )
	{
		this->a[i]=0;
		i++;
	}

}
void densegraph::insertedge(int o,int p)
{
	this->a[o*this->nv+p]=1;
	this->a[p*this->nv+o]=1;


	this->edgecount++;
}

int densegraph::adjlist(int u,int *e,int size)
{
	int i=0;
	int j=0;

	while(i < this->nv)
	{
		if( this->a[u*nv+i] == 1 )
		{
			e[j] = i;
			j++;


		}
		i++;

	}
	return j;


}

int densegraph::noofvertices()
{

	return this->edgecount++;


}


