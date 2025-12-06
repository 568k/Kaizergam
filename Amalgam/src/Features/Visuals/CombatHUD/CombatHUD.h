#pragma once
#include "../../../SDK/SDK.h"

class CCombatHUD
{
public:
	void Draw(CTFPlayer* pLocal);
};

ADD_FEATURE(CCombatHUD, CombatHUD);
