#include <bits/stdc++.h>
using namespace std;

int main() {
	std::random_device rd;
  std::default_random_engine gen = std::default_random_engine(rd());
  std::uniform_int_distribution<int> dis(0,1);
  cout << dis(gen) << endl;
	return 0;
}
