#ifndef STACK_HPP
#define STACK_HPP

#include <vector>

namespace tt {

template <typename T, typename Container = std::vector<T> >
class stack {
    typedef T value_type;
    typedef Container container_type;
    typedef std::size_t size_type;

    explicit stack (const container_type& cont = container_type()) : container() {}

    bool empty() const {
        return (container.empty());
    }

    size_type size() const {
        return (container.size());
    }

    value_type& top() {
        return (container.back());
    }

    const value_type& top() const {
        return (container.back());
    }

    void push(const value_type& value) const {
        return container.push_back(value);
    }

    void pop() {
        return container.pop_back();
    }

    private:
        container_type container;
}; // stack

// operators: ==, !=, <, <-, >, >=

}; // namespace tt

#endif