#include <iostream>
#include <cassert>

#include "stack.hpp"

void test_stack_initialization() {
    tt::stack<int> stack;
    assert(stack.empty());
    assert(stack.size() == 0);
    std::cout << "test_stack_initialization passed." << std::endl;
}

void test_stack_push() {
    tt::stack<int> stack;
    stack.push(42);
    assert(!stack.empty());
    assert(stack.size() == 1);
    assert(stack.top() == 42);
    std::cout << "test_stack_push passed." << std::endl;
}

void test_stack_pop() {
    tt::stack<int> stack;
    stack.push(42);
    stack.push(84);
    assert(stack.top() == 84);
    stack.pop();
    assert(stack.top() == 42);
    assert(stack.size() == 1);
    std::cout << "test_stack_pop passed." << std::endl;
}

void test_stack_top() {
    tt::stack<int> stack;
    stack.push(42);
    stack.push(84);
    assert(stack.top() == 84);
    stack.top() = 126;
    assert(stack.top() == 126);
    std::cout << "test_stack_top passed." << std::endl;
}

int main() {
    test_stack_initialization();
    test_stack_push();
    test_stack_pop();
    test_stack_top();
    return 0;
}
