#include<bits/stdc++.h>

using namespace std;

int main() {
  //calc
  int temp;
  cin >> temp;

  int a, b, c, d;
  while (cin >> a >> b >> c >> d) {
    float ans = (
      -(b / (3 * a)) +
      cbrt(
        ((b * c) / (6 * a * a)) -
        ((b * b * b) / (27 * a * a * a)) -
        (d / (2 * a)) +
        sqrt(
          ((
            (b * c) / (6 * a * a) -
            (b * b * b) / (27 * a * a * a) -
            (d / (2 * a))
          ) * (
            (b * c) / (6 * a * a) -
            (b * b * b) / (27 * a * a * a) -
            (d / (2 * a))
          )) + ((
            (c / (3 * a)) -
            ((b * b) / (9 * a * a))
          ) * (
            (c / (3 * a)) -
            ((b * b) / (9 * a * a))
          ) * (
            (c / (3 * a)) -
            ((b * b) / (9 * a * a))
          ))

        )
      ) +
      cbrt(
        ((b * c) / (6 * a * a)) -
        ((b * b * b) / (27 * a * a * a)) -
        (d / (2 * a)) -
        sqrt(
          ((
            (b * c) / (6 * a * a) -
            (b * b * b) / (27 * a * a * a) -
            (d / (2 * a))
          ) * (
            (b * c) / (6 * a * a) -
            (b * b * b) / (27 * a * a * a) -
            (d / (2 * a))
          )) + ((
            (c / (3 * a)) -
            ((b * b) / (9 * a * a))
          ) * (
            (c / (3 * a)) -
            ((b * b) / (9 * a * a))
          ) * (
            (c / (3 * a)) -
            ((b * b) / (9 * a * a))
          ))

        )
      )
    );
    printf("%.3f\n", ans);
  }
  return 0;
}
