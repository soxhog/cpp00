# include "Contact.hpp"

std::string	Contact::fields[MAX_INFO] = {
	"first name",
	"last name",
	"nickname",
	"phone number",
	"darkest secret"
};

Contact::Contact()
{
	this->index = 0;
	for (int i = 0; i < MAX_INFO; i++)
		infos[i] = std::string();
}

Contact::~Contact()
{
}

bool	Contact::set_infos(int index)
{
	size_t	totalSize;

	this->index = index;
	for (int i = 0; i < MAX_INFO; i++)
	{
		std::cout << "$> " << Contact::fields[i] << ";\n$>>";
		std::getline(std::cin, infos[i]);
		if (!std::cin)
			return (false);
	}
	totalSize = 0;
	for (int i = 0; i < MAX_INFO; i++)
		totalSize += infos[i].length();
	if (totalSize == 0)
	{
		std::cout << "$> You can NOT add empty contact!!!" << std::endl;
		return (false);
	}
	std::cout << "Contact has been added!!" << std::endl;
	return (true);
}

void	Contact::display_header()
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = 0; i < MAX_HEADER; i++)
	{
		std::cout << "|";
		if (infos[i].length() > 10)
			std::cout << infos[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << infos[i];
	}
	std::cout << "|" << std::endl;
}

void	Contact::display_infos()
{
	std::cout << "~ Contact [" << index << "]" << std::endl;
	for (int i = 0; i < MAX_INFO; i++)
	{
		std::cout << fields[i] << ": ";
		std::cout << infos[i] << std::endl;
	}
}
