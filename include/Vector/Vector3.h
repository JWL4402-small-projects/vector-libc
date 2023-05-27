#ifndef VECTOR3_H
#define VECTOR3_H

typedef struct Vector3_struct {
    float x;
    float y;
    float z;
} Vector3;

float magnitude_vec3(Vector3);
Vector3 opposite_vec3(Vector3);
Vector3 normalize_vec3(Vector3);

Vector3 add_vec3(Vector3, Vector3);
Vector3 sub_vec3(Vector3, Vector3);

Vector3 scale_vec3(Vector3, Vector3);
float dot_vec3(Vector3, Vector3);
Vector3 cross_vec3(Vector3, Vector3);


#endif // VECTOR3_H
