#include "SDL/SDL.h"
#include "../math/Vec.h"
#include "GameObject.h"

Vec GameObject::get_pos() const {
  /*
   * Inspect this GameObject's position Vec.
   */
  return pos;
}
Vec GameObject::get_dim() const {
  /*
   * Inspect this GameObject's dimension Vec.
   */
  return dim;
}
double GameObject::get_time() const {
  /*
   * Inspect this GameObject's time. This value increases by 1 every frame when
   * this GameObject is computed classically, and is used to determine what
   * image to return when get_image() is called, as well as what action to take
   * at various points in interaction when this GameObject is a block or
   * sprite.
   */
  return time;
}
SDL_Surface* GameObject::get_image() const {
  /*
   * Returns an image for this GameObject. This can vary according to the time.
   * The image is always read off of this object's spritesheet (which is
   * loaded into the member variable `spritesheet' upon construction).
   */
  return NULL; // This is why you don't instantiate this class by itself
}
void GameObject::set_pos(const Vec& new_val) {
  /*
   * Sets the position of this GameObject to new_val.
   */
  pos = new_val;
}
void GameObject::set_pos_x(const double new_val) {
  /*
   * Sets the x of the position of this GameObject to new_val.
   */
  pos.set_x(new_val);
}
void GameObject::set_pos_y(const double new_val) {
  /*
   * Sets the y of the position of this GameObject to new_val.
   */
  pos.set_y(new_val);
}
void GameObject::set_dim(const Vec& new_val) {
  /*
   * Sets the dimensions of this GameObject to new_val.
   */
  dim = new_val;
}
void GameObject::set_dim_x(const double new_val) {
  /*
   * Sets the x of the dimension of this GameObject to new_val.
   */
  dim.set_x(new_val);
}
void GameObject::set_dim_y(const double new_val) {
  /*
   * Sets the y of the dimension of this GameObject to new_val.
   */
  dim.set_y(new_val);
}
void GameObject::add_to_time(const double increment) {
  /*
   * Adds increment to time. increment should always be 1. unless the game is
   * relativistic.
   */
  time += increment;
}
Vec GameObject::get_upper_right_corner() const {
  /*
   * Get the Vec of the position of the upper-right corner of this GameObject.
   * This amounts to pos + dim + Vec(1.,1.).
   */
  return pos+dim+Vec(1.,1.);
}
GameObject::GameObject(const double x, const double y)
    : pos(x,y), dim(0.,0.), time(0.), spritesheet(NULL) {}
