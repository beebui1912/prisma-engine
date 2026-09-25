#pragma once
#include <glm/glm.hpp>

#include "Common/interface/RefCntAutoPtr.hpp"
#include "GlobalData/InstanceData.h"
#include "GlobalData/Platform.h"
#include "Graphics/GraphicsEngine/interface/Buffer.h"
#include "Graphics/GraphicsEngine/interface/PipelineState.h"
#include "Graphics/GraphicsEngine/interface/TextureView.h"

namespace Prisma {
class ScenePipeline : public InstanceData<ScenePipeline> {
   public:
    ScenePipeline();
    void render(glm::mat4 model, Diligent::ITextureView* color, Diligent::ITextureView* depth);

   private:
    Diligent::RefCntAutoPtr<Diligent::IBuffer> m_mvpVS;
    Diligent::RefCntAutoPtr<Diligent::IPipelineState> m_pso;
    Diligent::RefCntAutoPtr<Diligent::IShaderResourceBinding> m_srb;
};
}  // namespace Prisma