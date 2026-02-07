#include <iostream>
using namespace std;
int main() {
    int n;
    float a, b, ans;
    cout << "Enter number of employees: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "\nEnter basic salary of employee " << i << ": ";
        cin >> a;
        b = a * 0.12;     
        ans = a + b;
        cout << "Bonus: " << b << endl;
        cout << "Net Salary: " << ans << endl;
    }
    return 0;
}
