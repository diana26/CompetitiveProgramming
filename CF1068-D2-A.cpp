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
	int N, M, K, L;
	cin >> N >> M >> K >> L;

	if (M > N) {

		cout << "-1";
		return 0;
	}

	else if (((N / M) * M) - K < L) {

		cout << "-1";
		return 0;
	}
	else
		cout << N / M;
	return 0;
}

