#include <SDL2/SDL.h>
#include <stdio.h>

// Screen Dimensions
const int WIDTH = 640;
const int HEIGHT = 480;

int main(int argc, char* args[])
{
    // Creating window
    SDL_Window* window = NULL;

    // Surface inside window
    SDL_Surface* screenSurface = NULL;

    // Initialize SDL
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        printf("SDL could not initialize.  SDL_Error: %s\n", SDL_GetError());
    }
    else{
        // Create window
        window = SDL_CreateWindow("Hello World", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
        if(window == NULL){
            printf("Window could not be created. SDL_Error: %s\n", SDL_GetError());
        }
        else{
            // Get window Surface
            screenSurface = SDL_GetWindowSurface(window);

            // Fill surface with white
            SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

            // Update the surface
            SDL_UpdateWindowSurface(window);

            // Wait 2 seconds
            SDL_Delay(2000);
        }
    }

    // Destroy window
    SDL_DestroyWindow(window);

    // Quit SDL Subsystems
    SDL_Quit();

    return 0;
}
