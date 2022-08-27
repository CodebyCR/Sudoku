#include <iostream>
#include <map>
#include <SFML/Graphics.hpp>
#include "Matrix.hpp"





void draw_grid(sf::RenderWindow &window) {
    //Draw the matrix of cells

//    const sf::Vector2i resolution = {150, 150}; // TODO: look at the cpp version
    for (int i = 0; i < 9; i++) {

        for (int j = 0; j < 9; j++) {
            sf::RectangleShape rectangle(sf::Vector2f(100, 100));

            int size = 150;
            int &size_ref = size;

            rectangle.setOutlineColor(sf::Color::Blue);
            rectangle.setOutlineThickness(5);
            rectangle.setPosition(i * size_ref + 100, j * size_ref +  size_ref);
            rectangle.setOrigin(size_ref / 2, size_ref / 2);

            window.draw(rectangle);
        }
    }
}


int main()
{
//    int rows = 9, columns = 9;
//    int min = 1, max = 9;

//    Matrix sudoku(rows, columns);
//    sudoku.print_as_console_log();





    sf::RenderWindow window(sf::VideoMode(1500, 1800), "Sudoku",
                            sf::Style::Titlebar | sf::Style::Close);

    window.setFramerateLimit(30);

    // Loop
    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear( sf::Color::White);

        draw_grid(window);


        window.display();
    }

    return EXIT_SUCCESS;
}






