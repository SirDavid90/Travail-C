#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>


#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 780

SDL_Window *pWindow=NULL;
SDL_Renderer *pRenderer=NULL;

int main(int argc, char *argv[])
{
    /*if (SDL_Init(SDL_INIT_EVERYTHING)!=0){
        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        return 1;

    } else {
        pWindow=SDL_CreateWindow("A SDL2 Window", 640, 480, WINDOW_WIDTH,WINDOW_HEIGHT, SDL_WINDOW_SHOWN);}  //X, Y... Le reste ?
        SDL_Dealy(4000);
        SDL_Quit();

    if (pWindow){
        pRenderer=SDL_CreateRenderer(pWindow, -1, SDL_RENDERER_PRESENTVSYNC);
    }

    //Set Color
    SDL_SetRendererDrawColor(pRenderer, 205, 92, 92, SDL_ALPHA_OPAQUE);

    //Clear Render
    SDL_RenderClear(pRenderer);

    //Update render
    SDL_RenderPresent(pRenderer);

    SDL_Dealy(4000);
    if (pRenderer){
        SDL_DestroyRenderer(pRenderer);
    }

    if (pWindow){
        SDL_DestroyWindow(pWindow);
    }


    SDL_Quit();*/

    return 0;
}
