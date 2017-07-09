/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 13:51:25 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 14:06:11 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.class.hpp"
#include "Player.class.hpp"

Bullet::Bullet() : {
  this->_state = false;
  this->_image = new char[1];
  strcpy(this->_image, "|");
}

void Bullet::Fired(int _inh, int _inw) {
  if (this_state == true) return;
  this->_state = true;
  this->_w = _inw;
  this->_h = _inh;
  this->_velocity = 1;
}

bool Bullet::Action() {
  this->_h -= this->_velocity;
  if (this->_h <= 0) {
    this->_state = false;
  }
  return this->_state;
}

Bullet::~Bullet() { delete this->_image; }
