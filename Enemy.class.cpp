/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:55:18 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 21:53:46 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"

Enemy::Enemy()
{
	this->_image = new char [3];
	strcpy(this->_image, "x");
	this->_h = 1;
	this->_w = rand() % Env::_winw;
}

Enemy::~Enemy()
{
	delete (this->_image);
}

void Enemy::Action()
{
	this->_h += .1;
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
