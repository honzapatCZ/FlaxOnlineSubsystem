// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Core/Compiler.h"
#include "Engine/Core/Config.h"
#include "Engine/Scripting/ManagedCLR/MUtils.h"

API_CLASS(NoSpawn, Abstract) class ONLINEPLATFORM_API IAchievementService : public PersistentScriptingObject
{
	DECLARE_SCRIPTING_TYPE_NO_SPAWN(IAchievementService)
protected:
	explicit IAchievementService(const SpawnParams& params) : PersistentScriptingObject(params)	{}

public:	
	/// <summary>
	/// Sets achievemt of identifier and float value, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	API_FUNCTION() virtual void SetAchievementProgress(const String identifier, float value) = 0;

	/// <summary>
	/// Sets achievemt of identifier and float value, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	API_FUNCTION() virtual void SetAchievement(const String identifier, bool value) = 0;

	/// <summary>
	/// Gets all achievements, please return the universal or ignore the value if its not mapped
	/// </summary>
	API_FUNCTION() virtual Array<String> GetAchievements() = 0;

	/// <summary>
	/// Gets float value of achievement, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	API_FUNCTION() virtual float GetAchievementProgress(const String identifier) = 0;

	/// <summary>
	/// Gets float value of achievement, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	API_FUNCTION() virtual bool GetAchievement(const String identifier) = 0;
};
