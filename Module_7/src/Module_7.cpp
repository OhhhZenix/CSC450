#include <iostream>
#include <mutex>
#include <thread>

// sync resource
std::mutex mutex;

void count_up() {
  for (int i = 0; i <= 20; i++) {
    // ensures proper access
    std::lock_guard<std::mutex> lock(mutex);
    // output
    std::cout << "Thread 1: " << i << std::endl;
  }
}

void count_down() {
  for (int i = 20; i >= 0; i--) {
    // ensures proper access
    std::lock_guard<std::mutex> lock(mutex);
    // output
    std::cout << "Thread 2: " << i << std::endl;
  }
}

int main() {
  // create and spawn threads
  std::thread thread_one(count_up);
  std::thread thread_two(count_down);
  // clean up threads
  thread_one.join();
  thread_two.join();
  // exit program
  return 0;
}
