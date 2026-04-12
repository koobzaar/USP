#include <bits/stdc++.h>
using namespace std;

int main() {
  int p1, c1, p2, c2;

  cin >> p1 >> c1 >> p2 >> c2;

  if (p1 * c1 == p2 * c2) {
    return 0;
  } else {
    return 1;
  }
}
