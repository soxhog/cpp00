#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

# define MAX_INFO 5
# define MAX_HEADER 3

class Contact
{
private:
		int			index;
		static std::string	fields[MAX_INFO];
		std::string	infos[MAX_INFO];

public:
		Contact();
		virtual ~Contact();

		bool	set_infos(int index);
		void	display_infos(void);
		void	display_header(void);
};

# endif
