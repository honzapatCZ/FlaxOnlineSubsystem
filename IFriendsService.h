// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Scripting/ScriptingObject.h"

API_CLASS(NoSpawn, Abstract) class ONLINESUBSYSTEM_API IFriendService : public PersistentScriptingObject
{
	DECLARE_SCRIPTING_TYPE_NO_SPAWN(IFriendService)
protected:
	FORCE_INLINE IFriendService(const SpawnParams& params) : PersistentScriptingObject(params) {}

public:

};
