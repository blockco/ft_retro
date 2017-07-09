/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameObject.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:02:34 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/08 18:31:13 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GameObject_CLASS_HPP
#define GameObject_CLASS_HPP
#include <ncurses.h>

class GameObject{
public:
	GameObject();
	~GameObject();
	void Print();
protected:
	int _h;
	int _w;
	char	*_image;
};
#endif
