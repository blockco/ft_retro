/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:58:42 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 17:39:27 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.class.hpp"
#include "Character.class.hpp"
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
	std::cout << "Env Start" << std::endl;
	if (_envstate != Uninitialized)
		return;
	EnvInit();
	GameLoop();
	EnvExit();
//	while (_envstate != Exiting)
//	{
//		GameLoop();
//	}
}

void Env::EnvInit()
{
	initscr(); 				/* start curses mode 		  */
	getmaxyx(stdscr, winh, winw);
	win = newwin(winh, winw, 0, winw);
	raw();                /* Line buffering disabled	*/
	keypad(stdscr, TRUE); /* We get F1, F2 etc..		*/
	noecho();             /* Don't echo() while we do getch */
	_envstate = Playing;
	int		ch;

	//printw("Hello World !!!"); /* Print Hello World		  */
	curs_set(0);
	nodelay(stdscr, TRUE);
	/**
	whline(win, ACS_HLINE, 100);
	for (;;) {
		if ((ch = getch()) == ERR) {
		}
		else {
			if (ch == KEY_DOWN)
				printw("%s\n", "KEY DOWN");
			else
				mvprintw (5, 5, "%c\n", ch);
			// printw("%c%d\n", ch, ch);
		}
	}
//	Menu start;
//	start.menu();
	**/

}

void Env::EnvExit()
{
  endwin();
  exit(0);
}

void Env::GameLoop()
{
	int		ch;
	Character rob(winh, winw);
	while (1)
	{
		if ((ch = getch()) == ERR)
			rob.Printship();
		else {
			clear();
			rob.Move(ch);
		}
	}
}

