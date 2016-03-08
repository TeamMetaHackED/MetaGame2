#include <iostream>
#include <SDL2/SDL.h>
#include <stdio.h>
#include <string>

enum Stats { HP, STR, DEF, SPD, INT, DEX, EXP};

class Entity
{
private:
    int width;
    int length;
    int moveSpeed;
    std::vector<int> position; // (x, y)

    Stats stats;

    std::string inventory;

public:
    Entity();
    void speak();
    void inventory();
};


class Player: public Entity
{
public:
    int move();
    void battle();
    void defend();
    void move();
    void getInput();
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
