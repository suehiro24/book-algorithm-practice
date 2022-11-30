#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;

  cin >> N;

  vector<int> a(N);
  int result = 0;

  for (int i = 0; i < N; ++i) {
    cin >> a[i];

    if (a[i] % 2 == 0) {
      cout << 0 << endl;
      break;
    }

    int counter = 0;
    while (a[i] % 2 == 0) {
      a[i] /= 2;
      counter++;
    }

    result = min(result, counter);
  }

  cout << result << endl;
}