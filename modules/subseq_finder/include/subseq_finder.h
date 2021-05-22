// Copyright 2021 Tsvetkov Maxim

#ifndef MODULES_SUBSEQ_FINDER_INCLUDE_SUBSEQ_FINDER_H_
#define MODULES_SUBSEQ_FINDER_INCLUDE_SUBSEQ_FINDER_H_

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

class SubseqFinder {
 private:
    std::vector <int> seq_1;
    std::vector <int> seq_2;
 public:
    SubseqFinder(std::vector <int> seq_1,
                 std::vector <int> seq_2);
    std::vector<int> getMaxSubseq();
    static std::vector<int> findMaxSubseq(std::vector <int> seq_1,
                                       std::vector <int> seq_2);
};

#endif  // MODULES_SUBSEQ_FINDER_INCLUDE_SUBSEQ_FINDER_H_
