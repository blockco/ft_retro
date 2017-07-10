/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:55:18 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 17:29:08 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"
float Enemy::nums[8] = {.125, .15, .175, .2, .225, .25,
                         .275, .3};

Enemy::Enemy() {
  this->_image = new char[1];
  strcpy(this->_image, "x");
  this->_velocity = nums[rand() % 8];
  this->_h = 5;
  this->_w = 0;
  this->_state = true;
}

int Enemy::get_w() const { return this->_w; }
int Enemy::get_h() const { return this->_h; }
void Enemy::setw(int w) { this->_w = w; }

void Enemy::seth(int h) { this->_h = h; }

Enemy::~Enemy() { delete (this->_image); }

void Enemy::Action() {
this->_h += this->_velocity;
if (this->_h > Env::_winh)
{
	this->_h = 5;
	this->_w = rand() % Env::_winw;
	this->_state = true;
}
}

void Enemy::Print() {
	if (this->_state == true)
		mvprintw(this->_h, this->_w, "%s", this->_image);
}

void Enemy::Random() { this->_w = rand() % Env::_winw; }
