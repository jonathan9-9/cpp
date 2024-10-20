
//  *
//  * Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  TreeNode *bstFromPreorder(vector<int> &preorder) {
    return buildBST(preorder, 0, preorder.size() - 1);
  }

private:
  TreeNode *buildBST(vector<int> &preorder, int start, int end) {
    if (start > end) {
      return nullptr;
    }

    TreeNode *root = new TreeNode(preorder[start]);

    int idx = start + 1;
    while (idx <= end && preorder[idx] < root->val) {
      idx++;
    }

    root->left = buildBST(preorder, start + 1, idx - 1);
    root->right = buildBST(preorder, idx, end);

    return root;
  }
};
