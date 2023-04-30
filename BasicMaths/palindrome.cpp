/*
 Write a program to determine if given number is palindrome or not. Print true if it is palindrome, false otherwise
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int reverse = 0;
  int dup = n;

  while (n > 0)
  {
    int ld = n % 10;
    reverse = (reverse * 10) + ld;
    n = n / 10;
  }

  if (reverse == dup)
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }
}