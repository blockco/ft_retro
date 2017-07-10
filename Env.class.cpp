/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Env.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:58:42 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 18:45:27 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Env.class.hpp"
#include <unistd.h>
#include "Map.class.hpp"

int Env::_winw = 0;
int Env::_winh = 0;
int Env::_health = 0;
long long Env::_time = 0;
long long Env::_score = 5;
const int Env::FPS = 20;
const int Env::SkipTicks = 1000 / Env::FPS;

Env::Env() {
	_health = 16;
}
Env::~Env() {}
Env::Env(const Env &src) { *this = src; }
Env &Env::operator=(const Env &src) {
		_winh = src._winh;
		_winw = src._winw;
		_health = src._health;
		_time = src._time;
		_score = src._score;
	return *this; }

void Env::Start(void) {
  EnvInit();
  GameLoop();
}

void Env::EnvInit() {
  initscr();
  getmaxyx(stdscr, _winh, _winw);
  win = newwin(_winh, _winw, 0, _winw);
  if (_winh < 50 || _winh > 80 || _winw < 100 || _winw > 150)
 {
	endwin();
	if (_winh < 50)
		std::cout << "Window to Short" << std::endl;
	if (_winh > 80)
		std::cout << "Window to Tall" << std::endl;
	if (_winw < 100)
		std::cout << "Window not wide enough" << std::endl;
	if (_winw > 150)
		std::cout << "Window too wide" << std::endl;
	exit(0);
  }
  raw();
  keypad(stdscr, TRUE);
  noecho();
  curs_set(0);
  nodelay(stdscr, TRUE);
}

void Env::EnvExit() {
  endwin();
  exit(0);
}

long long Env::GetTimeMs() {
  struct timeval tv;

  gettimeofday(&tv, NULL);
  return (long long)(tv.tv_sec) * 1000 + (long long)(tv.tv_usec) / 1000;
}

void Env::GameLoop() {
  long long next_game_tick = GetTimeMs();
  int ch;
  int sleep_time = 0;
  int delta_t;
  delta_t = time(NULL);
  Map map(*this);
  while (1) {
    ch = getch();
    clear();
    if (ch == KEY_ESC) EnvExit();
    clear();
    map.Turn(ch);
    _time = time(NULL) - delta_t;
    next_game_tick += SkipTicks;
    sleep_time = next_game_tick - GetTimeMs();
    if (sleep_time >= 0) {
      usleep(sleep_time);
    }
  }
}
