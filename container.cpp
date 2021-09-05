#include <memory>
#include <iterator>

#include "container.h"


template<typename T, typename Alloc>
size_t Container<T, Alloc>::get_capacity() {
    return capacity_;
}

template<typename T, typename Alloc>
size_t Container<T, Alloc>::get_length() {
    return length_;
}

template<typename T, typename Alloc>
bool Container<T, Alloc>::is_empty() {
    return length_ == 0;
}
