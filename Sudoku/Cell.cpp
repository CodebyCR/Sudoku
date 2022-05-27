#include <array>
#include <iostream>

class Cell
{
private:
    std::array<int, 9> m_Notes;
    int m_ClientIn;
    int m_Value;
    
public:
    Cell(int value);
    
    ~Cell();
    
    std::array<int, 9> get_Notes() const;
    void set_Note(int note);
    
    int get_ClientIn() const;
    void set_ClientIn(int clientIn);
    
    int get_Value() const;
    void set_Value(int value);
};

Cell::Cell(int m_Value)
{
    this->m_Value = m_Value;
}

Cell::~Cell()
{
}

std::array<int, 9> Cell::get_Notes() const
{
    return m_Notes;
}

void Cell::set_Note(int new_Note)
{
    if(m_Notes.at(new_Note - 1) != new_Note )
    {
        m_Notes.at(new_Note - 1) = new_Note;
    }
    else{
        m_Notes.at(new_Note - 1) = 0;
    }
}


int Cell::get_ClientIn() const
{
    return m_ClientIn;
}

void Cell::set_ClientIn(int m_ClientIn)
{
    this->m_ClientIn = m_ClientIn;
}


int Cell::get_Value() const
{
    return m_Value;
}

void Cell::set_Value(int m_Value)
{
    this->m_Value = m_Value;
}
