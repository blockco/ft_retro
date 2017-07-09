/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:08:05 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 16:52:30 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.class.hpp"

Player::Player() {
  this->_score = 0;
  this->_maxwidth = 5;
  this->_image = new char[this->_maxwidth];
  strcpy(this->_image, "__^__");
  this->_h = (Env::_winh - 20);
  this->_w = (Env::_winw - 1) / 2;
  this->_bullet_index = 0;
  this->_charlie = new Bullet[BULLET_MAX];
}

Player::~Player() {
	delete [] this->_charlie;
	delete this->_image;
}

int Player::get_h() const { return this->_h; }

int Player::get_w() const { return this->_w; }

void Player::Fire() {
  if (this->_bullet_index == BULLET_MAX)
	  this->_bullet_index = 0;
  this->_charlie[this->_bullet_index].Fire(this->_h, this->_w + 2);
  ++this->_bullet_index;
}

int Player::get_maxwidth() const { return this->_maxwidth; }

void Player::Action(int n) {
	int i = 0;
  if (n == KEY_DOWN) this->_h += 1;
  if (n == KEY_UP) this->_h -= 1;
  if (n == KEY_LEFT) this->_w -= 1;
  if (n == KEY_RIGHT) this->_w += 1;
  if (n == ' ') {
    this->Fire();
  }
  while (i < BULLET_MAX) {
    this->_charlie[i].Action();
    ++i;
  }
}

void Player::IncrementScore() { ++this->_score; }

void Player::Print()
{
	int i = 0;
	mvprintw(this->_h, this->_w, "%s", this->_image);
	while (i < BULLET_MAX) {
		if (this->_charlie[i].getstate() == true)
			_charlie[i].Print();
		++i;
	}
}

void Player::CollisionCheck(E_Cluster& clust)
{
	int		i = 0;
	while (i < BULLET_MAX) {
		if (this->_charlie[i].getstate() == true)
			clust.BulletCollision(_charlie[i].get_h(), _charlie[i].get_w());
		++i;
	}
}
