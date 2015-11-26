#include <iostream>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "../math/Vec.h"
#include "GameObject.h"
using namespace std;

int main(int argc, char** argv) {
  Vec test_vec_a(1.,1.);
  cout << "test_vec_a.get_x(): " << test_vec_a.get_x() << endl;
  cout << "test_vec_a.get_y(): " << test_vec_a.get_y() << endl;
  cout << "test_vec_a.get_r(): " << test_vec_a.get_r() << endl;
  cout << "test_vec_a.get_t(): " << test_vec_a.get_t() << endl;
  test_vec_a = Vec(2.,2.);
  cout << "test_vec_a = Vec(2.,2.)" << endl;
  cout << "test_vec_a.get_x(): " << test_vec_a.get_x() << endl;
  cout << "test_vec_a.get_y(): " << test_vec_a.get_y() << endl;
  cout << "test_vec_a.get_r(): " << test_vec_a.get_r() << endl;
  cout << "test_vec_a.get_t(): " << test_vec_a.get_t() << endl;
  Vec test_vec_b(-1.,3.);
  cout << "(test_vec_a + test_vec_b).get_x(): " << (test_vec_a + test_vec_b).get_x() << endl;
  cout << "(test_vec_a + test_vec_b).get_y(): " << (test_vec_a + test_vec_b).get_y() << endl;
  cout << "(test_vec_a + test_vec_b).get_r(): " << (test_vec_a + test_vec_b).get_r() << endl;
  cout << "(test_vec_a + test_vec_b).get_t(): " << (test_vec_a + test_vec_b).get_t() << endl;
  cout << "(test_vec_a - test_vec_b).get_x(): " << (test_vec_a - test_vec_b).get_x() << endl;
  cout << "(test_vec_a - test_vec_b).get_y(): " << (test_vec_a - test_vec_b).get_y() << endl;
  cout << "(test_vec_a - test_vec_b).get_r(): " << (test_vec_a - test_vec_b).get_r() << endl;
  cout << "(test_vec_a - test_vec_b).get_t(): " << (test_vec_a - test_vec_b).get_t() << endl;
  cout << "test_vec_a*test_vec_b: " << test_vec_a*test_vec_b << endl;
  test_vec_a += test_vec_b;
  cout << "test_vec_a += test_vec_b" << endl;
  cout << "test_vec_a.get_x(): " << test_vec_a.get_x() << endl;
  cout << "test_vec_a.get_y(): " << test_vec_a.get_y() << endl;
  cout << "test_vec_a.get_r(): " << test_vec_a.get_r() << endl;
  cout << "test_vec_a.get_t(): " << test_vec_a.get_t() << endl;
  test_vec_a -= test_vec_b;
  cout << "test_vec_a -= test_vec_b" << endl;
  cout << "test_vec_a.get_x(): " << test_vec_a.get_x() << endl;
  cout << "test_vec_a.get_y(): " << test_vec_a.get_y() << endl;
  cout << "test_vec_a.get_r(): " << test_vec_a.get_r() << endl;
  cout << "test_vec_a.get_t(): " << test_vec_a.get_t() << endl;
  test_vec_a = test_vec_b;
  cout << "test_vec_a = test_vec_b" << endl;
  cout << "test_vec_a.get_x(): " << test_vec_a.get_x() << endl;
  cout << "test_vec_a.get_y(): " << test_vec_a.get_y() << endl;
  cout << "test_vec_a.get_r(): " << test_vec_a.get_r() << endl;
  cout << "test_vec_a.get_t(): " << test_vec_a.get_t() << endl;
}
