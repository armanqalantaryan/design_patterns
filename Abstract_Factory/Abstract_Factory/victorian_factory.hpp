//
//  victorian_factory.hpp
//  Abstract_Factory
//
//  Created by Arman Qalantaryan on 22.10.23.
//

#ifndef victorian_factory_hpp
#define victorian_factory_hpp

#include <stdio.h>
#include "furnitue_factory.hpp"

class VictorianFactory : public FurnitureFactory {
public:
    Sofa * createSofa() override;
    Chair * createChair() override;
};


#endif /* victorian_factory_hpp */
