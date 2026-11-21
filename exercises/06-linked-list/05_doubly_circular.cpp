// 06 - Doubly and circular linked lists
// Course: section 11, videos 038-053
//
// Doubly linked list (DNode has prev and next):
//   dl_insert(head, pos, x)  after position pos, pos 0 = new first node
//   dl_remove(head, pos)     1-based, returns value or -1
//   dl_reverse(head)         swap prev/next of every node, return new head
// Circular singly linked list (last node points back to head):
//   cl_insert(head, pos, x)  same positions as above; inserting at 0 must update the last node
//   cl_to_vector is given.
#include <vector>

#include "../../include/test.hpp"
#include "list.hpp"

struct DNode {
    DNode* prev;
    int data;
    DNode* next;
};

DNode* dl_from_vector(const std::vector<int>& v) {
    DNode *head = nullptr, *last = nullptr;
    for (int x : v) {
        DNode* t = new DNode{last, x, nullptr};
        if (!head) head = t;
        else last->next = t;
        last = t;
    }
    return head;
}
// Reads the list forwards and checks that every prev pointer is correct.
std::vector<int> dl_to_vector(DNode* p) {
    std::vector<int> v;
    DNode* before = nullptr;
    for (; p; before = p, p = p->next) {
        if (p->prev != before) return {-999};  // broken prev link
        v.push_back(p->data);
    }
    return v;
}

void dl_insert(DNode*& head, int pos, int x) {
    // TODO: implement
}

int dl_remove(DNode*& head, int pos) {
    // TODO: implement
    return -1;
}

DNode* dl_reverse(DNode* head) {
    // TODO: implement
    return head;
}

std::vector<int> cl_to_vector(Node* head) {
    std::vector<int> v;
    if (!head) return v;
    Node* p = head;
    do {
        v.push_back(p->data);
        p = p->next;
    } while (p != head && v.size() < 1000);
    return v;
}

void cl_insert(Node*& head, int pos, int x) {
    // TODO: implement
}

int main() {
    DNode* d = dl_from_vector({10, 20, 30});
    dl_insert(d, 0, 5);
    dl_insert(d, 2, 15);
    dl_insert(d, 5, 40);
    CHECK_EQ(dl_to_vector(d), {5, 10, 15, 20, 30, 40});
    CHECK_EQ(dl_remove(d, 1), 5);
    CHECK_EQ(dl_remove(d, 3), 20);
    CHECK_EQ(dl_remove(d, 4), 40);
    CHECK_EQ(dl_remove(d, 9), -1);
    CHECK_EQ(dl_to_vector(d), {10, 15, 30});
    d = dl_reverse(d);
    CHECK_EQ(dl_to_vector(d), {30, 15, 10});

    Node* c = nullptr;
    cl_insert(c, 0, 2);
    cl_insert(c, 1, 3);
    cl_insert(c, 0, 1);
    cl_insert(c, 3, 4);
    CHECK_EQ(cl_to_vector(c), {1, 2, 3, 4});
    CHECK(c != nullptr && c->next->next->next->next == c);  // last points back to head
    return TEST_SUMMARY();
}
