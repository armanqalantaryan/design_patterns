//
//  victorian_sofa.hpp
//  Abstract_Factory
//
//  Created by Arman Qalantaryan on 22.10.23.
//

#ifndef victorian_sofa_hpp
#define victorian_sofa_hpp

#include <stdio.h>
#include "sofa.h"

class VictorianSofa : public Sofa {
public:
    void layOn() override;
};

#endif /* victorian_sofa_hpp */
