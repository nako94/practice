#pragma warning(disable:4996)
#include <stdio.h>
#include <vector>

using namespace std;
int main() {
	int N;
	scanf("%d", &N);
	vector<pair<int, int>> a(N);
	for (int i = 0; i < N; ++i) {
		scanf("%d %d", &a[i].first, &a[i].second);
	}
	for (int i = 0; i < N; ++i) {
		int cnt = 1;
		for (int j = 0; j < N ; j++) {
			if (i == j) continue;;
			if (a[i].first < a[j].first && a[i].second < a[j].second)
				++cnt;
		}
		printf("%d ", cnt);
	}
	return 0;
}