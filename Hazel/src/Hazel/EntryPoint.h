#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Hazel::CreateApplication();	// ��������
	app->Run();								// ���г���
	delete app;								// �ݻٳ���


	return 0;
}

#endif