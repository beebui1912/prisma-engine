#pragma once
#include <functional>

#include "GlobalData/InstanceData.h"

namespace Prisma::GUI {
class ImGuiHelper : public InstanceData<ImGuiHelper> {
   public:
    void clipVertical(int size, std::function<void(int)> data);
};
}  // namespace Prisma::GUI