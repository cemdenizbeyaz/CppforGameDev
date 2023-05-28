#include <iostream>

using namespace std;

enum GameState {
    MENU,
    PLAYING,
    GAME_OVER
};

enum PlayerStatus {PS_Crouching, PS_Walking, PS_Running}; 

const float RunSpeed = 800.f;
const float WalkSpeed = 400.f;
const float CrouchSpeed = 200.f;

void UpdateMovementSpeed(PlayerStatus PStatus, float& speed);

int main()
{
    GameState currentState = PLAYING;
    switch (currentState) {
        case MENU:
            cout << "Welcome to the game menu!" << endl;
            break;
        case PLAYING:
            cout << "You are currently playing the game." << endl;
            break;
        case GAME_OVER:
            cout << "Game over. You lost!" << endl;
            break;
        default:
            cout << "Invalid game state." << endl;
    }

    float MovementSpeed;
    PlayerStatus currentStatus = PS_Walking;
    UpdateMovementSpeed(currentStatus, MovementSpeed);
    cout << "Your movement speed is: " << MovementSpeed << endl;
}

void UpdateMovementSpeed(PlayerStatus PStatus, float& speed)
{
    switch (PStatus) {
        case PS_Crouching:
            speed = CrouchSpeed;
            break;
        case PS_Walking:
            speed = WalkSpeed;
            break;
        case PS_Running:
            speed = RunSpeed;
    }
}