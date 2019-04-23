#include <iostream>
#include <cstring>


void megaphone(int argc, char **argv)
{
	int i = 0;
	int n = 1;
	if (argc < 2)
	{
		std::cout << "* LOUD UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		while(argv[n])
		{ 
			i = 0;
			while(argv[n][i])
			{
				char c = argv[n][i];
				putchar(toupper(c));
				i++;
			}
			n++;
		}
	}
}
int main(int argc, char **argv)
{
	megaphone(argc, argv);
	return 0;
}
