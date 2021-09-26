#include <iostream>
#include <string>

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	if (str)
	{
		while (str[len])
			len++;
	}
	return (len);
}

bool	is_lowalpha(char c)
{
	if (('a' <= c && c <= 'z'))
		return (true);
	else
		return (false);
}

int	main(int argc, char **argv)
{
	char	c;
	int		len;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			len = ft_strlen(argv[i]);
			for (int j = 0; j < len; j++)
			{
				c = argv[i][j];
				if (is_lowalpha(c))
					c -= ' ';
				std::cout << c;
				
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
