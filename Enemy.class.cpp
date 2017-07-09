/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:55:18 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 18:41:01 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"

Enemy::Enemy()
{
	this->_image = new char [1];
	strcpy(this->_image, "x");
	this->_h = (Env::winh - 1) / 2;
	this->_w = (Env::winw - 1) / 2;
}

Enemy::~Enemy()
{
	delete (this->_image);
}

void Enemy::Action()
{
	this->_h -= 1;
}
