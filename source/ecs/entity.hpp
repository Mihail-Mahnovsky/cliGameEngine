#pragma once

#include "component.hpp"

#include <vector>
#include <string>

using namespace std;

class Entity{
public:
    Entity(int id) : _id(id) {}
    ~Entity() {
        for (Component* c : _components){
            delete c;
        }
    }
    void addComponnent(Component* comn){
        _components.push_back(comn);
    }
    int getID() {
        return _id;
    }
    template<typename T>    
    T* getComponent() {
        for (Component* c : _components) {
            if (T* casted = dynamic_cast<T*>(c)) {
                return casted;
            }
        }
        return nullptr;
    }

private:
    vector<Component*> _components;
    int _id;
};