#include "../core/engine/logic.cpp"

int main()
{
    InitGlfw();
    InitWindow(800, 600, "MESA");
    InitOpengl();

    MainLoop();

    QuitOpengl();
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
