#pragma once

#ifdef HZ_PLATFORM_WINDOWS

// 编译链接时会访问到Sandbox中的实际定义的CreateApplication()
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Hazel::CreateApplication();

	app->Run();
	delete app;
}

#endif