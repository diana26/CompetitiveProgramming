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

	vector<vector<int>>ans;
	vector<int>aux;

	vector<vector<int>> levelOrder(TreeNode* root) {
		if (root == NULL)
			return ans;
		else {
			queue<TreeNode *>q;
			q.push(root);

			while (!q.empty()) {
				int count = q.size();
				while (count > 0) {
					TreeNode *x = q.front();
					q.pop();
					cout << x->val;
					aux.push_back(x->val);
					if (x->left != NULL) {
						q.push(x->left);

					}
					if (x->right != NULL) {
						q.push(x->right);

					}
					count--;

				}
				cout << endl;
				ans.push_back(aux);
				aux.clear();
			}
		}

		return ans;
	}


int main() {

	return 0;
}

