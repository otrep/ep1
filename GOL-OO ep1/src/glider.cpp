#include <iostream>
#include "glider.hpp"

Glider::Glider(){

    setName("Glider");
    setGenerations(60);

    
    setcell('*', 5, 6);
    setcell('*', 6, 7);
    setcell('*', 7, 5);
    setcell('*', 7, 6);
    setcell('*', 7, 7);
}

Glider::Glider(int a, int b){

    setNome("Glider");

 
    setcell('*', a, b);
    setcell('*', a+1, b+1);
    setcell('*', a+2, b-1);
    setcell('*', a+2, b);
    setcell('*', a+2, b+1);
}


Glider::~Glider(){}
