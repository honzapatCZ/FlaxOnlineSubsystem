// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Core/Compiler.h"
#include "Engine/Core/Config.h"
#include "Engine/Scripting/ManagedCLR/MUtils.h"

API_CLASS(NoSpawn, Abstract) class ONLINEPLATFORM_API IAchievementService : public PersistentScriptingObject
{
	DECLARE_SCRIPTING_TYPE_MINIMAL(IAchievementService)
public:
	IAchievementService();

	/// <summary>
	/// Sets achievemt of identifier and float value, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	API_FUNCTION() virtual void SetAchievementProgress(StringView& identifier, float value) = 0;

	/// <summary>
	/// Sets achievemt of identifier and float value, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	API_FUNCTION() virtual void SetAchievement(StringView& identifier, bool value) = 0;

	/// <summary>
	/// Gets all achievements, please return the universal or ignore the value if its not mapped
	/// </summary>
	//API_FUNCTION() virtual Array<MonoString*> GetAchievements() = 0;

	/// <summary>
	/// Gets float value of achievement, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	API_FUNCTION() virtual float GetAchievementProgress(StringView& identifier) = 0;

	/// <summary>
	/// Gets float value of achievement, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	API_FUNCTION() virtual bool GetAchievement(StringView& identifier) = 0;
};
