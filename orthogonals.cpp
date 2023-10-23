#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    double m1, m2; // Slopes as floating-point numbers

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;

    // Check for division by zero
    if (x2 - x1 != 0 && x4 - x3 != 0) {
        m1 = static_cast<double>(y2 - y1) / (x2 - x1);
        m2 = static_cast<double>(y4 - y3) / (x4 - x3);

        // Compare slopes to check for orthogonality
        if (m1 * m2 == -1) {
            cout << "Orthogonal";
        } else {
            cout << "Not Orthogonal";
        }
    }
    else if(x1==y2)
    {
        cout<<"Orthogonal";
    }
    else if(x1==0 && y1 ==0)
    {
        cout<<"Not Orthogonal";
    }

    return 0;
}