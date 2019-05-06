#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Logger.hpp"

struct t_output
{
    std::string name;
    void (Logger::*func)(std::string const &);
};

int Logger::_output_num = 2;

t_output		Logger::_out_puts[] = {
	{"console", &Logger::logToConsole},
	{"file", &Logger::logToFile}
};

Logger::Logger(std::string const &file): _file(file)
{
}

Logger::~Logger()
{
}

std::string Logger::makeLogEntry(std::string const &message)
{
    time_t  t = time(NULL);
    struct tm *now  = localtime(&t);
    std::ostringstream log;

    log << "|"
        << (now->tm_year + 1900)
        << "-"
        << std::setw(2) << std::setfill('0') << now->tm_mon
        << "-"
        << std::setw(2) << std::setfill('0') << now->tm_mday
        << '_'
        << std::setw(2) << std::setfill('0') << now->tm_hour
        << ":"
        << std::setw(2) << std::setfill('0') << now->tm_min
        << ":"
        << std::setw(2) << std::setfill('0') << now->tm_sec
        << "| "
        << message;
    return(log.str());
}

void			Logger::logToConsole(std::string const &message)
{
	std::cout << makeLogEntry(message) << std::endl;
}

void			Logger::logToFile(std::string const &message)
{
	std::ofstream	file;

	file.open(_file, std::ios::out | std::ios::app);
	if (file.is_open())
		file << makeLogEntry(message) << std::endl;
}

void			Logger::log(std::string const &dest, std::string const &message)
{
	int			i;

	i = 0;
	while (i < _output_num)
	{
		if (dest == _out_puts[i].name)
		{
			(this->*_out_puts[i].func)(message);
			break;
		}
		i++;
	}
}