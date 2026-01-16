#pragma once

#ifdef HZ_PLATFORM_WINDOWS

// 编译链接时会访问到Sandbox中的实际定义的CreateApplication()
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized log!");
	int a = 1;
	HZ_INFO("Hello! var={0}", a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif