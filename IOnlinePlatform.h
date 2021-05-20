// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Core/Compiler.h"
#include "Engine/Core/Config.h"

#include "IFriendsService.h"
#include "IAchievementService.h"

API_INTERFACE() class ONLINEPLATFORM_API IOnlinePlatform
{
	DECLARE_SCRIPTING_TYPE_MINIMAL(IOnlinePlatform)
public:
	/// <summary>
	/// Place to init your subsystem
	/// </summary>
	virtual void Init() = 0;

	/// <summary>
	/// Return the achievement service instance for this platform
	/// </summary>
	/// <returns>The achievement service for this platform</returns>
	virtual IAchievmentService* GetAchievementService() = 0;

	/// <summary>
	/// Return the friends service instance for this platform
	/// </summary>
	/// <returns>The achievement service for this platform</returns>
	virtual IFriendsService* GetFriendsService() = 0;
};
