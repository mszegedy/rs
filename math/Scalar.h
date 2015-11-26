#ifndef MATH_SCALAR_H_
#define MATH_SCALAR_H_
class Scalar {
  /*
   * Stores a scalar value, to double precision if necessary. Consists entirely
   * of operator overloads at the moment.
   */
  public:
   // Inspectors:
   short int get_short() const;
   int get_int() const;
   float get_float() const;
   double get_double() const;
   // Constructors:
   Scalar(const short int val);
   Scalar(const int val);
   Scalar(const float val);
   Scalar(const double val);
   Scalar(const Scalar& copy_from);
   // Operator overloads:
   friend Scalar& operator+=(Scalar& lhs, const short int rhs);
   friend Scalar& operator+=(Scalar& lhs, const int rhs);
   friend Scalar& operator+=(Scalar& lhs, const float rhs);
   friend Scalar& operator+=(Scalar& lhs, const double rhs);
   friend Scalar& operator+=(Scalar& lhs, const Scalar& rhs);
   friend Scalar& operator-=(Scalar& lhs, const short int rhs);
   friend Scalar& operator-=(Scalar& lhs, const int rhs);
   friend Scalar& operator-=(Scalar& lhs, const float rhs);
   friend Scalar& operator-=(Scalar& lhs, const double rhs);
   friend Scalar& operator-=(Scalar& lhs, const Scalar& rhs);
   friend Scalar& operator*=(Scalar& lhs, const short int rhs);
   friend Scalar& operator*=(Scalar& lhs, const int rhs);
   friend Scalar& operator*=(Scalar& lhs, const float rhs);
   friend Scalar& operator*=(Scalar& lhs, const double rhs);
   friend Scalar& operator*=(Scalar& lhs, const Scalar& rhs);
   friend Scalar& operator/=(Scalar& lhs, const short int rhs);
   friend Scalar& operator/=(Scalar& lhs, const int rhs);
   friend Scalar& operator/=(Scalar& lhs, const float rhs);
   friend Scalar& operator/=(Scalar& lhs, const double rhs);
   friend Scalar& operator/=(Scalar& lhs, const Scalar& rhs);
   friend Scalar& operator++(Scalar& arg);
   friend Scalar& operator++(Scalar& arg, int);
   friend Scalar& operator--(Scalar& arg);
   friend Scalar& operator--(Scalar& arg, int);
   friend const Scalar& operator+(const Scalar& arg);
   friend const Scalar& operator-(const Scalar& arg);
   friend const Scalar& operator+(Scalar lhs, const short int rhs);
   friend const Scalar& operator+(const short int lhs, Scalar rhs);
   friend const Scalar& operator+(Scalar lhs, const int rhs);
   friend const Scalar& operator+(const int lhs, Scalar rhs);
   friend const Scalar& operator+(Scalar lhs, const float rhs);
   friend const Scalar& operator+(const float lhs, Scalar rhs);
   friend const Scalar& operator+(Scalar lhs, const double rhs);
   friend const Scalar& operator+(const double lhs, Scalar rhs);
   friend const Scalar& operator+(Scalar lhs, const Scalar& rhs);
   friend const Scalar& operator-(Scalar lhs, const short int rhs);
   friend const Scalar& operator-(const short int lhs, Scalar rhs);
   friend const Scalar& operator-(Scalar lhs, const int rhs);
   friend const Scalar& operator-(const int lhs, Scalar rhs);
   friend const Scalar& operator-(Scalar lhs, const float rhs);
   friend const Scalar& operator-(const float lhs, Scalar rhs);
   friend const Scalar& operator-(Scalar lhs, const double rhs);
   friend const Scalar& operator-(const double lhs, Scalar rhs);
   friend const Scalar& operator-(Scalar lhs, const Scalar& rhs);
   friend const Scalar& operator*(Scalar lhs, const short int rhs);
   friend const Scalar& operator*(const short int lhs, Scalar rhs);
   friend const Scalar& operator*(Scalar lhs, const int rhs);
   friend const Scalar& operator*(const int lhs, Scalar rhs);
   friend const Scalar& operator*(Scalar lhs, const float rhs);
   friend const Scalar& operator*(const float lhs, Scalar rhs);
   friend const Scalar& operator*(Scalar lhs, const double rhs);
   friend const Scalar& operator*(const double lhs, Scalar rhs);
   friend const Scalar& operator*(Scalar lhs, const Scalar& rhs);
   friend const Scalar& operator/(Scalar lhs, const short int rhs);
   friend const Scalar& operator/(const short int lhs, Scalar rhs);
   friend const Scalar& operator/(Scalar lhs, const int rhs);
   friend const Scalar& operator/(const int lhs, Scalar rhs);
   friend const Scalar& operator/(Scalar lhs, const float rhs);
   friend const Scalar& operator/(const float lhs, Scalar rhs);
   friend const Scalar& operator/(Scalar lhs, const double rhs);
   friend const Scalar& operator/(const double lhs, Scalar rhs);
   friend const Scalar& operator/(Scalar lhs, const Scalar& rhs);
  private:
   double data;
};
#endif
