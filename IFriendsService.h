// Copyright (C) 2021 Nejcraft Do Not Redistribute
#pragma once

#include "Engine/Core/Compiler.h"
#include "Engine/Core/Config.h"

#include "User.h"

API_INTERFACE() class ONLINEPLATFORM_API IFriendsService
{
	DECLARE_SCRIPTING_TYPE_MINIMAL(IFriendsService)
public:

	/// <summary>
	/// Gets the currect user
	/// </summary>
	virtual User GetCurrectUser() = 0;

	/// <summary>
	/// Gets the currect user
	/// </summary>
	virtual Array<User> GetFriends() = 0;
};
