#pragma once
#include "Common/interface/RefCntAutoPtr.hpp"
#include "glm/glm.hpp"

namespace Diligent {
struct ITexture;
}

namespace Prisma {
class GenericShadow {
   public:
    virtual Diligent::RefCntAutoPtr<Diligent::ITexture> shadowTexture() = 0;

    virtual float farPlane() = 0;
    virtual void farPlane(float farPlane) = 0;

    virtual float nearPlane() = 0;
    virtual void nearPlane(float nearPlane) = 0;

    virtual void init() = 0;

    virtual void update(glm::vec3 lightPos) = 0;

    virtual ~GenericShadow() {}  // Virtual destructor
};
}  // namespace Prisma