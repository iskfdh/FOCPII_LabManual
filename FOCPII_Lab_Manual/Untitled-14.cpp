#include <iostream>
using namespace std;
int main() {
    int items;
    float ppi, tot_exp, discount = 0, f_amt;
    cout << "Enter number of items: ";
    cin >> items;
    cout << "Enter price per item: ";
    cin >> ppi;
    tot_exp = items * ppi;
    if (items > 1000) {
        discount = tot_exp * 0.10;   
    }
    f_amt = tot_exp - discount;
    cout << "\nTotal Expense: " << tot_exp << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount to Pay: " << f_amt << endl;
    return 0;
}
