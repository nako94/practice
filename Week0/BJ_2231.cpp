#include <stdio.h>
#pragma warning(disable:4996)


int main() {
	long N, Mtmp;
	long ans = 0;
	scanf("%ld", &N);
	Mtmp = N-1;
	int zari = 0;
	long Ntest = Mtmp;
	do {
		 zari= 0;
		long Mtmp2 = Mtmp;
		Ntest = Mtmp;
		do {
			++zari;
			Ntest += Mtmp2 % 10;
			Mtmp2 /= 10;
		} while (Mtmp2 > 0);
		if (Ntest == N) {
			ans = Mtmp;
		}
		--Mtmp;
	} while (Mtmp+9*zari >  N);


	printf("%ld", ans);
	return 0;
}