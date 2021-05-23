// Copyright 2021 Tsvetkov Maxim

#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

#include "include/string_calculator.h"
#include "include/string_calculator_app.h"

std::string StringCalculatorApp::help(const std::string& filename) {
    return "This is an simple String calculator application. " \
        "It return sum of given arguments. \n\n" \
        "Please provide arguments in the following format:\n$ " +
        filename + " \"[delimiter]\\n[numbers...]\"\n" \
        "Example: " + filename + " ;\\n1;2 \n\n";
}

std::string StringCalculatorApp::operator()(int argc, const char** argv) {
    if (argc == 1) {
        return help(argv[0]);
    }

    std::ostringstream ss;
    int res;

    try {
        res = StringCalculator::Add(argv[1]);
    } catch (std::exception& exc) {
        return exc.what() + help(argv[0]);
    }
    ss << res;
    return ss.str();
}
