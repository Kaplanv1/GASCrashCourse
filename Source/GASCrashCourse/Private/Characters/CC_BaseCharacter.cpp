// Copyright Emirhan Kaplan


#include "GASCrashCourse/Public/Characters/CC_BaseCharacter.h"


// Sets default values
ACC_BaseCharacter::ACC_BaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
}



