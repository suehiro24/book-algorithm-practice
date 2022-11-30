#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;

  cin >> N;

  vector<int> a(N);

  int min = 9999999;
  int max = 9999999 * -1;

  for (int i = 0; i < N; ++i) {
    cin >> a[i];

    if (a[i] < min) {
      min = a[i];
    }
    if (a[i] > max) {
      max = a[i];
    }
  }

  cout << "min: " << min << endl;
  cout << "max: " << max << endl;
  cout << "max - min: " << max - min << endl;
}