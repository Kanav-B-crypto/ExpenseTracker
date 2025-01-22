#ifndef EXPENSE_TRACKER_H
#define EXPENSE_TRACKER_H

#include "Expense.h"
#include <vector>

class ExpenseTracker {
private:
    std::vector<Expense> expenses; // Store all expenses
public:
    void addExpense(const Expense &expense);  // Add an expense
    void displayAllExpenses() const; // Display all expenses
    double calculateTotal() const;  // Calculate total amount spent
};

#endif
