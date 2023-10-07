#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Engine::CreateApplication();

	app->Run();
	delete app;
}

#else
	#error Engine only support Windwos!
#endif