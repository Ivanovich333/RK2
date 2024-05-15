cmake_minimum_required(VERSION 3.10)

# Название проекта
project(BridgePattern)

# Установка стандарта C++
set(CMAKE_CXX_STANDARD 11)

# Добавление исходных файлов
add_executable(bridge main.cpp implementation.cpp)

# Включение FetchContent
include(FetchContent)

# Настройка FetchContent для GoogleTest
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
)
# Для более новых версий CMake
# FetchContent_MakeAvailable(googletest)

FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

# Добавление тестов
enable_testing()

add_executable(runTests test.cpp implementation.cpp)
target_link_libraries(runTests gtest gtest_main)

add_test(NAME runTests COMMAND runTests)

