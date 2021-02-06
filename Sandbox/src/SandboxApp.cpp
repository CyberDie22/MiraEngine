#include <Mira.h>

class Sandbox : public Mira::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Mira::Application* Mira::CreateApplication() {
	return new Sandbox(); 
}