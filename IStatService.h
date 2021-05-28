// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Core/Types/String.h"
#include "Engine/Scripting/ScriptingObject.h"

API_CLASS(NoSpawn, Abstract) class ONLINESUBSYSTEM_API IStatService : public PersistentScriptingObject
{
	DECLARE_SCRIPTING_TYPE_NO_SPAWN(IStatService)
protected:
	FORCE_INLINE IStatService(const SpawnParams& params) : PersistentScriptingObject(params)	{}

public:	
	/// <summary>
	/// Sets stat by the normalized identifier and  its int value, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	API_FUNCTION() FORCE_INLINE virtual void SetStat(const String& identifier, int value) = 0;

	/// <summary>
	/// Sets stat by the normalized identifier and  its int value, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	API_FUNCTION() FORCE_INLINE virtual void SetStat(const String& identifier, float value) = 0;

	/// <summary>
	/// Gets stat by the normalized identifier, ret points to the return value
	/// </summary>
	/// <returns>
	/// the int value of stat
	/// </returns>
	API_FUNCTION() FORCE_INLINE virtual void GetStat(const String& identifier, int* ret) = 0;

	/// <summary>
	/// Gets stat by the normalized identifier, ret points to the return value
	/// </summary>
	/// <returns>
	/// the float value of stat
	/// </returns>
	API_FUNCTION() FORCE_INLINE virtual void GetStat(const String& identifier, float* ret) = 0;
};
