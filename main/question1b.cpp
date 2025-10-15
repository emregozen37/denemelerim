#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Bir sayi girin: ";
    cin >> number;
    int factorial = 1;
	for (int i = 0; i < number; i++) {
		factorial *= (i + 1);
    }
	cout << factorial << endl;

    return 0;

}