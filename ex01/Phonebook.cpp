# include "Phonebook.hpp"

Phonebook::Phonebook()
{
	count = 0;
	index = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::clear(void)
{
	std::cout << CLEAR << START_POSITION;
}

void	Phonebook::show_first_screen(void)
{
	clear();
	std::cout << "WELCOME TO PHONEBOOK!!" << std::endl;
	show_command();
}

void	Phonebook::show_command(void)
{
	std::cout << "\nENTER THE COMMAND LIKE..." << std::endl;
	std::cout << "<ADD>" << std::endl;
	std::cout << "	- The program will prompt the user to input a new contact’s information, one field at a time, until every field is accounted for." << std::endl;
	std::cout << "<SEARCH>" << std::endl;
	std::cout << "	- The program will display a list of the available non-empty contacts in 4 columns: index, first name, last name and nickname." << std::endl;
	std::cout << "<EXIT>" << std::endl;
	std::cout << "	- The program quits and the contacts are lost forever." << std::endl;
	std::cout << std::endl;
}

int	Phonebook::add_contact()
{
	clear();
	if (count >= MAX_CONTACT && count % MAX_CONTACT == 0)
		index = 0;
	if (contacts[index].set_infos(index + 1))
	{
		count++;
		index++;
	}
	if (!std::cin)
		return (EOF_FLAG);
	return (SUCCESS);
}

void	Phonebook::display_search_header(int maxIndex)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < maxIndex; i++)
		contacts[i].display_header();
	std::cout << "|-------------------------------------------|" << std::endl;
}

bool isNumber(const std::string& str)
{
	char	c;

	for (int i = 0; i < str.length(); i++)
	{
		c = str[i];
		if (std::isdigit(c) == 0)
			return (false);
	}
	return (true);
}

bool isTooBig(int i, int maxIndex)
{
	if (i > maxIndex)
		return (true);
	else
		return (false);
}

bool isTooSmall(int i)
{
	if (i <= 0)
		return (true);
	else
		return (false);
}

int	Phonebook::search_contact(void)
{
	std::string	indexStr;
	int			i;
	int			maxIndex;

	if (count == 0)
	{
		clear();
		std::cout << "$> Add a contact before searching!!" << std::endl;
	}
	else
	{
		std::cout << CLEAR << START_POSITION;
		if (count > MAX_CONTACT)
			maxIndex = MAX_CONTACT;
		else
			maxIndex = count;
		display_search_header(maxIndex);
		while (1)
		{
			std::cout << "$> Enter the index you want to see!!!" << std::endl;
			std::cout << "$>> ";
			std::getline(std::cin, indexStr);
			if (!std::cin)
				return (EOF_FLAG);
			i = atoi(indexStr.c_str());
			if (isNumber(indexStr) && !isTooBig(i, maxIndex) && !isTooSmall(i))
				break ;
		}
		clear();
		contacts[i - 1].display_infos();
	}
	return (SUCCESS);
}
