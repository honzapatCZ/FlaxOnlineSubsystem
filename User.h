// Copyright (C) 2021 Nejcraft Do Not Redistribute


#pragma once

#include "Engine/Scripting/ScriptingType.h"

API_STRUCT() struct ONLINEPLATFORM_API User
{
	DECLARE_SCRIPTING_TYPE_MINIMAL(User);
public:
	/// <summary>
	/// The Users name
	/// </summary>
	API_FIELD()
	String Name;

	/// <summary>
	/// The Users profile picture
	/// </summary>
	API_FIELD();
	String Picture;
};
