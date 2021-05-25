// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Serialization/ISerializable.h"

#include "IAchievementService.h"

API_CLASS(NoSpawn, Abstract) class ONLINEPLATFORM_API IOnlinePlatform : public PersistentScriptingObject
{
	DECLARE_SCRIPTING_TYPE_NO_SPAWN(IOnlinePlatform)
public:
	IOnlinePlatform() : PersistentScriptingObject(SpawnParams(Guid::New(), TypeInitializer))
	{
	}
	/// <summary>
	/// Place to init your subsystem
	/// </summary>
	/// <returns>Whether or not initting was sucessfull</returns>
	API_FUNCTION() virtual bool Init() = 0;

	/// <summary>
	/// Use any means necessary to proof that the user actually owns the game. This function is used to potentially halt the engine.
	/// </summary>
	/// <returns>Whether or not user owns this game</returns>
	API_FUNCTION() virtual bool VerifyOwnership() = 0;

	/// <summary>
	/// Return the achievement service instance for this platform
	/// </summary>
	/// <returns>The achievement service for this platform</returns>
	API_FUNCTION() virtual IAchievementService* GetAchievementService() = 0;
};
