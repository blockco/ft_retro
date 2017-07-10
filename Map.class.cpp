/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 12:52:47 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 17:35:36 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Map.class.hpp"
#include "Bullet.class.hpp"
#include "E_Cluster.class.hpp"
#include "Enemy.class.hpp"
#include "Player.class.hpp"

Map::Map(Env& start) : _start(start) {}

Map::~Map() {}

void Map::UpdateGame(int ch) {
  rob.Action(ch);
  clust.Action();
}

void Map::PrintGame() {
	int i = 0;
	std::string score = std::to_string(Env::_time + Env::_score);
	std::string h = std::to_string(Env::_winh);
	std::string w = std::to_string(Env::_winw);
	while(i < Env::_winw)
	{
		mvprintw(5, i, "%s", "=");
		i++;
	}
	mvprintw(2, 2, "Score: %s", score.c_str());
	mvprintw(3, 2, "height: %s", h.c_str());
	mvprintw(4, 2, "width: %s", w.c_str());
  rob.Print();
  clust.Print();
}

void Map::CheckGame() {
  int player_h;
  int player_min_w;
  int player_max_w;


  player_h = rob.get_h();
  player_min_w = rob.get_w();
  player_max_w = player_min_w + rob.get_maxwidth();
  rob.CollisionCheck(clust);
  if (clust.PlayerCollision(player_h, player_min_w, player_max_w) == true)
    _start.EnvExit();
}

void Map::Turn(int ch) {
  this->UpdateGame(ch);
  this->CheckGame();
  this->PrintGame();
}
