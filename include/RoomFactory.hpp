#ifndef ROOM_FACTORY_HPP
#define ROOM_FACTORY_HPP

class RoomFactory {
public:
    static std::shared_ptr<Room> CreateRoom(const std::string& type) {
        if (type == "Combat") return std::make_shared<CombatRoom>();
        if (type == "Treasure") return std::make_shared<TreasureRoom>();
        if (type == "Boss") return std::make_shared<BossRoom>();
        
        return nullptr;
    }
};

#endif