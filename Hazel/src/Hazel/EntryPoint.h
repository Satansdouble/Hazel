#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Hazel::CreateApplication();	// 创建程序
	app->Run();								// 运行程序
	delete app;								// 摧毁程序


	return 0;
}

#endif