clang++ -m32 -DGLEW_STATIC -I"src\include" -I"src\include\GLFW" -I"src\include\glew" Application.cpp -o Application.exe -L"src\libs\GLFW\Win32" -lglfw3_mt -L"src\libs\glew\Win32" -lglew32s -L"src\libs\Win32" -lopengl32 -lshell32 -lgdi32 -luser32