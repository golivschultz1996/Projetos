#pragma once
#include <allegro.h>
#include "Jogador.h"


class Camera : public Jogador
{
public:
    Camera();
    ~Camera();

    virtual void Init();
    virtual void Update(float x);
    virtual void Draw(BITMAP *buffer);
    void SetPosition(int x);


private:
    float cameraX;
    float setposx;

};
