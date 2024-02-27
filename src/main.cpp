#include <iostream>
#include <cstdlib> 
#incluse <Time.cpp>

using namespace std;

int main()
{
    cout << "TimeTest" << endl;
    
    Time t(13, 30, 0);  // 13:30:00
    std::cout << t.GetHour() << "\n";  // 13
    return 0;
}
