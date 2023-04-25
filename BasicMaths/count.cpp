/*
Given the number 'n', find out and return the number of digits present in a number
*/

#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
  int ct = 0;

  while (n > 0)
  {
    ct += 1;
    n = n / 10;
  }

  return ct;
}

int main()
{
  int n;
  cin >> n;

  cout << count(n);
}