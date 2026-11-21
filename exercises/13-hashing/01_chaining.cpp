// 13 - Hashing: chaining
// Course: section 21, videos 001-003
//
// Table of 10 buckets, hash(key) = key % 10. Each bucket is a linked list kept in
// sorted order (insert in sorted position, like the course). Keys are non-negative.
// insert ignores duplicates. search returns true/false. remove returns true if found.
#include <vector>

#include "../../include/test.hpp"

class ChainingHash {
    struct Node {
        int key;
        Node* next;
    };
    Node* table[10] = {nullptr};

    static int hash(int key) { return key % 10; }

public:
    ChainingHash() = default;
    ~ChainingHash() {
        for (Node*& head : table)
            while (head) {
                Node* t = head;
                head = head->next;
                delete t;
            }
    }
    ChainingHash(const ChainingHash&) = delete;
    ChainingHash& operator=(const ChainingHash&) = delete;

    void insert(int key) {
        // TODO: implement
    }

    bool search(int key) const {
        // TODO: implement
        return false;
    }

    bool remove(int key) {
        // TODO: implement
        return false;
    }

    std::vector<int> bucket(int i) const {  // for the tests
        std::vector<int> v;
        for (Node* p = table[i]; p; p = p->next) v.push_back(p->key);
        return v;
    }
};

int main() {
    ChainingHash h;
    for (int k : {16, 12, 25, 39, 6, 122, 5, 68, 75, 12}) h.insert(k);
    CHECK_EQ(h.bucket(2), {12, 122});
    CHECK_EQ(h.bucket(5), {5, 25, 75});
    CHECK_EQ(h.bucket(6), {6, 16});
    CHECK(h.search(75));
    CHECK(h.search(68));
    CHECK(!h.search(15));
    CHECK(!h.search(0));

    CHECK(h.remove(25));
    CHECK(!h.remove(25));
    CHECK(!h.search(25));
    CHECK_EQ(h.bucket(5), {5, 75});
    return TEST_SUMMARY();
}
