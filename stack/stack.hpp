#ifndef STACK_HPP
#define STACK_HPP

#include <vector>

namespace tt {

template <typename T, typename Container = std::vector<T> >
class stack {
public:
    typedef T value_type;
    typedef std::vector<T> container_type;
    typedef std::size_t size_type;
public:
    explicit stack (const container_type& cont = container_type()) : container() {}
public:
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

    void push(const value_type& val) {
        return container.push_back(val);
    }

    void pop() {
        return container.pop_back();
    }

protected:
    container_type container;
};

template <typename T, typename Container>
    bool operator== (const stack<T, Container>& lhs,
                    const stack<T, Container>& rhs) {
        return (lhs.container == rhs.constainer);
    }

template <typename T, typename Container>
    bool operator!= (const stack<T, Container>& lhs,
                     const stack<T, Container>& rhs) {
        return (lhs.container != rhs.constainer);
    }

template <typename T, typename Container>
    bool operator> (const stack<T, Container>& lhs,
                    const stack<T, Container>& rhs) {
        return (lhs.container > rhs.constainer);
    }

template <typename T, typename Container>
    bool operator< (const stack<T, Container>& lhs,
                    const stack<T, Container>& rhs) {
        return (lhs.container < rhs.constainer);
    }

template <typename T, typename Container>
    bool operator<= (const stack<T, Container>& lhs,
                     const stack<T, Container>& rhs) {
        return (lhs.container <= rhs.constainer);
    }

template <typename T, typename Container>
    bool operator>= (const stack<T, Container>& lhs,
                     const stack<T, Container>& rhs) {
        return (lhs.container >= rhs.constainer);
    }

};
#endif