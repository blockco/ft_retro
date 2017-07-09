/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:58:42 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 18:18:38 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.class.hpp"
#include "Player.class.hpp"
#include "menu.hpp"

Env::EnvState Env::_envstate = Uninitialized;
Env::EnvState Env::GetEnvState() const { return _envstate; }
void		  Env::SetEnvState(EnvState &in) { _envstate = in; }

Env::Env() {}
Env::~Env() {}
Env::Env(const Env& src) { *this = src; }
Env& Env::operator=(const Env& env) {return *this;}

void Env::Start(void)
{
	if (_envstate != Uninitialized)
		return;
	EnvInit();
	GameLoop();
	if (_envstate == Exiting)
		EnvExit();
}

void Env::EnvInit()
{
	initscr();
	getmaxyx(stdscr, winh, winw);
	win = newwin(winh, winw, 0, winw);
	raw();
	keypad(stdscr, TRUE);
	noecho();
	_envstate = Playing;
	curs_set(0);
	nodelay(stdscr, TRUE);
}

void Env::EnvExit()
{
  endwin();
  exit(0);
}

void Env::GameLoop()
{
	int		ch;
	Player rob(winh, winw);
	while (1)
	{
		if ((ch = getch()) == ERR)
			rob.Printship();
		else {
			clear();
			rob.Action(ch);
		}
	}
}

