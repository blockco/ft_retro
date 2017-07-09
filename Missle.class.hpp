/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missle.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:19:37 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/09 15:20:36 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MISSLE_CLASS_HPP
#define MISSLE_CLASS_HPP

#include "GameObject.class.hpp"

class Missle : public GameObject{
public:
	Missle();
	~Missle();
	void Fire(int _inh, int _inw);
	bool getstate() const;
	void Action();
private:
	bool _state;
	Bullet tom[3];
};
#endif
