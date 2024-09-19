cmake_minimum_required(VERSION 3.29)
project(C__)

set(CMAKE_CXX_STANDARD 14)

include_directories("August 19/August 19")
include_directories(ConsoleApplication1/ConsoleApplication1)
include_directories(Strings)
include_directories(Strings/c++tutorübungen)
include_directories(Strings/Strings)
include_directories("übung 1/übung 1")

add_executable(C__
    "August 19/August 19/August 19.cpp"
    "August 19/August 19/August 19.h"
    "c++ basics/c++ basics/c++ basics.cpp"
    "c++ tutor übungen/c++ tutor übungen/c++ tutor übungen.cpp"
    ConsoleApplication1/ConsoleApplication1/ConsoleApplication1.cpp
    ConsoleApplication1/ConsoleApplication1/funktionen.cpp
    ConsoleApplication1/ConsoleApplication1/funktionen.h
    flugbuchen/flugbuchen/flugbuchen.cpp
    flugbuchenarrays/flugbuchenarrays/flugbuchenarrays.cpp
    LeneursProjekt/LeneursProjekt/LeneursProjekt.cpp
    quadratstern/quadratstern/quadratstern.cpp
    rettungsschwimmer/rettungsschwimmer/rettungsschwimmer.cpp
    scriptaufgabe/scriptaufgabe/scriptaufgabe.cpp
    Strings/c++tutorübungen/skriptuebungen.cpp
    Strings/c++tutorübungen/skriptuebungen.h
    Strings/Strings/funktionen.cpp
    Strings/Strings/funktionen.h
    Strings/Strings/main.cpp
    Strings/funktionen.cpp
    Strings/funktionen.h
    Strings/main.cpp
    "Tannenbaum einfacher Code/Tannenbaum einfacher Code/Tannenbaum einfacher Code.cpp"
    "tannenbaum neuer versuch/tannenbaum neuer versuch/tannenbaum neuer versuch.cpp"
    "übung 1/übung 1/funktionen.cpp"
    "übung 1/übung 1/funktionen.h"
    "übung 1/übung 1/übung 1.cpp"
    "ÜbungenSkript 1/ÜbungenSkript 1/ÜbungenSkript 1.cpp")
