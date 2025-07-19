#pragma once
#include <vector>
#include <iostream>
#include "../entity.hpp"
#include "drawble.hpp"

class DrawSystem {
public:
    void update(const std::vector<Entity*>& entities) {
        for (Entity* entity : entities) {
            Drawble* drawable = entity->getComponent<Drawble>();
            if (!drawable) continue;

            for (int i = 0; i < drawable->getWidth(); ++i) {
                for (int j = 0; j < drawable->getHeight(); ++j) {
                    if (drawable->getSpriteChar(i,j) != '\0')
                        std::cout << drawable->getSpriteChar(i, j);
                }
                std::cout << '\n';
            }
            std::cout << '\n';
        }
    }
};
