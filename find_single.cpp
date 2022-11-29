/*3. **Find the element that appears once in an array where every other element appears twice.***/

#include<iostream>
using namespace std;

int find_ele(int arr[], int size_arr)
{
    int r =arr[0];

    for(int i=1;i<size_arr;i++)
        r = r^arr[i];
    return r;

}
int main()
{
    int arr[]= {1,3,5,3,6,5,1};
    int n =sizeof(arr) / sizeof(arr[0]);
    
    cout<<"The single element in the array is:"<<find_ele(arr, n);

    return 0;
}

