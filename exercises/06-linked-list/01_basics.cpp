// 06 - Linked list: count, sum, max, search
// Course: section 11, videos 004-015
//
// Write count and sum twice: iteratively and recursively.
// search returns the node holding key, or nullptr.
#include <climits>

#include "../../include/test.hpp"
#include "list.hpp"

int count(Node* p) {
    // TODO: implement
    return 0;
}

int count_recursive(Node* p) {
    // TODO: implement
    return 0;
}

int sum(Node* p) {
    // TODO: implement
    return 0;
}

int sum_recursive(Node* p) {
    // TODO: implement
    return 0;
}

int max_element(Node* p) {  // INT_MIN for an empty list
    // TODO: implement
    return 0;
}

Node* search(Node* p, int key) {
    // TODO: implement
    return nullptr;
}

int main() {
    Node* h = from_vector({3, 5, 7, 10, 25, 8, 32, 2});
    CHECK_EQ(count(h), 8);
    CHECK_EQ(count_recursive(h), 8);
    CHECK_EQ(count(nullptr), 0);
    CHECK_EQ(sum(h), 92);
    CHECK_EQ(sum_recursive(h), 92);
    CHECK_EQ(max_element(h), 32);
    CHECK_EQ(max_element(nullptr), INT_MIN);

    Node* f = search(h, 25);
    CHECK(f != nullptr && f->data == 25);
    CHECK(f != nullptr && f->next != nullptr && f->next->data == 8);
    CHECK(search(h, 99) == nullptr);
    free_list(h);
    return TEST_SUMMARY();
}
