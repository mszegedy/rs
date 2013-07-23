#include <cmath>
#include "../consts.h"
#include "Vec.h"

// Member functions {{{
double Vec::get_x() const {
  return x;
}
double Vec::get_y() const {
  return y;
}
void Vec::set_x(const double new_val) {
  x = new_val;
}
void Vec::set_y(const double new_val) {
  y = new_val;
}
double Vec::get_r() const {
  return sqrt(x*x+y*y);
}
double Vec::get_t() const {
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
  else
    return atan(y/x);
}
Vec::Vec(const double x_arg, const double y_arg) {
  x = x_arg;
  y = y_arg;
}
// Operator overloads: {{{
Vec& operator+=(Vec& lhs, const Vec& rhs) {
  lhs.set_x(lhs.get_x()+rhs.get_x());
  lhs.set_y(lhs.get_y()+rhs.get_y());
}
Vec& operator-=(Vec& lhs, const Vec& rhs) {
  lhs.set_x(lhs.get_x()-rhs.get_x());
  lhs.set_y(lhs.get_y()-rhs.get_y());
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
  return lhs.get_x()*rhs.get_x()+lhs.get_y()+rhs.get_y();
}
const int operator==(const Vec& lhs, const Vec& rhs) {
  return ((lhs.get_x() == rhs.get_x()) && (lhs.get_y() == rhs.get_y()));
}
const int operator!=(const Vec& lhs, const Vec& rhs) {
  return ((lhs.get_x() != rhs.get_x()) || (lhs.get_y() != rhs.get_y()));
}
