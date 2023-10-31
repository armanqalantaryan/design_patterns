//
//  victorian_factory.cpp
//  Abstract_Factory
//
//  Created by Arman Qalantaryan on 22.10.23.
//

#include "victorian_factory.hpp"
#include "victorian_chair.hpp"
#include "victorian_sofa.hpp"

Chair* VictorianFactory::createChair() {
    return new VictorianChair();
}

Sofa* VictorianFactory:: createSofa() {
    return new VictorianSofa();
}
