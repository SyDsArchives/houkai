#pragma once
#include <memory>
class Scene;
class GameSystem
{
private:
	std::shared_ptr<Scene> scene;
public:
	GameSystem();
	~GameSystem();

	void ChangeScene(Scene* _scene);

	void Run();
};

