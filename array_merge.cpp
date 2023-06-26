#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[7] = {6, 7, 8, 9, 10};

    int lenARR = sizeof(arr)/sizeof(arr[0]);
    int lenBRR = sizeof(brr)/sizeof(brr[0]);


    int len = lenARR+lenBRR;
    int newArr[len];

    int k = 0;
    for(int i = 0; i < lenARR; i++, k++)
    {
        newArr[k] = arr[i];
    }

    for(int i = 0; i < lenBRR; i++, k++)
    {
        newArr[k] = brr[i];
    }

    for(int i = 0; i < len; i++)
    {
        cout << newArr[i];
    }

    
}
