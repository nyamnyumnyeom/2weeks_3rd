#include <iostream>
#include<vector>


template <typename T>

class SimpleVector {
private:
    T* data;
    int arsize;
    int max;

public:

    SimpleVector() : arsize(0), max(10) {
        data = new T[max];
    }


    SimpleVector(int capacity) : arsize(0), max(capacity) {
        data = new T[max];
    }


    ~SimpleVector() {
        delete[] data;
    }


    void push_back(const T& value) {
        if (arsize < max) {
            data[arsize] = value;
            ++arsize;
        }
    }


    void pop_back() {
        if (arsize > 0) {
            --arsize;
        }
    }


    int size() const {
        return arsize;
    }


    int capacity() const {
        return max;
    }
};

int main() {
    SimpleVector<int> vec1;
    SimpleVector<double> vec2(5);

    return 0;
}
