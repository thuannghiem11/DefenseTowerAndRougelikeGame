#include "DummyState.h"

void DummyState::onEnter() {
    // Khởi tạo khi mở State
    box.setSize({ 100.f, 100.f });
    box.setFillColor(sf::Color::Red);
    box.setPosition({ 300.f, 300.f });
}

void DummyState::onExit() {
    // Dọn dẹp (để trống)
}

void DummyState::handleEvent(const sf::Event& event) {
    // Xử lý sự kiện (để trống)
}

void DummyState::update(float deltaTime) {
    // Cập nhật logic (để trống)
}

void DummyState::render(sf::RenderWindow& window) {
    // Vẽ lên màn hình
    window.draw(box);
}