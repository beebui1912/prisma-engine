#pragma once

#include <memory>

#include "../SceneObjects/Camera.h"

namespace Prisma {
class PipelinePrePass {
   public:
    PipelinePrePass();
    void render();

    // std::shared_ptr<Shader> m_shader;
    // std::shared_ptr<Shader> m_shaderAnimate;
};
}  // namespace Prisma