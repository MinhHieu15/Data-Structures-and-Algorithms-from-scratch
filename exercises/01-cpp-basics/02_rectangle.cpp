// 01 - C/C++ basics: structures and functions
// Course: section 02, videos 003-004, 009-010, 017-023
//
// Write the C-style functions that work on a struct Rectangle.
// initialize and change_length must modify the caller's struct (use a pointer).
#include "../../include/test.hpp"

struct Rectangle {
    int length;
    int breadth;
};

void initialize(Rectangle* r, int l, int b) {
    // TODO: implement
}

int area(Rectangle r) {  // call by value is fine: we only read
    // TODO: implement
    return 0;
}

int perimeter(const Rectangle& r) {
    // TODO: implement
    return 0;
}

void change_length(Rectangle* r, int l) {
    // TODO: implement
}

// Allocate a Rectangle in the heap and return its address.
Rectangle* make_rectangle(int l, int b) {
    // TODO: implement
    return nullptr;
}

int main() {
    Rectangle r{0, 0};
    initialize(&r, 10, 5);
    CHECK_EQ(r.length, 10);
    CHECK_EQ(r.breadth, 5);
    CHECK_EQ(area(r), 50);
    CHECK_EQ(perimeter(r), 30);

    change_length(&r, 20);
    CHECK_EQ(area(r), 100);

    Rectangle* p = make_rectangle(3, 4);
    CHECK(p != nullptr);
    if (p) {
        CHECK_EQ(area(*p), 12);
        delete p;
    }
    return TEST_SUMMARY();
}
