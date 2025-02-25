#include <iostream>
#include <stdexcept>

class IntStack {
private:
    int *tab;
    int top = 0;
    int size;

public:
    IntStack(int s) : top(0), size(s) {
        tab = new int[size];
    }

    IntStack() : top(0), size(12) {
        tab = new int[size];
    }

    ~IntStack() {
        delete[] tab;
    }

    IntStack(const IntStack &r) : top(r.top), size(r.size) {
        tab = new int[size];
        for (int i = 0; i < top; ++i) {
            tab[i] = r.tab[i];
        }
    }

    IntStack &operator=(const IntStack &r) {
        if (this != &r) {
            delete[] tab;
            size = r.size;
            top = r.top;
            tab = new int[size];

            for (int i = 0; i < top; ++i) {
                tab[i] = r.tab[i];
            }
        }
        return *this;
    }

    void push(int e) {
        tab[top] = e;
        top = top + 1;
    }

    int get_top() const {
        return tab[top - 1];
    }

    int pop() {
        int a = tab[top - 1];
        tab[top - 1] = 0;
        top = top - 1;
        return a;
    }

    bool is_empty() const {
        return top == 0;
    }

    bool is_full() const {
        return top == size;
    }

    void print() const {
        std::string ch = "[ ";
        for (int i = 0; i < top; i++) {
            ch += std::to_string(tab[i]) + " ";
        }
        ch += "]";
        std::cout << ch << std::endl;
    }

    friend std::ostream &operator<<(std::ostream &os, const IntStack &pile) {
        pile.print();
        return os;
    }
};