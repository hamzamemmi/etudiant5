
 
//fonction.h

#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>


typedef struct Enigme enigme;

typedef struct{
    int x, y;
    int r;
int temp;
}Circle;
int distance(ennemi E,hero H,SDL_Rect camera); //bch nchoufou  el distance mabin l hero w ennemie 7achetna beha fel colision
int collisionBxC(Circle a, SDL_Rect b);

int collisionCxC(Circle a, Circle b);

int collisionBox(SDL_Rect a, SDL_Rect b);
int afficher_enigme(SDL_Surface *ecran,SDL_Surface *chaine)
enigme initPrintRiddle(enigme e); //initialisation enigme
void moveToMouse(hero *player, int dx, int dy); //l  yet7arek bel souris
© 
