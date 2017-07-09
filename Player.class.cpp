/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:08:05 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 14:07:53 by jkalia           ###   ########.fr       */
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
}

Player::~Player() { delete (this->_image); }

int Player::get_h() const { return this->_h; }

int Player::get_w() const { return this->_w; }

int Player::get_maxwidth() const { return this->_maxwidth; }

void Player::Action(int n) {
  if (n == KEY_DOWN) this->_h += 1;
  if (n == KEY_UP) this->_h -= 1;
  if (n == KEY_LEFT) this->_w -= 2;
  if (n == KEY_RIGHT) this->_w += 2;
  if (n == ' ') {
  }
}

void Player::IncrementScore() { ++this->_score; }
