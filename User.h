// Copyright (C) 2021 Nejcraft Do Not Redistribute


#pragma once

#include "Engine/Scripting/Script.h"
#include <Engine/Render2D/SpriteAtlas.h>

API_STRUCT() struct ONLINEPLATFORM_API User
{
	DECLARE_SCRIPTING_TYPE_MINIMAL(NavAgentProperties);

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
