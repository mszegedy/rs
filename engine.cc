// C libraries
// C++ libraries
#include <string>
// SDL libraries
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
// Global consts and variables
#include "consts.h"
// Classes
#include "math/Vec.h"
// Functions
#include "graphics/gfx.h"

int main(int argc, char** argv) {
  SDL_Surface* screen = NULL;
  SDL_Surface* hello = NULL; // will contain image with message "Hello world"
  if(SDL_Init(SDL_INIT_EVERYTHING) == -1)
    return 1;
  SDL_WM_SetCaption(::kTitle.c_str(),NULL);
  screen = SDL_SetVideoMode(::kScreenWidth,
                            ::kScreenHeight,
                            ::kScreenBPP,
                            SDL_HWSURFACE);
  if(screen == NULL)
    return 1;
  hello = gfx::LoadImage("graphics/hello.png");
  gfx::ApplySurface(Vec(10.,10.),hello,screen);
  if(SDL_Flip(screen) == -1)
    return 1;
  SDL_Delay(10000);
  SDL_FreeSurface(hello);
  SDL_Quit();
  return 0;
}
