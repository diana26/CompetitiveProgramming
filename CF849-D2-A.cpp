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
	int n, x;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++) {
		cin >> x;
		a[i] = x;
	}
	if ((a.size() % 2 == 0) || a[0] % 2 == 0 || a[a.size() - 1] % 2 == 0) {
		cout << "No";
		return 0;
	}
	else
		cout << "Yes";
	return 0;
}

