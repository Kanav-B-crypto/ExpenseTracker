#include <iostream>
#include <string>
#include "ExpenseTracker.h"

using namespace std;

int main() {
    ExpenseTracker tracker;

    while (true) {
        cout << "\nExpense Tracker Menu:\n";
        cout << "1. Add Expense\n";
        cout << "2. View All Expenses\n";
        cout << "3. View Total Expense\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        
        int choice;
        cin >> choice;

        if (choice == 1) {
            string name, category;
            double amount;
            
            cout << "Enter expense name: ";
            cin.ignore();
            getline(cin, name);
            
            cout << "Enter amount: ";
            cin >> amount;
            
            cout << "Enter category: ";
            cin.ignore();
            getline(cin, category);

            Expense expense(name, amount, category);
            tracker.addExpense(expense);
        } 
        else if (choice == 2) {
            cout << "\nAll Expenses:\n";
            tracker.displayAllExpenses();
        } 
        else if (choice == 3) {
            cout << "\nTotal Expense: $" << tracker.calculateTotal() << endl;
        } 
        else if (choice == 4) {
            cout << "Exiting...\n";
            break;
        } 
        else {
            cout << "Invalid option, please try again.\n";
        }
    }
    
    return 0;
}
