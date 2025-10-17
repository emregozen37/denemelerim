#include <iostream>
#include <algorithm>
#include <iterator>
#include "linkedListNode.h"
using namespace std;


void SortedLinkedListTest() {
    SortedLinkedList list;
	cout << "Adding elements to the sorted linked list:" << endl;
    list.add(5);
	cout << "After adding 5: ";
	list.printList();

    list.add(2);
	cout << "After adding 2: ";
	list.printList();
    
    list.add(8);
	cout << "After adding 8: ";
    list.printList();
	
    list.add(3);
	cout << "After adding 3: ";
    list.printList();
    
};


// --------------------------------- numJevelsInStones -------------------------------------
int numJewelsInStones(string jewels, string stones) {
    // 1. Sonucu saklamak için bir sayaç (counter) değişkeni oluşturulur ve 0'dan başlatılır.
    int count = 0;

    // 2. Dış döngü: "jewels" string'indeki her bir karakter için çalışır.
    // Örneğin jewels = "aA" ise, bu döngü önce ch1 = 'a' için, sonra ch1 = 'A' için çalışacaktır.
    for (auto ch1 : jewels) {

        // 3. İç döngü: "stones" string'indeki her bir karakter için çalışır.
        // Bu döngü, dış döngünün HER BİR adımı için baştan sona tekrar çalışır.
        for (auto ch2 : stones) {

            // 4. Karşılaştırma: O anki mücevher karakteri (ch1) ile o anki taş karakteri (ch2) aynı mı diye kontrol edilir.
            if (ch1 == ch2) {

                // 5. Eğer karakterler aynıysa, sayaç bir artırılır.
                count++;
            }
        }
    }
    // 6. Tüm döngüler bittikten sonra, bulunan toplam mücevher sayısı döndürülür.
    return count;
}

// -------------------------------- LinearSearch --------------------------------------

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

// -------------------------------- BinarySearch --------------------------------------

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


// ------------------------------------- computing 1+2+..n recursively ------------------------------------------
int sum(int n) {
    if (n == 1) {
        return 1; // Base case: if n is 1, return 1
    }

	int partialSum = sum(n - 1); // Recursive call: sum of numbers up to n-1
    
	return n + partialSum; // Merge (birleştirme): add n to the partial sum
}

// ---------------------------------------- computes a^n ----------------------------------------------
int ushesaplama(int a, int n) {
    if (n == 0) {
        return 1; // Base case: any number to the power of 0 is 1
    }
    else if(n == 1) {
        return a; // Base case: a^1 is a
	}

    int partialResult = ushesaplama(a, n - 1); // Recursive call: compute a^(n-1)
    return a * partialResult; // Merge: multiply a with the partial result
}

// ---------------------------------------- fibonacci function ----------------------------------------------
int fibonacci(int n) {
    if (n <= 0) {
        return 0; // Base case: fibonacci(0) is 0
    }
    else if (n == 1) {
        return 1; // Base case: fibonacci(1) is 1
    }
    int partial1 = fibonacci(n - 1); // Recursive call: fibonacci(n-1)
    int partial2 = fibonacci(n - 2); // Recursive call: fibonacci(n-2)
    return partial1 + partial2; // Merge: sum of the two previous Fibonacci numbers
}

// iterative version of Fibonacci
int fibonacciIterative(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    int a = 0;
    int b = 1;
    for (int i = 2; i <= n; ++i) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// ---------------------------------------- superDigit function ----------------------------------------------
int superDigit(int n, int k) {
    if (n < 10) {
        return n; // Base case: if n is a single digit, return n
    }
    int sum = 0;
    while (n > 0) {
        sum += n % 10; // Add the last digit to sum
        n /= 10; // Remove the last digit
    }
    return superDigit(sum * k, 1); // Recursive call with the new sum multiplied by k
}

int main()
{
	
#if 0
    int target;
	int arr[] = { 7, 2, 3, 5, 1 ,72, 10, 44, 72, 68, 34, 52, 98};
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

	// numJevelsInStonesfunction
	string jewels = "aA";
	string stones = "aAAbbbb";
	cout << "numJewelsInStones: " << numJewelsInStones(jewels, stones) << endl;

	// computing 1+2+..n recursively
    int x = 0;
	x = sum(5);
	cout << "X: " << x << endl;


	// computes a^n
	int a = 2;
	int n = 3;
	int ushesapSonuc = ushesaplama(a, n);
	cout << a << " ^ " << n << " = " << ushesapSonuc << endl;


	// fibonacci function
	int fibIndex = 6;
	cout << "Fibonacci of " << fibIndex << ": " << fibonacciIterative(fibIndex) << endl;


	// superDigit function
	int number = 9875;
	int k = 4;
	cout << "Super Digit of " << number << " repeated " << k << " times: " << superDigit(number, k) << endl;
    
#endif  
	// SortedLinkedList test
	SortedLinkedListTest();
    return 0;
}

