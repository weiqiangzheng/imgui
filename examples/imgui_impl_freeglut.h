// ImGui Platform Binding for: FreeGLUT
// This needs to be used along with a Renderer (e.g. OpenGL2)

// Issues:
//  [ ] Platform: GLUT is unable to distinguish e.g. Backspace from CTRL+H or TAB from CTRL+I

// You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui

IMGUI_API bool      ImGui_ImplFreeGLUT_Init();
IMGUI_API void      ImGui_ImplFreeGLUT_InstallFuncs();
IMGUI_API void      ImGui_ImplFreeGLUT_Shutdown();
IMGUI_API void      ImGui_ImplFreeGLUT_NewFrame();

// You can call ImGui_ImplFreeGLUT_InstallFuncs() to get all those functions installed automatically,
// or call them yourself from your own GLUT handlers. We are using the same weird names as GLUT for consistency..
//------------------------------------ GLUT name --------------------------------------------- Decent Name --------------
IMGUI_API void      ImGui_ImplFreeGLUT_ReshapeFunc(int w, int h);                           // ~ ResizeFunc
IMGUI_API void      ImGui_ImplFreeGLUT_MotionFunc(int x, int y);                            // ~ MouseMoveFunc
IMGUI_API void      ImGui_ImplFreeGLUT_MouseFunc(int button, int state, int x, int y);      // ~ MouseButtonFunc
IMGUI_API void      ImGui_ImplFreeGLUT_MouseWheelFunc(int button, int dir, int x, int y);   // ~ MouseWheelFunc
IMGUI_API void      ImGui_ImplFreeGLUT_KeyboardFunc(unsigned char c, int x, int y);         // ~ CharPressedFunc
IMGUI_API void      ImGui_ImplFreeGLUT_KeyboardUpFunc(unsigned char c, int x, int y);       // ~ CharReleasedFunc
IMGUI_API void      ImGui_ImplFreeGLUT_SpecialFunc(int key, int x, int y);                  // ~ KeyPressedFunc
IMGUI_API void      ImGui_ImplFreeGLUT_SpecialUpFunc(int key, int x, int y);                // ~ KeyReleasedFunc
