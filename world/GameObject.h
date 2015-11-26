#ifndef WORLD_GAME_OBJECT_H_
#define WORLD_GAME_OBJECT_H_
class GameObject {
  /*
   * The base class for anything in the game world that you can see on the
   * screen. This includes Scenery, Tiles, Sprites, and derivatives thereof.
   * This class is similar to SDL_Rect in a lot of ways: it has a position, a
   * set of dimensions, and an image. However, the first two values are stored
   * as Vecs, and the third is a method that might return different values
   * based on when you call it. It also has a time value, generally used to
   * tell what image to return, but also for child classes to tell how to
   * interact. It has a block index blk, for world placement.
   * THIS CLASS IS NOT MEANT TO BE INSTANTIATED. Only its children. While this
   * and Scenery are functionally exactly the same, the semantic difference
   * counts.
   */
  public:
   Vec get_blk() const;
   Vec get_pos() const;
   Vec get_dim() const;
   Scalar get_time() const;
   SDL_Surface* get_image() const;
   void set_blk(const Vec& new_val);
   void set_blk_x(const Scalar& new_val);
   void set_blk_y(const Scalar& new_val);
   void set_pos(const Vec& new_val);
   void set_pos_x(const Scalar& new_val);
   void set_pos_y(const Scalar& new_val);
   void set_dim(const Vec& new_val);
   void set_dim_x(const Scalar& new_val);
   void set_dim_y(const Scalar& new_val);
   void add_to_time(const Scalar& increment);
   Vec get_upper_right_corner() const; // pos + dim + Vec(1.,1.)
   GameObject(const Scalar& x, const Scalar& y); // pos = Vec(x,y)
  private:
   Vec blk; // Block index of GameObject
   Vec pos; // Bottom left corner
   Vec dim;
   Scalar time; // Time of object since creation; classically 1 tick/frame
   SDL_Surface* spritesheet; // get_image() reads from here
};
#endif
