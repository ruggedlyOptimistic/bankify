#ifndef SIMPLE_DATE_H
#define SIMPLE_DATE_H

#include <string>
#include <vector>
#include <sstream>
#include <iostream>

class SimpleDate
{
    private:
        int monthNum;
        std::string month;
        int day;
        int year;
        std::string fullDate;

    public:
        SimpleDate(const std::string& fullDate);        // expected as mm/dd/yyyy
        
        // std::vector<std::string> split(const std::string& datestring, char delimiter);
        int getMonthNum();
        std::string getMonth() const;
        int getDay();
        int getYear();

        std::string getFullDate() const;
};

#endif // SIMPLE_DATE_H