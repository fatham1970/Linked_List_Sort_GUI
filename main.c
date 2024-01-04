#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 900;
    const int screenHeight = 650;

    InitWindow(screenWidth, screenHeight, "My Raylib Program");
    //--------------------------------------------------------------------------------------

    bool showWindow1 = true;
    bool showWindow2 = false;

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        if (IsKeyPressed(KEY_SPACE))
        {
            // Toggle between window 1 and window 2
            showWindow1 = !showWindow1;
            showWindow2 = !showWindow2;

            if (showWindow1)
                SetWindowTitle("Window 1");
            else
                SetWindowTitle("Window 2");
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        if (showWindow1)
        {
            // Draw content for window 1
            DrawText("\n \n \n                    Projet de tp Algo :", 20, 20, 30, DARKGRAY);
            DrawText("\n \n \n             \n \n \n             \n \n \n             ce projet permet de visualiser le tree d'une liste chainnee \n \n \n             en utilisant RAYLIB!!", 10, 10, 20, DARKGRAY);
            DrawText("\n \n \n             \n \n \n             \n \n \n             \n \n \n             \n \n \n             c'est un triage à l'aide de changer la valeur de la liste chaine \n \n \n             pour obtenir une liste triée.", 10, 10, 20, DARKGRAY);
            DrawText("\n \n \n             \n \n \n             \n \n \n             \n \n \n             \n \n \n             \n \n \n             \n \n \n             (appuyer sur Espace pour commencer le triee de la liste chainnee).", 10, 10, 20, DARKGRAY);
        }
        else if (showWindow2)
        {
            // Draw content for window 2
            DrawText("Hello, World! (Window 2)", 10, 10, 20, DARKGRAY);
        }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
