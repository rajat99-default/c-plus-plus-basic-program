#include <iostream>

template <typename T>
class CustomSharedPtr {
private:
    T* ptr;
    size_t* ref_count;

public:
    CustomSharedPtr(T* p) : ptr(p), ref_count(new size_t(1)) {}

    CustomSharedPtr(const CustomSharedPtr<T>& other) : ptr(other.ptr), ref_count(other.ref_count) {
        (*ref_count)++;
    }

    CustomSharedPtr<T>& operator=(const CustomSharedPtr<T>& other) {
        if (this != &other) {
            if (--(*ref_count) == 0) {
                delete ptr;
                delete ref_count;
            }
            ptr = other.ptr;
            ref_count = other.ref_count;
            (*ref_count)++;
        }
        return *this;
    }

    ~CustomSharedPtr() {
        if (--(*ref_count) == 0) {
            delete ptr;
            delete ref_count;
        }
    }

    T& operator*() { return *ptr; }
    T* operator->() { return ptr; }
};

int main() {
    CustomSharedPtr<int> p1(new int(42));
    CustomSharedPtr<int> p2 = p1;
    CustomSharedPtr<int> p3(new int(99));

    std::cout << "p1: " << *p1 << ", p2: " << *p2 << ", p3: " << *p3 << std::endl;
    
    return 0;
}
