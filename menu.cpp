/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 12:09:29 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 17:26:26 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "menu.hpp"
#include <stdlib.h>
#include "Character.class.hpp"

void Menu::menu() {
//  WINDOW *win;
 // int h, w;
 // int y0, x0;
 // y0 = x0 = 0;
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
//  initscr(); /* start curses mode 		  */
//  getmaxyx(stdscr, h, w);
//  win = newwin(h, w, 0, w);
//   raw();                /* Line buffering disabled	*/
//  keypad(stdscr, TRUE); /* We get F1, F2 etc..		*/
//  noecho();             /* Don't echo() while we do getch */


  // printw("Hello World !!!"); /* Print Hello World		  */
  // nodelay(stdscr, TRUE);
  // for (;;) {
  //   ch = getch();
  // f (ch == 'x')
  //
  // endwin();
  // exit(0);
  //
  // printw(win, "%s", "hello");
  // ttron(A_BOLD);
  // printw("%c%d\n", ch, ch);
  // ttroff(A_BOLD);
  // efresh(); /* Print it on to the real screen */
  // }

  curs_set(0);
  nodelay(stdscr, TRUE);
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
}
