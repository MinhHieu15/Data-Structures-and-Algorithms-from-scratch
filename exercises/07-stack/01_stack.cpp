// 07 - Stack using an array and using a linked list
// Course: section 13, videos 001-008
//
// pop() and stack_top() return -1 when the stack is empty.
// peek(pos): pos 1 is the top element; -1 for a bad position.
// ArrayStack::push does nothing when the stack is full.
#include "../../include/test.hpp"

class ArrayStack {
    int size;
    int top;
    int* S;

public:
    explicit ArrayStack(int size) : size(size), top(-1), S(new int[size]) {}
    ~ArrayStack() { delete[] S; }
    ArrayStack(const ArrayStack&) = delete;
    ArrayStack& operator=(const ArrayStack&) = delete;

    void push(int x) {
        // TODO: implement
    }
    int pop() {
        // TODO: implement
        return -1;
    }
    int peek(int pos) const {
        // TODO: implement
        return -1;
    }
    int stack_top() const {
        // TODO: implement
        return -1;
    }
    bool is_empty() const {
        // TODO: implement
        return false;
    }
    bool is_full() const {
        // TODO: implement
        return false;
    }
};

class LinkedStack {
    struct Node {
        int data;
        Node* next;
    };
    Node* top = nullptr;

public:
    LinkedStack() = default;
    ~LinkedStack() {
        while (top) {
            Node* t = top;
            top = top->next;
            delete t;
        }
    }
    LinkedStack(const LinkedStack&) = delete;
    LinkedStack& operator=(const LinkedStack&) = delete;

    void push(int x) {
        // TODO: implement
    }
    int pop() {
        // TODO: implement
        return -1;
    }
    int stack_top() const {
        // TODO: implement
        return -1;
    }
    bool is_empty() const {
        // TODO: implement
        return false;
    }
};

int main() {
    ArrayStack s(3);
    CHECK(s.is_empty());
    CHECK_EQ(s.pop(), -1);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);  // full, ignored
    CHECK(s.is_full());
    CHECK_EQ(s.stack_top(), 30);
    CHECK_EQ(s.peek(1), 30);
    CHECK_EQ(s.peek(3), 10);
    CHECK_EQ(s.peek(4), -1);
    CHECK_EQ(s.pop(), 30);
    CHECK_EQ(s.pop(), 20);
    CHECK(!s.is_full());
    CHECK_EQ(s.pop(), 10);
    CHECK(s.is_empty());

    LinkedStack ls;
    CHECK(ls.is_empty());
    for (int i = 1; i <= 5; i++) ls.push(i * i);
    CHECK_EQ(ls.stack_top(), 25);
    CHECK_EQ(ls.pop(), 25);
    CHECK_EQ(ls.pop(), 16);
    CHECK(!ls.is_empty());
    CHECK_EQ(ls.pop(), 9);
    CHECK_EQ(ls.pop(), 4);
    CHECK_EQ(ls.pop(), 1);
    CHECK_EQ(ls.pop(), -1);
    CHECK(ls.is_empty());
    return TEST_SUMMARY();
}
