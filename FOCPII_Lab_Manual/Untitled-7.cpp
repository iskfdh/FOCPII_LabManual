#include <iostream>
using namespace std;

int main() {
    int a, b;
    float c, d, e, ans;
    cout << "Enter item number: ";
    cin >> a;
    cout << "Enter quantity: ";
    cin >> b;
    cout << "Enter unit price: ";
    cin >> c;
    d = b * c;
    e = d * 0.20; 
    ans = d - e;
    cout << "\nItem Number: " << a << endl;
    cout << "Total Amount: " << d << endl;
    cout << "Discount (20%): " << e << endl;
    cout << "Final Bill Amount: " << ans << endl;
    return 0;
}
