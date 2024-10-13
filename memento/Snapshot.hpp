#ifndef SNAPSHOT_HPP
#define SNAPSHOT_HPP

#include <iostream>


class Snapshot {
    public:
        std::string title;
        int hp;
        int maxHP;
        int dmg;

        Snapshot(const std::string& title, int hp, int maxHP, int dmg);
        virtual ~Snapshot();
};


#endif
