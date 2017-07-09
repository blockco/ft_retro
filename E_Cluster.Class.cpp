#include "E_Cluster.class.hpp"

E_Cluster::E_Cluster(int size)
{
	int i;
	i = 0;
	this->size = size;
	while (i < this->size)
	{
		this->_clust[i] = Enemy();
		i++;
		usleep(60000);
	}
}
E_Cluster::E_Cluster()
{
	int i;
	i = 0;
	this->size = 10;
	while (i < this->size)
	{
		this->_clust[i] = Enemy();
		i++;
		usleep(60000);
	}
}

E_Cluster::~E_Cluster()
{

}
