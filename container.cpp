#include <memory>
#include <iterator>

#include "container.h"


template<typename T, typename Alloc = std::allocator<T>>
class Container {
    size_t length_;
    size_t capacity_;
    Alloc allocator_;


    // overloaded operators
    virtual Container &operator=(const Container &other);

    virtual bool operator==(const Container &other);


    // access to elements
    virtual Container &at(size_t ind);

    virtual Container &operator[](size_t ind);

    virtual Container &front();

    virtual Container &back();


    // TODO: iterators

    // working with the size

    size_t get_capacity() {
        return capacity_;
    }

    size_t get_length() {
        return length_;
    }

    bool is_empty() {
        return length_ == 0;
    }

    virtual bool reserve(size_t count_elements); // returns true if reserve passed successfully

    virtual bool resize(size_t count_elements); // returns true if resize passed successfully

    virtual void shrink_to_fit();


    // modifiers

    virtual void clear();

    virtual bool insert(size_t ind, const T &value);

    virtual bool erase(size_t ind);

    virtual bool erase(size_t from, size_t to);

    virtual void push_back(const T &element);

    virtual void pop_back();

    virtual void swap(const T& other);

};