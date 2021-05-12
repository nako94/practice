#include <stdio.h>
#include <vector>
#include <algorithm>
#pragma warning(disable:4996)

using namespace std;

int main() {
	int N,k=0,Atest;
	Atest = 1;
	scanf("%d", &N);
	vector<int> T(N);
	
	
	for (int i = 0; i < N; ++i) {
		scanf("%d", &T[i]);
	}
	vector<int> Temp(T);
	Temp.erase(unique(Temp.begin(), Temp.end()), Temp.end());
	if (Temp.size() == 1 && N>1) {
		printf("%d", *Temp.begin());
		return 0;
	}
	int a, b;
	
	if (N >= 3) {

		if (T[1] == T[0] ) {
			if( T[2] != T[1])
			{
				printf("B");
				return 0;
			}				
					
		}
		else {		
			if ((T[2] - T[1]) % (T[1] - T[0]) == 0) {
				a = (T[2] - T[1]) / (T[1] - T[0]);
				b = T[1] - a * T[0];
			}
			else {
				printf("B");
				return 0;
			}
			
		}
		for (int i = 1; i < N; ++i) {
			if (T[i]!= a* T[i - 1]+b) {
				printf("B");
				return 0;
			}
		}
		printf("%d",T[N - 1] * a + b);
	}
	
	else printf("A");
	

	return 0;
}