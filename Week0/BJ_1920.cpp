
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
/*
int main() {
	int N, M;
	vector<int> A, B,C;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		A.push_back(a);
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		int b;
		cin >> b;
		B.push_back(b);
	}

	for (int i = 0; i < M; i++) {
		auto it= find(A.begin(), A.end(), B[i]);
		if (it == A.end()) {
			C.push_back(0);
		}
		else
			C.push_back(1);
	}
	for (int i = 0; i < M; i++) {
		cout << C[i] << '\n';
	}
	return 0;
}*/
/*
int main() {
	int N, M;
	vector<int> A, B, C;
	scanf("%d",&N);
	for (int i = 0; i < N; i++) {
		int a;
		scanf("%d", &a);
		A.push_back(a);
	}

	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		int b;
		scanf("%d", &b);
		B.push_back(b);
	}

	for (int i = 0; i < M; i++) {
		auto it = find(A.begin(), A.end(), B[i]);
		if (it == A.end()) {
			C.push_back(0);
		}
		else
			C.push_back(1);
	}
	for (int i = 0; i < M; i++) {

		printf("%d\n", C[i]);
	}
	return 0;

}
*/
