//
// Created by Christoph Rohde on 27.08.22.
//

#pragma onec
#include <vector>
#include "Matrix.hpp"
#include <map>

namespace Sudoku_Level{
    // level 1 to level 10
    enum Level{
        Level_1,
        Level_2,
        Level_3,
        Level_4,
        Level_5,
        Level_6,
        Level_7,
        Level_8,
        Level_9,
        Level_10
    };



    std::vector<std::vector<int> > getLevel(Level  level){
        std::map<Level, std::vector<std::vector<int> > > level_map;
        const auto level_1 = std::vector<std::vector<int> > ({
            {1,2,3, 4,5,6, 7,8,9},
            {4,5,6, 7,8,9, 1,2,3},
            {7,8,9, 1,2,3, 4,5,6},

            {2,3,1, 5,6,4, 8,9,7},
            {5,6,4, 8,9,7, 2,3,1},
            {8,9,7, 2,3,1, 5,6,4},

            {3,1,2, 6,4,5, 9,7,8},
            {6,4,5, 9,7,8, 3,1,2},
            {9,7,8, 3,1,2, 6,4,5}});



//        level_map[Level_2] = Matrix(9, 9);
//        level_map[Level_3] = Matrix(9, 9);
//        level_map[Level_4] = Matrix(9, 9);
//        level_map[Level_5] = Matrix(9, 9);
//        level_map[Level_6] = Matrix(9, 9);
//        level_map[Level_7] = Matrix(9, 9);
//        level_map[Level_8] = Matrix(9, 9);
//        level_map[Level_9] = Matrix(9, 9);
//        level_map[Level_10] = Matrix(9, 9);
    }
}
