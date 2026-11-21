// Shared helpers for the linked list exercises (already done, just use them).
#pragma once
#include <vector>

struct Node {
    int data;
    Node* next;
};

inline Node* from_vector(const std::vector<int>& v) {
    Node* head = nullptr;
    Node* last = nullptr;
    for (int x : v) {
        Node* t = new Node{x, nullptr};
        if (!head) head = last = t;
        else {
            last->next = t;
            last = t;
        }
    }
    return head;
}

inline std::vector<int> to_vector(Node* p) {
    std::vector<int> v;
    while (p) {
        v.push_back(p->data);
        p = p->next;
    }
    return v;
}

inline void free_list(Node* p) {
    while (p) {
        Node* q = p->next;
        delete p;
        p = q;
    }
}
