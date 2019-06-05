/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:01:59 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 10:02:00 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LOGGER_H_
#define _LOGGER_H_


#include <iostream>
#include <string>

struct t_output;
class Logger
{
    private:
        static t_output	_out_puts[];
	    static int		_output_num;
        void logToConsole(std::string const &message);
        void logToFile(std::string const &message);
        std::string makeLogEntry(std::string const &message);
        std::string _file;

    public:
        Logger(std::string const &file);
        ~Logger(void);
        void log(std::string const &dest, std::string const &message);
};
#endif // !_LOGGER_H_
