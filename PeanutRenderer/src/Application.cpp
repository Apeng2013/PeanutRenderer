#define GLFW_INCLUDE_NONE
#include "GLFW/glfw3.h"
#include "glad/glad.h"
#include <iostream>


int main()
{

	int state = glfwInit();
	std::cout << state << std::endl;

	return 0;
}