// Copyright 2021 Tsvetkov Maxim

#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include "include/string_calculator.h"

StringCalculator::StringCalculator(const std::string& str):
                                    my_string(str) {}

bool isNumber(char a) {
    return (a < '9' && a > '0');
}

int StringCalculator::Add(std::string numbers) {
    if (numbers == "") {
        return 0;
    }
    int result = 0;

    char separator = ',';

    if (!isNumber(numbers[0])) {
        separator = numbers[0];
        numbers.erase(0, 2);
    }

    for (size_t i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == separator || numbers[i] == '\n') {
            numbers[i] = ' ';
        }
    }
    std::istringstream is(numbers);
    std::string num;
    std::vector<int> negatives;
    while (is >> num) {
        try {
            int a = std::stoi(num);
            if (a < 0) {
                negatives.push_back(a);
            } else {
                result += a;
            }
        } catch(...) {
            throw std::runtime_error("ERROR: Wrong number format!\n");
        }
    }
    if (negatives.size() > 0) {
        std::string error = "ERROR: negatives not allowed : ";
        for (size_t i = 0; i < negatives.size(); ++i) {
            error += std::to_string(negatives[i]);
            error += " ";
        }
        error += "\n";
        throw std::runtime_error(error);
    }
    return result;
}

int StringCalculator::getResult() {
    return Add(my_string);
}
