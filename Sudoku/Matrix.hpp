//
// Created by Christoph Rohde on 27.08.22.
//

#pragma once

#include <vector>
#include "Cell.hpp"
#include "Random.hpp"

class Matrix : public std::vector<std::vector<Cell> >{


private:


public:

    /** Build a Matrix of Cells with the given size.
    * @param rows: number of rows
    * @param columns: number of columns
    * @return: Matrix of Cells
    **/
    Matrix(int &rows, int &columns) : std::vector<std::vector<Cell> >(rows, std::vector<Cell>(columns)){

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                std::string position = std::to_string(i) + "," + std::to_string(j);
                this->at(i).at(j) = Cell(position);
            }
        }
    }

    Cell getCell(int &row, int &column) {
        return this->at(row).at(column);
    }

    /**
     * Print the matrix with the cell values.
     *
     **/
    void print_as_console_log()  {

        for (int i = 0; i < this->size(); i++) {
            for (int j = 0; j < this->at(i).size(); j++) {
                int value = this->at(i).at(j).get_value();

                std::cout << value << "| " << " ";
            }
            std::cout << std::endl;
        }
    }

    void set_random_values(){
        int min = 1;
        int max = 9;

        for (int i = 0; i < this->size(); i++) {
            for (int j = 0; j < this->at(i).size(); j++) {
                int randomNumber = Random::random_number(min, max);
                // Check if the random number is already in the current row or column.
                while (this->at(i).at(j).get_client_value() != 0 || this->at(i).at(j).get_value() != 0) {
                    randomNumber = Random::random_number(min, max);
                }
                this->at(i).at(j).set_value(randomNumber);
            }
        }
    }

//    auto add_row(std::vector<string> &row) -> void {
//        this->push_back(row);
//    }
//
//
//    auto add_column(std::vector<string> &column) -> void {
//        for (int i = 0; i < this->size(); i++) {
//            this->at(i).push_back(column.at(i));
//        }
//    }
//
//    /**
//     * add rows to the matrix
//     */
//    auto add_rows(std::vector<string> &row, ...) -> void {
//        this->push_back(row);
//
//        // If more than one row is added, the following rows are added.
//        va_list args;
//        va_start(args, row); // Initialize the argument list.
//        while (true) {
//            std::vector<string> *next_row = va_arg(args, std::vector<string> *);
//            if (next_row == nullptr) {
//                break;
//            }
//            this->push_back(*next_row);
//        }
//        va_end(args);
//    }
//
//    auto add_rows(initializer_list<std::vector<string>> rows) -> void {
//        for (auto row: rows) {
//            std::vector<string> newRow = row;
//            this->push_back(newRow);
//        }
//    }
//
//    auto insertRow(int index, std::vector<string> &row) -> void {
//        this->insert(this->begin() + index, row);
//    }
//
//    // Get Size of the Matrix
//    auto getSize() -> std::vector<int> {
//        std::vector<int> size;
//        size.push_back(this->size());
//        size.push_back(this->at(0).size());
//        return size;
//    }



};