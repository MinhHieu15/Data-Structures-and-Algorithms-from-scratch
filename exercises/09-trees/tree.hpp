// Shared helpers for the binary tree exercises (already done, just use them).
#pragma once
#include <queue>
#include <vector>

struct TNode {
    TNode* lchild;
    int data;
    TNode* rchild;
};

constexpr int NIL = -1;  // marks a missing child in level-order input

/* Builds a tree from level order, like the course's create():
   {1, 2, 3, NIL, 4} ->      1
                           /   \
                          2     3
                           \
                            4
*/
inline TNode* build_level_order(const std::vector<int>& v) {
    if (v.empty() || v[0] == NIL) return nullptr;
    TNode* root = new TNode{nullptr, v[0], nullptr};
    std::queue<TNode*> q;
    q.push(root);
    std::size_t i = 1;
    while (!q.empty() && i < v.size()) {
        TNode* p = q.front();
        q.pop();
        if (i < v.size() && v[i] != NIL) {
            p->lchild = new TNode{nullptr, v[i], nullptr};
            q.push(p->lchild);
        }
        i++;
        if (i < v.size() && v[i] != NIL) {
            p->rchild = new TNode{nullptr, v[i], nullptr};
            q.push(p->rchild);
        }
        i++;
    }
    return root;
}

inline void free_tree(TNode* p) {
    if (!p) return;
    free_tree(p->lchild);
    free_tree(p->rchild);
    delete p;
}
