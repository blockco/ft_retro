/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 12:09:29 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 17:20:08 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "menu.hpp"
#include <stdlib.h>
#include "Character.class.hpp"

void menu() {
  WINDOW *win;
  int h, w;
  int y0, x0;
  y0 = x0 = 0;
  int ch;

  initscr(); /* Start curses mode 		  */
  getmaxyx(stdscr, h, w);
  win = newwin(h, w, 0, w);
  // raw();                /* Line buffering disabled	*/
keypad(stdscr, TRUE); /* We get F1, F2 etc..		*/
noecho();             /* Don't echo() while we do getch */

Character rob(h, w);
curs_set(0);
nodelay(stdscr, TRUE);
for (;;) {
	 if ((ch = getch()) == ERR)
		rob.Printship();
	 else {
		 	clear();
			rob.Move(ch);
	 }
}
}
