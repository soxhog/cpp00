#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	char	*p;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			p = argv[i];
			while (*p)
			{
				*p = toupper(*p);
				p++;
			}
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	return (0);
}
