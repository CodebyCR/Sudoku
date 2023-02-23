//
// Created by Christoph Rohde on 23.02.23.
//

#include <SFML/Graphics.hpp>

namespace Board {



sf::VertexArray getLine(sf::Vector2f start, sf::Vector2f end, sf::Color color) {
    sf::VertexArray line(sf::Lines, 2);
    line[0].position = start;
    line[0].color = color;
    line[1].position = end;
    line[1].color = color;

//    line[0].thickness = 10;
//    line[1].thickness = 10;
    return line;
}


 void draw_grid(sf::RenderWindow &window) {
    //Draw the matrix of cells

//    const sf::Vector2i resolution = {150, 150}; // TODO: look at the cpp version
    for (int column = 0; column < 9; column++) {

        if(column == 2 || column == 4) {
            int distance = column * 225;
            auto line = getLine(sf::Vector2f(distance, 70), sf::Vector2f(distance, 1380), sf::Color::Blue);
            window.draw(line);
        }

        for (int row = 0; row < 9; row++) {


            if(row == 2 ) {
                int distance = row * 250;
                auto line = getLine(sf::Vector2f(10, distance), sf::Vector2f(1310, distance), sf::Color::Blue);
                window.draw(line);
            }

            if( row == 4) {
                int distance = row * 238;
                auto line = getLine(sf::Vector2f(10, distance), sf::Vector2f(1310, distance), sf::Color::Blue);
                window.draw(line);
            }

            sf::RectangleShape rectangle(sf::Vector2f(100, 100));

            int size = 150;
            int const &size_ref = size;

            rectangle.setOutlineColor(sf::Color::Blue);
            rectangle.setOutlineThickness(5);
            rectangle.setPosition(column * size_ref + 100, row * size_ref + size_ref);
            rectangle.setOrigin(size_ref / 2, size_ref / 2);

            window.draw(rectangle);
        }
    }
}

static void draw_board() {
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
}

}