/*
Pattern:
  *
 ***
*****

[2,1,2]  = [3 - i(0) - 1 = 3 - i(1) - 1 = 3 - i(2) - 1 , 2(i(0)) + 1 = 2(i(1)) + 1 = 2(i(2)) + 1, 3 - i(0) - 1 = 3 - i(1) - 1 = 3 - i(2) - 1]
[1,3,1]
[0,5,0]

Total rows = 3
Total colums = 5

for space

j > n - i - 1

for *

j > 2(i) + 1
*/
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    // star
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }

    // for space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
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