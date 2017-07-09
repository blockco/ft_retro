#ifndef BULLET_CLASS_HPP
#define BULLET_CLASS_HPP

#include "Player.class.hpp"

class Bullet : public Player {
public:
	Bullet();
	~Bullet();
	void Fired(int _inh, int _inw);
	bool Action();
private:
	bool _state;
};
#endif
