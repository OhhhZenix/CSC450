#include <iostream>
#include <mutex>
#include <thread>

// sync resource
std::mutex mutex;

void countUp() {
  for (int i = 0; i <= 20; i++) {
    // ensures proper access
    std::lock_guard<std::mutex> lock(mutex);
    // output
    std::cout << "Thread 1: " << i << std::endl;
  }
}

void countDown() {
  for (int i = 20; i >= 0; i--) {
    // ensures proper access
    std::lock_guard<std::mutex> lock(mutex);
    // output
    std::cout << "Thread 2: " << i << std::endl;
  }
}

int main() {
  // create and spawn threads
  std::thread threadOne(countUp);
  std::thread threadTwo(countDown);
  // clean up threads
  threadOne.join();
  threadTwo.join();
  // exit program
  return 0;
}
