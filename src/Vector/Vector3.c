#include <math.h>

#include "../../include/Vector/vector3.h"

float magnitude_vec3(Vector3 vec3) {
    return sqrt(
        vec3.x * vec3.x + 
        vec3.y * vec3.y + 
        vec3.z * vec3.z
    );
}

Vector3 opposite_vec3(Vector3 vec3) {
    Vector3 result = {
        -vec3.x,
        -vec3.y,
        -vec3.z
    };
    
    return result;
}

Vector3 normalize_vec3(Vector3 vec3) {
    float scalar = 1 / magnitude_vec3(vec3);

    Vector3 result = {
        vec3.x * scalar,
        vec3.y * scalar,
        vec3.z * scalar
    };

    return result;
}

Vector3 add_vec3(Vector3 vec3_1, Vector3 vec3_2) {
    Vector3 result = {
        vec3_1.x + vec3_2.x,
        vec3_1.y + vec3_2.y,
        vec3_1.z + vec3_2.z
    };

    return result;
}

Vector3 sub_vec3(Vector3 vec3_1, Vector3 vec3_2) {
    Vector3 result;

    result = add_vec3(vec3_1, opposite_vec3(vec3_2));

    return result;
}

float dot_vec3(Vector3 vec3_1, Vector3 vec3_2) {
    float result = 
        vec3_1.x * vec3_2.x +
        vec3_1.y * vec3_2.y +
        vec3_1.z * vec3_2.z;
    
    return result;
}

Vector3 cross_vec3(Vector3 vec3_1, Vector3 vec3_2) {
    Vector3 result = {
        vec3_1.y * vec3_2.z - vec3_1.z * vec3_2.y, // x
        vec3_1.z * vec3_2.x - vec3_1.x * vec3_2.z, // y
        vec3_1.x * vec3_2.y - vec3_1.y * vec3_2.x  // z
    };

    return result;
}