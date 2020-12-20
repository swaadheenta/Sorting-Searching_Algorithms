#include <bits/stdc++.h>
using namespace std;

int main()
{   cout<<"Enter the size of the array";
    int n;
    cin>>n;
    cout<<"Enter the values of the array";
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    int i, j;
    for (i = 0; i < n-1; i++)
      {
          for (j = 0; j < n-i-1; j++)
          {
              if (arr[j] > arr[j+1])
              swap(arr[j], arr[j+1]);
          }
      }
    cout<<"After Bubble sort array becomes\n";

      for (i = 0; i < n; i++)
        cout << arr[i] << " ";
}
