//
//  math.h
//  RayTraceCPU
//
//  Created by Joshua Chasnov on 22/3/2022.
//

#ifndef math_hpp
#define math_hpp

#define _USE_MATH_DEFINES
#include <math.h>
#include <tuple>

#include "vec2.hpp"
#include "vec3.hpp"

namespace math {

    double rad2deg(const double rad);
    double deg2rad(const double deg);
    vec3<double> rejectionSampleSphere();
    vec3<double> rejectionSampleHemisphere(vec3<double> normal);
    std::tuple<unsigned int, double, double> solveQuadratic(const double a, const double b, const double c);
    double sampleBeckmannSpizzichinoCDF();

    template<typename T>
    T randRange(const T min, const T max) {
        return (T)(min + (rand() / (double)RAND_MAX) * (max - min));
    }

    template<typename T>
    T clamp(const T val, const T min, const T max) {
        return val < min ? min : (val > max ? max : val);
    }

    template<typename T>
    int roundAwayFromZero(const T val) {
        if (val > 0) {
            return ceil(val);
        } else {
            return floor(val);
        }
    }
}

#endif /* math_hpp */
