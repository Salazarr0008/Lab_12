#include "game.h"
#include "input.h"

#include <iostream>
#include <string>

Game::Game(std::string title)
    : m_title(title), m_last_score(0) {
}

const std::string &Game::title() const {
    return m_title;
}

int Game::last_score() const {
    return m_last_score;
}

void Game::play() {
    std::cout << "Game::play called\n";
}

void Game::set_score(int score) {
    m_last_score = score;
}

bool Game::ask_play_again() const {
    std::string answer;
    if (!prompt_line("Play again? (y/n): ", answer)) {
        return false;
    }
    return answer == "y" || answer == "Y";
}
