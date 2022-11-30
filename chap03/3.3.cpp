#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;

  cin >> N;

  vector<int> a(N);

  int min1 = 99999999;
  int min2 = 99999999;

  for (int i = 0; i < N; ++i) {
    cin >> a[i];

    if (a[i] < min1) {
      min2 = min1;
      min1 = a[i];
      continue;
    }

    if (a[i] < min2) {
      min2 = a[i];
    }
  }

  cout << min2;
}