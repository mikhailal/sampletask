//
// Created by mimi on 16.12.2019.
//

#ifndef UNTITLED1__SOLVER_H
#define UNTITLED1__SOLVER_H
#include "storage.h"
#include <vector>
#include <iostream>
class Solver :  Storage {
private:
  std::map<long, std::vector<std::pair<int, int>>> sortedFuncValues;
public:
  explicit Solver(int size): Storage(size)
  {
   for (const auto& element: this->m_values)
       sortedFuncValues[element.second].push_back(element.first);
  }
  void PrintSolutionsGroupedByValue() const {
    for (const auto &x: sortedFuncValues) {
      std::cout << "Value == "<<x.first<< ". Pairs (a,b) or (c,d), having this func value: ";
      for (auto it = x.second.begin(); it != x.second.end(); it++)
        std::cout <<" (" << it->first << ";" << it->second << ") :: ";
      std::cout << std::endl;
    };
  }

  void PrintSolutionsAll() const {
    std::cout << "Printing all solutions of this equation" << std::endl;
    for (const auto &x: sortedFuncValues) {
      for (auto it = x.second.begin(); it != x.second.end(); it++)
        for (auto it2 = x.second.begin(); it2 != x.second.end(); it2++)
            std::cout << "a = " << it->first << ", b = " << it->second <<
            ", c = " << it2->first << ", d = " << it2->second << std::endl;
    };
  }


};

#endif //UNTITLED1__SOLVER_H
