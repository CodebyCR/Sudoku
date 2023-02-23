set(SOURCE_FILES Main.cpp)
add_executable(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/${SOURCE_FILES}
        Matrix.hpp
        Cell.hpp Random.hpp Sudoku_Level.hpp Board.hpp)

include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} sfml-system sfml-window sfml-graphics sfml-audio sfml-network)