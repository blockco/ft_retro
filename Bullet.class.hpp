#ifndef BULLET_CLASS_HPP
#define BULLET_CLASS_HPP

class Bullet{
public:
	Bullet();
	~Bullet();
	int GetVelocity();
private:
	int _velocity;
	char _image[2];
};
#endif
