#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    /*first challenge*/
    cout<< "Hello, World!" <<endl;

    /*second challenge*/
    int num, num1,num2;

    cin>>num;
    cin>> num1;
    cin>> num2;

    cout << num + num1 + num2 <<endl;

    // third challenge
    int a; long long b; char c; float d; double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e << endl;

    return 0;
}
