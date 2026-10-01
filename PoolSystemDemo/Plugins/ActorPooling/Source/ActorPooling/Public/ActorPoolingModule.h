// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// Module interface for the ActorPooling plugin.

#pragma once

#include "Modules/ModuleManager.h"

/**
 * Minimal module class. No special startup/shutdown behavior is required for this plugin -
 * UActorPoolSettings registers itself with the Project Settings UI automatically via
 * UDeveloperSettings, and UActorPoolSubsystem is instantiated automatically per-world by
 * the engine's subsystem framework.
 */
class FActorPoolingModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
