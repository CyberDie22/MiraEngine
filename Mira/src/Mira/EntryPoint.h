#pragma once

#ifdef MI_PLATFORM_WINDOWS

extern Mira::Application* Mira::CreateApplication();

int main(int argc, char** argv) {
	auto app = Mira::CreateApplication();
	app->Run();
	delete sandbox;
}

#endif