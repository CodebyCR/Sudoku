#include <iostream>
//#include "Cell.cpp"
#include <map>

std::map<int, int> rowValues;



/**
 @Autor: Christoph Rohde
 @retuned eine Zufallszahl aus einen Intervall (Start- & Endwert inklusive).
 */
int generateRendomNum(){
    //TODO: Zufallszahl erzeugen und zurückgeben.
    return 1;
}

/**
 Prüft ob eine Zufallszahl enthalten ist.
 @true -> erzeugt neue Zufallszahl und prüft erneut.
 @false -> gibt die Zahl zurück.
 */
int getRendomNum()
{
    int rendomNum = 1;
    
    while(rowValues.contains(rendomNum)){
        rendomNum = getRendomNum();
    }
    return rendomNum;
}


template <typename T>
T getSum(T value1, T value2){
    return value1 +value2;
}

int main()
{
    
//    for(int row = 0; row < 9; row++){
//        int current = getRendomNum();
//        rowValues.insert(current, current);
//
//    }
    

    int i = 23;
    int j = 321;
    std::cout <<"\n "<< getSum<int>(i, j);
    
    float a = 32.543;
    float b = 4.22;
    std::cout <<"\n "<< getSum<float>(a, b);
    
    
    
    std::string query;             //For multiline with auto formart
    query = "select * from tabell";
    query += "  where x > 0";
    query += "  order by desc";
}






