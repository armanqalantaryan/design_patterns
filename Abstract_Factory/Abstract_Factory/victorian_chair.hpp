//
//  victorian_chair.hpp
//  Abstract_Factory
//
//  Created by Arman Qalantaryan on 22.10.23.
//

#ifndef victorian_chair_hpp
#define victorian_chair_hpp

#include <stdio.h>
#include "chair.hpp"

class VictorianChair : public Chair {
public:
    void sitOn() override;
    
};

#endif /* victorian_chair_hpp */
