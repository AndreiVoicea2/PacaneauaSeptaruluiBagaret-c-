#pragma comment(lib, "winmm.lib")
#include <iostream>
#include "SDL2SoundEffects.h"
#include "Handlers.h"
#include "Slots.h"
#include "AnimationHandler.h"
#include "GlobalVariables.h"

using namespace std;

const int MaximumBalance = 1000;

Slots slotgame;
AnimationHandler animationHandler;
int InitialPrice, CurrentBalance;
SDL2SoundEffects se;

void FullScreen()
{

    system("mode con COLS=700");
    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
    SendMessage(GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);

}

void MainDataInitialization()
{
    se.addSoundEffect("D:/Downloads/Cazinoul_Septarului_Bagaret/Cazinoul_Septarului_Bagaret/RollSound.wav");


    CurrentBalance = InputHandler("Enter the balance(" + to_string(MaximumBalance) + " max usd): ", MaximumBalance);
        cout << endl;
}

int main()
{

    FullScreen();
    IntroAnimation(1, 120, 1000, 0, 120, 120, 2000, GlobalVariables :: MainTextForegroundColorIndex, GlobalVariables :: MainTextBackgroundColorIndex);
    MainDataInitialization();
    LoadingAnimation(4, 100, GlobalVariables::MainTextForegroundColorIndex, GlobalVariables::MainTextBackgroundColorIndex);
    slotgame.Roll(CurrentBalance, InitialPrice, se);

    return 0;
}
