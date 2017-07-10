/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 12:52:47 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 19:46:45 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Map.class.hpp"
#include "Bullet.class.hpp"
#include "E_Cluster.class.hpp"
#include "Enemy.class.hpp"
#include "Player.class.hpp"

Map::Map(Env &start) : _start(start) {}

Map::~Map() {}

Map::Map(const Map &src) : _start(src._start) { *this = src; }
Map &Map::operator=(const Map &src) {
  rob = src.rob;
  clust = src.clust;
  charlie = src.charlie;
  return *this;
}

void Map::UpdateGame(int ch) {
  rob.Action(ch);
  clust.Action();
}

void Map::PrintGame() {
	int i = 0;
	std::string last = std::to_string(Env::_time);
	std::string score = std::to_string(Env::_time + Env::_score);
	std::string health = std::to_string(Env::_health);
	while(i < Env::_winw)
	{
		mvprintw(5, i, "%s", "=");
		i++;
	}
	mvprintw(1, 2, "Time: %s", last.c_str());
	mvprintw(2, 2, "Score: %s", score.c_str());
	mvprintw(3, 3, "Health: %s", health.c_str());
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
  if (clust.PlayerCollision(player_h, player_min_w, player_max_w) == true)
	  Env::_health -= 1;
  if (Env::_health == 0)
	  _start.EnvExit();
  rob.CollisionCheck(clust);
}

void Map::Turn(int ch) {
  this->UpdateGame(ch);
  this->CheckGame();
  this->PrintGame();
}
