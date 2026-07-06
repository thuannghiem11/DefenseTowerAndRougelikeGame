cmake_minimum_required(VERSION 3.10)
project(EternalSiege CXX)
# Ép dự án sử dụng chuẩn C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Quét tất cả các file .cpp nằm trong thư mục src/
file(GLOB SOURCES "src/*.cpp")

# Tạo file thực thi (.exe) từ các file nguồn
add_executable(my_game ${SOURCES} "src/main.cpp" "src/player.cpp")

# 1. Chỉ thẳng đường dẫn chứa file Header (.hpp) của SFML và của dự án
target_include_directories(my_game PRIVATE "C:/SFML3/include" include)

# 2. Chỉ thẳng đường dẫn chứa file thư viện liên kết (.lib)
target_link_directories(my_game PRIVATE "C:/SFML3/lib")

# 3. Ép hệ thống nạp trực tiếp các file thư viện nền của SFML 3 (Không qua find_package)
target_link_libraries(my_game 
    "C:/SFML3/lib/sfml-graphics.lib"
    "C:/SFML3/lib/sfml-window.lib"
    "C:/SFML3/lib/sfml-system.lib"
)