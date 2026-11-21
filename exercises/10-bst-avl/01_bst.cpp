// 10 - Binary search tree
// Course: section 16, videos 001-011
//
// insert:        iterative; ignore duplicates; returns the (possibly new) root
// search:        iterative; node or nullptr
// remove:        recursive; replace a node with two children by its inorder predecessor
//                when the left subtree is taller or equal, else by the inorder successor
//                (any correct BST delete passes the test)
// from_preorder: build the BST whose preorder is `pre` (course: use a stack, O(n))
#include <climits>
#include <stack>
#include <vector>

#include "../../include/test.hpp"
#include "../09-trees/tree.hpp"

using std::vector;

TNode* insert(TNode* root, int key) {
    // TODO: implement
    return root;
}

TNode* search(TNode* p, int key) {
    // TODO: implement
    return nullptr;
}


TNode* remove(TNode* p, int key) {
    // TODO: implement
    return p;
}

TNode* from_preorder(const vector<int>& pre) {
    // TODO: implement
    return nullptr;
}

void inorder(TNode* p, vector<int>& out) {
    if (!p) return;
    inorder(p->lchild, out);
    out.push_back(p->data);
    inorder(p->rchild, out);
}
void preorder(TNode* p, vector<int>& out) {
    if (!p) return;
    out.push_back(p->data);
    preorder(p->lchild, out);
    preorder(p->rchild, out);
}
bool is_bst(TNode* p, long lo = LONG_MIN, long hi = LONG_MAX) {
    if (!p) return true;
    if (p->data <= lo || p->data >= hi) return false;
    return is_bst(p->lchild, lo, p->data) && is_bst(p->rchild, p->data, hi);
}

int main() {
    TNode* root = nullptr;
    for (int x : {30, 20, 40, 10, 25, 35, 45, 5, 15, 20}) root = insert(root, x);
    vector<int> v;
    inorder(root, v);
    CHECK_EQ(v, {5, 10, 15, 20, 25, 30, 35, 40, 45});
    CHECK(is_bst(root));

    CHECK(search(root, 25) != nullptr && search(root, 25)->data == 25);
    CHECK(search(root, 26) == nullptr);

    root = remove(root, 5);   // leaf
    root = remove(root, 40);  // two children
    root = remove(root, 30);  // root
    root = remove(root, 99);  // not present
    v.clear();
    inorder(root, v);
    CHECK_EQ(v, {10, 15, 20, 25, 35, 45});
    CHECK(is_bst(root));
    free_tree(root);

    TNode* b = from_preorder({30, 20, 10, 15, 25, 40, 50, 45});
    v.clear();
    preorder(b, v);
    CHECK_EQ(v, {30, 20, 10, 15, 25, 40, 50, 45});
    CHECK(is_bst(b));
    free_tree(b);
    return TEST_SUMMARY();
}
