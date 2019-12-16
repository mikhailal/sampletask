//
// Created by mimi on 16.12.2019.
//

#include "storage.h"
Storage::Storage(int size)
{
  for (int i = m_start; i < size; i++)
    for (int j = m_start; j < size; j++)
      m_values[std::make_pair(i,j)] = pow(i,3)+pow(j,3);
}

Storage::Storage(int size, std::function<long(int, int)> user_function)
{
  for (int i = m_start; i < size; i++)
    for (int j = m_start; j < size; j++)
      m_values[std::make_pair(i,j)] = user_function(i,j);

}
