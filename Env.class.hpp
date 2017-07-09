/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:58:51 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 16:40:17 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <stdlib.h>
#include <iostream>
#ifndef ENV_HPP
#define ENV_HPP

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
	
	protected:
		WINDOW *win;
		int		winh;
		int		winw;
};
#endif
