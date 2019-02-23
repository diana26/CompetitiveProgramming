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
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};
vector<int> inorderTraversal(TreeNode* root) {
	vector<int>ans;
	stack<TreeNode*>s;
	if (root == NULL)
		return ans;
	TreeNode *x = root;
	s.push(x);
	x = x->left;
	while (x != NULL || !s.empty()) {
		while (x != NULL) {
			s.push(x);
			x = x->left;
		}
		TreeNode *y = s.top();
		ans.push_back(y->val);
		s.pop();
		x = y->right;
	}
	return ans;
}
int main() {
	
	return 0;
}

