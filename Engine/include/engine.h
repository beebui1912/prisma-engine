#pragma once
#include <functional>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <memory>
#include <string>

#include "../../GUI/include/ImGuiDebug.h"
#include "GlobalData/EngineSettings.h"
#include "GlobalData/PrismaFunc.h"
#include "Helpers/Settings.h"
#include "Helpers/WindowsHelper.h"
#include "SceneData/SceneLoader.h"
#include "SceneObjects/Camera.h"
#include "SceneObjects/Node.h"

struct PrivateData;

namespace Prisma {
class Engine : public InstanceData<Engine> {
   public:
    bool run();

    Engine();

    void setCallback(std::shared_ptr<CallbackHandler> callbackHandler);
    float fps() const;
    void mainCamera(const std::shared_ptr<Camera>& camera);
    void engineSettings(const EngineSettings::Settings& pipeline);
    EngineSettings::Settings engineSettings() const;
    void getScene(const std::string& scene, SceneLoader::SceneParameters sceneParameters);
    void setUserEngine(std::shared_ptr<UserData> userData);
    std::shared_ptr<UserData> getUserEngine();
    void setGuiData(std::shared_ptr<SceneHandler> guiData);
    void debug(bool debug);

    void windowsData(WindowsHelper::WindowsData windowsData);

   private:
    void initScene();
    std::shared_ptr<PrivateData> data;
};
}  // namespace Prisma