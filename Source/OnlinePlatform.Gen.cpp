// This code was auto-generated. Do not modify it.

#include "Engine/Scripting/BinaryModule.h"
#include "OnlinePlatform.Gen.h"

StaticallyLinkedBinaryModuleInitializer StaticallyLinkedBinaryModuleOnlinePlatform(GetBinaryModuleOnlinePlatform);

extern "C" BinaryModule* GetBinaryModuleOnlinePlatform()
{
    static NativeBinaryModule module("OnlinePlatform", MAssemblyOptions());
    return &module;
}
