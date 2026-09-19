#include <SFML/Graphics.hpp>

class Bar {
    public: 
        void setPosition(sf::Vector2f pos); 
        void draw(sf::RenderWindow& window) const;          
        void setOutlineColor(sf::Color color);
        void setOutlineThickness(float thickness);
        int getID() const {return id;};
        


    private: 
        int id; 
        unsigned int height;                // I'm thinking height will be variable, based on randomly assigned value
        unsigned int width;                 // width should remain the same, static. So maybe I should put it in private...?


};