// 08 - Queue: circular queue using an array
// Course: section 14, videos 001-009
//
// Use front and rear indices that wrap around with % size, like the course:
// one slot is always left empty, so a queue built with size n holds n - 1 items.
// enqueue returns false when full; dequeue returns -1 when empty.
#include "../../include/test.hpp"

class CircularQueue {
    int size;
    int front;
    int rear;
    int* Q;

public:
    explicit CircularQueue(int size) : size(size), front(0), rear(0), Q(new int[size]) {}
    ~CircularQueue() { delete[] Q; }
    CircularQueue(const CircularQueue&) = delete;
    CircularQueue& operator=(const CircularQueue&) = delete;

    bool is_empty() const {
        // TODO: implement
        return false;
    }
    bool is_full() const {
        // TODO: implement
        return false;
    }
    bool enqueue(int x) {
        // TODO: implement
        return false;
    }
    int dequeue() {
        // TODO: implement
        return -1;
    }
};

int main() {
    CircularQueue q(4);  // holds 3
    CHECK(q.is_empty());
    CHECK_EQ(q.dequeue(), -1);
    CHECK(q.enqueue(1));
    CHECK(q.enqueue(2));
    CHECK(q.enqueue(3));
    CHECK(q.is_full());
    CHECK(!q.enqueue(4));
    CHECK_EQ(q.dequeue(), 1);
    CHECK_EQ(q.dequeue(), 2);
    CHECK(q.enqueue(4));  // wraps around
    CHECK(q.enqueue(5));
    CHECK_EQ(q.dequeue(), 3);
    CHECK_EQ(q.dequeue(), 4);
    CHECK_EQ(q.dequeue(), 5);
    CHECK(q.is_empty());

    CircularQueue big(101);
    for (int round = 0; round < 3; round++) {
        for (int i = 0; i < 100; i++) big.enqueue(i);
        int ok = 0;
        for (int i = 0; i < 100; i++) ok += big.dequeue() == i;
        CHECK_EQ(ok, 100);
    }
    return TEST_SUMMARY();
}
