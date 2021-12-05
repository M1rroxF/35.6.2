cmake_minimum_required(VERSION 3.19)
project("MySkillBoxApp" VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)

set(Boost_INCLUDE_DIR "C:\\boost_1_77_0")
set(Boost_LIBRARY_DIR "C:\\boost_1_77_0\\stage\\lib")
find_package(Boost COMPONENTS REQUIRED)

include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_INCLUDE_DIR})

if(MINGW)
    target_link_libraries(MySkillBoxApp ws2_32)
endif()

add_executable(MySkillBoxApp main.cpp)
target_link_libraries(MySkillBoxApp ${Boost_LIBRARES})