/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 12:52:47 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 13:33:38 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Map.class.hpp"
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
    _start.EnvExit();
}

void Map::Turn(int ch) {
  this->UpdateGame(ch);
  this->CheckGame();
  this->PrintGame();
}
