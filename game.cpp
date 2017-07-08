/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 12:01:58 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 15:17:44 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

Game::GameState Game::_gameState = Uninitialized;

Game::GameState Game::getGameState() const { return _gameState; }

void Game::Start(void)
{
	if (_gameState != Uninitialized)
		return;
	while (_gameState != Exiting)
	{
		GameLoop();
	}
}

void Game::GameLoop()
{
	if (_gameState == Exiting)
	{
		return;
	}
}
