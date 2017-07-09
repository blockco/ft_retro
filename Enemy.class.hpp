/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:55:32 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 22:00:28 by jkalia           ###   ########.fr       */
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
};
#endif
