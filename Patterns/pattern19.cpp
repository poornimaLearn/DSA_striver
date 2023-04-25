/*
Pattern
----------
n = 3

* * * * * *
* *     * *
*         *
* *     * *
* * * * * *
----------
*/

#include <bits/stdc++.h>
using namespace std;

void symmetry(int n)
{
  int intS = 0;
  for (int i = 0; i < n; i++)
  {
    // star
    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }

    // spaces
    for (int j = 0; j < intS; j++)
    {
      cout << "  ";
    }

    // star
    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }
    intS += 2;
    cout << endl;
  }

  int intReverseS = 2 * (n - 1);
  for (int i = 0; i < n; i++)
  {
    // star
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    // space
    for (int j = 0; j < intReverseS; j++)
    {
      cout << "  ";
    }
    // star
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    intReverseS -= 2;
    cout << endl;
  }
}
int main()
{
  int n;
  cin >> n;

  symmetry(n);
}