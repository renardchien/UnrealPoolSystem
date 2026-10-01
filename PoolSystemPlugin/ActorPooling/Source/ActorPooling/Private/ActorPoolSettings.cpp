// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// Constructor for UActorPoolSettings; places it under Project Settings > Game > Actor Pooling.

#include "ActorPoolSettings.h"

UActorPoolSettings::UActorPoolSettings()
{
	CategoryName = TEXT("Game");
	SectionName = TEXT("Actor Pooling");
}
