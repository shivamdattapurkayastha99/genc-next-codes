// given an integer array............
// input:
// 4
// 1 2 3 4
// output:
// 24 12 8 6
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    int left[n];
    int right[n];
    right[n-1]=1;
    for (int i = n-2; i>=0; i--)
    {
        right[i]=right[i+1]*arr[i+1];

    }
    left[0]=1;
    for (int i = 1; i<n; i++)
    {
        left[i]=left[i-1]*arr[i-1];

    }
    for (int i = 0; i<n; i++)
    {
        cout<<left[i]*right[i]<<" ";


    }
    return 0;
}
