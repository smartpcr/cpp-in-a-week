//
// Created by xiaodoli on 3/12/2023.
//

#include "TextBlock.h"

const char& TextBlock::operator[](std::size_t position) const {
    return text[position];
}

char& TextBlock::operator[](std::size_t position) {
    // cast away const of return object
    return const_cast<char&>(static_cast<const TextBlock&>(*this)[position]);
}