// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Scripting/ScriptingObject.h"

API_CLASS(NoSpawn, Abstract) class ONLINESUBSYSTEM_API IModService : public PersistentScriptingObject
{
	DECLARE_SCRIPTING_TYPE_NO_SPAWN(IModService)
protected:
	FORCE_INLINE IModService(const SpawnParams& params) : PersistentScriptingObject(params) {}

public:

};
