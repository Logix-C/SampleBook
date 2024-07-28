cmake_minimum_required(VERSION 3.28)
project(SampleBook)

set(CMAKE_CXX_STANDARD 17)

add_executable(SampleBook main.cpp
        Order/Order.cpp
        OrderBook/OrderBook.cpp
        OrderBook/dataStructure/bTree.cpp
        OrderBook/dataStructure/test.cpp)
