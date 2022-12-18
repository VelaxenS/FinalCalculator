#include "application.hpp"



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

const int Application::Quit()
{
    system("pause");
    return 0;
}
