#include <bits/stdc++.h>
using namespace std;
string chord(string str)
{
   if (str == "ACE" || str == "BDF" || str == "CEG" || str == "DFA" || str == "EGB" || str == "GBD" || str == "FAC")
      return "Yes";
   else
      return "No";
}
int main()
{
   string str;
   cin >> str;
   cout<<chord(str)<<endl;
}