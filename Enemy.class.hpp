/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:55:32 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 21:54:16 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
#define ENEMY_CLASS_HPP

#include "GameObject.class.hpp"

class Enemy : public GameObject {
public:
	Enemy();
	~Enemy();
	void Action();
	void Random();
};
#endif
