/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:55:18 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 19:00:39 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"

Enemy::Enemy()
{
	this->_image = new char [3];
	strcpy(this->_image, "xxx");
	this->_h = (Env::_winh - 1) / 2;
	this->_w = (Env::_winw - 1) / 2;
	mvprintw(30, 10, "Winh = %d", Env::_winh);
	mvprintw(40, 10, "Winw = %d", Env::_winw);
}

Enemy::~Enemy()
{
	delete (this->_image);
}

void Enemy::Action()
{
	this->_h -= 1;
}
