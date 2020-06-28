
#include <TutorialConfig.h>
#include <iostream>

#ifdef USE_MYMATH
  #include <SquareRoot.h>
#else
  #include <cmath>
#endif

int main()
{
    std::cout << "Verson: "
              << Tutorial_VERSION_MAJOR
              << "."
              << Tutorial_VERSION_MINOR
              << std::endl;
    #if USE_MYMATH
      std::cout << "Using MY MATH" << std::endl;
      std::cout << "Square root of 5 = " << mysqrt(5.0) << std::endl;
    #else
      std::cout << "Using THEIR MATH" << std::endl;
      std::cout << "Square root of 5 = " << std::sqrt(5.0) << std::endl;
    #endif
    return 0;
}
