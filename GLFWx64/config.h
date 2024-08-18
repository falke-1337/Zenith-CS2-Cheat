#pragma once
#include <cstdint>


#include "json.hpp"
#include <iostream>
#include <fstream>
#include <string>


struct Config
{
    bool bShowMenu = false;

    bool bEnableEsp = false;
    bool bEnableSkeleton = false;
    bool bEnemyHealthBarEsp = false;
    bool bEnemyArmorBarEsp = false;
    bool bHealthTextEsp = false;
    bool bEnableFov = false;

    bool bEnableSnaplines = false;
    bool bEnemySnaplines = false;
    bool bTeamSnaplines = false;

    bool bEnableAimbot = false;
    bool bEnableAimlock = false;

    bool bTriggerbot = false;

    bool bEnableRadar = false;
    bool bGameRadar = false;
    bool bCustomRadar = false;
    bool bBombTimer = false;
    bool bNoFlash = false;
    bool bBhop = false;
    bool bEnableBhop = false;
    bool bEnableNameEsp = false;

    int comboIndex = 0;
    int comboIndexEsp = 0;
    int comboIndexSkeletonColor = 0;
    float fLineIndex = 4.0f;


    const char* comboItemsSnapline[3] = { "Top", "Center", "Bottom" };
    const char* comboItemsSkeletonColor[8] = { "Glow", "Rainbow", "Pulse", "Dynamic Color Shift", "Outer Glow", "Strobe", "Gradient", "Normal"};
    const char* comboItemsEsp[3] = { "Outline", "Corners", "Box" };

    float fColorEsp[4] = { 1.0f, 0.0f, 0.0f, 0.0f };
    float fColorSkeleton[4] = { 1.0f, 0.0f, 0.0f, 0.0f };
    float fColorSnapline[4] = { 1.0f, 0.0f, 0.0f, 0.0f };
    float fDistanceToHead = 75.0f;

    int iFovValue = 90;
    int FovValue = 90;

    bool bEnableThirdperson = false;

    float fFovRadius = 100.0f;
    float fHitChance = 100.0f;

    float fSmoothIndex = 1.0f;
};


void SaveConfig(const std::string& filename, Config& config);
void LoadConfig(const std::string& filename, Config& config);


