cmake_minimum_required(VERSION "3.15")
project(AntChaos LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file (GLOB SRC CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/src/*.cpp"
)

find_package(raylib REQUIRED)

add_executable(AntChaos ${SRC})

target_compile_definitions(AntChaos PRIVATE PLATFORM_DESKTOP)

target_link_libraries(AntChaos PRIVATE raylib)