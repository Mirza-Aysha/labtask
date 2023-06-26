#include <iostream>
#include <array>
using namespace std;

int main()
{
    //int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int arr[] = {1, 43, 4,2, 645, 24, 234, 756, 434};
    int value = 645;
    int len = sizeof(arr)/sizeof(arr[0]);

    //Bubble Sort
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len - 1- i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    //Binary Search
    int first = 0; 
    int last = len - 1;
    int middle;

    for(int i = 0; i < len; i++)
    {
        middle = (first + last)/2;
        if(first > last)
        {
            cout << "Not Found";
            break;
        }
        if(arr[middle] == value)
        {
            cout << "Found in index " <<middle;
            break;
        }
        else if(arr[middle] > value)
        {
            last = middle - 1;
        }
        else if(arr[middle] < value)
        {
            first = middle + 1;
        }
    }
}