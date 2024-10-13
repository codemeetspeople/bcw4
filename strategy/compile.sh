#! /bin/bash

echo "Compile Weapon.cpp"
g++ Weapon.cpp -c
echo "Compile Gun.cpp"
g++ Gun.cpp -c
echo "Compile Rifle.cpp"
g++ Rifle.cpp -c
echo "Compile Soldier.cpp"
g++ Soldier.cpp -c
echo "Compile main.cpp"
g++ main.cpp Weapon.o Gun.o Rifle.o Soldier.o
echo "Clean up"
rm *.o
echo "DONE"
