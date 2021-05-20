// Copyright (C) 2021 Nejcraft Do Not Redistribute


#pragma once

#include "Engine/Scripting/Script.h"
#include "..\IOnlinePlatform.h"

API_CLASS() class ONLINEPLATFORM_API PS4OnlinePlatform : public IOnlinePlatform
{
	DECLARE_SCRIPTING_TYPE_MINIMAL(PS4OnlinePlatform)
public:
	PS4OnlinePlatform();

	void Init() override;
	
	IAchievementService* GetAchievementService() override;

	IFriendsService* GetFriendsService() override;
};
