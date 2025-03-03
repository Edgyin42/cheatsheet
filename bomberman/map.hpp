
# pragma once

# include <SFML/Graphics.hpp>
# include "constant.hpp"
# include <vector>
# include <string>


class Map{
    private: 
    sf::Texture texture;
    int level;
    vector<vector<sf::Sprite *>> blocks;
    
    public: 
    Map(); 
    Map(int _level);
    void matchTheBlock(int level); 
    vector<vector<sf::Sprite*>> getBlock();
    ~Map(); 
};

