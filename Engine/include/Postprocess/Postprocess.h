#pragma once
#include <vector>

#include "../GlobalData/InstanceData.h"
#include "PostprocessEffect.h"

namespace Prisma {
class Postprocess : public InstanceData<Postprocess> {
   public:
    Postprocess();

    void render();
    void addPostProcess(std::shared_ptr<PostprocessEffect> postprocessEffect);
    void removePostProcess(std::shared_ptr<PostprocessEffect> postprocessEffect);

   private:
    std::vector<std::shared_ptr<PostprocessEffect>> m_effects;
};
}  // namespace Prisma