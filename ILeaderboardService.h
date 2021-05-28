// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Scripting/ScriptingObject.h"

API_CLASS(NoSpawn, Abstract) class ONLINESUBSYSTEM_API ILeaderboardService : public PersistentScriptingObject
{
	DECLARE_SCRIPTING_TYPE_NO_SPAWN(ILeaderboardService)
protected:
	FORCE_INLINE ILeaderboardService(const SpawnParams& params) : PersistentScriptingObject(params) {}

public:

};
