#include "Expense.h"

Expense::Expense(std::string name, double amount, std::string category) {
    this->name = name;
    this->amount = amount;
    this->category = category;
}

std::string Expense::getName() const {
    return name;
}

double Expense::getAmount() const {
    return amount;
}

std::string Expense::getCategory() const {
    return category;
}

void Expense::displayExpense() const {
    std::cout << "Expense: " << name << " | Amount: $" << amount << " | Category: " << category << std::endl;
}
