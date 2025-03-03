# pragma once
# include <map>
# include <iostream>

using namespace std;

const int MAP_WIDTH = 25; 
const int MAP_HEIGHT = 15; 
const int BLOCK_WIDTH = 32;

enum blockType{
    portal,
    brick,  
    wall,
    grass, 
}; 

std::map<blockType, std::vector<int>> blockTypeData = {
    {blockType::portal, {4, 0}},
    {blockType::wall,   {5, 0}},
    {blockType::grass,  {6, 0}},
    {blockType::brick,  {7, 0}}
};

void setSpriteTextureRect(sf::Sprite *sprite, blockType type, int i, int j){ 
    
    try {
        sf::Texture texture;
        // Check if the file is loaded successfully
        if (!texture.loadFromFile("./res/textures/classic.png")){
            throw std::runtime_error ("Failed to load file classic.png");
        }
        if (blockTypeData.count(type) == 0) { // Check if the blockType exists in the map
            throw std::runtime_error ("Invalid blockType provided");
        }
        sprite->setTextureRect(sf::IntRect({blockTypeData[type][0], blockTypeData[type][1]}, {BLOCK_WIDTH, BLOCK_WIDTH}));
        sprite->setPosition(sf::Vector2f(32.f*i, 32.f*j));
        sprite->setTexture(texture);
    } catch (const std::exception& e){
        std::cerr << "An exception occurred: " << e.what() << std::endl;
    }
    
}