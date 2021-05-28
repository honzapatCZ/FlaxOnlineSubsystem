// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Scripting/ScriptingObject.h"

API_CLASS(NoSpawn, Abstract) class ONLINESUBSYSTEM_API IOverlayService : public PersistentScriptingObject
{
	DECLARE_SCRIPTING_TYPE_NO_SPAWN(IOverlayService)
protected:
	FORCE_INLINE IOverlayService(const SpawnParams& params) : PersistentScriptingObject(params) {}

public:

};
