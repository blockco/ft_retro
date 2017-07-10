/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:55:32 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 19:33:59 by jkalia           ###   ########.fr       */
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
	Enemy(const Enemy& src);
	Enemy& operator=(const Enemy &src);
	void Action();
	void Random();
	void Print();
	void setw(int w);
	void seth(int h);
	int get_w() const;
	int get_h() const;
	static float nums[8];
};
#endif
