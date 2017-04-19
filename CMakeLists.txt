cmake_minimum_required(VERSION 3.5)
project(Test)

#set(CMAKE_PLATFORM_REQUIRED_RUNTIME_PATH "")
#set(CMAKE_CXX_USE_IMPLICIT_LINK_DIRECTORIES_IN_RUNTIME_PATH 0)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

add_executable(Test stream_test.cpp)
target_link_libraries(Test Threads::Threads)
