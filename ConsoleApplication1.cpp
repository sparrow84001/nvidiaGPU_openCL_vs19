// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <CL/cl.hpp>

int main()
{
    std::vector<cl::Platform> platforms;
    cl::Platform::get(&platforms);
    for (auto& platforms : platforms) {
        std::vector<cl::Device> devices;
        platforms.getDevices(CL_DEVICE_TYPE_ALL, &devices);
        for (auto& devices : devices) {
            auto devices_info = devices.getInfo<CL_DEVICE_VENDOR>();
            std::cout << "device vendor - " << devices_info << std::endl;
        }


    }
    return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
