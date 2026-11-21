// 01 - C/C++ basics: classes, constructors, templates
// Course: section 02, videos 020, 024-028
//
// Complete the template class Arithmetic<T>. It must work for int and double.
#include "../../include/test.hpp"

template <class T>
class Arithmetic {
    T a;
    T b;

public:
    Arithmetic(T a, T b) : a(a), b(b) {}

    T add() const {
        // TODO: implement
        return T();
    }
    T sub() const {
        // TODO: implement
        return T();
    }
    T larger() const {
        // TODO: implement
        return T();
    }
};

int main() {
    Arithmetic<int> ai(10, 5);
    CHECK_EQ(ai.add(), 15);
    CHECK_EQ(ai.sub(), 5);
    CHECK_EQ(ai.larger(), 10);

    Arithmetic<double> ad(1.5, 2.25);
    CHECK_NEAR(ad.add(), 3.75, 1e-9);
    CHECK_NEAR(ad.sub(), -0.75, 1e-9);
    CHECK_NEAR(ad.larger(), 2.25, 1e-9);
    return TEST_SUMMARY();
}
