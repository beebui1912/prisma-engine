#pragma once
#include <memory>
#include <vector>

#include "../GlobalData/Defines.h"
#include "../GlobalData/InstanceData.h"
#include "Common/interface/RefCntAutoPtr.hpp"
#include "glm/glm.hpp"

namespace Diligent {
struct IBuffer;
}

namespace Prisma {
class AnimationHandler : public InstanceData<AnimationHandler> {
   public:
    struct SSBOAnimation {
        glm::mat4 animations[Define::MAX_BONES];
    };

    void fill();

    Diligent::RefCntAutoPtr<Diligent::IBuffer> animation();

    AnimationHandler();

   private:
    Diligent::RefCntAutoPtr<Diligent::IBuffer> m_animation;
};
}  // namespace Prisma