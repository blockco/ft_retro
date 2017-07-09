/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameObject.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:02:34 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 21:37:50 by jkalia           ###   ########.fr       */
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
	protected:
		float _h;
		float _w;
		char	*_image;
};
#endif
