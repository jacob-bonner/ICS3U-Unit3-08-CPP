// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: October 2019
// This program can calculate if a year is a leap year or not

#include <iostream>

int main() {
    // This function can calculate if a year is a leap year or not

    // Variables
    int year;

    // Input
    std::cout << "Enter a year here:" << std::endl;
    std::cin >> year;
    std::cout << "" << std::endl;

    // Process
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                std::cout << "Your year is a leap year." << std::endl;
            } else {
                std::cout << "Your year is not a leap year." << std::endl; }
        } else {
            std::cout << "Your year is a leap year." << std::endl; }
    } else {
        std::cout << "Your year is not a leap year." << std::endl;}
    }
