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
vector<int> x(n);
cout<<"Enter numbers:"<<endl;
for(int e=0;e<n;e++) cin>>x[e];
cout<<"Enter the value of k:";
cin>>k;
if(k>0 && k<=n)
{
int ri,ci,g,lci,rci,swi;
int e=1;
while(e<n)
{
ci=e;
ri=(ci-1)/2;
while(ci>0)
{
if(x[ci]>x[ri])
{
g=x[ci];
x[ci]=x[ri];
x[ri]=g;
}
ci=ri;
ri=(ci-1)/2;
}
e++;
}

e=n-1;
while(e>0)
{
g=x[0];
x[0]=x[e];
x[e]=g;
e--;
ri=0;
while(ri<e)
{
lci=(ri*2)+1;
rci=lci+1;
if(lci>e) break;
if(rci>e) swi=lci;
else
{
if(x[lci]>x[rci]) swi=lci;
else swi=rci;
}
if(x[ri]<x[swi])
{
g=x[ri];
x[ri]=x[swi];
x[swi]=g;
ri=swi;
}
else break;
}
}
cout<<"Result:"<<x[k-1]<<endl;
}
else cout<<"Invalid value of k"<<endl;
}
else
{
cout<<"Size should be greater than zero"<<endl;
}
return 0;
}
