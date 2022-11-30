#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;
  int N;

  cin >> K;
  cin >> N;

  vector<int> a(N);
  int counter = 0;

  for (int X = 0; X <= min(K, N); ++X) {
    for (int Y = 0; Y <= min(K, N); Y++) {
      int Z = N - X - Y;
      if (0 <= Z && Z <= K) counter++;
    }
  }

  cout << counter << endl;
}