cmake_minimum_required(VERSION 3.20)

project(TradingBot)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCES
    "cpp/src/*.cpp"
)

add_executable(TradingBot ${SOURCES})

target_include_directories(TradingBot PRIVATE
    cpp/include
    cpp/include/core
    cpp/include/Logging
    cpp/include/AI
    cpp/include/Tabs
)
