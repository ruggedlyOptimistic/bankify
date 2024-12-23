#include "SimpleDate.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> split(const string& datestring, char delimiter)
{
    vector<string> tokens;
    istringstream stream(datestring);
    string token;

    while (getline(stream, token, delimiter))
    {
        tokens.push_back(token);
    }

    return tokens;
}

SimpleDate::SimpleDate(const string& fullDate)
            {
                vector<string> parts = split(fullDate, '/');
                monthNum = stoi(parts[0]);
                day = stoi(parts[1]);
                year = stoi(parts[2]);

                static const string months[] = 
                {
                    "January", "February", "March", "April", "May", "June",
                    "July", "August", "September", "October", "November", "December"
                };

                month = months[monthNum - 1];
            }

int SimpleDate::getMonthNum()
{
    return monthNum;
}

string SimpleDate::getMonth() const
{
    return month;
}

int SimpleDate::getDay()
{
    return day;
}

int SimpleDate::getYear()
{
    return year;
}
