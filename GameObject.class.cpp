/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameObject.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:01:26 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 19:25:48 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameObject.class.hpp"

GameObject::GameObject() {}

GameObject::~GameObject() {}
GameObject::GameObject(const GameObject &src) { *this = src; }
GameObject &GameObject::operator=(const GameObject &src) {
  _h = src._h;
  _w = src._w;
  _velocity = src._velocity;
  _score = src._score;
  _image = src._image;
  _state = src._state;
  return *this;
}

int GameObject::get_w() const { return this->_w; }
int GameObject::get_h() const { return this->_h; }
void GameObject::setw(int w) { this->_w = w; }

void GameObject::seth(int h) { this->_h = h; }

void GameObject::Print() { mvprintw(this->_h, this->_w, "%s", this->_image); }
bool GameObject::getstate() const { return this->_state; }
void GameObject::setstate(bool instate) { _state = instate; }
