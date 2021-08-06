// Given an integer array nums and an integer k return the k th largest element in the array ...
// 3 2 1 5 6 4
// k=2
// 5
#include<iostream>
using namespace std;
int findKthLargest(int nums[],int n,int k)
{
    priority_queue<int> pq;
    int i=0;
    for (int i = 0; i < n; i++)
    {
        pq.push(nums[i]);

    }
    for (int i = 0; i < k-1; i++)
    {
        pq.pop();
        
    }
    return pq.top();

}
