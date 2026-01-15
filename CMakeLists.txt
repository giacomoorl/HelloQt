cmake_minimum_required(VERSION 3.5)
project(HelloQt VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Trova i moduli Qt necessari
find_package(Qt6 REQUIRED COMPONENTS Widgets Multimedia)

# Lista dei file del progetto
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    resources/resources.qrc
)

# Crea l'eseguibile
qt_add_executable(HelloQt
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
)

# Linka tutti i moduli Qt necessari
target_link_libraries(HelloQt PRIVATE Qt6::Widgets Qt6::Multimedia)

# Finalizza l'eseguibile
qt_finalize_executable(HelloQt)
