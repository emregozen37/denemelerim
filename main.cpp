#include <iostream>
using namespace std;


int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int number;
    cout << "Bir sayi girin: ";
    cin >> number;

    if (number < 0) {
        cout << "Negatif sayilarin faktoriyeli tanımsızdır." << endl;
    }
    else {
        cout << number << "! = " << factorial(number) << endl;
    }
    return 0;
}