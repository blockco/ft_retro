/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:08:14 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 12:25:14 by jkalia           ###   ########.fr       */
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
	int get_h() const;
	int get_w() const;
};
#endif
