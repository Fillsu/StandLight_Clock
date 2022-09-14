cmake_minimum_required(VERSION 3.0.0)

project(StandLight)

add_executable(${PROJECT_NAME} 
./source/main.cpp
./source/hw/Button/Button.cpp
./source/hw/Led/Led.cpp
./source/app/listener/Listener.cpp
./source/app/Controler/Controler.cpp
./source/app/View/View.cpp
./source/app/Service/Service.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC

./source/hw/Button
./source/hw/Led
./source/app/listener
./source/app/Controler
./source/app/View
./source/app/Service
)

target_link_libraries(${PROJECT_NAME} PUBLIC

-lwiringPi

)

target_compile_options(${PROJECT_NAME} PUBLIC
-Wall
)