#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, v;

  cin >> N >> v;

  vector<int> a(N);

  int found_id = -1;

  for (int i = 0; i < N; ++i) {
    cin >> a[i];

    if (a[i] == v) {
      found_id = i;
    }
  }

  cout << found_id;
}