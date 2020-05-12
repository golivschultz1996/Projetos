#include "Camera.h"
//#include "Jogador.h"



Camera::Camera()
{

}
Camera::~Camera()
{

}
void Camera::Init()
{
    cameraX = 0;


}
void Camera::Update(float x)
{
    setposx = x;
    Camera::SetPosition(setposx);
}

void Camera::Draw(BITMAP *buffer)
{
    draw_sprite(screen, buffer, -cameraX, 0);
}

void Camera::SetPosition(int x)
{
    cameraX = x - 600;

    if(cameraX<0)
    {
        cameraX=0;
    }
    if (cameraX>7200)
        cameraX=7200;

}
