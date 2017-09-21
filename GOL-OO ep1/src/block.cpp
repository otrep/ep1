#include <iostream>
#include "block.hpp"

Block::Block(){

    setName("Block");
    setGenerations(5);

   
    setcell('*', 14, 14);
    setcell('*', 14, 15);
    setcell('*', 15, 14);
    setcell('*', 15, 15);
}
Block::Block(int a, int b){

    setNome("Block");

    
    setcell('*', a, b);
    setcell('*', a, b+1);
    setcell('*', a+1, b);
    setcell('*', a+1, b+1);
}

Block::~Block(){}
