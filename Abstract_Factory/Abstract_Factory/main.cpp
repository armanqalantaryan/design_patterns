//
//  main.cpp
//  Abstract_Factory
//
//  Created by Arman Qalantaryan on 22.10.23.
//

#include <iostream>
#include "moder_factory.hpp"
#include "victorian_factory.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    ModernFactory modern;
    VictorianFactory victorian;
    
    auto chair = modern.createChair();
    auto sofa  = victorian.createSofa();
    chair -> sitOn();
    sofa -> layOn();
    
    auto v_chair = victorian.createChair();
    auto m_sofa = modern.createSofa();
    v_chair -> sitOn();
    m_sofa -> layOn();
    std::cout << "Hello, World!\n";
    return 0;
}
