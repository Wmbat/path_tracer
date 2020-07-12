#include "renderables/triangle.hpp"

triangle::triangle(const vec& v0, const vec& v1, const vec& v2) noexcept
{
   data[0] = v0;
   data[1] = v1;
   data[2] = v2;
}

auto triangle::normal() const -> const norm
{
   return normalise(cross(u(), v()));
}
