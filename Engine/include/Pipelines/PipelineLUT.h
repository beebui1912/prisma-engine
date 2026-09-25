#pragma once

#include <memory>

#include "../GlobalData/InstanceData.h"
#include "../Handlers/MeshHandler.h"
#include "../SceneData/MeshIndirect.h"
#include "../SceneData/SceneLoader.h"
#include "../SceneObjects/Camera.h"
#include "PipelineFullScreen.h"

namespace Prisma {
class PipelineLUT : public InstanceData<PipelineLUT> {
   public:
    void texture();

    Diligent::RefCntAutoPtr<Diligent::ITexture> lutTexture();

    PipelineLUT();

   private:
    Diligent::RefCntAutoPtr<Diligent::IPipelineState> m_pso;
    Diligent::RefCntAutoPtr<Diligent::IShaderResourceBinding> m_srb;

    Diligent::RefCntAutoPtr<Diligent::ITextureView> m_pMSColorRTV;

    Diligent::RefCntAutoPtr<Diligent::ITexture> m_pRTColor;

    const glm::vec2 m_dimensions = glm::vec2(512, 512);
    bool m_init = false;
};
}  // namespace Prisma