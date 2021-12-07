cmake_minimum_required(VERSION 3.19)
project("MySkillBoxApp" VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)

add_executable(MySkillBoxApp main.cpp)

##########################################################################

#QT

#set(CMAKE_PREFIX_PATH "D:\\bestProgs\\QT\\qt\\5.12.12\\mingw73_64\\lib\\cmake")
#find_package(Qt5Widgets REQUIRED)
#target_link_libraries(MySkillBoxApp Qt5::Widgets)
#find_package(Qt5 COMPONENTS
#        Core
#        Gui
#        Widgets
#        REQUIRED)
#target_link_libraries(MySkillBoxApp
#        Qt5::Core
#        Qt5::Gui
#        Qt5::Widgets)

##########################################################################

#BOOST

#set(Boost_INCLUDE_DIR "C:\\boost_1_77_0")
#set(Boost_LIBRARY_DIR "C:\\boost_1_77_0\\stage\\lib")
#find_package(Boost COMPONENTS REQUIRED)
#include_directories(${Boost_INCLUDE_DIR})
#link_directories(${Boost_LIBRARY_DIR})
#target_link_libraries(MySkillBoxApp ${Boost_LIBRARIES})
#if(MINGW)
#    target_link_libraries(MySkillBoxApp ws2_32)
#endif()