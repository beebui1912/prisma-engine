#pragma once

#include <Common/interface/RefCntAutoPtr.hpp>
#include <glm/glm.hpp>
#include <memory>

#include "GlobalData/Platform.h"
#include "Graphics/GraphicsEngine/interface/Buffer.h"
#include "Graphics/GraphicsEngine/interface/PipelineState.h"
#include "Graphics/GraphicsEngine/interface/Texture.h"
#include "Helpers/Blit.h"
#include "Helpers/Settings.h"

namespace Prisma {
class PipelineSSR {
   public:
    PipelineSSR(Diligent::RefCntAutoPtr<Diligent::ITexture> albedo, Diligent::RefCntAutoPtr<Diligent::ITexture> normal, Diligent::RefCntAutoPtr<Diligent::ITexture> position);

    void update();

    // std::shared_ptr<FBO> texture();

   private:
    Diligent::RefCntAutoPtr<Diligent::IPipelineState> m_psoReflection;
    Diligent::RefCntAutoPtr<Diligent::IShaderResourceBinding> m_srbReflection;

    Diligent::RefCntAutoPtr<Diligent::ITexture> m_finalReflection;

    std::unique_ptr<Prisma::Blit> m_blit;
};
}  // namespace Prisma