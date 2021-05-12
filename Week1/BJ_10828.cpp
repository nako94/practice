#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <vector>
#include <cstring>
using namespace std;

void user_fun(vector <int> *p_Vec) {
	vector <int> Vec(*p_Vec);
	char fun[10];
	int X;
	scanf("%s", fun);
	if (strcmp(fun, "push") == 0){
		scanf(" %d", &X);
		Vec.push_back(X);
	}
	else if (strcmp(fun, "pop")==0 && !Vec.empty()) {
		printf("%d\n", *Vec.rbegin());
		Vec.pop_back();
	}
	else if (strcmp(fun, "size") == 0) {
		printf("%d\n", Vec.size());
	}
	else if (strcmp(fun, "empty") == 0) {
		printf("%d\n", Vec.empty());
	}
	else if (strcmp(fun, "top") == 0 && !Vec.empty()) {
		printf("%d\n", *Vec.rbegin());
	}
	else
		printf("-1\n");
	*p_Vec = Vec;
}
int main() {
	int N;
	vector <int> Vec;
	scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		user_fun(&Vec);
	}

	return 0;
}