/*
Pattern
----------
n = 3

*         *
* *     * *
* * * * * *
* *     * *
*         *
----------
*/

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
  int intS = 2 * (n - 1);
  for (int i = 0; i < n; i++)
  {
    // star
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }

    // space
    for (int j = 0; j < intS; j++)
    {
      cout << "  ";
    }

    // star
    for (int j = 0; j <= i; j++)
    {
      cout << " *";
    }
    intS -= 2;
    cout << endl;
  }

  int intReverseS = 2;
  for (int i = 0; i < n - 1; i++)
  {
    // star
    for (int j = 0; j < n - 1 - i; j++)
    {
      cout << "* ";
    }

    // space
    for (int j = 0; j < intReverseS; j++)
    {
      cout << "  ";
    }

    // star
    for (int j = 0; j < n - 1 - i; j++)
    {
      cout << " *";
    }
    intReverseS += 2;
    cout << endl;
  }
}

// The other way around;

void symmetry(int n)
{
  int spaces = 2 * n - 2;
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    // star
    int stars = i;
    if (i > n)
      stars = 2 * n - i;
    for (int j = 1; j <= stars; j++)
    {
      cout << "* ";
    }

    // space
    for (int j = 1; j <= spaces; j++)
    {
      cout << "  ";
    }

    for (int j = 1; j <= stars; j++)
    {
      cout << " *";
    }
    cout << endl;
    if (i < n)
      spaces -= 2;
    else
      spaces += 2;
  }
}

int main()
{
  int n;
  cin >> n;

  symmetry(n);
}