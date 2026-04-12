#include <bits/stdc++.h>
using namespace std;
int main() {
  long long k, n, w, z;
  // 17
  // 3 6 9 12
  // 3 4 -> 30
  // k*w

  cin >> k >> n >> w;
  // 12
  // 2 4 6

  // 2 3 ->  12

  // 20
  // 5 10
  // (kw+k)*-2
  z = (k + (k * w)) * w / 2;
  if (n >= z) {
    cout << "0" << endl;
  } else {
    cout << z - n << endl;
  }
}
