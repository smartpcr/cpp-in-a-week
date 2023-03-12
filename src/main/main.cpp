#include <iostream>
#include <chrono>

using namespace std;

int main() {
  cout << "Hello World!" << endl;
  auto LastNodeServiceCheckMinutes = 0L;
  auto currentTimeMinutes = std::chrono::duration_cast<std::chrono::minutes>(
                                 std::chrono::system_clock::now().time_since_epoch())
                                 .count();
  auto minutesSinceLastNodeServiceCheck = currentTimeMinutes - LastNodeServiceCheckMinutes;
  cout << "min since start: " << minutesSinceLastNodeServiceCheck << endl;
  return 0;
}