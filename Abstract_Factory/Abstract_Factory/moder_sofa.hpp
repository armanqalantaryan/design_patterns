//
//  moder_sofa.hpp
//  Abstract_Factory
//
//  Created by Arman Qalantaryan on 22.10.23.
//

#ifndef moder_sofa_hpp
#define moder_sofa_hpp

#include <stdio.h>
#include "sofa.h"

class ModerSofa : public Sofa {
public:
    void layOn() override;
    
};

#endif /* moder_sofa_hpp */
