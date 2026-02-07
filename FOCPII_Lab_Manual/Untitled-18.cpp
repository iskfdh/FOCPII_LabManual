#include <iostream>
using namespace std;
int main() {
    int n;
    int num, largest;
    cout << "Enter number of entries: ";
    cin >> n;
    cout << "Enter number 1: ";
    cin >> largest;   
    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num > largest) {
            largest = num;
        }}
    cout << "\nLargest number is: " << largest;
    return 0;
}
