/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Env.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:58:42 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 15:55:20 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Env.class.hpp"
#include <unistd.h>
#include "Map.class.hpp"

Env::EnvState Env::_envstate = Uninitialized;
Env::EnvState Env::GetEnvState() const { return _envstate; }
void Env::SetEnvState(EnvState &in) { _envstate = in; }
int Env::_winw = 0;
int Env::_winh = 0;
long long Env::_time = 0;
long long Env::_score = 100;

Env::Env() {}
Env::~Env() {}
Env::Env(const Env &src) { *this = src; }
Env &Env::operator=(const Env &env) { return *this; }

void Env::Start(void) {
  if (_envstate != Uninitialized) return;
  EnvInit();
  GameLoop();
  if (_envstate == Exiting) EnvExit();
}

void Env::EnvInit() {
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

void Env::EnvExit() {
  endwin();
  exit(0);
}

long long Env::GetTimeMs() {
  struct timeval tv;

  gettimeofday(&tv, NULL);
  return (long long)(tv.tv_sec) * 1000 + (long long)(tv.tv_usec) / 1000;
}

const int Env::FPS = 10;
const int Env::SkipTicks = 1000 / Env::FPS;

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
    if (_envstate == Exiting) EnvExit();
    clear();
    map.Turn(ch);
    _time = time(NULL) - delta_t;
    next_game_tick += SkipTicks;
    sleep_time = next_game_tick - GetTimeMs();
    if (sleep_time >= 0) {
      usleep(sleep_time);
    } else {
      continue;
    }
  }
}
