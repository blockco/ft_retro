/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameObject.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:01:26 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 13:06:30 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameObject.class.hpp"

GameObject::GameObject() {}

GameObject::~GameObject() {}

int GameObject::get_w() const { return this->_w; }
int GameObject::get_h() const { return this->_h; }
void GameObject::setw(int w) { this->_w = w; }

void GameObject::seth(int h) { this->_h = h; }

void GameObject::Print() { mvprintw(this->_h, this->_w, "%s", this->_image); }
