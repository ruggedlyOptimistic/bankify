#include "Transaction.h"
#include <iostream>

using namespace std;
int main()
{
    Transaction t = Transaction("12/25/2024", "test transaction Amazon *MKTPL", 45.0f);

    cout << "Transaction amount: $" << t.Transaction::getAmount() << endl;

    std::cout << "Test Complete" << std::endl;

    return 0;
}