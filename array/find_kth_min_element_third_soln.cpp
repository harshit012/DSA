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
priority_queue<int,vector<int>,greater<int>> store;
cout<<"Enter numbers:"<<endl;
for(int e=0;e<n;e++)
{
int data;
cin>>data;
store.push(data);
}
cout<<"Enter the value of k:";
cin>>k;
if(k>0 && k<=n)
{
for(int e=0;e<(k-1);e++) store.pop();
cout<<"Value of "<<k<<"th smallest element:"<<store.top()<<endl;
}
else cout<<"Invalid value of k"<<endl;
}
else
{
cout<<"Size should be greater than zero"<<endl;
}
return 0;
}
