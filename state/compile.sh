#! /bin/bash

echo "Compile State.cpp"
g++ State.cpp -c
echo "Compile Unit.cpp"
g++ Unit.cpp -c
echo "Compile Soldier.cpp"
g++ Soldier.cpp -c
echo "Compile Rogue.cpp"
g++ Rogue.cpp -c
echo "Compile Werewolf.cpp"
g++ Werewolf.cpp -c

echo "Compile main.cpp"
g++ main.cpp State.o Unit.o Soldier.o Rogue.o Werewolf.o
echo "Clean up"
rm *.o
echo "DONE"
