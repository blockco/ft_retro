/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameObject.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:01:26 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 18:16:05 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameObject.class.hpp"

GameObject::GameObject()
{}

GameObject::~GameObject()
{}

void GameObject::Print(char *s)
{
	mvprintw(this->_h, this->_w, "%s", s);
}
