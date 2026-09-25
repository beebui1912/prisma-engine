#pragma once

#include <iostream>
#include <vector>

#include "../GlobalData/InstanceData.h"

namespace Prisma {
class AreaHandler : public InstanceData<AreaHandler> {
   public:
    AreaHandler();

    uint64_t idLut();
    uint64_t idM();

   private:
    std::vector<float> readFile(std::string path);
    uint64_t m_idLut;
    uint64_t m_idM;
};
}  // namespace Prisma