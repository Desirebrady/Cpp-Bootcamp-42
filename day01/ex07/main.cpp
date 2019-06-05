/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:00:02 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 10:00:03 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{   
    std::string  filename;
    std::ifstream from;
    std::ofstream to;
    std::string find;
    std::string replace;
    std::string buf;
    size_t i;
    size_t j;

    if(argc != 4)
    {
        std::cout << "invalid parameters" << std::endl;
    }
    else
    {
        filename = argv[1];
        from.open(filename, std::ios::in);
        to.open(filename + ".replace",  std::ios::out | std::ios::trunc);
        if (from.is_open() && to.is_open())
        {
            find = argv[2];
            replace = argv[3];
            j = find.size();
            while(std::getline(from, buf))
            {
                i = 0;
                while((i = buf.find(find, i)) != std::string::npos){
                    buf.replace(i, j, replace);
                }
                to << buf << std::endl;
            }
            from.close();
            to.close();
        }
    }
    return (0);
}
