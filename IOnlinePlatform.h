// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Serialization/ISerializable.h"

#include "IAchievementService.h"

API_CLASS(NoSpawn, Abstract) class ONLINESUBSYSTEM_API IOnlinePlatform : public PersistentScriptingObject
{
	DECLARE_SCRIPTING_TYPE_NO_SPAWN(IOnlinePlatform)
protected:
	FORCE_INLINE IOnlinePlatform(const SpawnParams& params) : PersistentScriptingObject(params)	{}

public:
	/// <summary>
	/// Place to init your subsystem
	/// </summary>
	/// <returns>Whether or not initting was sucessfull</returns>
	API_FUNCTION() FORCE_INLINE virtual bool Init() = 0;

	/// <summary>
	/// Great place to clean up your mess
	/// </summary>
	API_FUNCTION() FORCE_INLINE virtual void Deinit() = 0;

	/// <summary>
	/// Use any means necessary to proof that the user actually owns the game. This function is used to potentially halt the engine.
	/// Note that at this point there's no guarantee that your Init was successfull, though this doesnt apply to other functions which are not invoked if your init failed.
	/// </summary>
	/// <returns>Whether or not user owns this game. If your library doesnt have this feature return true</returns>
	API_FUNCTION() FORCE_INLINE virtual bool VerifyOwnership() = 0;

	/// <summary>
	/// Place to update all your hooks, note that this should not take too much time as its executed on the main thread
	/// </summary>
	API_FUNCTION() FORCE_INLINE virtual void Update() = 0;

	/// <summary>
	/// Return the achievement service instance for this platform
	/// </summary>
	/// <returns>The achievement service for this platform</returns>
	API_FUNCTION() FORCE_INLINE virtual IAchievementService* GetAchievementService() = 0;
};
