/*
Pattern
----------
D
D C
D C B
D C B A
----------
*/

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
  for (int i = 0; i < n; i++)
  {
    char ch = 'A' + n;
    for (int j = 0; j <= i; j++)
    {
      ch--;
      cout << ch << " ";
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
