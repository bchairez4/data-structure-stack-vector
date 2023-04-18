/*****************************************************************************
*    Brian Chairez                                                           *
*    Goal: std::vector implementation of std::stack                          *
*    Advantages:                                                             *
*       -Fast operations: O(1) amortized push(); O(1) pop(), and top()       *
*       -Built in vector size and functions are helpful                      *
*    Limitations:                                                            *
*       -Can only remove from the top of the stack one at a time             *
*       -No way to access anything in the middle or beginning of the stack   *
*****************************************************************************/

#ifndef STACK_H
#define STACK_H

#include <vector>

// LIFO
template <class T>
class Stack {
    private:
        std::vector<T> stack_;
    public:
        Stack();
        Stack(const int& capacity, const T& data);
        Stack(const Stack<T>& other);
        ~Stack();
        T& operator=(const Stack<T>& other);
        void push(const T& data);
        void pop();
        T top() const;
        bool empty() const;
        int size() const;
};

#endif
