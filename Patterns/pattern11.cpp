/*
Pattern
------------
1
0 1
1 0 1
0 1 0 1
------------
*/

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
  int start = 0;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      start = 1;
    else
      start = 0;

    for (int j = 0; j <= i; j++)
    {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}

//  for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i + j) % 2 == 0)

//                 cout << 1 << " ";

//             else
//                 cout << 0 << " ";
//         }

//         cout << endl;
//     }

int main()
{
  int n;
  cin >> n;
  print(n);
}