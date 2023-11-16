#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int N;
vi ts;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> N;
	ts = vi(N);
	for (auto&& x : ts) {
		cin >> x;
	}

	auto b1 = ts[0];
	auto ans1 = 1;
	for (auto i = 1; i < N; ++i) {
		if (b1 < ts[i]) {
			b1 = ts[i];
			++ans1;
		}
	}

	auto b2 = ts[N - 1];
	auto ans2 = 1;
	for (auto i = N - 1; 0 <= i; --i) {
		if (b2 < ts[i]) {
			b2 = ts[i];
			++ans2;
		}
	}

	cout << ans1 << '\n' << ans2;

	return 0;
}