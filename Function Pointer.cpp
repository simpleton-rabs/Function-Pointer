// Example program
#include <iostream>
//#include <string>
using namespace std;

int funcAB(int x, int y);

int main()
{

    int a;
    int* aPoint = &a;

    int b;
    int* bPoint = &b;

    int c;
    int* cPoint = &c;


    cout << "Enter an A value: ";
    cin >> a;
    cout << endl << "The value of A is: " << a << " and the memory address is: " << aPoint << endl;

    cout << "Enter an B value: ";
    cin >> b;
    cout << endl << "The value of B is: " << b << " and the memory address is: " << bPoint << endl;

    c = funcAB(a, b);

    //c = a * b;
    cout << endl << "The value of C is: " << c << " and the memory address is: " << cPoint << endl;

    //int (*funcABPoint)(int, int) = funcAB;

    int (*funcABPoint)(int, int);

    funcABPoint = funcAB;

    cout << "Func address is: " << funcABPoint << endl;






}

int funcAB(int x, int y) {
    int z;
    z = x * y;
    return z;
}
