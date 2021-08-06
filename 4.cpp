// Given two integers the task is to find the hamming distance....
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n1,n2;
    cin>>n1>>n2;
    int ans=n1^n2;
    int count=0;
    while (ans>0)
    {
        if (ans%2==1)
        {
            count++;

        }
        ans/=2;

    }
    cout<<count;
    
    return 0;
}

