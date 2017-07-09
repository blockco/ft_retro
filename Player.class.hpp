/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:08:14 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 14:21:17 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Player_CLASS_HPP
#define Player_CLASS_HPP
#include "GameObject.class.hpp"
#include "Bullet.class.hpp"
#include "E_Cluster.class.hpp"
#define BULLET_MAX 20

class Player : public GameObject {
public:
	Player();
	~Player();
	Player(int h, int w);
	void Action(int num);
	int get_h() const;
	int get_w() const;
	int get_maxwidth() const;
	void IncrementScore();
	void CollisionCheck(E_Cluster& clust);
	void Fire();
	void Print();
private:
	int		_maxwidth;
	Bullet  *_charlie;
	int		_bullet_index;
};
#endif
