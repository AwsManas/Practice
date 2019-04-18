#include<bits/stdc++.h>
using namespace std;
int x[10];
int countt=1;
bool place(int k,int j)
{
  for(int i=1; i<k; i++)
  	if(x[i]==j||abs(x[i]-j)==abs(i-k))
  		return false;
  return true;
}
void queen(int k, int n)
{
	for(int j=1; j<=n; j++)
	{
		if(place(k,j))
		{
			x[k]=j;
			if(k==n)
			{
				cout<<"Solution number : "<<countt<<endl;
                for(int i=1; i<=n; i++)
                {
                   for(int j=1; j<x[i]; j++)
                   {
                       cout<<"0";
                   }
                   cout<<"1";
                   for(int j=x[i]+1; j<=n; j++)
                   cout<<"0";
                   cout<<endl;
                }
                cout<<"Above matrix (in short): ";
                for(int i=1; i<=n; i++)
                cout<<x[i];
                cout<<endl;
                countt++;
			}
			else
			queen(k+1,n);
		}
	}
}
int main()
{
   cout<<"Enter the size of board : ";
   int n;
   cin>>n;
  queen(1,n);
	return 0;
}
