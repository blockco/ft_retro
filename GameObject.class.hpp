/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameObject.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:02:34 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 15:35:27 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GameObject_CLASS_HPP
#define GameObject_CLASS_HPP
#include "Env.class.hpp"

#include <ncurses.h>
#include <string.h>

class GameObject : public Env
{
	public:
		GameObject();
		~GameObject();
		void Print();
		int get_w() const;
		int get_h() const;
		void setw(int w);
		void seth(int h);
		bool getstate() const;
		void setstate(bool instate);
	protected:
		float _h;
		float _w;
		float _velocity;
		int   _score;
		char *_image;
		bool _state;
};
#endif
