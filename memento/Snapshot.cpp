#include "Snapshot.hpp"

Snapshot::Snapshot(const std::string& title, int hp, int maxHP, int dmg)
        : title(title), hp(hp), maxHP(maxHP), dmg(dmg) {}
Snapshot::~Snapshot() {}