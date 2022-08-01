#include<bits/stdc++.h>
using namespace std;
void printArray(int size,int *arr)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{

    int size;
    cin>>size;
    int *arr = new int[size+1] {0};

    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }

    int pos,value;
    cout<<"Insertion your position : ";
    cin>>pos;
    cout<<"Insertion your value : ";
    cin>>value;

    if(pos == size)
    {
        arr[pos] = value;
    }
    else
    {
        for(int i = size; i>pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos] = value;
    }
    cout<<"After Insertion : ";
    printArray(size+1,arr);




    return 0;
}
