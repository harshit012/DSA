/*
Reverse the Array
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
vector<int> store(n);
cout<<"Enter numbers:"<<endl;
for(int e=0;e<n;e++) cin>>store[e];
for(int e=0,f=n-1; e<f;e++,f--)
{
int g=store[e];
store[e]=store[f];
store[f]=g;
}
cout<<"Reversed array is"<<endl;
for(int e=0;e<n;e++) cout<<store[e]<<endl;
}
else
{
cout<<"Size should be greater than zero"<<endl;
}
return 0;
}
