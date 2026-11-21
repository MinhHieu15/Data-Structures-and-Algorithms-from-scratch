// 10 - AVL tree insert with rotations
// Course: section 17, videos 001-008
//
// AVLNode stores its height (a leaf has height 1, like the course).
// Implement the four rotations and recursive insert that rebalances on the way back up.
// balance factor = height(left) - height(right); rotate when it becomes +2 or -2.
#include <vector>

#include "../../include/test.hpp"

struct AVLNode {
    AVLNode* lchild;
    int data;
    int height;
    AVLNode* rchild;
};

int node_height(AVLNode* p) { return p ? p->height : 0; }

void update_height(AVLNode* p) {
    int a = node_height(p->lchild), b = node_height(p->rchild);
    p->height = 1 + (a > b ? a : b);
}

int balance_factor(AVLNode* p) { return p ? node_height(p->lchild) - node_height(p->rchild) : 0; }

AVLNode* ll_rotation(AVLNode* p) {  // left child becomes the root of this subtree
    // TODO: implement
    return p;
}

AVLNode* rr_rotation(AVLNode* p) {
    // TODO: implement
    return p;
}

AVLNode* lr_rotation(AVLNode* p) {
    // TODO: implement
    return p;
}

AVLNode* rl_rotation(AVLNode* p) {
    // TODO: implement
    return p;
}

AVLNode* insert(AVLNode* p, int key) {  // ignore duplicates
    // TODO: implement
    return p ? p : new AVLNode{nullptr, key, 1, nullptr};
}

// ---- test helpers ----
void preorder(AVLNode* p, std::vector<int>& out) {
    if (!p) return;
    out.push_back(p->data);
    preorder(p->lchild, out);
    preorder(p->rchild, out);
}
bool is_balanced(AVLNode* p) {
    if (!p) return true;
    int bf = balance_factor(p);
    return bf >= -1 && bf <= 1 && is_balanced(p->lchild) && is_balanced(p->rchild);
}
void free_avl(AVLNode* p) {
    if (!p) return;
    free_avl(p->lchild);
    free_avl(p->rchild);
    delete p;
}

int main() {
    AVLNode* r = nullptr;
    for (int x : {10, 20, 30}) r = insert(r, x);  // RR case
    std::vector<int> v;
    preorder(r, v);
    CHECK_EQ(v, {20, 10, 30});
    free_avl(r);

    r = nullptr;
    for (int x : {30, 10, 20}) r = insert(r, x);  // LR case
    v.clear();
    preorder(r, v);
    CHECK_EQ(v, {20, 10, 30});
    free_avl(r);

    r = nullptr;
    for (int x : {40, 20, 10, 25, 30, 22, 50}) r = insert(r, x);  // course example
    v.clear();
    preorder(r, v);
    CHECK_EQ(v, {25, 20, 10, 22, 40, 30, 50});
    CHECK(is_balanced(r));
    free_avl(r);

    r = nullptr;
    for (int i = 1; i <= 1000; i++) r = insert(r, i);  // sorted input: plain BST would be a list
    CHECK(is_balanced(r));
    CHECK(node_height(r) <= 11);
    free_avl(r);
    return TEST_SUMMARY();
}
