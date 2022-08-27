//
// Created by Christoph Rohde on 27.08.22.
//

#pragma once
#include <iostream>
#include <random>

namespace Random {

    /**
     * @return a random number of a given range.
     */
    int random_number(int &min, int &max){
        return rand() % (max - min + 1) + min;
    }



}
