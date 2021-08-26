#include <iostream>

enum DaysInAWeek {
    Sunday = 0, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
}Day;

int main() {
    Day = DaysInAWeek::Wednesday;

    switch (Day)
    {
    case DaysInAWeek::Sunday:
        std::cout << "Day dreaming" << std::endl;
        break;

    case DaysInAWeek::Monday:
        std::cout << "Night party" << std::endl;
        break;

    case DaysInAWeek::Tuesday:
        std::cout << "Burn trash" << std::endl;
        break;

    case DaysInAWeek::Wednesday:
        std::cout << "Water plants" << std::endl;
        break;

    case DaysInAWeek::Friday:
        std::cout << "Woodworking" << std::endl;
        break;

    case DaysInAWeek::Saturday:
        std::cout << "Buy groceries" << std::endl;
        break;
    
    default:
        break;
    }
}