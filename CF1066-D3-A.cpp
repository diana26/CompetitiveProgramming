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

vector<int>v1;
set<int>s;
int main() {
	
	long long t, L, v, l, r, count = 0;
	cin >> t;
	
	for (int k = 1; k <= t; k++) {
		cin >> L >> v >> l >> r;
		if ((r - l) + 1 == L) {
			v1.push_back(0);
			continue;
		}
		for (int i = l; i <= r; i++) {
			s.insert(i);
		}
		for (int i = 1; i <= L; i++) {
			if (i % v == 0)
				if (!(s.find(i) != s.end()))
					count++;
		}
		v1.push_back(count);
		count = 0;
		s.clear();
	}
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << endl;
	}
	return 0;
}

