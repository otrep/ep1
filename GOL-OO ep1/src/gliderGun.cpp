#include <iostream>
#include "gliderGun.hpp"

GliderGun::GliderGun(){

    setName("Gosper Glider Gun");
    setGenerations(150);
    setsize(40);

    setcell('*',5, 29);
    setcell('*',6, 27);
    setcell('*',6, 29);
    setcell('*',7, 17);
    setcell('*',7, 18);
    setcell('*',7, 25);
    setcell('*',7, 26);
    setcell('*',7, 39);
    setcell('*',7, 40);
    setcell('*',8, 16);
    setcell('*',8, 20);
    setcell('*',8, 25);
    setcell('*',8, 26);
    setcell('*',8, 39);
    setcell('*',8, 40);
    setcell('*',9, 5);
    setcell('*',9, 6);
    setcell('*',9, 15);
    setcell('*',9, 21);
    setcell('*',9, 25);
    setcell('*',9, 26);
    setcell('*',10, 5);
    setcell('*',10, 6);
    setcell('*',10, 15);
    setcell('*',10, 19);
    setcell('*',10, 21);
    setcell('*',10, 22);
    setcell('*',10, 27);
    setcell('*',10, 29);
    setcell('*',11, 15);
    setcell('*',11, 21);
    setcell('*',11, 29);
    setcell('*',12, 16);
    setcell('*',12, 20);
    setcell('*',13, 17);
    setcell('*',13, 18);
}

GliderGun::~GliderGun(){}
