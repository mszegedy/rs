#ifndef WORLD_TILES_TILE_H_
#define WORLD_TILES_TILE_H_
class Tile : public GameObject {
  /*
   * A GameObject that physically interacts, but is otherwise inert. That is,
   * all of its interaction is basically passive: it waits for things to try and
   * interact with it via touch, upon which it will perform some action upon
   * them.
   * NOT MEANT TO BE INSTANTIATED. This class is only for having more specific
   * Blocks interact with it.
   */
  public:
   int is_touching(const GameObject& other_object);
#endif
