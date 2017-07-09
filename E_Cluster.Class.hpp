#include "Env.class.hpp"
#include "Enemy.class.hpp"

#include <ncurses.h>
#include <string.h>

class E_Cluster : public Env {
	E_Cluster(int size);
	E_Cluster();
	~E_Cluster();
private:
	int _size;
	Enemy _clust[10];
};
