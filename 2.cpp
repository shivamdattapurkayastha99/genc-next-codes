//  Given the number N.Find number of primes which are less than N and dont have a digit 0 in them 
//  input:4
//  output:2{2,3}
#include<iostream>
using namespace std;
void make_sieve(int arr[],int n)
{
    arr[1]=0;
    arr[2]=1;
    for (int i = 3; i <=n; i++)
    {
        if (arr[i]==1)
        {
            for (int j = i*i; j <=n; j+=2*i)
            {
                arr[j]=0;

            }
            
        }
        
    }
    return;

}
int helper(int n)
{
    while (n>0)
    {
        int r=n%10;
        if (r==0)
        {
            return 0;
        }
        n=n/10;

    }
    return 1;

}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n+1]={0};
    for (int i = 3; i <=n; i+=2)
    {
        arr[i]=1;

    }
    int count=0;

    make_sieve(arr,n);
    for (int i = 0; i <=n; i++)
    {
        if (arr[i]==1)
        {
            count+=helper(i);

        }
        
    }
    
    cout<<count;


    return 0;
}
