/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 12:09:29 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 14:16:04 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "menu.hpp"

void menu() {
  WINDOW *win;
  int h, w;
  int y0, x0;
  y0 = x0 = 0;
  int ch;

  initscr(); /* Start curses mode 		  */
  getmaxyx(stdscr, h, w);
  win = newwin(w, h, y0, x0);

  raw();                /* Line buffering disabled	*/
  keypad(stdscr, TRUE); /* We get F1, F2 etc..		*/
  noecho();             /* Don't echo() while we do getch */

  printw("Hello World !!!"); /* Print Hello World		  */
  // nodelay(stdscr, TRUE);
  for (;;) {
    ch = getch();
    wprintw(win, "The pressed key is ");
    attron(A_BOLD);
    printw("%c\n", ch);
    attroff(A_BOLD);
    refresh(); /* Print it on to the real screen */
  }
  endwin();
}
