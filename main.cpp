#include <iostream>
#include <chrono>
#include "solver.h"

int main() {
  std::chrono::steady_clock _timer;
  std::map<int,long> times;
  const int TASK_N = 1000;

  /*time profiling
  for (int j = 100; j < 3000; j+=100) {
    auto start_t = _timer.now();
    Solver slv(j);
    auto end_t = _timer.now();
    long current_time = std::chrono::duration_cast<std::chrono::milliseconds>(end_t-start_t).count();
    times[j] = current_time;
  }
   */

  auto start_t = _timer.now();
  Solver slv(TASK_N);
  slv.PrintSolutionsAll();
  auto end_t = _timer.now();
  std::cout << "Task was solved in " <<
    std::chrono::duration_cast<std::chrono::milliseconds>(end_t-start_t).count()
    << " ms" << std::endl;
  return 0;
};
