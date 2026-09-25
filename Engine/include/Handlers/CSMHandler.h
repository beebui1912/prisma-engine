#pragma once
#include <Common/interface/RefCntAutoPtr.hpp>
#include <glm/glm.hpp>
#include <vector>

#include "GlobalData/InstanceData.h"
#include "GlobalData/Platform.h"
#include "Graphics/GraphicsEngine/interface/DeviceContext.h"
#include "Graphics/GraphicsEngine/interface/RenderDevice.h"

namespace Prisma {
class CSMHandler : public InstanceData<CSMHandler> {
    Diligent::RefCntAutoPtr<Diligent::IBuffer> m_shadowBuffer;

    Diligent::RefCntAutoPtr<Diligent::IPipelineState> m_pso;

    Diligent::RefCntAutoPtr<Diligent::IShaderResourceBinding> m_srb;

    Diligent::RefCntAutoPtr<Diligent::IPipelineState> m_psoAnimation;

    Diligent::RefCntAutoPtr<Diligent::IShaderResourceBinding> m_srbAnimation;

    void create();

    void createAnimation();

   public:
    CSMHandler();

    struct CSMShadow {
        glm::mat4 shadows[16];
        glm::vec4 cascadePlanes[16];
        float sizeCSM;
        float farPlaneCSM;
        glm::vec2 resolutionCSM;
    };

    struct CSMData {
        Diligent::RefCntAutoPtr<Diligent::ITexture> depth;
        CSMShadow shadows;
    };

    Diligent::RefCntAutoPtr<Diligent::IBuffer> shadowBuffer();

    void render(const CSMData& data);
};
}  // namespace Prisma