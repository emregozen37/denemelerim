#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

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
	int arr[] = { 7, 2, 3, 5, 1 ,8, 10, 44, 72, 68, 34, 52, 98};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "aranan degeri giriniz: ";
	cin >> target;

    // linear search function

	int result = linearSearch(arr, size, target);
    if (result != -1) {
        cout << "deger dizide vardir " << result << endl;

    } 
    else {
        cout << "aranan deger dizide yoktur " << endl;

    }
	// linear search function    

	// binary search function
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

	// binary search function


    return 0;
}

