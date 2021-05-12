#include <stdio.h>
#include <vector>
#pragma warning(disable:4996)

using namespace std;
int ans=0;
void find_max_suik(vector<int> T, vector<int> P, int idx,int suik,int N) {

	if (ans<suik) {
		ans = suik;		
	}
	if (idx == N) return;
	if (idx + T[idx] <= N)
		find_max_suik(T, P, idx + T[idx], suik + P[idx], N);	
	find_max_suik(T, P, ++idx, suik, N);
	
}
int main() {
	int N;
	scanf("%d", &N);
	vector<int> T(N), P(N);
	for (int i = 0; i < N; ++i) {
		scanf("%d %d", &T[i], &P[i]);
	}
	find_max_suik(T, P,0, 0, N);
	printf("%d", ans);
	return 0;
}
