// 06 - Linked list: sorted check, remove duplicates, reverse, concatenate, merge
// Course: section 11, videos 024-034
//
// reverse:           sliding pointers p, q, r (no extra memory). Return the new head.
// reverse_recursive: return the new head.
// merge:             both lists sorted; relink the existing nodes, do not allocate.
#include "../../include/test.hpp"
#include "list.hpp"

bool is_sorted(Node* p) {
    // TODO: implement
    return false;
}

void remove_duplicates_sorted(Node* p) {
    // TODO: implement
}

Node* reverse(Node* head) {
    // TODO: implement
    return head;
}

Node* reverse_recursive(Node* head) {
    // TODO: implement
    return head;
}

Node* concatenate(Node* a, Node* b) {  // a then b
    // TODO: implement
    return a;
}

Node* merge(Node* a, Node* b) {
    // TODO: implement
    return a;
}

int main() {
    Node* s = from_vector({1, 3, 3, 5, 8, 8, 8});
    CHECK(is_sorted(s));
    CHECK(is_sorted(nullptr));
    remove_duplicates_sorted(s);
    CHECK_EQ(to_vector(s), {1, 3, 5, 8});

    Node* u = from_vector({2, 9, 4});
    CHECK(!is_sorted(u));

    s = reverse(s);
    CHECK_EQ(to_vector(s), {8, 5, 3, 1});
    s = reverse_recursive(s);
    CHECK_EQ(to_vector(s), {1, 3, 5, 8});
    CHECK(reverse(nullptr) == nullptr);

    Node* c = concatenate(s, u);
    CHECK_EQ(to_vector(c), {1, 3, 5, 8, 2, 9, 4});
    free_list(c);

    Node* m = merge(from_vector({2, 8, 10, 15}), from_vector({4, 7, 12, 14, 20}));
    CHECK_EQ(to_vector(m), {2, 4, 7, 8, 10, 12, 14, 15, 20});
    free_list(m);
    CHECK_EQ(to_vector(merge(nullptr, nullptr)), {});
    return TEST_SUMMARY();
}
