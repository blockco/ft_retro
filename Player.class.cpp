/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:08:05 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 18:31:24 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.class.hpp"

Player::Player(int h, int w)
{
	this->_image = new char [3];
	strcpy(this->_image, "***");
	this->_h = (h - 1) / 2;
	this->_w = (w - 1) / 2;
}

Player::~Player()
{
	delete (this->_image);
}

void Player::Action(int n)
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
