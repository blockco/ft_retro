#ifndef E_CLUSTER_CLASS_CPP
#define E_CLUSTER_CLASS_CPP

#include "Env.class.hpp"
#include "Enemy.class.hpp"

#include <ncurses.h>
#include <string.h>

class E_Cluster : public Env {
public:
	E_Cluster();
	E_Cluster(int size);
	~E_Cluster();
	void Action();
	void Print();
private:
	int _size;
	Enemy *_clust;
};
#endif
