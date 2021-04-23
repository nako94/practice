#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/*int main() {
	vector<long long> V;
	long long N;
	scanf("%lld", &N);
	for (int i = 0; i < N; i++) {
		long long tmp;
		scanf("%lld", &tmp);
		V.push_back(tmp);
	}
	sort(V.begin(), V.end());
	unique(V.begin(), V.end());
	for (auto item : V) {
		printf("%lld\n", item);
	}
	return 0;

}*/