#include "ExpenseTracker.h"

void ExpenseTracker::addExpense(const Expense &expense) {
    expenses.push_back(expense);
}

void ExpenseTracker::displayAllExpenses() const {
    for (const auto &expense : expenses) {
        expense.displayExpense();
    }
}

double ExpenseTracker::calculateTotal() const {
    double total = 0;
    for (const auto &expense : expenses) {
        total += expense.getAmount();
    }
    return total;
}
