#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
/*
int main() {

	long N,M;
	scanf("%ld", &N);
	vector<long long> V;
	for (long long i = 0; i < N; i++) {
		long long tmp;
		scanf("%lld", &tmp);
		V.push_back(tmp);
	}
	sort(V.begin(), V.end());
	scanf("%ld", &M);

	for (int i = 0; i < M; i++) {
		long long tmp2;
		bool find=false;
		scanf("%lld", &tmp2);

		//auto it=find(V.begin(), V.end(), tmp2); // N^2복잡도
		long long left = 0, right = N-1;

		while(left<=right){
			long long mid = (left + right) / 2;
			if (tmp2 == V[mid]) { 
				find = true;
				break;
			}
			else if (V[mid] < tmp2) left =mid+1;
			else right = mid -1;
		}
		
		if (find)
			printf("%d ", 1);
		else
			printf("%d ", 0);
		
	}
	return 0;

}
*/