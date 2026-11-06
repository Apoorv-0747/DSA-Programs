#include<bits/stdc++.h>
using namespace std;

//Function to get the maximum value in arr[]
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
// using counting sort to  sort elements in the basis of significant places
void countingSort(int arr[], int n, int exp) {
    const int max = 10;
    int output[n];
    int count[max] = {0};
    int i;
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

        //calculate cumulative count
    for (i = 1; i < max; i++)
        count[i] += count[i - 1];
        //place the elements in sorted order
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixsort(int arr[], int n) {
    //get maximum element from array
    int max = getMax(arr, n);
    //apply counting sort to sort elements based  on place value
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

//print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout << endl;
}

//driver code
int main() {
    int arr[] = {121, 432, 564, 231, 1, 45,788};
    int n = sizeof(arr) / sizeof(arr[0]);
    radixsort(arr, n);
    printArray(arr, n);
    return 0;
}