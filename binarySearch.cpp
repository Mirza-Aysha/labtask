#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int val)
{
    if(high >= low)
    {
       
    int mid = (low + high) / 2;

    if (val == arr[mid])
        return mid;

    else if(val < arr[mid])
        return binarySearch(arr, low, mid-1, val);
    
    else if(val > arr[mid])
        return binarySearch(arr, mid+1, high, val); 
    }
    return -1; 
}

int main()
{
    int  n = 5000;
    srand(time(0));

    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = (rand()%1001);
    }

    for(int i = 0; i < n; i++)
    {
        cout<< arr[i] << ' ';
    }
    cout << "--------------------------------------------------------\n";

    int val = 500;
    int output = binarySearch(arr, 0, n-1, val);

    if(output == -1)
    {
        cout << val << " is not present in the array.";
    }
    else
    {
        cout << val << " found in the index - " << output;
    }
}