#include <iostream>
#include <SDL2/SDL.h>
#include <stdio.h>
#include <string>

class Inventory
{
public:
    std::vector<std::string> weapons;
    std::vector<std::string> armor;
    std::vector<std::string> keys;
    std::vector<std::string> expendables;

private:
    void add();
    void drop();
    void use();
};
