#include<iostream>
int main(){
    //oldenum
    enum Color1{
        color_red,
        color_blue
    };
    enum Fruit1{
        fruit_banana,
        fruit_apple
    };
    Color1 color1{color_red};
    Fruit1 fruit1{fruit_banana};

    if (color1 == fruit1) // The compiler will compare them as integers
        std::cout << "color and fruit are equal\n"; // and find they are equal!
    else
        std::cout << "color and fruit are not equal\n";

    //new enum
    enum class Color // "enum class" defines this as a scoped enumeration instead of a standard enumeration
    {
        red, // red is inside the scope of Color
        blue
    };
 
    enum class Fruit
    {
        banana, // banana is inside the scope of Fruit
        apple
    };
 
    Color color{ Color::red }; // note: red is not directly accessible any more, we have to use Color::red
    Fruit fruit{ Fruit::banana }; //

    if (color == Color::red) // this is okay
        std::cout << "The color is red!\n";
    else if (color == Color::blue)
        std::cout << "The color is blue!\n";
    return 0;
}

