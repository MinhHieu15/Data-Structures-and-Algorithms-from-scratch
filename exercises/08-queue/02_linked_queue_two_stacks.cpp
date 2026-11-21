// 08 - Queue: linked list queue, and a queue built from two stacks
// Course: section 14, videos 010-014
//
// LinkedQueue keeps front and rear pointers so both operations are O(1).
// TwoStackQueue may only use the two std::stack members (amortized O(1)):
//   enqueue pushes on `in`; dequeue pops from `out`, refilling it from `in` when empty.
// dequeue returns -1 when the queue is empty.
#include <stack>

#include "../../include/test.hpp"

class LinkedQueue {
    struct Node {
        int data;
        Node* next;
    };
    Node* front = nullptr;
    Node* rear = nullptr;

public:
    LinkedQueue() = default;
    ~LinkedQueue() {
        while (front) {
            Node* t = front;
            front = front->next;
            delete t;
        }
    }
    LinkedQueue(const LinkedQueue&) = delete;
    LinkedQueue& operator=(const LinkedQueue&) = delete;

    bool is_empty() const {
        // TODO: implement
        return false;
    }
    void enqueue(int x) {
        // TODO: implement
    }
    int dequeue() {
        // TODO: implement
        return -1;
    }
};

class TwoStackQueue {
    std::stack<int> in, out;

public:
    void enqueue(int x) {
        // TODO: implement
    }
    int dequeue() {
        // TODO: implement
        return -1;
    }
};

int main() {
    LinkedQueue q;
    CHECK(q.is_empty());
    for (int i = 1; i <= 4; i++) q.enqueue(i * 10);
    CHECK(!q.is_empty());
    CHECK_EQ(q.dequeue(), 10);
    CHECK_EQ(q.dequeue(), 20);
    q.enqueue(50);
    CHECK_EQ(q.dequeue(), 30);
    CHECK_EQ(q.dequeue(), 40);
    CHECK_EQ(q.dequeue(), 50);
    CHECK_EQ(q.dequeue(), -1);
    q.enqueue(7);  // works again after becoming empty
    CHECK_EQ(q.dequeue(), 7);

    TwoStackQueue t;
    t.enqueue(1);
    t.enqueue(2);
    t.enqueue(3);
    CHECK_EQ(t.dequeue(), 1);
    t.enqueue(4);
    CHECK_EQ(t.dequeue(), 2);
    CHECK_EQ(t.dequeue(), 3);
    CHECK_EQ(t.dequeue(), 4);
    CHECK_EQ(t.dequeue(), -1);
    return TEST_SUMMARY();
}
