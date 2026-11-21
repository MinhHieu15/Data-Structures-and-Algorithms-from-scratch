// 09 - Trees: generate a tree from preorder + inorder
// Course: section 15, videos 029-030
//
// All values are distinct. Return the root of the rebuilt tree.
// The test checks it by printing the postorder of your tree.
#include <vector>

#include "../../include/test.hpp"
#include "tree.hpp"

using std::vector;


TNode* build_tree(const vector<int>& pre, const vector<int>& in) {
    // TODO: implement
    return nullptr;
}

void post(TNode* p, vector<int>& out) {
    if (!p) return;
    post(p->lchild, out);
    post(p->rchild, out);
    out.push_back(p->data);
}

int main() {
    vector<int> out;
    TNode* t = build_tree({4, 7, 9, 6, 3, 2, 5, 8, 1}, {7, 6, 9, 3, 4, 5, 8, 2, 1});
    post(t, out);
    CHECK_EQ(out, {6, 3, 9, 7, 8, 5, 1, 2, 4});
    free_tree(t);

    out.clear();
    t = build_tree({8, 3, 4, 9, 2, 5, 7}, {4, 3, 2, 9, 8, 5, 7});
    post(t, out);
    CHECK_EQ(out, {4, 2, 9, 3, 7, 5, 8});
    free_tree(t);

    CHECK(build_tree({}, {}) == nullptr);
    return TEST_SUMMARY();
}
