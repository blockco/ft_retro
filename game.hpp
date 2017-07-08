/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:40:51 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 15:17:02 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP

class Game {
	private:
		static void GameLoop();
		enum GameState { Uninitialized,
			ShowingMenu, Playing, Exiting };
		static GameState _gameState;

	public:
		static void Start();
		GameState getGameState() const;
};
#endif
