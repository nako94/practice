#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
#pragma warning(disable:4996)

using namespace std;
int main() {
	int N, M,ans=0;
	scanf("%d %d", &N,&M);

	vector<int> cards(N);
	vector<int> card_selector(N-3,0);
	card_selector.push_back(1);
	card_selector.push_back(1);
	card_selector.push_back(1);
	for (int i = 0; i < N; ++i) {
		scanf("%d", &cards.at(i));
	}
	sort(cards.begin(), cards.end());

	//전처리
	for (int i = N; i >0; --i) {
		if (*cards.begin() + *(cards.begin() + 1) + *cards.rbegin()>M) {
			cards.pop_back();
		}
		else break;
	}
	//순열
	do {
		int tmp_ans = inner_product(cards.begin(), cards.end(), card_selector.begin(), 0);
		if (tmp_ans > M) continue;
		else {
			if (tmp_ans == M) {
				printf("%d", tmp_ans);
				return 0;
			}
			if (tmp_ans > ans)
				ans = tmp_ans;
		}
	} while (next_permutation(card_selector.begin(), card_selector.end()));
	printf("%d", ans);
	return 0;
}