#include <iostream>
#include <cstring>


void megaphone(int argc, std::string &argv[])
{
    int i = 0;
    int n = 1;
    if (argc < 2)
    {
        std::cout << "* LOUD UBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        while(argv[n])
        {
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
int main()
{
    std::string argv[2][2] = {{"Helo","heya"},
                        {"one","two"}    
    };
    megaphone(int argc, std::string &argv[]);

    return 0;
}
