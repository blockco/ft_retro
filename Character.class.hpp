#include <ncurses.h>

#ifndef CHARACTER_CLASS_HPP
#define CHARACTER_CLASS_HPP


class Character{
public:
	Character();
	~Character();
	Character(int h, int w);
	void Move(int num);
	void Printship();
private:
	int _h;
	int _w;
};
#endif
