// Copyright 2021 Tsvetkov Maxim

#ifndef MODULES_STRING_CALCULATOR_INCLUDE_STRING_CALCULATOR_H_
#define MODULES_STRING_CALCULATOR_INCLUDE_STRING_CALCULATOR_H_

#include <vector>
#include <algorithm>
#include <string>

class StringCalculator {
 private:
    std::string my_string;
 public:
    explicit StringCalculator(const std::string& str);
    int getResult();
    static int Add(std::string numbers);
};

#endif  // MODULES_STRING_CALCULATOR_INCLUDE_STRING_CALCULATOR_H_
