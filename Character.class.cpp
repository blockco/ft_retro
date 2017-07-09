#include "Character.class.hpp"

Character::Character(int h, int w)
{
	this->_h = (h - 1) / 2;
	this->_w = (w - 1) / 2;
}

Character::~Character()
{

}

void Character::Move(int n)
{
	if (n == KEY_DOWN)
		this->_h += 1;
	if (n == KEY_UP)
		this->_h -= 1;
	if (n == KEY_LEFT)
		this->_w -= 2;
	if (n == KEY_RIGHT)
		this->_w += 2;
}

void Character::Printship()
{
	mvprintw(this->_h, this->_w, "%s", "***");
}
