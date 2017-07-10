/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Env.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:58:51 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 18:38:50 by jkalia           ###   ########.fr       */
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
		long long GetTimeMs();

	public:
		Env();
		~Env();
		Env(const Env& env);
		Env& operator=(const Env &src);
		void Start();
		void EnvExit();
		static int		_winh;
		static int		_winw;
		static int		_health;
		static const int FPS;
		static const int SkipTicks;
		static long long _time;
		static long long _score;

	protected:
		WINDOW *win;
};

#endif
