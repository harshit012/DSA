/*
Find the kth minimum element from the array
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cout<<"Enter size:";
cin>>n;
if(n>0)
{
int k;
vector<int> store(n);
cout<<"Enter numbers:"<<endl;
for(int e=0;e<n;e++) cin>>store[e];
cout<<"Enter the value of k:";
cin>>k;
if(k>0 && k<=n)
{
sort(store.begin(),store.end());
cout<<"Value of "<<k<<"th smallest element:"<<store[k-1]<<endl;
}
else cout<<"Invalid value of k"<<endl;
}
else
{
cout<<"Size should be greater than zero"<<endl;
}
return 0;
}
