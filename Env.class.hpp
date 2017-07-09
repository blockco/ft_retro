/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Env.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:58:51 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 19:21:33 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <stdlib.h>
#include <iostream>
#ifndef ENV_HPP
#define ENV_HPP

#define KEY_ESC 27

class Env {
	private:
		void GameLoop();
		void EnvExit();
		void EnvInit();
		enum EnvState { Uninitialized,
			ShowingMenu, Playing, Exiting };
		static EnvState _envstate;

	public:
		Env();
		~Env();
		Env(const Env& env);
		Env& operator=(const Env &src);
		void Start();
		EnvState GetEnvState() const;
		void  SetEnvState(EnvState &in);
		static int		_winh;
		static int		_winw;
	
	protected:
		WINDOW *win;
};
#endif
