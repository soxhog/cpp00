# include "Phonebook.hpp"

int	main(void)
{
	Phonebook Phonebook;
	std::string command;

	Phonebook.show_first_screen();
	while (1)
	{
		std::cout << "$>> ";
		std::getline(std::cin, command);
		if (command == "ADD")
			Phonebook.add_contact();
		else if (command == "SEARCH")
			Phonebook.search_contact();
		else if (command == "EXIT")
		{
			std::cout << "See you again!!" << std::endl;
			break ;
		}
		if (command == "ADD")
			std::cout << CLEAR << START_POSITION;
		Phonebook.show_command();
	}
	return (0);
}
