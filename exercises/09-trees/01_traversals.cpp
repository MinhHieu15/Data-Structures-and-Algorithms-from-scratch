// 09 - Trees: traversals
// Course: section 15, videos 014-028
//
// Each function appends the visited values to `out`.
// preorder / inorder / postorder: recursive
// inorder_iterative:              use a stack, no recursion
// level_order:                    use a queue
#include <queue>
#include <stack>
#include <vector>

#include "../../include/test.hpp"
#include "tree.hpp"

using std::vector;

void preorder(TNode* p, vector<int>& out) {
    // TODO: implement
}

void inorder(TNode* p, vector<int>& out) {
    // TODO: implement
}

void postorder(TNode* p, vector<int>& out) {
    // TODO: implement
}

void inorder_iterative(TNode* p, vector<int>& out) {
    // TODO: implement
}

void level_order(TNode* root, vector<int>& out) {
    // TODO: implement
}

int main() {
    /*         8
             /   \
            3     5
           / \     \
          4   9     7
             /
            2
    */
    TNode* root = build_level_order({8, 3, 5, 4, 9, NIL, 7, NIL, NIL, 2});
    vector<int> v;
    preorder(root, v);
    CHECK_EQ(v, {8, 3, 4, 9, 2, 5, 7});
    v.clear();
    inorder(root, v);
    CHECK_EQ(v, {4, 3, 2, 9, 8, 5, 7});
    v.clear();
    postorder(root, v);
    CHECK_EQ(v, {4, 2, 9, 3, 7, 5, 8});
    v.clear();
    inorder_iterative(root, v);
    CHECK_EQ(v, {4, 3, 2, 9, 8, 5, 7});
    v.clear();
    level_order(root, v);
    CHECK_EQ(v, {8, 3, 5, 4, 9, 7, 2});
    v.clear();
    level_order(nullptr, v);
    CHECK_EQ(v, {});
    free_tree(root);
    return TEST_SUMMARY();
}
