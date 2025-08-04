#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    // assume to create arrays for len1 ,len2 lenght

    int *left = new int[len1];
    int *right = new int[len2];
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }
    int leftindex = 0;
    int rightindex = 0;
    int mainarrayindex = s;
    while (leftindex < len1 && rightindex < len2)
    {
        if (left[leftindex] < right[rightindex])
        {
            arr[mainarrayindex++] = left[leftindex++];
        }
        else
            arr[mainarrayindex++] = right[rightindex++];
    }
    while (leftindex < len1)
    {
        arr[mainarrayindex++] = left[leftindex++];
    }
    while (rightindex < len2)
    {
        arr[mainarrayindex++] = right[rightindex++];
    }

    // todo right nad left array whichare creted
}
void mergeSort(int *arr, int s, int e)
{
    // base case
    // s==e singhelelement
    // s > e then the invlaid array
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}
int main()
{
    int arr[] = {98, 7, 6, 5, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int s = 0;
    int e = n - 1;
    mergeSort(arr, s, e);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}