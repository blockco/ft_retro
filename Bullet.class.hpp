#ifndef BULLET_CLASS_HPP
#define BULLET_CLASS_HPP

#include "GameObject.class.hpp"

class Bullet : public GameObject{
public:
	Bullet();
	~Bullet();
	void Fire(int _inh, int _inw);
	void Action();
};
#endif
