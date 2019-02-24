#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <functional>
#include <queue>
#include <bitset>
#include <sstream>
#include <set>
#include <iomanip>
#include <string.h>
#include <unordered_map>
#include <unordered_set>
#include <limits.h>
#include <iterator>
#include <complex>
#include <utility>

using namespace std;
typedef pair<int, int> pii;

int findJudge(int N, vector<vector<int>>& trust) {
	set<int>s, s2;
	if (trust.size() < 1 && N > 0)
		return N;
	for (int i = 0; i < trust.size(); i++) {
		s.insert(trust[i][0]);
	}
	for (int i = 0; i < trust.size(); i++) {
		if (!(s.find(trust[i][1]) != s.end())) {
			s2.insert(trust[i][1]);
		}
	}
	int count = 0, ans;

	for (int i = 0; i < trust.size(); i++) {
		if (s2.find(trust[i][1]) != s2.end()) {
			ans = trust[i][1];
			count++;
		}
	}

	if (count == (N - 1))
		return ans;
	else
		return -1;
}

int main() {
	int N, x, auxi, auxi2;
	cin >> N;
	vector<pii>v1 = { {1,2} };
	cout << trustPerson(N, v1);
	return 0;
}

