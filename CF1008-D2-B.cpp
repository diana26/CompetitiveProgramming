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


int main() {
	int n, w, h;
	cin >> n;
	vector<pii>pairs(n);
	for (int i = 0; i < n; i++) {
		cin >> pairs[i].first >> pairs[i].second;
	}
	int aux = max(pairs[0].first, pairs[0].second);
	for (int i = 1; i < n; i++) {
		if (pairs[i].first <= aux && pairs[i].second <= aux) {
			if (pairs[i].first > pairs[i].second) {
				aux = pairs[i].first;
				swap(pairs[i].first, pairs[i].second);	
			}
			else
				aux = pairs[i].second;
		}
		else if (pairs[i].first <= aux || pairs[i].second <= aux) {
			if (pairs[i].first <= aux) {
				aux = pairs[i].first;
				swap(pairs[i].first, pairs[i].second);			
			}
			else
				aux = pairs[i].second;
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}

