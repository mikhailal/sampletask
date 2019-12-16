//
// Created by mimi on 16.12.2019.
//

#ifndef UNTITLED1__STORAGE_H
#define UNTITLED1__STORAGE_H
#include <map>
#include <cmath>
#include <functional>
class Storage {
public:
  Storage() = delete;
  explicit Storage(int size);
  Storage(int size, std::function<long(int, int)>);
protected:
  std::map<std::pair<int, int>, long> m_values;
private:
  const int m_start = 1;
};

#endif //UNTITLED1__STORAGE_H
