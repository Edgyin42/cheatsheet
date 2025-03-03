# include "game.hpp"
Game::Game() :  window(sf::VideoMode({800, 480}), "Bomberman clone") {
    this->map = new Map(this->level);
    // Initialize game objects
}

Game::Game(int _level) :  window(sf::VideoMode({800, 480}), "Bomberman clone") {
    this->level = _level;
    this->map = new Map(this->level);
    // Initialize game objects
}

void Game::run() {
    sf::Clock clock;
    while (window.isOpen()) {
        sf::Time deltaTime = clock.restart();
        processEvents();
        update(deltaTime);
        render();
    }
}

void Game::processEvents() {

    while (const std::optional event = window.pollEvent()) {
        if (event->is<sf::Event::Closed>())
                window.close();
    }
}

void Game::update(sf::Time deltaTime) {
    // Update game objects (Player, Bombs, Enemies, etc.)
}

void Game::render() {
    window.clear();
    // Draw game objects (Map, Player, Bombs, etc.)
    for (auto rows: map->getBlock()) {
        for (sf::Sprite *sp: rows){
            window.draw(*sp);
        }
    }
    window.display();
}