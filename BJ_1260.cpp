#include <stdio.h>
#include <vector>
#include <algorithm>
#include<queue>
#include <unordered_map>
#pragma warning(disable:4996)

using namespace std;
int ans = 0;
unordered_map<int, priority_queue<int,vector<int>,greater<int>>> Mlist;
//unordered_map<int, priority_queue<int, vector<int>, greater<int>>> Mlist2;
vector<int> Nset, dfslist, bfslist;
void DFS(int st_idx) {
	
	dfslist.push_back(st_idx);
	DFS(Mlist[st_idx].top());
}
int main() {
	int N,M,st_idx;
	scanf("%d %d %d", &N, &M, &st_idx);
	for (int i = 0; i < M; ++i) {
		int tmp1, tmp2;
		scanf("%d %d", &tmp1, &tmp2);
		Mlist[tmp1].push(tmp2);
		Mlist[tmp2].push(tmp1);
		Nset.push_back(tmp1);
		Nset.push_back(tmp2);
	}
	sort(Nset.begin(), Nset.end());
	Nset.erase(unique(Nset.begin(), Nset.end()),Nset.end()); //³ëµåµé

	DFS(st_idx);
	//printf("%d %d", *list[1].begin(), *list[1].rbegin());
	return 0;
}
