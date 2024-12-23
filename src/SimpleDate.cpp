#include "SimpleDate.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>


SimpleDate::SimpleDate(const std::string& fullDate)
            {
                std::vector<std::string> parts = split(fullDate, '/');
                monthNum = (uint8_t) parts[0];
                day = (uint8_t) parts[1];
                year = (uint16_t) parts[2];

                static const std::string months[] = 
                {
                    "January", "February", "March", "April", "May", "June",
                    "July", "August", "September", "October", "November", "December"
                };

                month = months[monthNum - 1];
            }

std::vector<std::string> split(const std::string& datestring, char delimiter)
{
    std::vector<std::string> tokens;
    std::istringstream stream(datestring);
    std::string token;

    while (std::getline(stream, token, delimiter))
    {
        tokens.push_back(token);
    }

    return tokens;
}

uint8_t SimpleDate::getMonthNum()
{
    return monthNum;
}

std::string SimpleDate::getMonth() const
{
    return month;
}

uint8_t SimpleDate::getDay()
{
    return day;
}

uint16_t SimpleDate::getYear()
{
    return year;
}
