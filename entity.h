#include <iostream>
#include <SDL2/SDL.h>
#include <stdio.h>
#include <string>

#include "sprite.h"
#include "tools.h"

enum Stats { HP, STR, DEF, SPD, INT, DEX, EXP};

class Entity
{
private:
    Sprite sprite;

    Pos moveSpeed;
    Pos x;
    Pos y;

    Stats stats;

    vector<item> inventory;

public:
    Entity();
    virtual void speak();
    void move(Dir dir);
    void setPos(Pos x, Pos y);
};


class Player: public Entity
{
public:
    void battle();
    void defend();
};


class NPC: public Entity
{
private:
    std::string dialogue;
public:
    void AI();
};


class Enemy: public NPC
{
public:
    void battle();
};


class Friendly: public NPC
{
public:
    void trade();
};
