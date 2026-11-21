// 09 - Trees: counting and height
// Course: section 15, videos 031-033
//
// height: number of levels counted in edges; empty tree = -1, a single node = 0.
// All functions are recursive.
#include "../../include/test.hpp"
#include "tree.hpp"

int count_nodes(TNode* p) {
    // TODO: implement
    return 0;
}

int sum_nodes(TNode* p) {
    // TODO: implement
    return 0;
}

int height(TNode* p) {
    // TODO: implement
    return 0;
}

int count_leaves(TNode* p) {  // nodes with no children
    // TODO: implement
    return 0;
}

int count_degree2(TNode* p) {  // nodes with exactly two children
    // TODO: implement
    return 0;
}

int main() {
    TNode* root = build_level_order({8, 3, 5, 4, 9, NIL, 7, NIL, NIL, 2});
    CHECK_EQ(count_nodes(root), 7);
    CHECK_EQ(sum_nodes(root), 38);
    CHECK_EQ(height(root), 3);
    CHECK_EQ(count_leaves(root), 3);
    CHECK_EQ(count_degree2(root), 2);  // in any binary tree: leaves = degree2 + 1

    CHECK_EQ(count_nodes(nullptr), 0);
    CHECK_EQ(height(nullptr), -1);
    TNode* one = build_level_order({42});
    CHECK_EQ(height(one), 0);
    CHECK_EQ(count_leaves(one), 1);
    free_tree(root);
    free_tree(one);
    return TEST_SUMMARY();
}
