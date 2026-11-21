// 06 - Linked list: insert and delete
// Course: section 11, videos 016-023
//
// insert:        put x after position pos (pos 0 = new first node). Ignore bad positions.
// insert_sorted: list is sorted ascending; keep it sorted.
// remove_at:     delete the node at position pos (1-based), return its value, -1 if bad pos.
// head is passed by reference because the first node can change.
#include "../../include/test.hpp"
#include "list.hpp"

void insert(Node*& head, int pos, int x) {
    // TODO: implement
}

void insert_sorted(Node*& head, int x) {
    // TODO: implement
}

int remove_at(Node*& head, int pos) {
    // TODO: implement
    return -1;
}

int main() {
    Node* h = nullptr;
    insert(h, 0, 10);
    insert(h, 1, 20);
    insert(h, 0, 5);
    insert(h, 2, 15);
    insert(h, 10, 99);  // ignored
    CHECK_EQ(to_vector(h), {5, 10, 15, 20});

    insert_sorted(h, 1);
    insert_sorted(h, 12);
    insert_sorted(h, 30);
    CHECK_EQ(to_vector(h), {1, 5, 10, 12, 15, 20, 30});

    CHECK_EQ(remove_at(h, 1), 1);
    CHECK_EQ(remove_at(h, 3), 12);
    CHECK_EQ(remove_at(h, 5), 30);
    CHECK_EQ(remove_at(h, 9), -1);
    CHECK_EQ(to_vector(h), {5, 10, 15, 20});

    Node* e = nullptr;
    insert_sorted(e, 7);
    CHECK_EQ(to_vector(e), {7});
    CHECK_EQ(remove_at(e, 1), 7);
    CHECK(e == nullptr);
    free_list(h);
    return TEST_SUMMARY();
}
