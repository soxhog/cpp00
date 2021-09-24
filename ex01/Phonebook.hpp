#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACT 8
# define CLEAR "\033[2J"
# define START_POSITION "\r\033[1;1H"
# define EOF_FLAG 1
# define SUCCESS 0

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include "Contact.hpp"

class Phonebook
{
private:
		Contact	contacts[MAX_CONTACT];
		int		count;
		int		index;
public:
	Phonebook();
	~Phonebook();
	void	show_first_screen(void);
	void	show_command(void);
	int		add_contact(void);
	int		search_contact(void);
	void	display_search_header(int maxIndex);
	void	clear(void);
};

# endif
