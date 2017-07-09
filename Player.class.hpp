/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:08:14 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 18:37:15 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Player_CLASS_HPP
#define Player_CLASS_HPP
#include "GameObject.class.hpp"

class Player : public GameObject {
public:
	Player();
	~Player();
	Player(int h, int w);
	void Action(int num);
};
#endif