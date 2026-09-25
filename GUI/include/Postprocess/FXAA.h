#pragma once
#include <Common/interface/RefCntAutoPtr.hpp>

#include "GlobalData/Platform.h"
#include "Graphics/GraphicsEngine/interface/Buffer.h"
#include "Graphics/GraphicsEngine/interface/PipelineState.h"
#include "Graphics/GraphicsEngine/interface/Texture.h"
#include "Helpers/Blit.h"
#include "Helpers/Settings.h"
#include "Postprocess/PostprocessEffect.h"

namespace Prisma::GUI {
class FXAA : public PostprocessEffect {
   public:
    FXAA();

    void render() override;

    void apply(bool apply);

    bool apply() const;

   private:
    bool m_apply = false;

    Diligent::RefCntAutoPtr<Diligent::IPipelineState> m_pso;
    Diligent::RefCntAutoPtr<Diligent::IShaderResourceBinding> m_srb;

    Diligent::RefCntAutoPtr<Diligent::IBuffer> m_current;
    Diligent::RefCntAutoPtr<Diligent::ITexture> m_texture;

    std::unique_ptr<Blit> m_blit;

   private:
    struct FXAAData {
        glm::vec4 resolution;
    };

    Prisma::Settings m_settings;
};
}  // namespace Prisma::GUI