
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int satir, sutun;
    cout << "Satir sayisini giriniz: ";
    cin >> satir;
    cout << "Sutun sayisini giriniz: ";
    cin >> sutun;

    int* X = new int[satir * sutun];

    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            int idx = i * sutun + j;
            
            cout << "&X[" << i << "][" << j << "] = adres = " << X + idx << endl;
        }
    }

    cout << "Toplam bellek miktari: " << satir * sutun * sizeof(int) << " byte" << endl;

    delete[] X;
    return 0;
}
