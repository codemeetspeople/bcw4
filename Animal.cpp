#include <iostream>


class Animal {
    protected:
        std::string name;

    public:
        Animal(const std::string& name = "Animal") {
            this->name = name;
        }
        virtual ~Animal() {}

        virtual const std::string& getName() const {
            return this->name;
        }
        virtual void dissapear() const {
            std::cout << this->getName() << " dissapear..." << std::endl;
        }
        
        virtual void walk() const = 0;
        virtual void eat() const = 0;
};


class Cat : virtual public Animal {
    public:
        Cat(const std::string& name = "Cat") : Animal(name) {}
        ~Cat() {}

        void walk() const {
            std::cout << this->getName() << " walks alone..." << std::endl;
        }

        void eat() const {
            std::cout << this->getName() << " eats fish..." << std::endl;
        }

        void meow() const {
            std::cout << this->getName() << " say meow..." << std::endl;
        }
};

class Dog : virtual public Animal {
    public:
        Dog(const std::string& name = "Dog") : Animal(name) {}
        ~Dog() {}


        void walk() const {
            std::cout << this->getName() << " walks with master..." << std::endl;
        }

        void eat() const {
            std::cout << this->getName() << " eats meat..." << std::endl;
        }

        void woof() const {
            std::cout << this->getName() << " say woof..." << std::endl;
        }
};

class CatDog : public Cat, public Dog {
    public:
        CatDog(const std::string& name = "CatDog") {
            this->name = name;
        }
        ~CatDog() {}

        void walk() const {
            std::cout << this->getName() << " walks alone with master..." << std::endl;
        }

        void eat() const {
            std::cout << this->getName() << " eats meat and fish..." << std::endl;
        }
};


int main() {
    CatDog* cd = new CatDog();

    cd->meow();
    cd->woof();
    cd->walk();
    cd->eat();
    cd->Cat::walk();
    cd->Cat::eat();
    cd->Dog::walk();
    cd->Dog::eat();
    cd->dissapear();

    delete(cd);

    return 0;
}