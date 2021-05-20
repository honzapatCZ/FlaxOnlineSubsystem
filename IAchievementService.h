// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Core/Compiler.h"
#include "Engine/Core/Config.h"

API_INTERFACE() class ONLINEPLATFORM_API IAchievmentService
{
	DECLARE_SCRIPTING_TYPE_MINIMAL(IAchievmentService)
public:

	/// <summary>
	/// Sets achievemt of identifier and float value, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	virtual void SetAchievementProgress(MonoString identifier, float value) = 0;

	/// <summary>
	/// Sets achievemt of identifier and float value, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	virtual void SetAchievement(MonoString identifier, bool value) = 0;

	/// <summary>
	/// Gets all achievements, please return the universal or ignore the value if its not mapped
	/// </summary>
	virtual Array<MonoString> GetAchievements() = 0;

	/// <summary>
	/// Gets float value of achievement, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	virtual float GetAchievementProgress(MonoString identifier) = 0;

	/// <summary>
	/// Gets float value of achievement, NOTE: You are responsible for mapping this using something like config
	/// </summary>
	virtual bool GetAchievement(MonoString identifier) = 0;
};
