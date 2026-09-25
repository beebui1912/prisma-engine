#pragma once
#include <memory>
#include <string>
#include <vector>

#include "Containers/Texture.h"
#include "GlobalData/InstanceData.h"
#include "glm/glm.hpp"

namespace Prisma::GUI {
class TextureInfo : public InstanceData<TextureInfo> {
   public:
    TextureInfo();

    void showTextures();

    bool textureTab();

   private:
    int m_index;

    bool m_textureTab = false;

    float m_scale = 1;
};
}  // namespace Prisma::GUI