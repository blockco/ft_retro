/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 12:52:54 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 19:35:15 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CLASS_HPP
#define MAP_CLASS_HPP
#include "Env.class.hpp"
#include "E_Cluster.class.hpp"
#include "Enemy.class.hpp"
#include "Player.class.hpp"
#include "Bullet.class.hpp"

#include <ncurses.h>
#include <string.h>

class Map
{
	public:
		Map(Env& start);
		~Map();
	Map(const Map& src);
	Map& operator=(const Map &src);
		void Turn(int ch);

	private:
		Player rob;
		E_Cluster clust;
		Env& _start;
		Bullet charlie;
		void UpdateGame(int ch);
		void PrintGame();
		void CheckGame();

};
#endif
