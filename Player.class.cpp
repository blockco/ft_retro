/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:08:05 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 12:25:37 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.class.hpp"
#define PLAYER_WIDTH 5

Player::Player(int h, int w) {
  this->_image = new char[PLAYER_WIDTH];
  strcpy(this->_image, "__^__");
  this->_h = (h - 20);
  this->_w = (w - 1) / 2;
}

Player::~Player() { delete (this->_image); }

int Player::get_h() const { return this->_h; }

int Player::get_w() const { return this->_w; }

void Player::Action(int n) {
  if (n == KEY_DOWN) this->_h += 1;
  if (n == KEY_UP) this->_h -= 1;
  if (n == KEY_LEFT) this->_w -= 2;
  if (n == KEY_RIGHT) this->_w += 2;
}
