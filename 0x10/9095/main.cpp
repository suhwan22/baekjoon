#include <iostream>

using namespace std;

int d[11] = {};

// d[1] = 1 (1)
// d[2] = 2 (1 + 1) (2)
// d[3] = 4 (1 + 1 + 1) (1 + 2) (2 + 1) (3)
// d[4] = (1 + 1 + 1 + 1) (1 + 1 + 2) (1 + 2 + 1) (2 + 1 + 1) (2 + 2) (1 + 3) (3 + 1)
//      = 1 + d[3], 2 + d[2], 3 + d[1]
//      =     4    +    2     +    1
//      = 7
// d[5] = 1 + d[4], 2 + d[3], 3 + d[2]
//      = 7 + 4 + 2 = 13
// d[6] = 1 + d[5], 2 + d[4], 3 + d[3]
//      =  13 + 7 + 4
//      = 24
// d[7] = 1 + d[6], 2 + d[5]. 3 + d[4]
//      = 24 + 13 + 7
//      = 44
// d[n] = d[n-1] + d[n-2] + d[n-3]

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  d[1] = 1;
  d[2] = 2;
  d[3] = 4;
  for (int i = 4; i < 11; i++)
    d[i] = d[i-1] + d[i-2] + d[i-3];
  
  int m;
  while (n--)
  {
    cin >> m;
    cout << d[m] << "\n";
  }

  return 0;
}