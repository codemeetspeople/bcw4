#ifndef STATE_HPP
#define STATE_HPP

#include <iostream>

class State {
    protected:
        std::string title;
        int hp;
        int maxHP;
        int dmg;

    public:
        State(const std::string& title, int maxHP, int dmg);
        virtual ~State();

        virtual const std::string& getTitle() const;
        virtual int getHP() const;
        virtual int getMaxHP() const;
        virtual int getDmg() const;

        virtual void takeDamage(int dmg);
};

#endif
