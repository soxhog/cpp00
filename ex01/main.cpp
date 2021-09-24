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
			Phonebook.add_contact();
			std::cout << CLEAR << START_POSITION;
		}
		else if (command == "SEARCH")
			Phonebook.search_contact();
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
