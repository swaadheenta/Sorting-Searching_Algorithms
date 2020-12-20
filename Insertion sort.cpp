#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the size of the array";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int i,j,key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    cout<<"After applying insertion sort the array becomes\n";

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
