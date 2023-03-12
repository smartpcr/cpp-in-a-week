//
// Created by xiaodoli on 3/12/2023.
//

#ifndef CPP_IN_A_WEEK_TEXTBLOCK_H
#define CPP_IN_A_WEEK_TEXTBLOCK_H

#include <string>

class TextBlock {
public:
    TextBlock(const char* text) : text(text) {}

    const char& operator[](std::size_t position) const;

    char& operator[](std::size_t position);

private:
    std::string text;
};

#endif //CPP_IN_A_WEEK_TEXTBLOCK_H
