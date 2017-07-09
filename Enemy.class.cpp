/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:55:18 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 22:24:10 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"

Enemy::Enemy()
{
	this->_image = new char [3];
	strcpy(this->_image, "x");
	this->_h = 0;
	this->_w = rand() % Env::_winw;
}

void Enemy::setw(int w)
{
	this->_w = w;
}

void Enemy::seth(int h)
{
	this->_h = h;
}

Enemy::~Enemy()
{
	delete (this->_image);
}

void Enemy::Action()
{
	float nums[8];
	nums[0] = .1;
	nums[1] = .2;
	nums[2] = .3;
	nums[3] = .4;
	nums[4] = .15;
	nums[5] = .25;
	nums[6] = .35;
	nums[7] = .45;


	this->_h += nums[rand() % 8];
	if (this->_h > Env::_winh)
	{
		this->_h = 0;
		this->_w = rand() % Env::_winw;
	}
}

void Enemy::Random()
{
	this->_w = rand() % Env::_winw;
}
