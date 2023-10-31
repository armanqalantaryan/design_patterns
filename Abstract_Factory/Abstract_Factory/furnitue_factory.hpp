//
//  furnitue_factory.hpp
//  Abstract_Factory
//
//  Created by Arman Qalantaryan on 22.10.23.
//

#ifndef furnitue_factory_hpp
#define furnitue_factory_hpp

#include <stdio.h>

#include "chair.hpp"
#include "sofa.h"

class FurnitureFactory {
public:
    virtual Chair* createChair() = 0;
    virtual Sofa* createSofa() = 0;
};

#endif /* furnitue_factory_hpp */
