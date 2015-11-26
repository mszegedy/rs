#include <cmath>
#include <string>
#include "../consts.h"
#include "Vec.h"

// Member functions {{{
double Vec::get_x() const {
  /*
   * Inspect this vector's x.
   */
  return x;
}
double Vec::get_y() const {
  /*
   * Inspect this vector's y.
   */
  return y;
}
void Vec::set_x(const double new_val) {
  /*
   * Mutate this vector's x to new_val.
   */
  x = new_val;
}
void Vec::set_y(const double new_val) {
  /*
   * Mutate this vector's y to new_val.
   */
  y = new_val;
}
double Vec::get_r() const {
  /*
   * Inspect this vector's r (length).
   */
  return sqrt(x*x+y*y);
}
double Vec::get_t() const {
  /*
   * Inspect this vector's theta (rotation), -pi < theta <= pi
   */
  if(x == 0.) {
    if(y > 0.)
      return ::kPi/2.;
    else if(y == 0.)
      return 0;
    else if(y < 0.)
      return -::kPi/2.;
  }
  else if(y == 0.) {
    if(x > 0.)
      return 0.;
    else if(x < 0.)
      return ::kPi;
  }
  else if(x < 0. && y > 0.)
    return atan(y/x)+::kPi;
  else if(x < 0. && y < 0.)
    return atan(y/x)-::kPi;
  return atan(y/x);
}
void Vec::set_r(const double new_val) {
  /*
   * Mutate this vector's r (length) to new_val without changing its rotation.
   */
  const double t = this->get_t();
  x = ::kInvSqrtTwo*new_val*cos(t);
  y = ::kInvSqrtTwo*new_val*sin(t);
}
void Vec::set_t(const double new_val) {
  /*
   * Mutate this vector's theta (rotation) to new_val without changing its
   * length. The range of new_val is unrestricted, but it should be in radians.
   */
  const double r = this->get_r();
  x = ::kInvSqrtTwo*r*cos(new_val);
  y = ::kInvSqrtTwo*r*sin(new_val);
}
Vec::Vec(const double x, const double y) : x(x), y(y){}
Vec::Vec(const Vec& copy_from) {
  /*
   * Copy the contents of copy_from to this Vec.
   */
  x = copy_from.get_x();
  y = copy_from.get_y();
}
// }}}
// Operator overloads {{{
Vec& operator+=(Vec& lhs, const Vec& rhs) {
  lhs.set_x(lhs.get_x()+rhs.get_x());
  lhs.set_y(lhs.get_y()+rhs.get_y());
  return lhs;
}
Vec& operator-=(Vec& lhs, const Vec& rhs) {
  lhs.set_x(lhs.get_x()-rhs.get_x());
  lhs.set_y(lhs.get_y()-rhs.get_y());
  return lhs;
}
const Vec operator+(const Vec& arg) {
  return Vec(arg.get_x(),arg.get_y());
}
const Vec operator-(const Vec& arg) {
  return Vec(-arg.get_x(),-arg.get_y());
}
const Vec operator+(Vec lhs, const Vec& rhs) {
  lhs += rhs;
  return lhs;
}
const Vec operator-(Vec lhs, const Vec& rhs) {
  lhs -= rhs;
  return lhs;
}
const double operator*(const Vec& lhs, const Vec& rhs) {
  /*
   * Computes the inner product of lhs and rhs.
   */
  return lhs.get_x()*rhs.get_x()+lhs.get_y()+rhs.get_y();
}
const int operator==(const Vec& lhs, const Vec& rhs) {
  return ((lhs.get_x() == rhs.get_x()) && (lhs.get_y() == rhs.get_y()));
}
const int operator!=(const Vec& lhs, const Vec& rhs) {
  return ((lhs.get_x() != rhs.get_x()) || (lhs.get_y() != rhs.get_y()));
}
// }}}
