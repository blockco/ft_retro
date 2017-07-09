/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Env.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:58:42 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 19:44:31 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Env.class.hpp"
#include "Player.class.hpp"
#include "Enemy.class.hpp"
#include <unistd.h>

Env::EnvState Env::_envstate = Uninitialized;
Env::EnvState Env::GetEnvState() const { return _envstate; }
void		  Env::SetEnvState(EnvState &in) { _envstate = in; }
int			Env::_winw = 0;
int			Env::_winh = 0;

Env::Env() {
	srand(time(0));
}
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
	getmaxyx(stdscr, _winh, _winw);
	win = newwin(_winh, _winw, 0, _winw);
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
	Player rob(_winh, _winw);
	Enemy  bob;
	while (1)
	{
		if ((ch = getch()) == ERR)
		{
			clear();
			bob.Action();
			rob.Print();
			bob.Print();
		}
		else if (ch == KEY_ESC)
			EnvExit();
		else
		{
			rob.Action(ch);
		}
	usleep(10000);
	}
}