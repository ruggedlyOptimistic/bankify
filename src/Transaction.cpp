#include "Transaction.h"

//Account ID,Transaction ID,Date,Description,Check Number,Category,Tags,Amount,Balance

Transaction::Transaction(const std::string& date, const std::string& description, double amount)
            : date(date), description(description), amount(amount) // NOTE: what does this syntax mean?
{
    // NOTE: why can't I do...
    // this.date = date;
    // this.description = description;
    // ...etc

    // subjective data
    type = DEFAULT_STATUS;
    vendor = DEFAULT_STATUS;
    category = DEFAULT_STATUS;
}

std::string Transaction::getDate() const
{
    return date;
}

std::string Transaction::getDescription() const
{
    return description;
}

double Transaction::getAmount()
{
    return amount;
}

std::string Transaction::getType() const // NOTE: why do I need the 'const' keyword?
{
    return type;
}

void Transaction::setType(std::string value)
{
    type = value;
}


std::string Transaction::getVendor() const
{
    return vendor;
}

void Transaction::setVendor(std::string value)
{
    vendor = value;
}

std::string Transaction::getCategory() const
{
    return category;
}    

void Transaction::setCategory(std::string value)
{
    category = value;
}
