/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:03:39 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 10:03:41 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
#include<stdlib.h>
#include <sys/stat.h>

bool is_dir(const char* path) {
    struct stat buf;
    stat(path, &buf);
    return S_ISDIR(buf.st_mode);
}

int main(int argc, char **argv)
{
	
	std::ifstream ifile;
	char *fname;
    std::string s;
	
	fname = argv[1];
	ifile.open(fname);
    if(is_dir(fname))
	{
		std::cout<<"This is a directory..!!";
         return (0);
	}
	if(!ifile)
	{
		std::cout<<"Error in opening file..!!";
        return (0);
	}
	while(ifile.eof() == 0)
	{
        std::getline(ifile , s);
        std::cout << s << std::endl;
	}
	ifile.close();
    return (0);
}
