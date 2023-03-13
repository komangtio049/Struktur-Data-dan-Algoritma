#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int index[], int left, int right, int key) {
   while (left <= right) {
      int mid = left + (right - left) / 2;
      if (arr[index[mid]] == key)
         return index[mid];
      if (arr[index[mid]] < key)
         left = mid + 1;
      else
         right = mid - 1;
   }
   return -1;
}

int main()
{
   int arr[] = {23, 12, 5, 30, 26, 8, 19, 11, 2, 9};
   int index[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   int n = sizeof(arr) / sizeof(arr[0]);
   sort(index, index + n, [&](int i, int j) { return arr[i] < arr[j]; });
   int key;
   cout << "Data : 2, 5, 8, 9, 11, 12, 19, 23, 26, 30";
   cout << "\nMasukkan data yang ingin di cari: ";
   cin >> key;
   int result = binarySearch(arr, index, 0, n-1, key);
   if (result == -1)
      cout << "Data tidak ditemukan";
   else
      cout << "Data berada pada index " << result;
   return 0;
}
