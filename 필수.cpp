#include<iostream>
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

    void print() const {
        for (int i = 0; i < arsize; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    SimpleVector<int> vec1;

    std::cout << "vec1 size " << vec1.size() << std::endl;
    std::cout << "vec1 capacity " << vec1.capacity() << std::endl;

    std::cout << "push_back 으로 추가하기" << std::endl;
    vec1.push_back(1);
    std::cout << "추가 후 vec1" << std::endl;
    vec1.print();

    std::cout << "push_back 으로 추가하기" << std::endl;
    vec1.push_back(5);
    std::cout << "추가 후 vec1" << std::endl;
    vec1.print();

    std::cout << "push_back 으로 추가하기" << std::endl;
    vec1.push_back(10);
    std::cout << "추가 후 vec1" << std::endl;

    vec1.print();
    std::cout << "vec1 size " << " ";
    std::cout << vec1.size() << std::endl;
    std::cout << "pop_back 으로 끝 지우기" << std::endl;
    std::cout << "vec1 size " << " ";
    vec1.pop_back();
    std::cout << vec1.size() << std::endl;
    std::cout << "pop_back 으로 끝 지우기" << std::endl;
    std::cout << "vec1 size " << " ";
    vec1.pop_back();
    std::cout << vec1.size() << std::endl;


    return 0;
}
