#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

#define DEFAULT_STATUS "UNSPECIFIED"

//Account ID,Transaction ID,Date,Description,Check Number,Category,Tags,Amount,Balance

class Transaction
{
    private:
        std::string type;
        std::string date;
        std::string description;
        std::string vendor;
        double amount;
        std::string category;

    public:

        Transaction(const std::string& date, const std::string& description, double amount);
        
        // Getters & Setters
        std::string getType() const;
        void setType(const std::string& value);

        std::string getVendor() const;
        void setVendor(const std::string& value);

        std::string getCategory() const;
        void setCategory(const std::string& value);

        std::string getDate() const;
        std::string getDescription() const;
        double getAmount();
};

#endif //TRANSACTION_H