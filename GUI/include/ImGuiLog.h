#pragma once
#include <glm/glm.hpp>
#include <string>

namespace Prisma::GUI {
class ImGuiLog {
   public:
    void render();

   private:
    void print(const glm::vec4& color, const std::string& text);
};
}  // namespace Prisma::GUI