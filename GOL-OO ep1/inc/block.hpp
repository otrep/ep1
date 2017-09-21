#include "matriz.hpp"
#ifndef BLOCK_HPP
#define BLOCK_HPP

class Block : public Matrix {
    public:
        Block ();
        Block(int a, int b);
        ~Block ();
};

#endif
