/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:08:05 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 18:11:08 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.class.hpp"

Player::Player(int h, int w)
{
	this->_h = (h - 1) / 2;
	this->_w = (w - 1) / 2;
}

Player::~Player()
{

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

void Player::Printship()
{
	mvprintw(this->_h, this->_w, "%s", "***");
}
