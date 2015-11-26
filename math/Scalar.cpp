#include "Scalar.h"

// Inspectors {{{
short int Scalar::get_short() const {
  return (short int) data;
}
int Scalar::get_int() const {
  return (int) data;
}
float Scalar::get_float() const {
  return (float) data;
}
double Scalar::get_double() const {
  return data;
}
// }}}
// Constructors {{{
Scalar::Scalar(const short int val) : data((double) val) {}
Scalar::Scalar(const int val) : data((double) val) {}
Scalar::Scalar(const float val) : data((double) val) {}
Scalar::Scalar(const double val) : data(val) {}
Scalar::Scalar(const Scalar& copy_from) {
  data = copy_from.get_double();
}
// }}}
// Operator overloads {{{
Scalar& operator+=(Scalar& lhs, const short int rhs) {
  lhs.data += (double) rhs;
}
Scalar& operator+=(Scalar& lhs, const int rhs) {
  lhs.data += (double) rhs;
}
Scalar& operator+=(Scalar& lhs, const float rhs) {
  lhs.data += (double) rhs;
}
Scalar& operator+=(Scalar& lhs, const double rhs) {
  lhs.data += rhs;
}
Scalar& operator+=(Scalar& lhs, const Scalar& rhs) {
  lhs.data += rhs.get_double();
}
Scalar& operator-=(Scalar& lhs, const short int rhs) {
  lhs.data -= (double) rhs;
}
Scalar& operator-=(Scalar& lhs, const int rhs) {
  lhs.data -= (double) rhs;
}
Scalar& operator-=(Scalar& lhs, const float rhs) {
  lhs.data -= (double) rhs;
}
Scalar& operator-=(Scalar& lhs, const double rhs) {
  lhs.data -= rhs;
}
Scalar& operator-=(Scalar& lhs, const Scalar& rhs) {
  lhs.data -= rhs.get_double();
}
Scalar& operator*=(Scalar& lhs, const short int rhs) {
  lhs.data *= (double) rhs;
}
Scalar& operator*=(Scalar& lhs, const int rhs) {
  lhs.data *= (double) rhs;
}
Scalar& operator*=(Scalar& lhs, const float rhs) {
  lhs.data *= (double) rhs;
}
Scalar& operator*=(Scalar& lhs, const double rhs) {
  lhs.data *= rhs;
}
Scalar& operator*=(Scalar& lhs, const Scalar& rhs) {
  lhs.data *= rhs.get_double();
}
Scalar& operator/=(Scalar& lhs, const short int rhs) {
  lhs.data /= (double) rhs;
}
Scalar& operator/=(Scalar& lhs, const int rhs) {
  lhs.data /= (double) rhs;
}
Scalar& operator/=(Scalar& lhs, const float rhs) {
  lhs.data /= (double) rhs;
}
Scalar& operator/=(Scalar& lhs, const double rhs) {
  lhs.data /= rhs;
}
Scalar& operator/=(Scalar& lhs, const Scalar& rhs) {
  lhs.data /= rhs.get_double();
}
Scalar& operator%=(Scalar& lhs, const short int rhs) {
  lhs.data = (double) (lhs.get_int()%rhs);
}
Scalar& operator%=(Scalar& lhs, const int rhs) {
  lhs.data = (double) (lhs.get_int()%rhs);
}
Scalar& operator%=(Scalar& lhs, const Scalar& rhs) {
  lhs.data = (double) (lhs.get_int()%rhs.get_int());
}
Scalar& operator++(Scalar& arg) {
  arg += 1;
}
Scalar& operator++(Scalar& arg, int) {
  arg += 1;
}
Scalar& operator--(Scalar& arg) {
  arg -= 1;
}
Scalar& operator--(Scalar& arg, int) {
  arg -= 1;
}
