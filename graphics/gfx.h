namespace gfx {
SDL_Surface* LoadImage(const std::string filename) {
  /*
   * Load an image from filename in an optimized manner. Capable of loading any
   * filetype.
   */
  SDL_Surface* ret_image = NULL;
  ret_image = IMG_Load(filename.c_str());
  if(ret_image != NULL)
    ret_image = SDL_DisplayFormat(ret_image);
  return ret_image;
}
void ApplySurface(const Vec& offset_vec, SDL_Surface* source, SDL_Surface* destination) {
  /*
   * Blits source onto destination at offset_vec. offset_ver USES SDL
   * COORDINATES, NOT CARTESIAN COORDINATES!
   */
  SDL_Rect offset_rect;
  offset_rect.x = int(offset_vec.get_x());
  offset_rect.y = int(offset_vec.get_y());
  SDL_BlitSurface(source, NULL, destination, &offset_rect);
}
}
