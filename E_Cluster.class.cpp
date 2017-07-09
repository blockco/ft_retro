#include "E_Cluster.class.hpp"
#include <unistd.h>

E_Cluster::E_Cluster(int _size)
{
	int i;
	i = 0;
	this->_size = _size;
	this->_clust = new Enemy[_size];
	while (i < this->_size)
	{
		this->_clust[i].Random();
		i++;
		usleep(60000);
	}
}
E_Cluster::E_Cluster()
{
	int i;
	i = 0;
	this->_size = 10;
	this->_clust = new Enemy[10];
	while (i < this->_size)
	{
		this->_clust[i].Random();
		i++;
		// usleep(rand() % 1000000);
	}
}

void E_Cluster::Action()
{
	int i = 0;
	while(i < this->_size)
	{
		this->_clust[i].Action();
		i++;
	}
}

void E_Cluster::Print()
{
	int i = 0;
	while(i < this->_size)
	{
		this->_clust[i].Print();
		i++;
	}
}

E_Cluster::~E_Cluster()
{

}
