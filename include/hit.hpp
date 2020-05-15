#pragma once

#include "math/vec.hpp"

struct hit
{
   vec position{0.0, 0.0, 0.0};
   vec normal{0.0, 0.0, 0.0};
   double distance{0.0};
   bool inside{false};
};
