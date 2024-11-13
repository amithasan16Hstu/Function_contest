#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   cin>>str;
   int length=str.length();
   for(int i=0;i<length;i+=2) 
         swap(str[i],str[i+1]);
   cout<<str<<endl;
}