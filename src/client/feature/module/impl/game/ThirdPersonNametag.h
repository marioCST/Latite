#include "../../Module.h"

class ThirdPersonNametag : public Module {
public:
    ThirdPersonNametag() : Module("ThirdPersonNametag", "Third Person Nametag", "Shows your nametag in third person view.", GAME) {
    }

    virtual ~ThirdPersonNametag() {}

    void onEnable() override;
    void onDisable() override;
};
