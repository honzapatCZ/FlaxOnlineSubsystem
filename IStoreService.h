// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Scripting/ScriptingObject.h"

API_CLASS(NoSpawn, Abstract) class ONLINESUBSYSTEM_API IStoreService : public PersistentScriptingObject
{
	DECLARE_SCRIPTING_TYPE_NO_SPAWN(IStoreService)
protected:
	FORCE_INLINE IStoreService(const SpawnParams& params) : PersistentScriptingObject(params) {}

public:

};
