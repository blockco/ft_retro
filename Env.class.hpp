/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Env.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:58:51 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 13:32:48 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <sys/time.h>
#ifndef ENV_HPP
#define ENV_HPP

#define KEY_ESC 27

class Env {
	private:
		void GameLoop();
		void EnvInit();
		enum EnvState { Uninitialized,
			ShowingMenu, Playing, Exiting };
		static EnvState _envstate;
		long long GetTimeMs();

	public:
		Env();
		~Env();
		Env(const Env& env);
		Env& operator=(const Env &src);
		void Start();
		void EnvExit();
		EnvState GetEnvState() const;
		void  SetEnvState(EnvState &in);
		static int		_winh;
		static int		_winw;
		static const int FPS;
		static const int SkipTicks;
		static long long _time;
	
	protected:
		WINDOW *win;
};

#endif
