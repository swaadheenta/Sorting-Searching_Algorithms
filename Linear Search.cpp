#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,  target_val, n;
    bool found=false;
    cout<<"Enter the number of elements ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements one by one \n";
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element to be searched ";
    cin>>target_val;

    for (i = 0; i < n ; i++)
    {
        if (target_val == arr[i] )
        {
            found = true;
            break;
        }
    }
    if (found)
        cout<<"Element is present in the array at position "<<i+1;
    else
        cout<<"Element is not present in the array\n";
}
