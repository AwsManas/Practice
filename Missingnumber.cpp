#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
long long t;
cin>>t;
//cout<<"Size is "<<sizeof(t)<<endl;
while(t--)
{
    long long n,arr,actuals,sum,temp;
    sum=0;
    cin>>n;
    actuals=n*(n+1)/2;
    for(long long i=0; i<n-1; i++)
        {
            cin>>arr;
            sum+=arr;
        }
    temp=actuals-sum;
    cout<<temp<<endl;
}
return 0;
}
