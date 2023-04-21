/*
Pattern
----------
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1
----------
*/

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
  int num = 1;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << num << " ";
      num += 1;
    }
    cout << endl;
  }
}

int main()
{
  int n;
  cin >> n;

  print(n);
}