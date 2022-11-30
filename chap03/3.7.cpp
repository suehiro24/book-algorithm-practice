#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int N = S.size();
  long long result = 0;

  // 桁の数がNであるとき、+がはいるパターン 2^N-1通り
  // パターン全体を動く整数bitをつかって上からi番目までの数
  // の後ろにプラスが入るならresultに随時足していく
  for (int bit = 0; bit < (1 << (N - 1)); ++bit) {
    // +の間に入る数
    // (最後に+が入ったあとの数 or 先頭の数から、i番目までの数)
    long long tmp = 0;

    for (int i = 0; i < N; ++i) {
      tmp *= 10;  // i-1番目の数を繰り上げ
      tmp += S[i] - '0';  // i番目の数を数値に変換して足す (1桁目に挿入)

      // 1桁目なら足して終わり
      if (i == (N - 1)) {
        result += tmp;
        break;
      }

      // i番目の数の後ろに+が入るなら、i番目までの数tmpを足す
      if (bit & (1 << i)) {
        result += tmp;
        tmp = 0;
      }
    }
  }

  cout << result << endl;
}