//
//  moder_factory.hpp
//  Abstract_Factory
//
//  Created by Arman Qalantaryan on 22.10.23.
//

#ifndef moder_factory_hpp
#define moder_factory_hpp

#include <stdio.h>
#include "furnitue_factory.hpp"

class ModernFactory : public FurnitureFactory {
public:
    Sofa * createSofa() override;
    Chair * createChair() override;
};

#endif /* moder_factory_hpp */
