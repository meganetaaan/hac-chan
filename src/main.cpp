#include <chrono>
#include <thread>
#include <iostream>

#include "max_e1.hpp"
#include "motion/motion.hpp"

int main()
{
  MaxE1 max_e1("/dev/ttyS1", 1000000);
  if (max_e1.connect())
  {
    max_e1.init();
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    std::cout << "Move forward" << std::endl;
    max_e1.motions->play(18);
    max_e1.motions->play(20);
    max_e1.motions->play(22);
    while(max_e1.motions->playing()) {
      std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
  }
  max_e1.disconnect();
  std::cout << "finished" << std::endl;
  return 0;
}
