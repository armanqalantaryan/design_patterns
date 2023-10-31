//
//  moder_factory.cpp
//  Abstract_Factory
//
//  Created by Arman Qalantaryan on 22.10.23.
//

#include "moder_factory.hpp"
#include "modern_chair.hpp"
#include "moder_sofa.hpp"

Chair* ModernFactory::createChair() {
    return new ModerChair();
}

Sofa* ModernFactory::createSofa() {
    return new ModerSofa();
}
