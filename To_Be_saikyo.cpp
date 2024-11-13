#include <bits/stdc++.h>
using namespace std;

bool allElementsSame(int arr[], int n)
{
   for (int i = 1; i <= n; i++)
   {
      if (arr[i] != arr[0])
      {
         return false;
      }
   }
   return true;
}
int main()
{
   int n;
   cin >> n;
   int arr[n];
   int x = 0;
   int temp = 0;
   int maxi = -100000000;
   for (int i = 1; i <= n; i++)
   {
      int arr[i];
      cin >> arr[i];
      if (allElementsSame(arr, n))
      { 
         x=1;
      }
      else if (arr[i] > maxi)
      {
         maxi = arr[i];
         if (i == 1)
         {
            temp = arr[i];
            if (temp == maxi)
            {
               x = 0;
            }
            else
            {
               x = (maxi - temp) + 1;
               
            }
         }
      }
   }
   cout << x << endl;
}