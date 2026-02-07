#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    double D, root1, root2;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "Not a quadratic equation";
        return 0;
    }
    D = b * b - 4 * a * c;
    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        cout << "Two real and distinct roots:\n";
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (D == 0) {
        root1 = -b / (2 * a);
        cout << "One real root:\n";
        cout << "Root = " << root1 << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-D) / (2 * a);
        cout << "Complex roots:\n";
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }
    return 0;
}
