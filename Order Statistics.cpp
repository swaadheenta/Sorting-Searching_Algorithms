#include<iostream>
#include<climits>
#include<cstdlib>
using namespace std;

int randomPartition(int arr[], int l, int r);


int kthSmallest(int arr[], int l, int r, int k)    // This function returns k'th smallest element in arr[l..r].
{
    // If k is smaller than number of elements in array
    if (k > 0 && k <= r - l + 1)
    {

        int pos = randomPartition(arr, l, r);


        if (pos-l == k-1)
            return arr[pos];
        if (pos-l > k-1)
            return kthSmallest(arr, l, pos-1, k);


        return kthSmallest(arr, pos+1, r, k-pos+l-1);
    }


    return INT_MAX;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int arr[], int l, int r)
{
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] <= x)
        {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}


int randomPartition(int arr[], int l, int r)
{
    int n = r-l+1;
    int pivot = rand() % n;
    swap(&arr[l + pivot], &arr[r]);
    return partition(arr, l, r);
}


int main()
{   cout<<"Enter the size of the array";
    int p;
    cin>>p;
    int arr[p];
    cout<<"Enter the elements of the array";
    for(int i=0;i<p;i++)
        cin>>arr[i];
    //int arr[] = {12, 3, 5, 7, 4, 19, 26};
    int n = sizeof(arr)/sizeof(arr[0]), k;
    cout<<"Enter the value of k";
    cin>>k;
    cout << "K'th smallest element is " << kthSmallest(arr, 0, n-1, k);
    return 0;
}
