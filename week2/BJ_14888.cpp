#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits.h>
#pragma warning(disable:4996)

int ans_max=INT_MIN, ans_min=INT_MAX;
using namespace std;
void finding(vector<int> A, vector<int> op, int tmp_ans, int idx, int N) {

	if (idx == N) {
		if (ans_max <= tmp_ans) {
			ans_max = tmp_ans;
		}
		if (ans_min >= tmp_ans) {
			ans_min = tmp_ans;
		}
		return;
	}
	

	if (op[0] != 0) {
		finding(A, { op[0] - 1,op[1],op[2],op[3] }, tmp_ans + A[idx], idx + 1, N);
	}

	if (op[1] != 0) {
		finding(A, { op[0],op[1] - 1,op[2],op[3] }, tmp_ans - A[idx], idx + 1, N);
	}
	if (op[2] != 0) {
		finding(A, { op[0],op[1],op[2] - 1,op[3] }, tmp_ans * A[idx], idx + 1, N);
	}
	if (op[3] != 0) {
		finding(A, { op[0],op[1],op[2],op[3] - 1 }, tmp_ans / A[idx], idx + 1, N);
	}

}
int main() {
	int N;
	scanf("%d", &N);
	vector<int> A(N),opr8er(4,0);	
	for (int i = 0; i < N; ++i) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < 4; ++i) {
		scanf("%d", &opr8er[i]);
	}

	finding(A, opr8er, A[0], 1, N);
	printf("%d\n%d", ans_max, ans_min);
	return 0;
}