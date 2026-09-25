#pragma once
#include <iostream>
#include <memory>

#include "../SceneObjects/Node.h"

namespace Prisma {
class ScenePrinter {
   public:
    void printScene(std::shared_ptr<Node> nodeRoot, int depth);
};
}  // namespace Prisma