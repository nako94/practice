#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
/*int main() {
	int N, R, C; //NxN ����, (R,C)�� ���
	scanf("%d %d %d", &N, &R, &C);
	bool R_odd_bool = R % 2;
	bool C_odd_bool = C % 2;
	vector<char> odd_carrot;

	for (int i = 0; i < N/2+1; i++) {
		odd_carrot.push_back('v');
		odd_carrot.push_back('.');

	}
	if ((C_odd_bool==R_odd_bool))
	{
		for (int i = 0; i < N; i++) {
			if (i % 2 == 0) {
				for (int j = 0; j < N; j++) {
					printf("%c", odd_carrot[j]);
				}
				printf("\n");
			}
			else {
				for (int j = 0; j < N; j++) {
					printf("%c", odd_carrot[j+1]);
				}
				printf("\n");
			}
		}
	}
	else {
		for (int i = 0; i < N; i++) {
			if (i % 2 == 0) {
				for (int j = 0; j < N; j++) {
					printf("%c", odd_carrot[j+1]);
				}
				printf("\n");
			}
			else {
				for (int j = 0; j < N; j++) {
					printf("%c", odd_carrot[j]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}*/
