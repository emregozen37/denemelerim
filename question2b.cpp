#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "integer bir sayi girin =  ";
    cin >> x;
    cout << "aralik girin = ";
    cin >> y;

    for (int i = 1; i <= y; ++i) {
        cout << x << " * " << i << " = " << y * i << endl;
    }
}