#include <iostream>
using namespace std;

int main()
{
    int x1, x2, i, j, k, y, z;
    float f;
    x1 = 1;
    x2 = 1;
    y = 5 + x1--;
    z = 5 + ++x2;
    i = 6 % 4;
    j = 1;
    j += j + 3;
    k = 25 / 2;
    f = (float)((2 / 5) * k);

    cout << "x1 is " << x1 << endl;
    cout << "x2 is " << x2 << endl;
    cout << " i is " << i << endl;
    cout << " j is " << j << endl;
    cout << " k is " << k << endl;
    cout << " y is " << y << endl;
    cout << " z is " << z << endl;
    cout << " f is " << f << endl;

	cin.ignore(2);

    return 0;
}