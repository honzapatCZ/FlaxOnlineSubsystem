// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Scripting/ScriptingObject.h"

API_CLASS(NoSpawn, Abstract) class ONLINESUBSYSTEM_API ICloudService : public PersistentScriptingObject
{
	DECLARE_SCRIPTING_TYPE_NO_SPAWN(ILeaderboardService)
protected:
	FORCE_INLINE ICloudService(const SpawnParams& params) : PersistentScriptingObject(params) {}

public:

};
