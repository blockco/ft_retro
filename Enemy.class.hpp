/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:55:32 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 12:47:37 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
#define ENEMY_CLASS_HPP

#include "GameObject.class.hpp"
#include "Env.class.hpp"

class Enemy : public GameObject {
public:
	Enemy();
	~Enemy();
	void Action();
	void Random();
	void setw(int w);
	void seth(int h);
	int get_w() const;
	int get_h() const;
	static float nums[11];
};
#endif
