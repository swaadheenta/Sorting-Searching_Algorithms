#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the size of the array";
    int n;
    cin>>n;
    cout<<"Enter the values of the array";
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    int i, j, min_ind;
    for (i = 0; i < n-1; i++)
    {
        min_ind = i;
        for (j = i+1; j < n; j++)
        {if (arr[j] < arr[min_ind])
            min_ind = j;
        }

        swap(arr[min_ind], arr[i]);
    }
    cout<<"After Selection sort array becomes\n";

      for (i = 0; i < n; i++)
        cout << arr[i] << " ";
}

