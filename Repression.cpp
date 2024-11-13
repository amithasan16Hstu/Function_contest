#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b,int c)
{
   int sum=a+b;
   int sum1=a+c;
   int sum2 =b+c;
   if(sum>sum1 && sum>sum2)
   return sum;
   else if(sum1>sum && sum1>sum2)
   return sum1;
   else
   return sum2;
}

int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   cout<<sum(a,b,c)<<endl;
}