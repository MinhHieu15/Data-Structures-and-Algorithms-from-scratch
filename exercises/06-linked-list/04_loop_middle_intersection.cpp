// 06 - Linked list: loop detection, middle node, intersection point
// Course: section 11, videos 035-036, 056-057
//
// has_loop:     two pointers, slow moves 1 step and fast moves 2 (Floyd)
// middle:       one pass with two pointers; for an even count return the 2nd middle
// intersection: the first node shared by both lists (same address), or nullptr
#include "../../include/test.hpp"
#include "list.hpp"

bool has_loop(Node* head) {
    // TODO: implement
    return false;
}

Node* middle(Node* head) {
    // TODO: implement
    return nullptr;
}

Node* intersection(Node* a, Node* b) {
    // TODO: implement
    return nullptr;
}

int main() {
    Node* h = from_vector({1, 2, 3, 4, 5});
    CHECK(!has_loop(h));
    CHECK(!has_loop(nullptr));
    Node* m = middle(h);
    CHECK(m != nullptr && m->data == 3);

    Node* tail = h;
    while (tail->next) tail = tail->next;
    tail->next = h->next->next;  // 5 -> 3 makes a loop
    CHECK(has_loop(h));
    tail->next = nullptr;

    Node* even = from_vector({10, 20, 30, 40});
    m = middle(even);
    CHECK(m != nullptr && m->data == 30);

    // a: 7 -> 8 -> [3 -> 4 -> 5]   b: 9 -> [3 -> 4 -> 5]   (shared tail of h)
    Node* a = from_vector({7, 8});
    a->next->next = h->next->next;
    Node* b = from_vector({9});
    b->next = h->next->next;
    CHECK(intersection(a, b) == h->next->next);
    CHECK(intersection(even, h) == nullptr);
    return TEST_SUMMARY();
}
