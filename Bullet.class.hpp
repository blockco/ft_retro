#ifndef BULLET_CLASS_HPP
#define BULLET_CLASS_HPP

#include "Player.class.hpp"

class Bullet : public Player {
public:
	Bullet(Player& player);
	~Bullet();
	void Fired(Player& player);
	bool Action();
private:
	bool _state;
};
#endif
