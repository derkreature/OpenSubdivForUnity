#ifndef BezierPatchIntersection_h
#define BezierPatchIntersection_h

#include "BezierPatch.h"


struct Ray
{
    float3 org;
    float3 dir;
};

struct BezierPatchHit
{
    float2 uv;
    float t;
    uint32_t clip_level;
};

bool BezierPatchRaycast(const BezierPatch &bp, const Ray &ray, float max_distance, BezierPatchHit &hit);



#endif // BezierPatchIntersection_h
