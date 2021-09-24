# include "Phonebook.hpp"

int	main(void)
{
	Phonebook Phonebook;
	std::string command;

	Phonebook.show_first_screen();
	while (std::cin)
	{
		std::cout << "$>> ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			if (Phonebook.add_contact() == EOF_FLAG)
				break ;
			std::cout << CLEAR << START_POSITION;
		}
		else if (command == "SEARCH")
		{
			if (Phonebook.search_contact() == EOF_FLAG)
				break ;
		}
		else if (command == "EXIT")
		{
			std::cout << "See you again!!" << std::endl;
			break ;
		}
		if (std::cin)
			Phonebook.show_command();
	}
	return (0);
}
