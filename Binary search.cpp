#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        else if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
   return -1;
}

int main()
{   cout<<"Enter the size of the array";
    int p;
    cin>>p;
    int arr[p];
    cout<<"Enter the elements of the array";
    for(int i=0;i<p;i++)
        cin>>arr[i];
    cout<<"Enter the element to be searched";
    int x;
    cin>>x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array": cout << "Element is present at index " << result;
    return 0;
}
