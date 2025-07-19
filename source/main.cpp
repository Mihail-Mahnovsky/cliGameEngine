#include "ecs/world.hpp"
#include "ecs/components/drawSystem.hpp"

int main(){
    World wl = World();
    wl.newEntity();
    char sprite[4][4] = {
        {'@','@','@','@'},
        {'@','@','@','@'},
        {'@','@','@','@'},
        {'@','@','@','@'}
    };
    wl.getEntityById(0)->addComponnent(new Drawble(sprite));

    DrawSystem ds = DrawSystem();
    ds.update(wl.getAllEntities());
    return 0;
}