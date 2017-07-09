/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameObject.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:01:26 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 18:30:19 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameObject.class.hpp"

GameObject::GameObject()
{}

GameObject::~GameObject()
{}

void GameObject::Print()
{
	mvprintw(this->_h, this->_w, "%s", this->_image);
}
