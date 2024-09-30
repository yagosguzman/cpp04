/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:38:10 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/30 21:49:57 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
protected:
	std::string _ideas[100];

public:
	Brain();
	Brain(Brain &copy);
	~Brain();

	Brain& operator=(const Brain& src);

	void		writeIdea(std::string thought, int i);
	std::string	getIdea(int i);
};

#endif