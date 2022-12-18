#include "application.hpp"


/// <summary>
/// Initializes the program, forms the grade list, gets course info and does the neccessary calculations
/// </summary>
/// <returns></returns>

const void Application::Init()
{
    
    std::cout << "Hosgeldiniz efenim" << "\n";
    calculator calcObj;
    calcObj.sGrade.push_back("C3");
    calcObj.sGrade.push_back("C2");
    calcObj.sGrade.push_back("C1");
    calcObj.sGrade.push_back("B3");
    calcObj.sGrade.push_back("B2");
    calcObj.sGrade.push_back("B1");
    calcObj.sGrade.push_back("A");
    calcObj.getCoursesInfo();
    calcObj.printResult();


}

/// <summary>
/// Simply, quitting function.
/// </summary>
/// <returns></returns>

const int Application::Quit()
{
    system("pause");
    return 0;
}
