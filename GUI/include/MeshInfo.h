#pragma once

#include <functional>

#include "GlobalData/GlobalData.h"
#include "Helpers/PrismaMath.h"
#include "NodeViewer.h"
#include "SceneObjects/Mesh.h"
#include "glm/gtx/matrix_decompose.hpp"

namespace Prisma::GUI {
class MeshInfo {
   public:
    void showSelected(const NodeViewer::NodeData& meshData);

    MeshInfo();
};
}  // namespace Prisma::GUI