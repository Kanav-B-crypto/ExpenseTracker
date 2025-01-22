#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>
#include <iostream>

class Expense {
private:
    std::string name;
    double amount;
    std::string category;
public:
    Expense(std::string name, double amount, std::string category); // Constructor
    std::string getName() const;
    double getAmount() const;
    std::string getCategory() const;
    void displayExpense() const; // To display expense details
};

#endif
