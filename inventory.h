#include <iostream>
#include <SDL2/SDL.h>
#include <stdio.h>
#include <string>

#include "item.h"

class Inventory
{
public:
    std::vector<Weapon> weapons;
    std::vector<Armor> armor;
    std::vector<Key> keys;
    std::vector<Expendable> expendables;

private:
    void add(Item item);
    void drop(Item item);
    void use(Item item);
};
