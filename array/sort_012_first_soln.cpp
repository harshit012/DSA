#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Enter length of array:";
cin>>n;
if(n>0)
{
vector<int> store(n);
int counts[3]={0,0,0};
cout<<"Enter data:"<<endl;
for(int e=0;e<n;e++)
{
cin>>store[e];
counts[store[e]]++;
}
for(int index=0,e=0;e<3;e++)
while(counts[e]--) store[index++]=e;
cout<<"Sorted aray:"<<endl;
for(int e=0;e<n;e++) cout<<store[e]<<endl;
}
else cout<<"Please enter valid length";
return 0;
}
