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
cin>>store[0];
int maxIndex=0;
int minIndex=0;
for(int e=1;e<n;e++)
{
 int data;
 cin>>data;
 if(store[maxIndex]<data) maxIndex=e;
 if(store[minIndex]>data) minIndex=e;
 store[e]=data;
}
cout<<"Max number:"<<store[maxIndex]<<endl;
cout<<"Min number:"<<store[minIndex]<<endl;
}
else
{
cout<<"Size should be greater than zero"<<endl;
}
return 0;
}
