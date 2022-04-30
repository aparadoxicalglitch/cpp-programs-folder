#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

// Function objects (Functor) : funtion which is wrapped in a class so that it is available like an object

int main()
{
    int arr[] = {1,22,53,24,5,6,37};
    int l = sizeof(arr)/4; // we have to divide it by size of the datatype because it gives the size of both array and size of datatype
    sort(arr,arr+7);
    // sort(arr,arr+7,greater<int>());
    for(int i=0;i<l;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }

    return 0;
}