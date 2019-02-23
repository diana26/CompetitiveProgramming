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
	int n, x, count = 0;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++) {
		cin >> x;
		a[i] = x;
	}
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			if (a[i] + 1 == a[i + 1])
				count++;
		}
		else if (i == n - 1) {
			if (a[i - 1] - 1 == a[i])
				count++;
		}
		else {
			if (a[i - 1] + 1 == a[i] && a[i + 1] - 1 == a[i])
				count++;
			else
				continue;
		}
	}
	cout << count;
	return 0;
}

