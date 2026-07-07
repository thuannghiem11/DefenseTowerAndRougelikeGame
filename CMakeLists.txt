cmake_minimum_required(VERSION 3.10)
project(EternalSiege CXX)
# Ép dự án sử dụng chuẩn C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


file(GLOB SOURCES "src/*.cpp")

# Tạo file thực thi (.exe) từ các file nguồn
add_executable(my_game ${SOURCES} "src/main.cpp" "src/player.cpp")

# 1. Chỉ thẳng đường dẫn chứa file Header (.hpp) của SFML và của dự án
target_include_directories(my_game PRIVATE "C:/SFML3/include" include)

# 2. Chỉ thẳng đường dẫn chứa file thư viện liên kết (.lib)
target_link_directories(my_game PRIVATE "C:/SFML3/lib")


