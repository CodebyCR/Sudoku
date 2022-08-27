
#pragma once

#include <array>
#include <iostream>


class Cell {

private:
    std::array<int, 9> m_Notes ;
    std::string position;
    int value;
    int client_value;
//    bool is_invisible = false;


public:
    Cell() {

    }

    Cell(std::string &position) : position(position) {

    }

    ~ Cell() {};

    std::string get_position() {
        return this -> position;
    }

    int get_value() const {
        return this -> value;
    }

    int get_client_value() {
        return this -> client_value;
    }
//
//    void set_invisible(bool &is_invisible) {
//        this -> is_invisible = is_invisible;
//    }
//
    void set_value(int &value) {
        this -> value = value;
    }

    void set_client_value(int &client_value) {
        this -> client_value = client_value;
    }

    void set_Note(int new_Note) {
        if (m_Notes.at(new_Note - 1) != new_Note) {
            m_Notes.at(new_Note - 1) = new_Note;
        } else {
            m_Notes.at(new_Note - 1) = 0;
        }
    }

    std::array<int, 9> get_Notes() const {
        return m_Notes;
    }

//    int get_ClientIn() const {
//        return m_ClientIn;
//    }
//
//    void set_ClientIn(int m_ClientIn) {
//        this->m_ClientIn = m_ClientIn;
//    }
//
//
//    int get_Value() const {
//        return m_Value;
//    }
//
//    void set_Value(int m_Value) {
//        this->m_Value = m_Value;
//    }


};