#ifndef SIMPLE_DATE_H
#define SIMPLE_DATE_H

class SimpleDate
{
    private:
        uint8_t monthNum;
        std::string month;
        uint8_t day;
        uint16_t year;
        std::string fullDate;

    public:
        SimpleDate(const std::string& fullDate);        // expected as mm/dd/yyyy
        
        uint8_t getMonthNum();
        std::string getMonth() const;
        uint8_t getDay();
        uint8_t getYear();

        std::string getFullDate() const;
};

#endif // SIMPLE_DATE_H