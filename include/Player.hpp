#pragma once
#include <SFML/Graphics.hpp>

class Player {
private:
    sf::RectangleShape body; // Dùng tạm một hình chữ nhật làm thân nhân vật
    float speed;

public:
    Player(); // Hàm khởi tạo nhân vật
    void update(); // Hàm cập nhật logic (sau này xử lý di chuyển)
    void draw(sf::RenderWindow& window); // Hàm vẽ nhân vật lên màn hình
};