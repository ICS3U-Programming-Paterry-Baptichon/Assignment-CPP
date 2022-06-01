
// Copyright (c) 2022 Paterry Baptichon All rights reserved

// Created by Paterry Baptichon
// Created on 2022-05-22
// this program calculates surface area and volume

#include <iostream>
#include <string>

int volumeRectangular(int length, int width, int height) {
    // this function calculates the volume of rectangular prism using return
    int volume;
    // process
    volume = length * width * height;
    // return
    return volume;
}


int SurfaceAreaCalculation(int length, int width, int height) {
    // This function calculates the surface area
    int surfaceArea;

    surfaceArea = 2 * (length * width + length * height + width * height);

    return surfaceArea;
}

int main() {
    // this function just calls other functions
    
    std::string lengthInputString;
    int lengthFromUser;
    std::string widthInputString;
    int widthFromUser;
    std::string heightInputString;
    int heightFromUser;
    int calculatedSurfaceArea;
    
    try {
    // input
        std::cout << "To calculate the volume of rectangular prism:" << std::endl;
        std::cout << "Enter the length (cm):  ";
        std::cin >> lengthInputString;
        std::cout << "Enter the width (cm):  ";
        std::cin >> widthInputString;
        std::cout << "Enter the height (cm):  ";
        std::cin >> heightInputString;
        
        lengthFromUser = std::stoi(lengthInputString);
        widthFromUser = std::stoi(widthInputString);
        heightFromUser = std::stoi(heightInputString);
        // output
        std::cout << "\nvolume = " <<
        volumeRectangular(lengthFromUser, widthFromUser, heightFromUser) << "cm³" << std::endl;
        std::cout << "\nDone." << std::endl;
        std::cout << "" << std::endl;
        std::cout << "The surface area of a rectangular prism with dimensions "
        << lengthFromUser << " cm x " << widthFromUser << " cm x "
        << heightFromUser << " cm is " << calculatedSurfaceArea << " cm²."
        << std::endl;
    std::cout << "" << std::endl;
    }catch (std::invalid_argument) {
       std::cout << "\nInvalid Input!" << std::endl;
       std::cout << "\nDone." << std::endl;
          // Call functions
    calculatedSurfaceArea = SurfaceAreaCalculation (lengthFromUser,
                                                   widthFromUser,
                                                   heightFromUser);
    volumeRectangular (lengthFromUser, widthFromUser, heightFromUser);
    }
}


    