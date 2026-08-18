#pragma once
#include<iostream>

//’è”
const int DAMAGE = 20;
const int HEAL = 30;
const int MAX_HP = 100;


void Game();

/// <summary>
/// ƒ_ƒ[ƒW
/// </summary>
/// <param name="p"></param>
void Damage(int* p);

/// <summary>
/// ‰ñ•œ
/// </summary>
/// <param name="p"></param>
void Heal(int* p);


/// <summary>
/// “ü—ÍŠÖ”
/// </summary>
/// <param name="p"></param>
void Input(int* p);