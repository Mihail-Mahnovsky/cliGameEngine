#pragma once
#include <vector>

#include "entity.hpp"

class World{
public:
    void newEntity();
    Entity* getEntityById(int id);
    int getEntityesSize() { return _entityes.size();}
    std::vector<Entity*> getAllEntities() { return _entityes; }
private:
    vector<Entity*> _entityes;
};