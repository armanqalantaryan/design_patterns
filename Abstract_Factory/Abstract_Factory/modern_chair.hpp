//
//  modern_chair.hpp
//  Abstract_Factory
//
//  Created by Arman Qalantaryan on 22.10.23.
//

#ifndef modern_chair_hpp
#define modern_chair_hpp

#include <stdio.h>
#include "chair.hpp"

class ModerChair : public Chair {
    void sitOn() override;
};

#endif /* modern_chair_hpp */
