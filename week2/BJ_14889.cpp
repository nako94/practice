#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
#pragma warning(disable:4996)

using namespace std;

int main() {
	int N, ans = 10000;
	long long stopidx = 1, devider = 1;
	scanf("%d", &N);
	vector<vector<int>> S(N, vector<int>(N));
	vector<int> selector(N, 0);
	fill(selector.begin() + N / 2, selector.end(), 1);
	int cnt = 0;
	for (int i = 0; i < N / 2; ++i) {
		stopidx *= (N - i);
		devider *= i + 1;
	}
	stopidx /= devider * 2;

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			scanf("%d", &S[i][j]);
		}
	}

	do {
		vector<int> selector2(N, 0);
		for (int i = 0; i < N; i++) {
			selector2[i] = selector[i] - 1;
		}
		int tmp = 0;
		++cnt;
		for (int i = 0; i < N; i++) {
			if (selector[i])
				tmp += inner_product(S[i].begin(), S[i].end(), selector.begin(), 0);
			else
				tmp += inner_product(S[i].begin(), S[i].end(), selector2.begin(), 0);
		}
		if (abs(tmp) < ans) {
			ans = abs(tmp);
		}
	} while (next_permutation(selector.begin(), selector.end()) && cnt <= stopidx + 1);
	printf("%d", ans);
	return 0;
}

