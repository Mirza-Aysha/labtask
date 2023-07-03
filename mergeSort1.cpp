#include<bits/stdc++.h>
using namespace std;
void Merge(int *a,int l,int m,int r)
{
    int n1 = m-l+1;
    int n2 = r-m;

    int *L = new int[n1];
    int *R = new int[n2];

    for(int i=0; i<n1; i++)
    {
        L[i] = a[l+i];
    }
    for(int i=0; i<n2; i++)
    {
        R[i] = a[m+1+i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while(i<n1 && j<n2)
    {
        if(L[i] < R[j])
        {
            a[k++] = R[j++];
        }
        else{
            a[k++] = L[i++];
        }
    }
    while(i<n1)
    {
        a[k++] = L[i++];
    }
    while(i<n2)
    {
        a[k++] = R[j++];
    }
}
void MergeSort(int *a,int l,int r)
{
   if(l<r)
   {
       int m = (l+r)/2;
       MergeSort(a,l,m);
       MergeSort(a,m+1,r);
       Merge(a,l,m,r);
   }
}
void printArray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " " ;
    }
    cout << endl;
}
int main()
{
    int  n = 5000;
    srand(time(0));

    int *a = new int[n];
    for(int i=0;i<n;i++)
    {
        a[i] = (rand()%1001);
    }

    printArray(a,n);
    MergeSort(a,0,n-1);
    cout << "=============" << endl;
    printArray(a,n);
}