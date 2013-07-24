#ifndef WORLD_GAME_OBJECT_H_
#define WORLD_GAME_OBJECT_H_
class GameObject {
  /*
   * The base class for anything in the game world that you can see on the
   * screen. This includes Scenery, Blocks, Sprites, and derivatives thereof.
   * This class is similar to SDL_Rect in a lot of ways: it has a position, a
   * set of dimensions, and an image. However, the first two values are stored
   * as Vecs, and the third is a method that might return different values
   * based on when you call it. It also has a time value, generally used to
   * tell what image to return, but also for child classes to tell how to
   * interact.
   * THIS CLASS IS NOT MEANT TO BE INSTANTIATED. Only its children. While this
   * and Scenery are functionally exactly the same, the semantic difference
   * counts.
   */
  public:
    Vec get_pos() const;            // Get position Vec
    Vec get_dim() const;            // Get dimension Vec
    double get_time() const;        // Get time
    SDL_Surface* get_image() const; // Get image (usually dependent on time)
    void set_pos(const Vec& new_val);         // Set position Vec
    void set_pos_x(const double new_val);     // Set position Vec's x
    void set_pos_y(const double new_val);     // Set position Vec's y
    void set_dim(const Vec& new_val);         // Set dimension Vec
    void set_dim_x(const double new_val);     // Set dimension Vec's x
    void set_dim_y(const double new_val);     // Set dimension Vec's y
    void add_to_time(const double increment); // Set time
    Vec get_upper_right_corner() const; // Position Vec + dimension Vec
  private:
    Vec pos;     // Bottom left corner
    Vec dim;     // Vec(width,height)
    double time; // Time of object since creation; classically 1 tick/frame
};
#endif
