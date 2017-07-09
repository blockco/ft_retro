#ifndef E_CLUSTER_CLASS_CPP
#define E_CLUSTER_CLASS_CPP

#include "Env.class.hpp"
#include "Enemy.class.hpp"

#include <ncurses.h>
#include <string.h>

class E_Cluster : public GameObject {
public:
	E_Cluster();
//	E_Cluster(int size);
	~E_Cluster();
	void Action();
	void Print();
	bool PlayerCollision(int h, int min_w, int max_w);
	bool BulletCollision(int h, int w);
private:
	int _size;
	Enemy *_clust;
};
#endif
