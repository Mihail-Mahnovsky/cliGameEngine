#include "world.hpp"

void World::newEntity(){
    _entityes.push_back(new Entity(_entityes.size()));
}

Entity* World::getEntityById(int id){
    for (Entity* ent : _entityes){
        if (ent->getID() == id){
            return ent;
        }
    }
    return nullptr;
}