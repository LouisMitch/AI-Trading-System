cmake_minimum_required(VERSION 3.20)

project(AITradingSystem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_executable(AITradingSystem
    cpp/src/main.cpp
    cpp/src/core/Application.cpp
    cpp/src/core/TabManager.cpp
    cpp/src/logging/Logger.cpp
)

target_include_directories(AITradingSystem PRIVATE 
    cpp/include
)
