#ifndef METHODS_HPP
#define METHODS_HPP


#include <vector>
#include <string>
#include <iostream>
#include <format>



enum Grades {

    C3, C2, C1, B3, B2, B1, A, length

};


struct calculator {


    std::vector<std::string> courses;
    std::vector<float> midtermGrades;
    std::vector<std::string> sGrade;

    const void getCoursesInfo();
    const float findFinal(Grades grade, float midtermGrade);
    const void printResult();


};


#endif