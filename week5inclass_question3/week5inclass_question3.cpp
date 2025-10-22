// week5inclass_question3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <algorithm>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid; // Return the index if found
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; // Search in the right half
        }
        else
        {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if not found
}

int main()
{
    int target;
    int arr[] = { 7, 2, 3, 5, 1 ,72, 10, 44, 72, 68, 34, 52, 98 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "aranan degeri giriniz: ";
    cin >> target;

    sort(arr, arr + size);
    int result2 = binarySearch(arr, size, target);
    cout << "siralanmis dizi: ";
    std::copy(arr, arr + size, std::ostream_iterator<int>(cout, " "));
    cout << endl;
    if (result2 != -1) {
        cout << "deger dizide vardir " << result2 << endl;
    }
    else {
        cout << "aranan deger dizide yoktur " << endl;
    }

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
