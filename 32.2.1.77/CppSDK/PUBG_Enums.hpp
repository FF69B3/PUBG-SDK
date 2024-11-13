                                                      /* Create by #FF69B4 */
enum class E*57698f96b6 : uint8_t
{
	*123584763e                    = 0,
	*32937120cc                    = 1,
	*b4a0542dd3                    = 2,
	*bc0482e802                    = 3,
	*67da599759                    = 4,
	*612440c26c                    = 5,
	*57698f96b6_MAX                = 6,
};

enum class E*b0aa4e52e5 : uint8_t
{
	*728ea48b20                    = 0,
	*6f89b3dacb                    = 1,
	*3338ff25c0                    = 2,
	*b0aa4e52e5_MAX                = 3,
};

enum class E*f9a7beee05 : uint8_t
{
	*b1ca3cf514                    = 0,
	*373c04508c                    = 1,
	*4e7fdc1564                    = 2,
	*534ca38fed                    = 3,
	*f9a7beee05_MAX                = 4,
};

enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6,
};

enum class ERangeBoundTypes : uint8_t
{
	Exclusive                      = 0,
	Inclusive                      = 1,
	Open                           = 2,
	ERangeBoundTypes_MAX           = 3,
};

enum class EAutomationEventType : uint8_t
{
	Info                           = 0,
	Warning                        = 1,
	Error                          = 2,
	EAutomationEventType_MAX       = 3,
};

enum class EMouseCursor : uint8_t
{
	None                           = 0,
	Default                        = 1,
	TextEditBeam                   = 2,
	ResizeLeftRight                = 3,
	ResizeUpDown                   = 4,
	ResizeSouthEast                = 5,
	ResizeSouthWest                = 6,
	CardinalCross                  = 7,
	Crosshairs                     = 8,
	Hand                           = 9,
	GrabHand                       = 10,
	GrabHandClosed                 = 11,
	SlashedCircle                  = 12,
	EyeDropper                     = 13,
	EMouseCursor_MAX               = 14,
};

enum class EUnit : uint8_t
{
	Micrometers                    = 0,
	Millimeters                    = 1,
	Centimeters                    = 2,
	Meters                         = 3,
	Kilometers                     = 4,
	Inches                         = 5,
	Feet                           = 6,
	Yards                          = 7,
	Miles                          = 8,
	Lightyears                     = 9,
	Degrees                        = 10,
	Radians                        = 11,
	MetersPerSecond                = 12,
	KilometersPerHour              = 13,
	MilesPerHour                   = 14,
	Celsius                        = 15,
	Farenheit                      = 16,
	Kelvin                         = 17,
	Micrograms                     = 18,
	Milligrams                     = 19,
	Grams                          = 20,
	Kilograms                      = 21,
	MetricTons                     = 22,
	Ounces                         = 23,
	Pounds                         = 24,
	Stones                         = 25,
	Newtons                        = 26,
	PoundsForce                    = 27,
	KilogramsForce                 = 28,
	Hertz                          = 29,
	Kilohertz                      = 30,
	Megahertz                      = 31,
	Gigahertz                      = 32,
	RevolutionsPerMinute           = 33,
	Bytes                          = 34,
	Kilobytes                      = 35,
	Megabytes                      = 36,
	Gigabytes                      = 37,
	Terabytes                      = 38,
	Lumens                         = 39,
	Milliseconds                   = 40,
	Seconds                        = 41,
	Minutes                        = 42,
	Hours                          = 43,
	Days                           = 44,
	Months                         = 45,
	Years                          = 46,
	Multiplier                     = 47,
	Unspecified                    = 48,
	EUnit_MAX                      = 49,
};

enum class EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_B8G8R8A8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_R32_FLOAT                   = 13,
	PF_G16R16                      = 14,
	PF_G16R16F                     = 15,
	PF_G16R16F_FILTER              = 16,
	PF_G32R32F                     = 17,
	PF_A2B10G10R10                 = 18,
	PF_A16B16G16R16                = 19,
	PF_D24                         = 20,
	PF_R16F                        = 21,
	PF_R16F_FILTER                 = 22,
	PF_BC5                         = 23,
	PF_V8U8                        = 24,
	PF_A1                          = 25,
	PF_FloatR11G11B10              = 26,
	PF_A8                          = 27,
	PF_R32_UINT                    = 28,
	PF_R32_SINT                    = 29,
	PF_PVRTC2                      = 30,
	PF_PVRTC4                      = 31,
	PF_R16_UINT                    = 32,
	PF_R16_SINT                    = 33,
	PF_R16G16B16A16_UINT           = 34,
	PF_R16G16B16A16_SINT           = 35,
	PF_R5G6B5_UNORM                = 36,
	PF_R8G8B8A8                    = 37,
	PF_A8R8G8B8                    = 38,
	PF_BC4                         = 39,
	PF_R8G8                        = 40,
	PF_ATC_RGB                     = 41,
	PF_ATC_RGBA_E                  = 42,
	PF_ATC_RGBA_I                  = 43,
	PF_X24_G8                      = 44,
	PF_ETC1                        = 45,
	PF_ETC2_RGB                    = 46,
	PF_ETC2_RGBA                   = 47,
	PF_R32G32B32A32_UINT           = 48,
	PF_R16G16_UINT                 = 49,
	PF_ASTC_4x4                    = 50,
	PF_ASTC_6x6                    = 51,
	PF_ASTC_8x8                    = 52,
	PF_ASTC_10x10                  = 53,
	PF_ASTC_12x12                  = 54,
	PF_BC6H                        = 55,
	PF_BC7                         = 56,
	PF_R8_UINT                     = 57,
	PF_L8                          = 58,
	PF_XGXR8                       = 59,
	PF_R32G32_UINT                 = 60,
	PF_D32                         = 61,
	PF_MAX_                        = 62,
};

enum class EAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	EAxis_MAX                      = 4,
};

enum class ELogTimes : uint8_t
{
	None                           = 0,
	UTC                            = 1,
	SinceGStartTime                = 2,
	ELogTimes_MAX                  = 3,
};

enum class E*5b99760377 : uint8_t
{
	*bb0c58c297                    = 0,
	*d6387271dd                    = 1,
	*d12225a794                    = 2,
	*5b99760377_MAX                = 3,
};

enum class E*e09a2eacdb : uint8_t
{
	*0fdb04925e                    = 0,
	*efafd1ecb3                    = 1,
	*4cc14bc4d3                    = 2,
	*e09a2eacdb_MAX                = 3,
};

enum class ELifetimeCondition : uint8_t
{
	COND_None                      = 0,
	COND_InitialOnly               = 1,
	COND_OwnerOnly                 = 2,
	COND_SkipOwner                 = 3,
	COND_SimulatedOnly             = 4,
	COND_AutonomousOnly            = 5,
	COND_SimulatedOrPhysics        = 6,
	COND_InitialOrOwner            = 7,
	COND_Custom                    = 8,
	COND_ReplayOrOwner             = 9,
	COND_ReplayOnly                = 10,
	COND_SimulatedOnlyNoReplay     = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay                = 13,
	COND_OwnerOrViewTarget         = 14,
	COND_OwnerOrViewTargetOrReplay = 15,
	COND_Max                       = 16,
};

enum class ETaskResourceOverlapPolicy : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGameplayTaskRunResult : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGameplayTaskState : uint8_t
{
	Uninitialized                  = 0,
	AwaitingActivation             = 1,
	Paused                         = 2,
	Active                         = 3,
	Finished                       = 4,
	EGameplayTaskState_MAX         = 5,
};

enum class EBreathType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ERequestPartyState : uint8_t
{
	Wait                           = 1,
	Accept                         = 2,
	Decline                        = 3,
	ERequestPartyState_MAX         = 4,
};

enum class ECastCancelReason : uint8_t
{
	Invalid                        = 0,
	CasterAiming                   = 1,
	CasterArming                   = 2,
	CasterApnea                    = 3,
	CasterSprinting                = 4,
	CasterJumping                  = 5,
	CasterFallingLong              = 6,
	CasterFiring                   = 7,
	CasterGroggy                   = 8,
	CasterGroggyOnZeroTimeCast     = 9,
	CasterHipped                   = 10,
	CasterInvalid                  = 11,
	CasterNotAlive                 = 12,
	CasterPickedUpDroppedItem      = 13,
	CasterPickedUpItemFromPackage  = 14,
	CasterReloading                = 15,
	CasterRolling                  = 16,
	CasterTargeting                = 17,
	CasterUnarmAttacking           = 18,
	CasterVault                    = 19,
	CasterStanceInvalid            = 20,
	CasterFreefalling              = 21,
	CastObjectInvalid              = 22,
	CastObjectNotExecutable        = 23,
	FailedCasterMovementDistCheckOnClient = 24,
	FailedCasterMovementDistCheckOnServer = 25,
	FailedCasterAndCastObjDistCheckOnClient = 26,
	FailedCasterAndCastObjDistCheckOnServer = 27,
	CharacterBeingRevivedDead      = 28,
	ManualCancel                   = 29,
	NewCastOnClient                = 30,
	NewCastOnServer                = 31,
	VehicleLanding                 = 32,
	VehicleSeatChanged             = 33,
	VehicleMoving                  = 34,
	VehicleUpsideDown              = 35,
	StuntEmoteOnVehicle            = 36,
	VehicleJumping                 = 37,
	EmergencyPickupAircraft        = 38,
	BodyCarry                      = 39,
	UplaodingTeamParkour           = 40,
	CasterStunned                  = 41,
	VehicleFuelFull                = 42,
	TeamsPlantedBomb               = 43,
	ECastCancelReason_MAX          = 44,
};

enum class EWeaponAttachmentSlotID : uint8_t
{
	None                           = 0,
	Muzzle                         = 1,
	LowerRail                      = 2,
	UpperRail                      = 3,
	Magazine                       = 4,
	Stock                          = 5,
	Angled                         = 6,
	TacPack1                       = 7,
	TacPack2                       = 8,
	TacPack3                       = 9,
	TacPack4                       = 10,
	MAX                            = 11,
	EWeaponAttachmentSlotID_MAX    = 12,
};

enum class E*91a625ed63 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESystemMessageType : uint8_t
{
	Debug                          = 0,
	Notify                         = 1,
	Warning                        = 2,
	Error                          = 3,
	Important                      = 4,
	NotifyCommand                  = 5,
	ESystemMessageType_MAX         = 6,
};

enum class ESkinCategory : uint8_t
{
	Skin_None                      = 0,
	Skin_Equipment                 = 1,
	Skin_Parachute                 = 2,
	Skin_Weapon                    = 3,
	Skin_MeleeWeapon               = 4,
	Skin_Vehicle                   = 5,
	Skin_Throwable                 = 6,
	Skin_Castable                  = 7,
	Skin_MAX                       = 8,
};

enum class EOutGamePlatformProvider : uint8_t
{
	Unknown                        = 0,
	Bro                            = 1,
	PcSteam                        = 2,
	PcDmm                          = 3,
	PcMailRu                       = 4,
	PcKakao                        = 5,
	PcTencent                      = 6,
	ConsoleXbox                    = 7,
	ConsolePsn                     = 8,
	PcLiteGarena                   = 9,
	PcLiteGlobalAccount            = 10,
	PcLiteGlobalAccountJp          = 11,
	ConsoleStadia                  = 12,
	PcEpic                         = 13,
	AI                             = 14,
	Max                            = 15,
	EOutGamePlatformProvider_MAX   = 16,
};

enum class EDamageReason : uint8_t
{
	None                           = 0,
	HeadShot                       = 1,
	TorsoShot                      = 2,
	PelvisShot                     = 3,
	ArmShot                        = 4,
	LegShot                        = 5,
	NonSpecific                    = 6,
	Blocked                        = 7,
	EDamageReason_MAX              = 8,
};

enum class EDamageTypeCategory : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*52503473e6 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESkydiveState : uint8_t
{
	Skydive_None                   = 0,
	Skydive_Freefall               = 1,
	Skydive_ParachuteDeploying     = 2,
	Skydive_ParachuteDeployed      = 3,
	Skydive_ParachuteCollapsing    = 4,
	Skydive_MAX                    = 5,
};

enum class EMarkerType : uint8_t
{
	Normal                         = 0,
	Attack                         = 1,
	Danger                         = 2,
	Defend                         = 3,
	Loot                           = 4,
	Regroup                        = 5,
	Vehicle                        = 6,
	EMarkerType_MAX                = 7,
};

enum class EPlatoonSupportRequestEventType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EPlatoonCarePackageType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EEquipSlotID : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAIStateType : uint8_t
{
	AI_None                        = 0,
	AI_Idle                        = 1,
	AI_Patrol                      = 2,
	AI_Alert                       = 3,
	AI_Fight                       = 4,
	AI_Death                       = 5,
	AI_MAX                         = 6,
};

enum class EThrownWeaponType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EPickupAnimType : uint8_t
{
	None                           = 0,
	EPickupAnimType_MAX            = 1,
};

enum class EHitDirection : uint8_t
{
	Hit_Front                      = 0,
	Hit_Back                       = 1,
	Hit_Left                       = 2,
	Hit_Right                      = 3,
	Hit_MAX                        = 4,
};

enum class E*70ce3ba783 : uint8_t
{
	*3f96711ca2                    = 0,
	*36ffd686d5                    = 1,
	*80281f8e2a                    = 2,
	*0d21f27f18                    = 3,
	*04034eba5a                    = 4,
	*4d74aa0f93                    = 5,
	*e8aa82b5f1                    = 6,
	*519b625c42                    = 7,
	*16d97e0a4f                    = 8,
	*70ce3ba783_MAX                = 9,
};

enum class ECastAnim : uint8_t
{
	None                           = 0,
	Door                           = 1,
	UnlockDoor                     = 2,
	Custom                         = 3,
	ECastAnim_MAX                  = 4,
};

enum class ECharacterNegativeEffects : uint8_t
{
	Blind                          = 0,
	Burning                        = 1,
	Stun                           = 2,
	Taser                          = 3,
	Total                          = 4,
	ECharacterNegativeEffects_MAX  = 5,
};

enum class EVoiceInputMode : uint8_t
{
	OpenMic                        = 0,
	PushToTalk                     = 1,
	Toggle                         = 2,
	Disable                        = 3,
	MAX                            = 4,
	EVoiceInputMode_MAX            = 5,
};

enum class ETslOvercastAction : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EQualityType : uint8_t
{
	EMainQuality                   = 0,
	EViewDistanceQuality           = 1,
	EShadowQuality                 = 2,
	EAntiAliasingQuality           = 3,
	ETextureQuality                = 4,
	EVisualEffectQuality           = 5,
	EPostProcessingQuality         = 6,
	EFoliageQuality                = 7,
	EQualityType_MAX               = 8,
};

enum class EDistanceBasedEvent : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ERankType : uint8_t
{
	None                           = 0,
	InvalidSMS                     = 1,
	Penalty                        = 2,
	Restricted                     = 3,
	Unranked                       = 4,
	Bronze                         = 5,
	Silver                         = 6,
	Gold                           = 7,
	Platinum                       = 8,
	Diamond                        = 9,
	Master                         = 10,
	ERankType_MAX                  = 11,
};

enum class ETargetingType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETirePunctureReason : uint8_t
{
	Shot                           = 0,
	Environment                    = 1,
	Explosion                      = 2,
	PanzerFaustExplosion           = 3,
	SkipFX                         = 4,
	ManualRemoval                  = 5,
	Other                          = 6,
	ETirePunctureReason_MAX        = 7,
};

enum class ETslAIPlayerType : uint8_t
{
	HumanPlayer                    = 0,
	AITypeNone                     = 1,
	CommonAI                       = 2,
	PillarAI                       = 3,
	DummyAI                        = 4,
	ZombieAI                       = 5,
	MonsterAI                      = 6,
	UltronAI                       = 7,
	ScriptBotAI                    = 8,
	MarketAI                       = 9,
	ETslAIPlayerType_MAX           = 10,
};

enum class ESubjectToReport : uint8_t
{
	None                           = 0,
	Killer                         = 1,
	Spectating_Player              = 2,
	Replay_Player                  = 3,
	Team_Member                    = 4,
	OtherTeam_Members              = 5,
	Assistant                      = 6,
	GroggyCauser                   = 7,
	ESubjectToReport_MAX           = 8,
};

enum class EMarketCategoryType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EMarketUIEquipCategory : uint8_t
{
	None                           = 0,
	Helmet                         = 1,
	Vest                           = 2,
	Backpack                       = 3,
	MAX                            = 4,
	EMarketUIEquipCategory_MAX     = 5,
};

enum class E*d910b9beba : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*d608a78319 : uint8_t
{
	*58c9777590                    = 0,
	*34564e8d93                    = 1,
	*0bdb9b945e                    = 2,
	*bc69915eec                    = 3,
	*9a7e9a05ff                    = 4,
	*1770e11f18                    = 5,
	*a9210f9c18                    = 6,
	*76dec55374                    = 7,
	*d608a78319_MAX                = 8,
};

enum class EPopupStyle : uint8_t
{
	Ok_Cancel                      = 0,
	Ok                             = 1,
	Yes_No                         = 2,
	Controller_KeyboardMouse       = 3,
	EPopupStyle_MAX                = 4,
};

enum class ECastableItemType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EItemRequestType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESpecialZoneAdditionalEffect : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ERevivalMethod : uint8_t
{
	None                           = 0,
	BluechipTower                  = 1,
	RevivalTransmitter             = 2,
	Cheat                          = 3,
	ERevivalMethod_MAX             = 4,
};

enum class ETslMapName : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAscenderSettlePoint : uint8_t
{
	INVALID                        = 0,
	RopeAttachPoint_LOWER          = 1,
	RopeAttachPoint_UPPER          = 2,
	RopeAttachPoint_START          = 3,
	EAscenderSettlePoint_MAX       = 4,
};

enum class EDualMatchingState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EBuffPropertyType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAutoSpectatePriority : uint8_t
{
	None                           = 0,
	Vehicle                        = 1,
	Distance                       = 2,
	Combat                         = 3,
	EAutoSpectatePriority_MAX      = 4,
};

enum class EFBRClass : uint8_t
{
	WARRIOR                        = 0,
	RANGER                         = 1,
	WIZARD                         = 2,
	PALADIN                        = 3,
	EFBRClass_MAX                  = 4,
};

enum class EPartnerLevel : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ELeagueMatchStatistic : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EBlueZoneShape : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGameZoneType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ERespawnType : uint8_t
{
	Airborne                       = 0,
	DeadPoint                      = 1,
	StartPoint                     = 2,
	Selectable                     = 3,
	RandomPoint                    = 4,
	CheckPoint                     = 5,
	ERespawnType_MAX               = 6,
};

enum class EPlatoonTeam : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EPrivateTrainingRoomType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*2c093f158d : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EUserRank : uint8_t
{
	ElementaryRank                 = 0,
	IntermediateRank               = 1,
	HighRank                       = 2,
	ExpertRank                     = 3,
	EUserRank_MAX                  = 4,
};

enum class EWeatherChange : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*95740667bf : uint8_t
{
	*764f6f5d68                    = 0,
	*1f4d9ec669                    = 1,
	*43759f12c4                    = 2,
	*b794e93156                    = 3,
	*e856b29c5e                    = 4,
	*aae96b5eec                    = 5,
	*95740667bf_MAX                = 6,
};

enum class EMinimapColorType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EServerStatType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*45a1788846 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EStoreCategory : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EMarketLevel : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ERedZoneGenerateType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EReadyToPlayState : uint8_t
{
	AllFinished                    = 0,
	OnPreLoadMap                   = 1,
	OnPostLoadMap                  = 2,
	CheckMapLoadFinished           = 3,
	NotMapFullyLoaded              = 4,
	CheckPreloadingMap             = 5,
	LoadMapRequested               = 6,
	EReadyToPlayState_MAX          = 7,
};

enum class EActionType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EEmergencyPickupState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*fb7315ac64 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGamepadInputResponseTypes : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGamepadPresets : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslInputModes : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGameplayClientReplay : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*40612d8312 : uint8_t
{
	*ff95bd49eb                    = 0,
	*554e30dc52                    = 1,
	*40612d8312_MAX                = 2,
};

enum class EInputModeSettingActions : uint8_t
{
	Crouch                         = 0,
	Prone                          = 1,
	Walk                           = 2,
	Sprint                         = 3,
	HoldRotation                   = 4,
	HoldBreath                     = 5,
	Peek                           = 6,
	Map                            = 7,
	ADS                            = 8,
	Aim                            = 9,
	HoldAngled                     = 10,
	EInputModeSettingActions_MAX   = 11,
};

enum class E*371ea52809 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*f96f4cd68c : uint8_t
{
	*6f01ab8e7d                    = 0,
	*c22dbbef87                    = 1,
	*47e79a4dbe                    = 2,
	*5c6fb7eed3                    = 3,
	*ff0d6a4060                    = 4,
	*283f36c9a8                    = 5,
	*f96f4cd68c_MAX                = 6,
};

enum class EObserverCameraMode : uint8_t
{
	FixedCamera                    = 0,
	FreeCamera                     = 1,
	PlayerCamera                   = 2,
	FollowCamera                   = 3,
	EObserverCameraMode_MAX        = 4,
};

enum class EObserverAuthorityType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGameModeType : uint8_t
{
	BattleRoyale                   = 0,
	War                            = 1,
	TDM                            = 2,
	Training                       = 3,
	ESports                        = 4,
	AtoZTutorial                   = 5,
	IntenseBattleRoyale            = 6,
	Bomb                           = 7,
	SLB                            = 8,
	None                           = 9,
	EGameModeType_MAX              = 10,
};

enum class ENearClippingLevel : uint8_t
{
	Default                        = 0,
	Low                            = 1,
	Middle                         = 2,
	High                           = 3,
	ENearClippingLevel_MAX         = 4,
};

enum class EThingSpotGroupType : uint8_t
{
	GroupA                         = 0,
	GroupB                         = 1,
	GroupC                         = 2,
	GroupD                         = 3,
	GroupE                         = 4,
	GroupF                         = 5,
	GroupG                         = 6,
	GroupH                         = 7,
	GroupI                         = 8,
	GroupJ                         = 9,
	GroupK                         = 10,
	GroupL                         = 11,
	GroupM                         = 12,
	GroupN                         = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
	                               = 21,
	                               = 22,
	                               = 23,
	                               = 24,
	                               = 25,
	                               = 26,
	                               = 27,
};

enum class ERadioWheelMessageType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EColorBlindType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EFrameRateLimitType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ECameraViewBehaviour : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*a8b7cdad6a : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EMatchStartType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslDestructibleObjectType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
};

enum class ETslInputDeviceTypeBranch_BPOnly : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ETslInputDeviceGroupBranch_BPOnly : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslPlatformTypeBranch_BPOnly : uint8_t
{
	                               = 0,
	                               = 5,
	                               = 6,
	                               = 255,
	                               = 256,
};

enum class ETslPlatformGroupBranch_BPOnly : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EKickProcess : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EStatTrakState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESkinMeshParamerType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*29eac34775 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ESkinMeshType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EVehicleSkinCategory : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class ETslHUDConfigType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class EAuxilaryIconRequestor : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ERadioMessageAlarmSoundCategory : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EInventoryRadioMessageType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
	                               = 21,
};

enum class ERadioWheelCancelWays : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ERadioMessageInteractionType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
};

enum class ERadioMessageCategory : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
	                               = 21,
	                               = 22,
	                               = 23,
	                               = 24,
	                               = 25,
	                               = 26,
	                               = 27,
	                               = 28,
	                               = 29,
	                               = 30,
	                               = 31,
	                               = 32,
	                               = 33,
	                               = 34,
	                               = 35,
	                               = 36,
	                               = 37,
	                               = 38,
	                               = 39,
	                               = 255,
	                               = 256,
};

enum class ERadioMessageDecorateType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*6855522051 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAuxilaryIconType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EDirectMessageType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EDirectMessageOutGameType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EObserverHudAnimType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESystemMenuButtonType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
};

enum class EUIAkEvent : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class ERadioMessagePresets : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EPlatoonSupportRequestType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EReportUiType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ECharacterIconType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
};

enum class EUiShowType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ETslHudType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*21517e7366 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ETslUpdateHudReason : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
};

enum class EWidgetShowType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ECastLevel : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ECastPriority : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETurningDirection : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
};

enum class E*f70f7021b4 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
};

enum class ETargetAnimDynamicsType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAnimatableCustomizableTypes : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
};

enum class EAnimWeaponSpecificClass : uint8_t
{
	                               = 0,
	                               = 1,
};

enum class EAnimVehicleSeatType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class E*5dc822b5fd : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EUnarmedAnimType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EAnimStance : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EAnimWeaponType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
};

enum class ERaycastDirection : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EObjectType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EEmoteMoveType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EEmotePlayType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EEmoteAnimType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EDamageVictimActorType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class ECollisionProfileType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAntiCheatKickType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EMovingState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EPlayerInputType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ECheatType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ELobbyItemPointSellingType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ELobbyItemPlatform : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ELobbyItemTier : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
};

enum class ELobbyItemCategory : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EEquipableItemLevelType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EConstraintSlotType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*a66f891a08 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*743e77b934 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EItemSpotGroupType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
	                               = 21,
	                               = 22,
	                               = 23,
	                               = 24,
	                               = 25,
	                               = 26,
	                               = 27,
};

enum class EItemSpotType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
	                               = 21,
	                               = 22,
	                               = 23,
	                               = 24,
	                               = 25,
	                               = 26,
	                               = 27,
};

enum class EItemOverrideType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
};

enum class EContinuousHealItem : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ECustomPartType : uint8_t
{
	                               = 0,
	                               = 1,
};

enum class EThermalItemType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EEquipableItemSoundType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EEquipableItemSoundGroup : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EItemCategory : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
};

enum class EItemPackageType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EVehicleConvertState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EVehiclePartType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class EVehicleRideType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*7d18f1891f : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*3eeb0b081b : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*d997e08b36 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
	                               = 21,
	                               = 22,
	                               = 23,
	                               = 24,
	                               = 25,
	                               = 26,
	                               = 27,
	                               = 28,
	                               = 29,
	                               = 30,
	                               = 31,
	                               = 32,
	                               = 33,
	                               = 34,
	                               = 35,
	                               = 36,
	                               = 37,
	                               = 38,
	                               = 39,
	                               = 40,
	                               = 41,
	                               = 42,
	                               = 43,
	                               = 44,
	                               = 45,
	                               = 46,
	                               = 47,
	                               = 48,
	                               = 49,
	                               = 50,
	                               = 51,
	                               = 52,
	                               = 53,
	                               = 54,
	                               = 55,
};

enum class E*6bd5eb60a6 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ERiderType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EMovementBaseType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESeatState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EAttackType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*c59dc0b8ef : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EVaultAnimType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EBuffOverlapSolveMethod : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EGuardRank : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EReportDetailCauseType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EReportCause : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
};

enum class ETslBpRewardLogicType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslApRewardLogicType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EMatchLogTab : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EVoiceChannelType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ECharacterActionComponentType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESetHealthReason : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class ECharacterActionEventType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*0f97ae21bb : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class ECharacterGait : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslCharacterType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGender : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ETslCustomMovementMode : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ELandingSoundSwitchState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EInteractableActorType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
};

enum class EInteractInputType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGamepadHudDataType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESandboxGroupType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class ESandboxQuantityType : int32_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESandboxSpecialButtonType : int32_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESandboxPowerType : int32_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 4,
	                               = 8,
	                               = 16,
	                               = 32,
	                               = 64,
	                               = 128,
	                               = 129,
};

enum class ESandboxSoundType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESandboxValidateItemResult : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESpecialZoneState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
};

enum class ESpecialZoneType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EScopeType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EEquippedWeaponRTPC : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
};

enum class E*44f13bd8db : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class EReticleType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class EDamageZoneType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETppAimCameraPosition : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EAccessorySlot : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class EWeaponDisplayTypes : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
};

enum class EWeaponClass : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
};

enum class EAllowedThrowMode : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*f41cfd7e46 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ETwoHandedWeapon : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
};

enum class EAttachmentCalculateType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EAutoEquipAttachmentForScopeMode : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EFiringMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EWeaponHand : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EWeaponArmState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EProjectileExplosionStartType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EControlType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
};

enum class ECharFlagsNormal : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class ECharFlagsSkipOwner : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
	                               = 21,
};

enum class E*42cf97e5b1 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*2361a85a54 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ECustomGripBlendSpaceType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EMasteryItemType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ETableType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
};

enum class E*46bfbf0183 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ECorrectedSpawnLocationTraceType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EThrowableState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EAIPoseState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*d849e90a79 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class E*5247790c51 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*c730cda0f4 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*da223e9cd2 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class E*9710b60bd7 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ESurviveWeaponPropSlot : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*b5eb6ae22e : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class E*87fa8ff077 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EAINewFocusPriority : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAIMovePose : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EAITriggerAttrType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAIAttrCompareType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAIEquipSpawnItemType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*bee6095d3d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class E*4ae0ab1902 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EAscenderDirection : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAscenderRopeSubType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EAscenderRopeType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EWeaponReloadMethod : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EWeaponReloadCancelReason : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class EWeaponReloadAnimExec : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EWeaponState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EWeaponTransitionState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EPerceptionType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EAttachParent : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EHealingItemType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EItemPickupFailReason : int32_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EItemPickupInfo : int32_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class EComparisonTarget : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EAIMapName : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
};

enum class EAICommand : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAIActionState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class EPickupItemStatus : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class EIntoCircleLevel : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EValueCompareFunc : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EAIParameter : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAIBehaviors : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EComparisonTargetCircle : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EPercivedGrenadeType : int32_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EEnemyCompareElement : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EInfoPointWithHouse : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETargetLocation : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ETestMoveDirection : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EThownWeapon_AI : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EPatrolSpeed : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*7c8947df55 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EModifyBlackboardDataValueType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EThrowWeaponActionMethod : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EThownWeapon : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EBoosterItem : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*3a1aa52ee4 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*ea9b5a9e1a : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*112d54c3f5 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EReactionObjectType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*82e95434a3 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ELobbyBlurChangingStates : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ELobbyCameraStates : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
};

enum class ELobbyCustomizingSlotType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ELobbyCharacterCameraType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslOutGameCloudRequestErrorType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class ETslOutGameCloudRequestType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EViewModeActorCenterPosition : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EViewModeCategory : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class ECraftResult : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ECustomCarepackageState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*da32fb0cb2 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ELocationType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EReplayTimelineMode : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*e21682b798 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ELoadingScreenType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*c8a996cf96 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EValueType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ETslControllerType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETableCheckerHideOption : int32_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EKeyHintGradeSettingValue : uint8_t
{
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EKeyHintGradeBitmask : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EBeginningState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class ETslWeatherAction : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGameStartupTimeRecordType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
};

enum class EDecoyFiringState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EDecoyState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class EDESPMode : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EDoorState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EDestrucibleSurfaceSourceType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EFExplosivePropDataType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EDynamicWeather : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class E*e3c0c1b0c1 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ESeatDirection : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EBlueChipTowerInteractState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETdmSpawnKit : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class ESpecialEquipmentType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class ELobbyItemBundleType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ELobbyCharacterAnimationType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EParameterLUTChannel : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EMaterialParameterType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*3388524d75 : int32_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ENpcDirection : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ENpcWalkingSpeedType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ENpcCharacterStateType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
	                               = 21,
	                               = 22,
	                               = 23,
};

enum class ERandomType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ECustomAnimDataType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ECustomAnimSlotType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ERetriggerCounter : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EPathDebugType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*c1ea0bc490 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*4f47fcce33 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*9f859876b1 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*4b94ea2f67 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*71430a0c0a : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*3f84faa26b : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ETargetInteractionPurpose : int32_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ESpareTireProcessState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EMapColor : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EPackageDoorState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EThingGroupSpawnType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*cbccf4088b : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class ETeamParkourRole : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETeamParkourState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*e1bdee719c : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*3655118ede : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EContainerState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESpawnDestroyTiming : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAirDropType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EHelicopterState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EEmergencyAircraftState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EEmPickup_PathValidationState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*d0e20490b8 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*c388b24132 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*d71b9effaf : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EVehicleEngineState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*2ea0d62ef7 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ETslTrainingTeleportType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslTrainingType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
};

enum class ETrainingScoreType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class ETrainingPracticeType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EOneOnOneResultType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EOneOnOneSideType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EOneOnOneStageType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EClanNoticeUGCLevel : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EClanNameUGCLevel : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ERepairKitTargetType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ETslPreloadPriority : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EBlueChipTowerState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EBlueChipTowerAnimState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EFollowTargetType : int32_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EControlDebuffType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EBulletproofShieldDurabilityState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EBulletproofShieldInstallState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ELivingThingState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EBodyCarryState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ECountInfoAnimType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ECounterWidgetType : uint8_t
{
	                               = 0,
	                               = 1,
};

enum class EHungerCarePackageState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ECustomDamageEventReactionType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*e056166c8d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EScmCollisionGroup : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EDamageFieldType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EOptionTab : int32_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ETslGameOptionKeyBindingType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslGameOptionSupplementaryType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ENaviGamepadInputType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EDuelUIState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EDuelUITeam : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ETslFenceSelector : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EFlowTextState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*377a05c83d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ETslBlackZoneState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*0b93c72518 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EVendingMachineType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EItemSpawnType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ERedZoneInprogressState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EItemClientAnimSeqUnload : int32_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGarageState : int32_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EGasPumpType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EGasPumpState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*298afed037 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ETslIngameMission_ConditionData_InteractionType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ETslIngameMission_Condition_PlaceType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslIngameMission_ConditionData_VisitType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslIngameMission_ConditionData_ReviveType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ETslIngameMission_Condition_ParkourType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslIngameMission_ConditionData_KillType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ETslIngameMission_ConditionData_KillAssistType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslIngameMission_Condition_ComparisonType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ETslIngameMission_CoditionData_VehicleType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class ETslIngameMission_CoditionData_MoveType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class ETslIngameMissionCondition_FlareGunUsage : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslIngameMission_ConditionData_ItemType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ETslIngameMission_ConditionData_ItemUseType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ETslIngameMission_ConditionData_ItemMissionType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ETslIngameMissionRewardType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ETslIngameMissionType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*0aff3fb542 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ETslIngameMissionFailReason : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	Fail_CheckRewardActivation_InvalidMap = 15,
	Fail_ReplaceMission_InvalidMissionId = 16,
	Fail_ReplaceMission_MissionCompleted = 17,
	Fail_ReplaceMission_NoDataLeft = 18,
	Fail_ReplaceMission_ReachReplacementLimit = 19,
	Fail_ProcessNewMission_TooFewMissions = 20,
	Fail_ProcessNewMission_InvalidIndex = 21,
	ETslIngameMissionFailReason_MAX = 22,
};

enum class E*65b6580c18 : uint8_t
{
	*4486de2001                    = 0,
	*bfa91c2a68                    = 1,
	*19cb4377e1                    = 2,
	*fb35427d44                    = 3,
	*65b6580c18_MAX                = 4,
};

enum class EVendingMachineState : uint8_t
{
	ACTIVATED                      = 0,
	DEACTIVATED_TEMPORARILY_BY_PICK_DELAY = 1,
	DEACTIVATED_TEMPORARILY_BY_DAMAGE = 2,
	DEACTIVATED_TEMPORARILY_BY_JACKPOT = 3,
	DEACTIVATED_PERMANANTLY_BY_EXCEEDED_MAX_PICK_COUNT = 4,
	EVendingMachineState_MAX       = 5,
};

enum class EOutGameMontageState : uint8_t
{
	Default                        = 0,
	Playing                        = 1,
	Interrupted                    = 2,
	Finished                       = 3,
	EOutGameMontageState_MAX       = 4,
};

enum class EJukeBoxAnimState : uint8_t
{
	OPEN                           = 0,
	CLOSED                         = 1,
	JukeBoxAnimState_MAX           = 2,
};

enum class ELivingThingThreatLevel : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ELivingThingCustomEvent : uint8_t
{
	HittedByBullet                 = 50,
	HittedByExplosion              = 51,
	HittedByCar                    = 52,
	HittedByCharacter              = 53,
	HittedByLivingThing            = 54,
	HittedByPhysicsBody            = 55,
	HittedByOthers                 = 56,
	Custom1                        = 57,
	Custom2                        = 58,
	Custom3                        = 59,
	Custom4                        = 60,
	Custom5                        = 61,
	Custom6                        = 62,
	Custom7                        = 63,
	Custom8                        = 64,
	Custom9                        = 65,
	Custom10                       = 66,
	Custom11                       = 67,
	Custom12                       = 68,
	Custom13                       = 69,
	Custom14                       = 70,
	Custom15                       = 71,
	Custom16                       = 72,
	Custom17                       = 73,
	Custom18                       = 74,
	Custom19                       = 75,
	Custom20                       = 76,
	MAX                            = 77,
	ELivingThingCustomEvent_MAX    = 78,
};

enum class ETLMeshSelection : uint8_t
{
	Auto                           = 0,
	StaticMesh                     = 1,
	SkeletalMesh                   = 2,
	None                           = 3,
	ETLMeshSelection_MAX           = 4,
};

enum class ELobbyCharacterPosition : uint8_t
{
	Position1                      = 0,
	Position2                      = 1,
	Position3                      = 2,
	Position4                      = 3,
	ELobbyCharacterPosition_MAX    = 4,
};

enum class ELobbyCharacterReadyType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EEmPickupAircraftStatus : uint8_t
{
	Available                      = 0,
	InvalidPhase_Early             = 1,
	InvalidPhase_Late              = 2,
	QueueFull                      = 3,
	Disabled                       = 4,
	EEmPickupAircraftStatus_MAX    = 5,
};

enum class ETslRevivalPlayerState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETurnTableAnimState : uint8_t
{
	PLAYING                        = 0,
	STOPPED                        = 1,
	ETurnTableAnimState_MAX        = 2,
};

enum class EObserverPlayerListType : uint8_t
{
	Distance                       = 0,
	Kill                           = 1,
	Survivor                       = 2,
	Max                            = 3,
	EObserverPlayerListType_MAX    = 4,
};

enum class ETslParticleCullType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslParticleGroupPriority : uint8_t
{
	High                           = 0,
	Low                            = 1,
	ETslParticleGroupPriority_MAX  = 2,
};

enum class E*6864c935f6 : uint8_t
{
	*3d046917ae                    = 0,
	*5f8619674f                    = 1,
	*c1252e2c77                    = 2,
	*6c53582ef8                    = 3,
	*01f3103679                    = 4,
	*6864c935f6_MAX                = 5,
};

enum class ESpikeDeploymentState : uint8_t
{
	PreDeploy                      = 0,
	Deploying                      = 1,
	PostDeploy                     = 2,
	Popped                         = 3,
	Idle                           = 4,
	ESpikeDeploymentState_MAX      = 5,
};

enum class E40mmDeployState : uint8_t
{
	None                           = 0,
	FuseTriggered                  = 1,
	DeployStarted                  = 2,
	DeployFinished                 = 3,
	DeployFailed                   = 4,
	E40mmDeployState_MAX           = 5,
};

enum class E*4691565606 : uint8_t
{
	*be2ed8842f                    = 0,
	*362de7fa92                    = 1,
	*e86e4f90cb                    = 2,
	*4691565606_MAX                = 3,
};

enum class ETslPubgIdAssetType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EEmojiPlayType : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	EEmojiPlayType_MAX             = 2,
};

enum class ETslReferenceObjType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*9ac1171e60 : uint8_t
{
	*a72f898f28                    = 0,
	*7ad9e1ecef                    = 1,
	*b958e23afa                    = 2,
	*1595bf5309                    = 3,
	*9d76cab63c                    = 4,
	*9ac1171e60_MAX                = 5,
};

enum class ESoftRoleState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*0f2e0887c2 : uint8_t
{
	*1b45e7b1d6                    = 0,
	*846094a6d1                    = 1,
	*7cfb73286f                    = 2,
	*12805ddf15                    = 3,
	*4b41356752                    = 4,
	*0f2e0887c2_MAX                = 5,
};

enum class E*d281de11ea : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ERideVehicle : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESwitcherHideWhen : uint8_t
{
	UsingKeyboardMouse             = 0,
	UsingGamepad                   = 1,
	ESwitcherHideWhen_MAX          = 2,
};

enum class ETslFlareGunWidgetDisplayType : uint8_t
{
	Worldmap                       = 0,
	Hud                            = 1,
	ETslFlareGunWidgetDisplayType_MAX = 2,
};

enum class EConditionOfDeath : uint8_t
{
	HeadShot                       = 0,
	DBNO                           = 1,
	DBNOByHeadShot                 = 2,
	None                           = 3,
	EConditionOfDeath_MAX          = 4,
};

enum class ETslTeamInfoIconState : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EKeyIconCombinationDisplayType : uint8_t
{
	NotUsed                        = 0,
	Empty                          = 1,
	Plus                           = 2,
	Slash                          = 3,
	EKeyIconCombinationDisplayType_MAX = 4,
};

enum class EGamepadKeyIconDisplayType : uint8_t
{
	Tap                            = 0,
	DoubleTap                      = 1,
	ComboHold                      = 2,
	TimerHoldCircle                = 3,
	TimerHoldBar                   = 4,
	EGamepadKeyIconDisplayType_MAX = 5,
};

enum class EDirectMessageColorType : uint8_t
{
	Alert                          = 0,
	System                         = 1,
	Chat                           = 2,
	Clan                           = 3,
	MAX                            = 4,
	EDirectMessageColorType_MAX    = 5,
};

enum class ETslWheelWidgetMouseCursorDirectionType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETslWheelWidgetSelectType : uint8_t
{
	BY_CLICK                       = 0,
	BY_RELEASE                     = 1,
	BY_MAX                         = 2,
};

enum class EMinimapFocus : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EDisplayPlayerInfoType : uint8_t
{
	PlayerList                     = 0,
	EngagedEnemies                 = 1,
	NearbyPlayers                  = 2,
	OtherEngagements               = 3,
	ObserverTeamInfoList           = 4,
	EDisplayPlayerInfoType_MAX     = 5,
};

enum class EMatchResultTypeEnum : uint8_t
{
	INVALID                        = 0,
	DEFAULT                        = 1,
	OBSERVER                       = 2,
	LEAGUE                         = 3,
	TYPE_NUM                       = 4,
	MatchResultTypeEnum_MAX        = 5,
};

enum class EMarkStates : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETeenageInfoType : uint8_t
{
	Normal                         = 0,
	Season                         = 1,
	ETeenageInfoType_MAX           = 2,
};

enum class EGuideKeyType : uint8_t
{
	PickUp                         = 0,
	Drop                           = 1,
	QuickPickUp                    = 2,
	QuickDrop                      = 3,
	QuickPack                      = 4,
	Equip                          = 5,
	Unequip                        = 6,
	Swap                           = 7,
	Detach                         = 8,
	Unpack                         = 9,
	Use                            = 10,
	SwitchSlot                     = 11,
	Confirm                        = 12,
	Cancel                         = 13,
	Apply                          = 14,
	Purchase                       = 15,
	DetachAll                      = 16,
	UnpackAll                      = 17,
	PickUpAmount                   = 18,
	DropAmount                     = 19,
	SwapWeapon                     = 20,
	DropWeapon                     = 21,
	QuickEquip                     = 22,
	QuickEquip_NoHold              = 23,
	MoveToTrunk                    = 24,
	DropFromTrunk                  = 25,
	VicinityToTrunk                = 26,
	WeaponToTrunk                  = 27,
	Pack                           = 28,
	Pack_NoHold                    = 29,
	None                           = 30,
	EGuideKeyType_MAX              = 31,
};

enum class EBlueBlockerStateUIType : uint8_t
{
	None                           = 0,
	Active                         = 1,
	Deactive                       = 2,
	Hide                           = 3,
	EBlueBlockerStateUIType_MAX    = 4,
};

enum class ENoReloadGuideType : uint8_t
{
	Alwyas                         = 0,
	WhenCurrentWeapon              = 1,
	ENoReloadGuideType_MAX         = 2,
};

enum class EFiremode : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETraumaBagHealMode : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EDragState : uint8_t
{
	Block                          = 0,
	Backpack                       = 1,
	Drop                           = 2,
	Equip                          = 3,
	Swap                           = 4,
	Trunk                          = 5,
	None                           = 6,
	EDragState_MAX                 = 7,
};

enum class EKeyboardKeyIconDisplayType : uint8_t
{
	Tap                            = 0,
	DoubleTap                      = 1,
	Hold                           = 2,
	EKeyboardKeyIconDisplayType_MAX = 3,
};

enum class ETslMapMarkerTowerState : uint8_t
{
	Enable                         = 0,
	Active                         = 1,
	Disable                        = 2,
	ETslMapMarkerTowerState_MAX    = 3,
};

enum class ETslNotificationMessageAnimationType : uint8_t
{
	None                           = 0,
	Appear                         = 1,
	Loop                           = 2,
	ETslNotificationMessageAnimationType_MAX = 3,
};

enum class ETslNotificationMessageColorType : uint8_t
{
	RichText                       = 0,
	Default                        = 1,
	Blue                           = 2,
	Red                            = 3,
	Yellow                         = 4,
	ETslNotificationMessageColorType_MAX = 5,
};

enum class ERoundEndPointType : uint8_t
{
	Empty                          = 0,
	Lost                           = 1,
	Won                            = 2,
	Draw                           = 3,
	ERoundEndPointType_MAX         = 4,
};

enum class EVehicleAIAvoidanceMode : uint8_t
{
	Off                            = 0,
	SingleTrace                    = 1,
	MultiTrace                     = 2,
	EVehicleAIAvoidanceMode_MAX    = 3,
};

enum class ESpawnType : uint8_t
{
	Single                         = 0,
	ContinuousOnTimer              = 1,
	ContinuousOnDeath              = 2,
	ESpawnType_MAX                 = 3,
};

enum class E*c0ae5ef690 : uint8_t
{
	*121a165572                    = 0,
	*18292be3ce                    = 1,
	*16c03accf9                    = 2,
	*d108779577                    = 3,
	*40a81e19a3                    = 4,
	*22313e9e00                    = 5,
	*86e86f39d3                    = 6,
	*5f0bc9563a                    = 7,
	*f00dfe0098                    = 8,
	*fd3459a027                    = 9,
	*c0ae5ef690_MAX                = 10,
};

enum class ESurfaceEffect : uint8_t
{
	S_None                         = 0,
	S_Concrete_Roll                = 1,
	S_Concrete_Skid                = 2,
	S_Concrete_Spin                = 3,
	S_Dirt_Roll                    = 4,
	S_Dirt_Skid                    = 5,
	S_Dirt_Spin                    = 6,
	S_Water_Roll                   = 7,
	S_Water_Skid                   = 8,
	S_Water_Spin                   = 9,
	S_Metal_Roll                   = 10,
	S_Metal_Skid                   = 11,
	S_Metal_Spin                   = 12,
	S_Wood_Roll                    = 13,
	S_Wood_Skid                    = 14,
	S_Wood_Spin                    = 15,
	S_Rock_Roll                    = 16,
	S_Rock_Skid                    = 17,
	S_Rock_Spin                    = 18,
	S_Grass_Roll                   = 19,
	S_Grass_Skid                   = 20,
	S_Grass_Spin                   = 21,
	S_Sand_Roll                    = 22,
	S_Sand_Skid                    = 23,
	S_Sand_Spin                    = 24,
	S_Concrete_Brake               = 25,
	S_Dirt_Brake                   = 26,
	S_Water_Brake                  = 27,
	S_Metal_Brake                  = 28,
	S_Wood_Brake                   = 29,
	S_Rock_Brake                   = 30,
	S_Grass_Brake                  = 31,
	S_Sand_Brake                   = 32,
	S_Snow_Brake                   = 33,
	S_SnowRock_Brake               = 34,
	S_Ice_Brake                    = 35,
	S_Common_BrakeDisc             = 36,
	S_Concrete_Punctured_Roll      = 37,
	S_Concrete_Punctured_Skid      = 38,
	S_Concrete_Punctured_Spin      = 39,
	S_Concrete_Punctured_Brake     = 40,
	S_Snow_Roll                    = 41,
	S_Snow_Skid                    = 42,
	S_Snow_Spin                    = 43,
	S_SnowRock_Roll                = 44,
	S_SnowRock_Skid                = 45,
	S_SnowRock_Spin                = 46,
	S_Ice_Roll                     = 47,
	S_Ice_Skid                     = 48,
	S_Ice_Spin                     = 49,
	S_Mud_Roll                     = 50,
	S_Mud_Skid                     = 51,
	S_Mud_Spin                     = 52,
	S_Mud_Brake                    = 53,
	S_Common_Neutral               = 54,
	S_MAX                          = 55,
};

enum class EMortarWeaponInstallState : uint8_t
{
	None                           = 0,
	InstallInprogress              = 1,
	InstallComplete                = 2,
	Installed                      = 3,
	EMortarWeaponInstallState_MAX  = 4,
};

enum class ETslZiplinegunCancelReason : uint8_t
{
	CutInvalidAngle                = 0,
	CutCollideObject               = 1,
	Withdraw                       = 2,
	WithdrawMissingTarget          = 3,
	ETslZiplinegunCancelReason_MAX = 4,
};

enum class ETslZiplinegunState : uint8_t
{
	None                           = 0,
	Ready                          = 1,
	Hooked                         = 2,
	Withdraw                       = 3,
	ETslZiplinegunState_MAX        = 4,
};

enum class EMeleeThrowState : uint8_t
{
	Idle                           = 0,
	Prepare                        = 1,
	Throw                          = 2,
	EMeleeThrowState_MAX           = 3,
};

enum class E*10da9d8ea4 : uint8_t
{
	*13efd3d854                    = 0,
	*df861cc196                    = 1,
	*5dfc927719                    = 2,
	*10da9d8ea4_MAX                = 3,
};

enum class EDeployState : uint8_t
{
	INVALID                        = 0,
	UNDEPLOYED                     = 1,
	DEPLOYING                      = 2,
	DEPLOYED                       = 3,
	EDeployState_MAX               = 4,
};

enum class ERepairKitMode : uint8_t
{
	Helmet                         = 0,
	Vest                           = 1,
	None                           = 2,
	ERepairKitMode_MAX             = 3,
};

enum class E*2e7252c27b : uint8_t
{
	*cc42e0e910                    = 0,
	*cfe2f6bbbc                    = 1,
	*efd0400726                    = 2,
	*2e7252c27b_MAX                = 3,
};

enum class EBlendSequenceByBoolStartType : int32_t
{
	Restart                        = 0,
	SameTime                       = 1,
	EBlendSequenceByBoolStartType_MAX = 2,
};

enum class EJumpStartAnimationType : uint8_t
{
	Stationary                     = 0,
	Forward                        = 1,
	Backward                       = 2,
	EJumpStartAnimationType_MAX    = 3,
};

enum class ERotateBoneInputType : uint8_t
{
	Rotator                        = 0,
	AngleAxis                      = 1,
	ERotateBoneInputType_MAX       = 2,
};

enum class ERotateBoneSpace : uint8_t
{
	BoneSpace                      = 0,
	LocalSpace                     = 1,
	WorldSpace                     = 2,
	ERotateBoneSpace_MAX           = 3,
};

enum class EDuelMatchResult : uint8_t
{
	Win                            = 0,
	Lose                           = 1,
	EDuelMatchResult_MAX           = 2,
};

enum class ELogSendTiming : uint8_t
{
	DuelMatchEnd                   = 0,
	MatchEnd                       = 1,
	ELogSendTiming_MAX             = 2,
};

enum class E*62dc297ab3 : uint8_t
{
	*20934343b3                    = 0,
	*812f93c43b                    = 1,
	*55c8c3dc2a                    = 2,
	*9407aca0f4                    = 3,
	*62dc297ab3_MAX                = 4,
};

enum class E*adcc596361 : uint8_t
{
	*f487492888                    = 0,
	*5b86c88965                    = 1,
	*b3b8d7c7af                    = 2,
	*d1aaf7c6e5                    = 3,
	*d88487afea                    = 4,
	*2df43d8da4                    = 5,
	*3270fd311a                    = 6,
	*adcc596361_MAX                = 7,
};

enum class EFoliageScaling : uint8_t
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	LockXZ                         = 3,
	LockYZ                         = 4,
	EFoliageScaling_MAX            = 5,
};

enum class EVertexColorMaskChannel : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	MAX_None                       = 4,
	EVertexColorMaskChannel_MAX    = 5,
};

enum class EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5,
};

enum class E*0f2a2d3d10 : uint8_t
{
	*4ac1fd3eff                    = 1,
	*b2b9e81b31                    = 2,
	*1948188068                    = 3,
	*04747afd1c                    = 4,
	*0f2a2d3d10_MAX                = 5,
};

enum class ESimulationOverlap : uint8_t
{
	CollisionOverlap               = 0,
	ShadeOverlap                   = 1,
	None                           = 2,
	ESimulationOverlap_MAX         = 3,
};

enum class EUINavigationRule : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EUINavigation : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Up                             = 2,
	Down                           = 3,
	Next                           = 4,
	Previous                       = 5,
	Num                            = 6,
	Invalid                        = 7,
	EUINavigation_MAX              = 8,
};

enum class ECheckBoxState : uint8_t
{
	Unchecked                      = 0,
	Checked                        = 1,
	Undetermined                   = 2,
	ECheckBoxState_MAX             = 3,
};

enum class ESlateBrushImageType : uint8_t
{
	NoImage                        = 0,
	FullColor                      = 1,
	Linear                         = 2,
	ESlateBrushImageType_MAX       = 3,
};

enum class ESlateBrushMirrorType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESlateBrushTileType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESlateColorStylingMode : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESlateBrushDrawType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESelectInfo : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EConsumeMouseWheel : uint8_t
{
	WhenScrollingPossible          = 0,
	Always                         = 1,
	Never                          = 2,
	EConsumeMouseWheel_MAX         = 3,
};

enum class EFontHinting : uint8_t
{
	Default                        = 0,
	Auto                           = 1,
	AutoLight                      = 2,
	Monochrome                     = 3,
	None                           = 4,
	EFontHinting_MAX               = 5,
};

enum class ETextCommit : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETextShapingMethod : uint8_t
{
	Auto                           = 0,
	KerningOnly                    = 1,
	FullShaping                    = 2,
	ETextShapingMethod_MAX         = 3,
};

enum class E*e3c2faf396 : uint8_t
{
	*6606cdc4e2                    = 0,
	*336feb987e                    = 1,
	*475a41d60b                    = 2,
	*e3c2faf396_MAX                = 3,
};

enum class EFontLoadingPolicy : uint8_t
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3,
};

enum class E*d5e9c3f153 : uint8_t
{
	*6422e9ac2c                    = 0,
	*0f99fd5c29                    = 1,
	*2505d5d0fa                    = 2,
	*91667308ed                    = 3,
	*d5e9c3f153_MAX                = 4,
};

enum class E*a449a83b3d : uint8_t
{
	*6391a2205b                    = 0,
	*cb8ea5328f                    = 1,
	*1a698c13aa                    = 2,
	*a449a83b3d_MAX                = 3,
};

enum class EOrientation : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EMenuPlacement : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4,
};

enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4,
};

enum class ENavigationGenesis : uint8_t
{
	Keyboard                       = 0,
	Controller                     = 1,
	User                           = 2,
	ENavigationGenesis_MAX         = 3,
};

enum class E*828ac1e2b6 : uint8_t
{
	*edd214227b                    = 0,
	*7933bb6e7b                    = 1,
	*7d074b4ca2                    = 2,
	*828ac1e2b6_MAX                = 3,
};

enum class E*99962b340b : uint8_t
{
	*9dcb3517aa                    = 0,
	*e4aec91dd5                    = 1,
	*3d2a3a216a                    = 2,
	*ad29c7cd1b                    = 3,
	*99962b340b_MAX                = 4,
};

enum class EButtonTouchMethod : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EButtonClickMethod : uint8_t
{
	DownAndUp                      = 0,
	MouseDown                      = 1,
	MouseUp                        = 2,
	PreciseClick                   = 3,
	EButtonClickMethod_MAX         = 4,
};

enum class ESlateCheckBoxType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EFocusCause : uint8_t
{
	Mouse                          = 0,
	Navigation                     = 1,
	SetDirectly                    = 2,
	Cleared                        = 3,
	OtherWidgetLostFocus           = 4,
	WindowActivate                 = 5,
	EFocusCause_MAX                = 6,
};

enum class ETextGender : uint8_t
{
	Masculine                      = 0,
	Feminine                       = 1,
	Neuter                         = 2,
	ETextGender_MAX                = 3,
};

enum class EFormatArgumentType : uint8_t
{
	Int                            = 0,
	UInt                           = 1,
	Float                          = 2,
	Double                         = 3,
	Text                           = 4,
	Gender                         = 5,
	EFormatArgumentType_MAX        = 6,
};

enum class EEndPlayReason : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ENavPathEvent : uint8_t
{
	Cleared                        = 0,
	NewPath                        = 1,
	UpdatedDueToGoalMoved          = 2,
	UpdatedDueToNavigationChanged  = 3,
	Invalidated                    = 4,
	RePathFailed                   = 5,
	MetaPathUpdate                 = 6,
	Custom                         = 7,
	ENavPathEvent_MAX              = 8,
};

enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4,
};

enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4,
};

enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4,
};

enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6,
};

enum class EAnimLinkMethod : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	Proportional                   = 2,
	EAnimLinkMethod_MAX            = 3,
};

enum class ENotifyFilterType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EMontageNotifyTickType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAnimNotifyEventType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ERootMotionRootLock : uint8_t
{
	RefPose                        = 0,
	AnimFirstFrame                 = 1,
	Zero                           = 2,
	ERootMotionRootLock_MAX        = 3,
};

enum class EAlphaBlendOption : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	HermiteCubic                   = 2,
	Sinusoidal                     = 3,
	QuadraticInOut                 = 4,
	CubicInOut                     = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	Custom                         = 14,
	EAlphaBlendOption_MAX          = 15,
};

enum class ETravelFailure : uint8_t
{
	NoLevel                        = 0,
	LoadMapFailure                 = 1,
	InvalidURL                     = 2,
	PackageMissing                 = 3,
	PackageVersion                 = 4,
	NoDownload                     = 5,
	TravelFailure                  = 6,
	CheatCommands                  = 7,
	PendingNetGameCreateFailure    = 8,
	CloudSaveFailure               = 9,
	ServerTravelFailure            = 10,
	ClientTravelFailure            = 11,
	ETravelFailure_MAX             = 12,
};

enum class ENetworkFailure : uint8_t
{
	NetDriverAlreadyExists         = 0,
	NetDriverCreateFailure         = 1,
	NetDriverListenFailure         = 2,
	ConnectionLost                 = 3,
	ConnectionTimeout              = 4,
	FailureReceived                = 5,
	OutdatedClient                 = 6,
	OutdatedServer                 = 7,
	PendingConnectionFailure       = 8,
	NetGuidMismatch                = 9,
	NetChecksumMismatch            = 10,
	ENetworkFailure_MAX            = 11,
};

enum class ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8,
};

enum class EPendingCreationType : uint8_t
{
	None                           = 0,
	IncrementalAndOnDemand         = 1,
	OnDemandOnly                   = 2,
	EPendingCreationType_MAX       = 3,
};

enum class EComponentCreationMethod : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EPlaneConstraintAxisSetting : uint8_t
{
	Custom                         = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	UseGlobalPhysicsSetting        = 4,
	EPlaneConstraintAxisSetting_MAX = 5,
};

enum class E*fb3b8240a1 : uint8_t
{
	*dadfe8e477                    = 0,
	*c4225e6394                    = 1,
	*b005ca3065                    = 2,
	*f469ae2833                    = 3,
	*0e70747e68                    = 4,
	*fb3b8240a1_MAX                = 5,
};

enum class E*3717492a9c : uint8_t
{
	*f37e950530                    = 0,
	*337fb1ca40                    = 1,
	*aeab3af153                    = 2,
	*14504a4b6b                    = 3,
	*c665568a68                    = 4,
	*8502bbbd38                    = 5,
	*a7c3050f42                    = 6,
	*3717492a9c_MAX                = 7,
};

enum class EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7,
};

enum class EScreenOrientation : uint8_t
{
	Unknown                        = 0,
	Portrait                       = 1,
	PortraitUpsideDown             = 2,
	LandscapeLeft                  = 3,
	LandscapeRight                 = 4,
	FaceUp                         = 5,
	FaceDown                       = 6,
	EScreenOrientation_MAX         = 7,
};

enum class EObjectTypeQuery : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EDrawDebugTrace : uint8_t
{
	None                           = 0,
	ForOneFrame                    = 1,
	ForDuration                    = 2,
	Persistent                     = 3,
	EDrawDebugTrace_MAX            = 4,
};

enum class EQuitPreference : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EMoveComponentAction : uint8_t
{
	Move                           = 0,
	Stop                           = 1,
	Return                         = 2,
	EMoveComponentAction_MAX       = 3,
};

enum class ETraceTypeQuery : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5,
};

enum class EStanceMode : uint8_t
{
	STANCE_None                    = 0,
	STANCE_Stand                   = 1,
	STANCE_Crouch                  = 2,
	STANCE_Prone                   = 3,
	STANCE_Carry                   = 4,
	STANCE_Carried                 = 5,
	STANCE_MAX                     = 6,
};

enum class EAttachmentRule : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAttachLocation : uint8_t
{
	KeepRelativeOffset             = 0,
	KeepWorldPosition              = 1,
	SnapToTarget                   = 2,
	SnapToTargetIncludingScale     = 3,
	EAttachLocation_MAX            = 4,
};

enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4,
};

enum class E*947224e85a : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAutoReceiveInput : uint8_t
{
	Disabled                       = 0,
	Player0                        = 1,
	Player1                        = 2,
	Player2                        = 3,
	Player3                        = 4,
	Player4                        = 5,
	Player5                        = 6,
	Player6                        = 7,
	Player7                        = 8,
	EAutoReceiveInput_MAX          = 9,
};

enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*137a119326 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EActorUpdateOverlapsMethod : uint8_t
{
	UseConfigDefault               = 0,
	AlwaysUpdate                   = 1,
	OnlyUpdateMovable              = 2,
	NeverUpdate                    = 3,
	EActorUpdateOverlapsMethod_MAX = 4,
};

enum class E*81ce2248c6 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*14ca94c963 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAutoPossessAI : uint8_t
{
	Disabled                       = 0,
	PlacedInWorld                  = 1,
	Spawned                        = 2,
	PlacedInWorldOrSpawned         = 3,
	EAutoPossessAI_MAX             = 4,
};

enum class E*a819f92cc2 : uint8_t
{
	*30b5ada45d                    = 0,
	*b87a1784c6                    = 1,
	*260b13b9b7                    = 2,
	*40c6485a15                    = 3,
	*0556958a84                    = 4,
	*67d4847d8e                    = 5,
	*a819f92cc2_MAX                = 6,
};

enum class EDecalChannel : uint8_t
{
	Channel0                       = 0,
	Channel1                       = 1,
	Channel2                       = 2,
	Channel3                       = 3,
	Num                            = 4,
	EDecalChannel_MAX              = 5,
};

enum class E*6a99275255 : uint8_t
{
	*1e561cfeb3                    = 0,
	*aabf02da46                    = 1,
	*99d35567d1                    = 2,
	*0c911c55a0                    = 3,
	*138d11f69b                    = 4,
	*6a99275255_MAX                = 5,
};

enum class EMeshBufferAccess : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*76d90cc478 : uint8_t
{
	*b779ada148                    = 0,
	*9bfc673c5e                    = 1,
	*10236e0a3a                    = 2,
	*76d90cc478_MAX                = 3,
};

enum class E*a9a39372ea : uint8_t
{
	*9189946c0e                    = 0,
	*e721210471                    = 1,
	*8e1bdaea42                    = 2,
	*d41f8c70e7                    = 3,
	*a9a39372ea_MAX                = 4,
};

enum class EComponentSocketType : uint8_t
{
	Invalid                        = 0,
	Bone                           = 1,
	Socket                         = 2,
	EComponentSocketType_MAX       = 3,
};

enum class EComponentMobility : uint8_t
{
	Static                         = 0,
	Stationary                     = 1,
	Movable                        = 2,
	EComponentMobility_MAX         = 3,
};

enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
	                               = 21,
	                               = 22,
	                               = 23,
	                               = 24,
	                               = 25,
	                               = 26,
	                               = 27,
	                               = 28,
	                               = 29,
	                               = 30,
	                               = 31,
	                               = 32,
	                               = 33,
	                               = 34,
	                               = 35,
	                               = 36,
	                               = 37,
	                               = 38,
	                               = 39,
	                               = 40,
	                               = 41,
	                               = 42,
	                               = 43,
	                               = 44,
	                               = 45,
	                               = 46,
	                               = 47,
	                               = 48,
	                               = 49,
	                               = 50,
	                               = 51,
	                               = 52,
	                               = 53,
	                               = 54,
	                               = 55,
	                               = 56,
	                               = 57,
	                               = 58,
	                               = 59,
	                               = 60,
	                               = 61,
	                               = 62,
	                               = 63,
	                               = 64,
};

enum class EWalkableSlopeBehavior : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ENetDormancy : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class E*9b1d01ae95 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class E*11b7d13f8d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*c15602fbfd : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ECollisionEnabled : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*5b720484e9 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class ESleepFamily : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*6767e00e5c : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*ee17ff7999 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ECollisionResponse : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*054c62541c : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*2b535c6cbc : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ECollisionChannel : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ENetworkSmoothingMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*8737afe16e : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*dee2d29f34 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class E*fb15610048 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EMaterialSamplerType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class E*369c4014a1 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EMaterialShadingModel : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
};

enum class EParticleCollisionMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*37a70a378c : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EGBufferFormat : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 3,
	                               = 5,
	                               = 6,
};

enum class E*d71d0b9991 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ESceneCaptureSource : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
};

enum class ETranslucentSortPolicy : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*d21a10882c : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ETranslucencyLightingMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class E*98ff7ca8aa : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EBlendMode : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*6e943d9fc9 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*3acc284b80 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*c03d1dfce5 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*718fab41cd : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EAspectRatioAxisConstraint : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*345b607628 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 18,
	                               = 19,
	                               = 20,
	                               = 21,
	                               = 22,
	                               = 23,
	                               = 24,
	                               = 25,
	                               = 26,
	                               = 27,
	                               = 28,
	                               = 29,
	                               = 30,
	                               = 31,
	                               = 32,
	                               = 255,
	                               = 256,
};

enum class EDemoFailure : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
	                               = 21,
	                               = 22,
	                               = 23,
	                               = 24,
	                               = 25,
	                               = 26,
	                               = 27,
	                               = 28,
	                               = 29,
	                               = 30,
	                               = 31,
	                               = 32,
	                               = 33,
	                               = 34,
	                               = 35,
	                               = 36,
	                               = 37,
	                               = 38,
	                               = 39,
	                               = 40,
	                               = 41,
	                               = 42,
	                               = 43,
	                               = 44,
	                               = 45,
	                               = 46,
	                               = 47,
	                               = 48,
	                               = 49,
	                               = 50,
	                               = 51,
	                               = 52,
	                               = 53,
	                               = 54,
};

enum class E*44edaab5cf : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ENetworkLagState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EMouseLockMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EMouseCaptureMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ENodeEnabledState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ENodeAdvancedPins : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ENodeTitleType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EEdGraphPinDirection : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class E*5a038504a8 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*e9a736301d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*b9d0e69aa6 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ESimplygonMaterialChannel : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESimplygonTextureResolution : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESimplygonColorChannels : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ESimplygonTextureSamplingQuality : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ESimplygonCasterType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ESimplygonTextureStrech : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EMaterialLODType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ESimplygonLODType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EOptimizationMetric : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EMaterialProxySmaplingQuality : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EUVStrech : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EMaterialMergeType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ETextureSizingType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*4326201086 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EMeshLODSelectionType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*ddbb1282a3 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ELandscapeCullingPrecision : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EPhysXAggregationMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EChartAggregationMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 4,
	                               = 5,
};

enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EImposterCaptureType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EMeshFeatureImportance : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EAutoBenchPathType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EAutoBenchViewMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EMaterialProperty : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EDOFMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class ENavigationQueryResult : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ENavDataGatheringModeConfig : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ENavDataGatheringMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ENavigationOptionFlag : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*1831097b05 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
};

enum class EHasCustomNavigableGeometry : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*1cbba5d976 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EStaticMeshLODType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class E*b6bba4dd3c : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*10218b0300 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class E*b5c001ed59 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*790d59207a : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*04c20c465c : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class EReverbPreset : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
	                               = 21,
	                               = 22,
	                               = 23,
};

enum class E*88135e3d4d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*6d5f261ef0 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EHBAOBlurRadius : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EBloomMethod : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EAutoExposureMethod : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EAntiAliasingMethod : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EDepthOfFieldMethod : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ECameraAnimPlaySpace : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ECameraProjectionMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class E*90060cccbe : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*b179f332a7 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EDynamicForceFeedbackAction : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*027d8a3fa4 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*1c4e903079 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*7fa6e4a123 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EMaterialDomain : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class ERuntimeGenerationType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ERecastPartitioning : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*9a529937c3 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ENavLinkDirection : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*f6afe7fa7b : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*9cf2724432 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*76070f06ef : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EParticleEventType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*e501fd87f5 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*7fbf2eb993 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*8e14162440 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EAxisOption : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class EAnimInterpolationType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ECurveBlendOption : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EAdditiveAnimationType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EBoneRotationSource : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EBoneControlSpace : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EBoneAxis : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ESkeletalMeshLODType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ESkeletalMeshOptimizationType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EAnimationCompressionFormat : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class E*4884bb1b05 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*c6d25ae88a : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EAnimGroupRole : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*e44e32cd7e : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*d297334e18 : uint8_t
{
	                               = 1,
	                               = 2,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class ERootMotionSourceStatusFlags : uint8_t
{
	                               = 1,
	                               = 2,
	                               = 4,
	                               = 5,
};

enum class ERootMotionAccumulateMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class E*40b1a885d0 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ESplineDecalActorSelector : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EBoneTranslationRetargetingMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*83fcf3aabb : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*2579d0cfbc : uint8_t
{
	                               = 1,
	                               = 2,
	                               = 4,
	                               = 8,
	                               = 16,
	                               = 32,
	                               = 64,
	                               = 65,
	                               = 66,
};

enum class E*6a2670b041 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*6f474202fa : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EAngularDriveMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EAttenuationShape : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EAttenuationDistanceModel : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*260b818d3b : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*71eb66c3c0 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EPreviewIndexType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ESpawnPointRollType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*4652f1b5f9 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EPrimaryAssetCookRule : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EBoneSpaces : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EMeshComponentUpdateFlag : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*54c9d7457a : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*9c43815d08 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*bcae0b8724 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EAnimationMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ESplineMeshAxis : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ETextureDownscaleOptions : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
};

enum class ETextureSamplerFilter : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ETexturePowerOfTwoSetting : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ETextureMipGenSettings : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
};

enum class ETextureGroup : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*196a99d7c8 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
};

enum class E*a4ee3a804a : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*619009da3d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*8410903050 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*dae8970339 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ETextureFilter : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ETextureCompressionSettings : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESplineCoordinateSpace : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ESplinePointType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*a5e3ae7124 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*f7feabed9e : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*73552b4096 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*d608068afe : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EStereoLayerType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EWindSourceType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ETimelineDirection : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class E*36412192a7 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EAnimationKeyFormat : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ENotifyTriggerMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*feedf87c9a : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*ff2c196427 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*8142d4fd98 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EMontagePlayReturnType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class E*6cfb3d81d3 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EBlueprintNativizationFlag : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EBlueprintCompileMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EBlueprintType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*bdd005e896 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class EEvaluateCurveTableResult : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EGrammaticalNumber : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EGrammaticalGender : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ESuggestProjVelocityTraceOption : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EHMDWornState : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EHMDTrackingOrigin : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EOrientPositionSelector : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*b69815e704 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EEasingFunc : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
};

enum class ERoundingMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class EFNavigationSystemRunMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*49754e55c7 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EPhysicsType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class ECollisionTraceFlag : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*e74502f487 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*9ba9cb8348 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class E*0f0cdb1e87 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EFrictionCombineMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ESettingsLockedAxis : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ESettingsDOF : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EAutoExposureMethodUI : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EEarlyZPass : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class ECustomDepthStencil : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EMobileMSAASampleCount : uint8_t
{
	                               = 1,
	                               = 2,
	                               = 4,
	                               = 8,
	                               = 9,
};

enum class ECompositingSampleCount : uint8_t
{
	                               = 1,
	                               = 2,
	                               = 4,
	                               = 8,
	                               = 9,
};

enum class EClearSceneOptions : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EUIScalingRule : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class ERenderFocusRule : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*7c7aac0316 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*a22089d2b8 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*4dc7ec3c4e : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*d3beb6fc33 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class E*ca4340e288 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*e4b4d98075 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EFontCacheType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EGraphicsAPIType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EWindowMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*4eb169809d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*64976f3cd1 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*6b2f6257fc : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class E*b06d5df699 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*e7174e111d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*f2994e7d7c : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EMaterialAttributeBlend : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*9cd1f91ad2 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*ed5a282fe9 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*2ba66b4b2e : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*550907c13d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
};

enum class ENoiseFunction : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*6d9cc4be47 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EMaterialSceneAttributeInputMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ESceneTextureId : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*36a1881c0d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*4607d0a36a : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*89fc32c173 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class E*6a737827f5 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class ETextureChannel : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*e385e92664 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*4c1ce1936c : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EMaterialExposedTextureProperty : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EMaterialVectorCoordTransform : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EMaterialVectorCoordTransformSource : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EMaterialPositionTransformSource : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*c76844a6f5 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EMaterialExposedViewProperty : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class E*117db10f47 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class E*673447620c : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*e42ea6f84a : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*71133109e3 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EParticleSubUVInterpMethod : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*478a413434 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*24eef1f909 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class EParticleSystemInsignificanceReaction : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class EParticleSignificanceLevel : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*048882105c : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*fc1fe8f3f2 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
};

enum class E*1c8ddf3fab : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*78cfadbb2e : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*9cb16b726a : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*61e72ed5d0 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*2d40be6bf4 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*454e4b8b1d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class EParticleCollisionResponse : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*53b642a398 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*7140bae99f : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*bbeb0e684e : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*173e873906 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*7e64ebbc8d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*9f5612b8c9 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*e3e8f4c88f : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
};

enum class E*0071a7b1d9 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class E*2561c4d780 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*01e12f4e9a : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*ccc2c8a77f : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*a0daf2b51b : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class EParticleUVFlipMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class E*af5f85ab51 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*d117270aef : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*c45de4a525 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*94af1367e7 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*8d51c3440f : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
};

enum class E*334c874018 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*a2a7bac6d0 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*31a792982e : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
};

enum class E*f99e2ecd9a : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*51c0a0e1d2 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*4a910ebc8c : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*047e442228 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*6ff745f320 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EReporterLineStyle : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class ELegendPosition : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EGraphDataStyle : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EGraphAxisStyle : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EConstraintTransform : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
};

enum class EControlConstraint : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*4ef29d71a7 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EMaxConcurrentResolutionRule : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
};

enum class ESoundGroup : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
	                               = 12,
	                               = 13,
	                               = 14,
	                               = 15,
	                               = 16,
	                               = 17,
	                               = 18,
	                               = 19,
	                               = 20,
	                               = 21,
	                               = 22,
	                               = 23,
	                               = 24,
	                               = 25,
};

enum class E*75bfe53f38 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
};

enum class EAudioOutputTarget : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class E*3cfaf5bd08 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class E*ccc234207d : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
};

enum class E*0db6a859c1 : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EVolumetricDataFormat : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
	                               = 5,
	                               = 6,
	                               = 7,
	                               = 8,
	                               = 9,
	                               = 10,
	                               = 11,
};

enum class EPostCopyOperation : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EPinHidingMode : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
	                               = 4,
};

enum class EAnimAlphaInputType : uint8_t
{
	                               = 0,
	                               = 1,
	                               = 2,
	                               = 3,
};

enum class EEvaluatorMode : uint8_t
{
	                               = 0,
	EM_Freeze                      = 1,
	EM_DelayedFreeze               = 2,
	EM_MAX                         = 3,
};

enum class EEvaluatorDataSource : uint8_t
{
	EDS_SourcePose                 = 0,
	EDS_DestinationPose            = 1,
	EDS_MAX                        = 2,
};

enum class E*89fe4fdb5b : uint8_t
{
	*84c2e9ea22                    = 0,
	*55730f32e4                    = 1,
	*a0c2ceaad9                    = 2,
	*89fe4fdb5b_MAX                = 3,
};

enum class EVertexPaintAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EVertexPaintAxis_MAX           = 3,
};

enum class EDrawDebugItemType : uint8_t
{
	DirectionalArrow               = 0,
	Sphere                         = 1,
	Line                           = 2,
	OnScreenMessage                = 3,
	CoordinateSystem               = 4,
	EDrawDebugItemType_MAX         = 5,
};

enum class EAnimPhysCollisionType : uint8_t
{
	CoM                            = 0,
	CustomSphere                   = 1,
	InnerSphere                    = 2,
	OuterSphere                    = 3,
	AnimPhysCollisionType_MAX      = 4,
};

enum class EAnimPhysTwistAxis : uint8_t
{
	AxisX                          = 0,
	AxisY                          = 1,
	AxisZ                          = 2,
	AnimPhysTwistAxis_MAX          = 3,
};

enum class EWindowTitleBarMode : uint8_t
{
	Overlay                        = 0,
	VerticalBox                    = 1,
	EWindowTitleBarMode_MAX        = 2,
};

enum class E*8baa60bc93 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAbilityGenericReplicatedEvent : uint8_t
{
	GenericConfirm                 = 0,
	GenericCancel                  = 1,
	InputPressed                   = 2,
	InputReleased                  = 3,
	GenericSignalFromClient        = 4,
	GenericSignalFromServer        = 5,
	GameCustom1                    = 6,
	GameCustom2                    = 7,
	GameCustom3                    = 8,
	GameCustom4                    = 9,
	GameCustom5                    = 10,
	GameCustom6                    = 11,
	MAX                            = 12,
	EAbilityGenericReplicatedEvent_MAX = 13,
};

enum class EGameplayAbilityActivationMode : uint8_t
{
	Authority                      = 0,
	NonAuthority                   = 1,
	Predicting                     = 2,
	Confirmed                      = 3,
	Rejected                       = 4,
	EGameplayAbilityActivationMode_MAX = 5,
};

enum class E*dfb79d08a4 : uint8_t
{
	*a7999aa616                    = 0,
	*ad8a137368                    = 1,
	*1689e13d8e                    = 2,
	*dfb79d08a4_MAX                = 3,
};

enum class EGameplayCueEvent : uint8_t
{
	OnActive                       = 0,
	WhileActive                    = 1,
	Executed                       = 2,
	Removed                        = 3,
	EGameplayCueEvent_MAX          = 4,
};

enum class EGameplayEffectStackingType : uint8_t
{
	None                           = 0,
	AggregateBySource              = 1,
	AggregateByTarget              = 2,
	EGameplayEffectStackingType_MAX = 3,
};

enum class EGameplayModOp : uint8_t
{
	Additive                       = 0,
	Multiplicitive                 = 1,
	Division                       = 2,
	Override                       = 3,
	Max                            = 4,
	EGameplayModOp_MAX             = 5,
};

enum class EGameplayModEvaluationChannel : uint8_t
{
	Channel0                       = 0,
	Channel1                       = 1,
	Channel2                       = 2,
	Channel3                       = 3,
	Channel4                       = 4,
	Channel5                       = 5,
	Channel6                       = 6,
	Channel7                       = 7,
	Channel8                       = 8,
	Channel9                       = 9,
	Channel_MAX                    = 10,
	EGameplayModEvaluationChannel_MAX = 11,
};

enum class E*036a3a30ac : uint8_t
{
	*1b494e6bd7                    = 0,
	*fe96451988                    = 1,
	*52fa45bdc3                    = 2,
	*f38512feaf                    = 3,
	*036a3a30ac_MAX                = 4,
};

enum class EGameplayTargetingConfirmation : uint8_t
{
	Instant                        = 0,
	UserConfirmed                  = 1,
	Custom                         = 2,
	CustomMulti                    = 3,
	EGameplayTargetingConfirmation_MAX = 4,
};

enum class ERepAnimPositionMethod : uint8_t
{
	Position                       = 0,
	CurrentSectionId               = 1,
	ERepAnimPositionMethod_MAX     = 2,
};

enum class E*bd07b7eaaf : uint8_t
{
	*3f9d47a0f0                    = 0,
	*6c156c4e90                    = 1,
	*03d3375a2f                    = 2,
	*64d0dfc1d6                    = 3,
	*bd07b7eaaf_MAX                = 4,
};

enum class E*70a33122d3 : uint8_t
{
	*f369a82825                    = 0,
	*b65e17a3ea                    = 1,
	*6e7394264f                    = 2,
	*70a33122d3_MAX                = 3,
};

enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
	ClientOrServer                 = 0,
	ServerOnlyExecution            = 1,
	ServerOnlyTermination          = 2,
	ServerOnly                     = 3,
	EGameplayAbilityNetSecurityPolicy_MAX = 4,
};

enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	LocalPredicted                 = 0,
	LocalOnly                      = 1,
	ServerInitiated                = 2,
	ServerOnly                     = 3,
	EGameplayAbilityNetExecutionPolicy_MAX = 4,
};

enum class E*1462c32082 : uint8_t
{
	*085b999369                    = 0,
	*15522bf7bf                    = 1,
	*d5ad80c330                    = 2,
	*9af0b8f777                    = 3,
	*1462c32082_MAX                = 4,
};

enum class E*ff64bd0a2b : uint8_t
{
	*20f25305ba                    = 0,
	*5402043400                    = 1,
	*da7cb71955                    = 2,
	*d2bc4d02f0                    = 3,
	*ff64bd0a2b_MAX                = 4,
};

enum class E*2444609290 : uint8_t
{
	*6552ef0053                    = 0,
	*5806b29e86                    = 1,
	*33bc71ca40                    = 2,
	*429560fd30                    = 3,
	*2444609290_MAX                = 4,
};

enum class E*863aa4c996 : uint8_t
{
	*3055989529                    = 0,
	*035df51e60                    = 1,
	*82332d2413                    = 2,
	*b7bf5df375                    = 3,
	*863aa4c996_MAX                = 4,
};

enum class E*59688ff1a8 : uint8_t
{
	*2e7438f387                    = 0,
	*6552ef0053                    = 1,
	*e7fc1632b3                    = 2,
	*59688ff1a8_MAX                = 3,
};

enum class E*56a3df7d08 : uint8_t
{
	*055f0057b9                    = 0,
	*3c26638b87                    = 1,
	*4c06b6f63e                    = 2,
	*56a3df7d08_MAX                = 3,
};

enum class EGameplayEffectDurationType : uint8_t
{
	Instant                        = 0,
	Infinite                       = 1,
	HasDuration                    = 2,
	EGameplayEffectDurationType_MAX = 3,
};

enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	CapturedAttributeBacked        = 0,
	Transient                      = 1,
	EGameplayEffectScopedModifierAggregatorType_MAX = 2,
};

enum class EAttributeBasedFloatCalculationType : uint8_t
{
	AttributeMagnitude             = 0,
	AttributeBaseValue             = 1,
	AttributeBonusMagnitude        = 2,
	AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType_MAX = 4,
};

enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	ScalableFloat                  = 0,
	AttributeBased                 = 1,
	CustomCalculationClass         = 2,
	SetByCaller                    = 3,
	EGameplayEffectMagnitudeCalculation_MAX = 4,
};

enum class EGameplayEffectReplicationMode : uint8_t
{
	Minimal                        = 0,
	Mixed                          = 1,
	Full                           = 2,
	EGameplayEffectReplicationMode_MAX = 3,
};

enum class E*b2aaf76398 : uint8_t
{
	*8b30128a34                    = 1,
	*ca5b0fbd70                    = 2,
	*0429ab4636                    = 4,
	*4c52819136                    = 5,
	*b2aaf76398_MAX                = 6,
};

enum class E*d814f4bef7 : uint8_t
{
	*ede9c444b1                    = 0,
	*20fee31a6f                    = 1,
	*24e110b614                    = 2,
	*df5d0614d8                    = 3,
	*d814f4bef7_MAX                = 4,
};

enum class E*5d3e49ef9e : uint8_t
{
	*f75b96da83                    = 0,
	*fa85bc5907                    = 1,
	*0468fc332d                    = 2,
	*c9dd538ac8                    = 3,
	*5d3e49ef9e_MAX                = 4,
};

enum class EWaitAttributeChangeComparison : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*46517825ef : uint8_t
{
	*6c3f5fce96                    = 0,
	*26ed9ae3e4                    = 1,
	*b6a031e997                    = 2,
	*76a949fc19                    = 3,
	*1f9c385777                    = 4,
	*5bf6a2f703                    = 5,
	*d73e2043c8                    = 6,
	*92af329def                    = 7,
	*0f80c08b64                    = 8,
	*fb08caa41d                    = 9,
	*46517825ef_MAX                = 10,
};

enum class E*0ada603871 : uint8_t
{
	*428d8f5060                    = 0,
	*854fab50e9                    = 1,
	*18f28f1aed                    = 2,
	*0ada603871_MAX                = 3,
};

enum class E*50fc0c4795 : uint8_t
{
	*b3f2a582ec                    = 0,
	*c1f153e2e7                    = 1,
	*c848da573c                    = 2,
	*50fc0c4795_MAX                = 3,
};

enum class EChromaSDKStreamStatusEnum : uint8_t
{
	READY                          = 0,
	AUTHORIZING                    = 1,
	BROADCASTING                   = 2,
	WATCHING                       = 3,
	NOT_AUTHORIZED                 = 4,
	BROADCAST_DUPLICATE            = 5,
	SERVICE_OFFLINE                = 6,
	EChromaSDKStreamStatusEnum_MAX = 7,
};

enum class E*ef192c92a0 : uint8_t
{
	*bda10bb457                    = 0,
	*000991f6d6                    = 1,
	*a43e246e82                    = 2,
	*38b9d677fb                    = 3,
	*8c995da793                    = 4,
	*3804be477a                    = 5,
	*26fe30899d                    = 6,
	*ef192c92a0_MAX                = 7,
};

enum class E*f9a1dc72b4 : uint8_t
{
	*54a874d97a                    = 0,
	*962d31ce4e                    = 1,
	*604ce4b5ac                    = 2,
	*c7b99ac8a8                    = 3,
	*8efc544536                    = 4,
	*f9a1dc72b4_MAX                = 5,
};

enum class E*40b62b6853 : uint8_t
{
	*1a1868dc6f                    = 0,
	*1f0c64baab                    = 1,
	*c5e42ed27b                    = 2,
	*21478e13d6                    = 3,
	*04bbdab660                    = 4,
	*43701eaed6                    = 5,
	*0228b1b2ed                    = 6,
	*3800d2c332                    = 7,
	*aab6915270                    = 8,
	*43d5e818cc                    = 9,
	*beec55ff3d                    = 10,
	*9c5ed1fe7f                    = 11,
	*eb894da2f2                    = 12,
	*20cf5ab8e9                    = 13,
	*7c7cae2ffb                    = 14,
	*32ae1bc5a0                    = 15,
	*c59acbf399                    = 16,
	*fc752bd4ee                    = 17,
	*a3c67ce751                    = 18,
	*69bbc02d12                    = 19,
	*a4dbf430dc                    = 20,
	*db716c966a                    = 21,
	*230e3c1583                    = 22,
	*40b62b6853_MAX                = 23,
};

enum class E*35418ae255 : uint8_t
{
	*3d76e1dcd9                    = 0,
	*0ca834eebe                    = 1,
	*fa248a64f4                    = 2,
	*fc986cbbd0                    = 3,
	*d1ac8b6e1b                    = 4,
	*2374d2deac                    = 5,
	*99dcb91731                    = 6,
	*b00eafcb74                    = 7,
	*ba3a8df1d3                    = 8,
	*bf40788edc                    = 9,
	*0f5396d538                    = 10,
	*28b3172bdc                    = 11,
	*4573b54fc9                    = 12,
	*0b86b86bf7                    = 13,
	*eaf5e013ff                    = 14,
	*82f2ecf3bc                    = 15,
	*04d5707245                    = 16,
	*0d606d6d3f                    = 17,
	*e444881368                    = 18,
	*06b71549d9                    = 19,
	*e0e22ed972                    = 20,
	*a148adf1cf                    = 21,
	*a9d65ec811                    = 22,
	*f859e13984                    = 23,
	*2859e3a44e                    = 24,
	*f5b54b4d5f                    = 25,
	*9283ea325b                    = 26,
	*cbb2d4ad7a                    = 27,
	*0f166dbcc1                    = 28,
	*b3e9531f55                    = 29,
	*22143f257f                    = 30,
	*1c8491b793                    = 31,
	*8b576c42e3                    = 32,
	*cab4c50f13                    = 33,
	*bf7bd3a22b                    = 34,
	*bb202384d3                    = 35,
	*0abcda3850                    = 36,
	*a1a4767d3d                    = 37,
	*0a7a3cf1a2                    = 38,
	*002b4a88f2                    = 39,
	*fb1d76da70                    = 40,
	*33d96266a8                    = 41,
	*05eee3b062                    = 42,
	*343347d1c7                    = 43,
	*7a56f77ef1                    = 44,
	*4ad29eb876                    = 45,
	*fe57d807e0                    = 46,
	*64f0659f48                    = 47,
	*a781b03889                    = 48,
	*0bb454f9a8                    = 49,
	*5ab8ecd4b0                    = 50,
	*12f4cb07a2                    = 51,
	*2d9a530386                    = 52,
	*c61fecb565                    = 53,
	*0f1db631e7                    = 54,
	*42b80f1a1a                    = 55,
	*a0e9b9f093                    = 56,
	*dc211e9b5f                    = 57,
	*f187596c1b                    = 58,
	*f3e4d5a44b                    = 59,
	*ae2ca2999e                    = 60,
	*08fba5d010                    = 61,
	*56d200c02a                    = 62,
	*ae5e92a560                    = 63,
	*0ee2499a13                    = 64,
	*5faf801eb8                    = 65,
	*c89cf1d227                    = 66,
	*91caa61532                    = 67,
	*dec98c4ab5                    = 68,
	*1c4622bd73                    = 69,
	*3924221864                    = 70,
	*80f6c9e264                    = 71,
	*8a257bb61a                    = 72,
	*3b35c12a92                    = 73,
	*1fb8164a98                    = 74,
	*d78b63c542                    = 75,
	*140452fcf4                    = 76,
	*ac853e560e                    = 77,
	*4bcb3969cc                    = 78,
	*65b2c48145                    = 79,
	*373d0b1095                    = 80,
	*b6e4a66260                    = 81,
	*2907b7016e                    = 82,
	*dc1af94183                    = 83,
	*5a179cac4b                    = 84,
	*045f0700ed                    = 85,
	*5473699eef                    = 86,
	*8ee3264c5b                    = 87,
	*9d37f251c4                    = 88,
	*677ded1a9d                    = 89,
	*671c0280bc                    = 90,
	*b15b44a3b5                    = 91,
	*0096c55971                    = 92,
	*82cdbba80e                    = 93,
	*5621bb9051                    = 94,
	*6aaf45b852                    = 95,
	*2129b723ec                    = 96,
	*20528142e6                    = 97,
	*7511b29f51                    = 98,
	*d07343cc56                    = 99,
	*bc9c454a4f                    = 100,
	*49683c67df                    = 101,
	*aead63e08d                    = 102,
	*12d5944d24                    = 103,
	*485c438607                    = 104,
	*f582b6004a                    = 105,
	*265e20ff0a                    = 106,
	*8ee03ddc2f                    = 107,
	*9182ab90cb                    = 108,
	*e038662106                    = 109,
	*e82269d589                    = 110,
	*ea2b65ad4f                    = 111,
	*28addd406e                    = 112,
	*cea7314f28                    = 113,
	*55b2c21f4f                    = 114,
	*bfd32d3b49                    = 115,
	*572504fc2d                    = 116,
	*ac9ec3ce48                    = 117,
	*5b675cf669                    = 118,
	*4bda5d9fd9                    = 119,
	*35f02d1cdb                    = 120,
	*7a45aecf65                    = 121,
	*7a4fe7fcc6                    = 122,
	*b384749da3                    = 123,
	*23288e3943                    = 124,
	*5d63ff96ce                    = 125,
	*35418ae255_MAX                = 126,
};

enum class E*230ca89e05 : uint8_t
{
	*f53261c3d8                    = 0,
	*b68c5b5e4f                    = 1,
	*9052861bbc                    = 2,
	*21bfbe3df2                    = 3,
	*da295590c0                    = 4,
	*a457355b61                    = 5,
	*a7ff720377                    = 6,
	*230ca89e05_MAX                = 7,
};

enum class E*71f03cfd8d : uint8_t
{
	*9052861bbc                    = 0,
	*21bfbe3df2                    = 1,
	*da295590c0                    = 2,
	*a7ff720377                    = 3,
	*71f03cfd8d_MAX                = 4,
};

enum class E*445c4b4b3b : uint8_t
{
	*f53261c3d8                    = 0,
	*b68c5b5e4f                    = 1,
	*a457355b61                    = 2,
	*a7ff720377                    = 3,
	*445c4b4b3b_MAX                = 4,
};

enum class E*ac9f7babc5 : uint8_t
{
	*989d8ea8a2                    = 0,
	*1cfe854c64                    = 1,
	*a7ff720377                    = 2,
	*ac9f7babc5_MAX                = 3,
};

enum class EPathFollowingResult : uint8_t
{
	Success                        = 0,
	Blocked                        = 1,
	OffPath                        = 2,
	Aborted                        = 3,
	Skipped_DEPRECATED             = 4,
	Invalid                        = 5,
	EPathFollowingResult_MAX       = 6,
};

enum class EEnvQueryStatus : uint8_t
{
	Processing                     = 0,
	Success                        = 1,
	Failed                         = 2,
	Aborted                        = 3,
	OwnerLost                      = 4,
	MissingParam                   = 5,
	EEnvQueryStatus_MAX            = 6,
};

enum class EAILockSource : uint8_t
{
	Animation                      = 0,
	Logic                          = 1,
	Script                         = 2,
	Gameplay                       = 3,
	MAX                            = 4,
	EAILockSource_MAX              = 5,
};

enum class EAIRequestPriority : uint8_t
{
	SoftScript                     = 0,
	Logic                          = 1,
	HardScript                     = 2,
	Reaction                       = 3,
	Ultimate                       = 4,
	MAX                            = 5,
	EAIRequestPriority_MAX         = 6,
};

enum class EPawnActionEventType : uint8_t
{
	Invalid                        = 0,
	FailedToStart                  = 1,
	InstantAbort                   = 2,
	FinishedAborting               = 3,
	FinishedExecution              = 4,
	Push                           = 5,
	EPawnActionEventType_MAX       = 6,
};

enum class EPawnActionResult : uint8_t
{
	NotStarted                     = 0,
	InProgress                     = 1,
	Success                        = 2,
	Failed                         = 3,
	Aborted                        = 4,
	EPawnActionResult_MAX          = 5,
};

enum class EPawnActionAbortState : uint8_t
{
	NeverStarted                   = 0,
	NotBeingAborted                = 1,
	MarkPendingAbort               = 2,
	LatentAbortInProgress          = 3,
	AbortDone                      = 4,
	MAX                            = 5,
	EPawnActionAbortState_MAX      = 6,
};

enum class EFAIDistanceType : uint8_t
{
	Distance3D                     = 0,
	Distance2D                     = 1,
	DistanceZ                      = 2,
	MAX                            = 3,
	FAIDistanceType_MAX            = 4,
};

enum class EAIOptionFlag : uint8_t
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3,
	EAIOptionFlag_MAX              = 4,
};

enum class EPathFollowingRequestResult : uint8_t
{
	Failed                         = 0,
	AlreadyAtGoal                  = 1,
	RequestSuccessful              = 2,
	EPathFollowingRequestResult_MAX = 3,
};

enum class EPathFollowingAction : uint8_t
{
	Error                          = 0,
	NoMove                         = 1,
	DirectMove                     = 2,
	PartialPath                    = 3,
	PathToGoal                     = 4,
	EPathFollowingAction_MAX       = 5,
};

enum class EPathFollowingStatus : uint8_t
{
	Idle                           = 0,
	Waiting                        = 1,
	Paused                         = 2,
	Moving                         = 3,
	EPathFollowingStatus_MAX       = 4,
};

enum class ETeamAttitude : uint8_t
{
	Friendly                       = 0,
	Neutral                        = 1,
	Hostile                        = 2,
	ETeamAttitude_MAX              = 3,
};

enum class EAISenseNotifyType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAITaskPriority : uint8_t
{
	Lowest                         = 0,
	Low                            = 64,
	AutonomousAI                   = 127,
	High                           = 192,
	Ultimate                       = 254,
	EAITaskPriority_MAX            = 255,
};

enum class EBTFlowAbortMode : uint8_t
{
	None                           = 0,
	LowerPriority                  = 1,
	Self                           = 2,
	Both                           = 3,
	EBTFlowAbortMode_MAX           = 4,
};

enum class EBTNodeResult : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	Aborted                        = 2,
	InProgress                     = 3,
	EBTNodeResult_MAX              = 4,
};

enum class EEnvQueryTestClamping : uint8_t
{
	None                           = 0,
	SpecifiedValue                 = 1,
	FilterThreshold                = 2,
	EEnvQueryTestClamping_MAX      = 3,
};

enum class EEnvDirection : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EEnvOverlapShape : uint8_t
{
	Box                            = 0,
	Sphere                         = 1,
	Capsule                        = 2,
	EEnvOverlapShape_MAX           = 3,
};

enum class EEnvTraceShape : uint8_t
{
	Line                           = 0,
	Box                            = 1,
	Sphere                         = 2,
	Capsule                        = 3,
	EEnvTraceShape_MAX             = 4,
};

enum class EEnvQueryTrace : uint8_t
{
	None                           = 0,
	Navigation                     = 1,
	Geometry                       = 2,
	NavigationOverLedges           = 3,
	EEnvQueryTrace_MAX             = 4,
};

enum class EAIParamType : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	EAIParamType_MAX               = 3,
};

enum class EEnvQueryParam : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	EEnvQueryParam_MAX             = 3,
};

enum class EEnvQueryRunMode : uint8_t
{
	SingleResult                   = 0,
	RandomBest5Pct                 = 1,
	RandomBest25Pct                = 2,
	AllMatching                    = 3,
	EEnvQueryRunMode_MAX           = 4,
};

enum class E*6a44d1c800 : uint8_t
{
	*b378a34416                    = 0,
	*b8659aabc0                    = 1,
	*6b50c98d30                    = 2,
	*7451b681f9                    = 3,
	*6a44d1c800_MAX                = 4,
};

enum class E*9d9ceebd32 : uint8_t
{
	*e0bc087f99                    = 0,
	*0ee47a41f3                    = 1,
	*3e05650350                    = 2,
	*9d9ceebd32_MAX                = 3,
};

enum class EEnvTestCost : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EEnvTestCost_MAX               = 3,
};

enum class EEnvTestWeight : uint8_t
{
	None                           = 0,
	Square                         = 1,
	Inverse                        = 2,
	Unused                         = 3,
	Constant                       = 4,
	Skip                           = 5,
	EEnvTestWeight_MAX             = 6,
};

enum class EEnvTestScoreEquation : uint8_t
{
	Linear                         = 0,
	Square                         = 1,
	InverseLinear                  = 2,
	SquareRoot                     = 3,
	Constant                       = 4,
	EEnvTestScoreEquation_MAX      = 5,
};

enum class EEnvTestFilterType : uint8_t
{
	Minimum                        = 0,
	Maximum                        = 1,
	Range                          = 2,
	Match                          = 3,
	EEnvTestFilterType_MAX         = 4,
};

enum class EEnvTestPurpose : uint8_t
{
	Filter                         = 0,
	Score                          = 1,
	FilterAndScore                 = 2,
	EEnvTestPurpose_MAX            = 3,
};

enum class EBTDecoratorLogic : uint8_t
{
	Invalid                        = 0,
	Test                           = 1,
	And                            = 2,
	Or                             = 3,
	Not                            = 4,
	EBTDecoratorLogic_MAX          = 5,
};

enum class E*f94231393b : uint8_t
{
	*a8d7b561b7                    = 0,
	*fe224ea598                    = 1,
	*522e80f3d1                    = 2,
	*f94231393b_MAX                = 3,
};

enum class ETextKeyOperation : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	Contain                        = 2,
	NotContain                     = 3,
	ETextKeyOperation_MAX          = 4,
};

enum class EArithmeticKeyOperation : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	Less                           = 2,
	LessOrEqual                    = 3,
	Greater                        = 4,
	GreaterOrEqual                 = 5,
	EArithmeticKeyOperation_MAX    = 6,
};

enum class EBasicKeyOperation : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*39551e0594 : uint8_t
{
	*98a1757eb7                    = 0,
	*a19aa6d2cb                    = 1,
	*381ece399e                    = 2,
	*39551e0594_MAX                = 3,
};

enum class EBlackBoardEntryComparison : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EPathExistanceQueryType : uint8_t
{
	NavmeshRaycast2D               = 0,
	HierarchicalQuery              = 1,
	RegularPathFinding             = 2,
	EPathExistanceQueryType_MAX    = 3,
};

enum class EBTParallelMode : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*1967251129 : uint8_t
{
	*b4c0c072c2                    = 0,
	*3f260fe120                    = 1,
	*3a5d6986cc                    = 2,
	*1967251129_MAX                = 3,
};

enum class EEQSNormalizationType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*9dde6cc3c2 : uint8_t
{
	*224d102652                    = 0,
	*000ea227f7                    = 1,
	*ef54cf1736                    = 2,
	*6eebb2618e                    = 3,
	*b7132c3d22                    = 4,
	*9dde6cc3c2_MAX                = 5,
};

enum class E*8a788ac3c3 : uint8_t
{
	*10301f4ed2                    = 0,
	*cdc3097fa4                    = 1,
	*fbf85efa50                    = 2,
	*8a788ac3c3_MAX                = 3,
};

enum class EEnvTestPathfinding : uint8_t
{
	PathExist                      = 0,
	PathCost                       = 1,
	PathLength                     = 2,
	EEnvTestPathfinding_MAX        = 3,
};

enum class EEnvQueryHightlightMode : uint8_t
{
	All                            = 0,
	Best5Pct                       = 1,
	Best25Pct                      = 2,
	EEnvQueryHightlightMode_MAX    = 3,
};

enum class E*6f13b394a7 : uint8_t
{
	*c47f2d3dd4                    = 0,
	*55c73e7ecc                    = 1,
	*626b5ffb91                    = 2,
	*6f13b394a7_MAX                = 3,
};

enum class E*64100b39fc : uint8_t
{
	*1aeab72a33                    = 0,
	*952ff81fa0                    = 1,
	*d13d6a0b18                    = 2,
	*64100b39fc_MAX                = 3,
};

enum class E*a2c50c4416 : uint8_t
{
	*7c436e6f73                    = 0,
	*cbbf7347cf                    = 1,
	*04c48c037a                    = 2,
	*a2c50c4416_MAX                = 3,
};

enum class ESlateVisibility : uint8_t
{
	Visible                        = 0,
	Collapsed                      = 1,
	Hidden                         = 2,
	HitTestInvisible               = 3,
	SelfHitTestInvisible           = 4,
	ESlateVisibility_MAX           = 5,
};

enum class EVirtualKeyboardType : uint8_t
{
	Default                        = 0,
	Number                         = 1,
	Web                            = 2,
	Email                          = 3,
	Password                       = 4,
	AlphaNumeric                   = 5,
	EVirtualKeyboardType_MAX       = 6,
};

enum class EUMGSequencePlayMode : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EDragPivot : uint8_t
{
	MouseDown                      = 0,
	TopLeft                        = 1,
	TopCenter                      = 2,
	TopRight                       = 3,
	CenterLeft                     = 4,
	CenterCenter                   = 5,
	CenterRight                    = 6,
	BottomLeft                     = 7,
	BottomCenter                   = 8,
	BottomRight                    = 9,
	EDragPivot_MAX                 = 10,
};

enum class ESlateSizeRule : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EWidgetDesignFlags : uint8_t
{
	None                           = 0,
	Designing                      = 1,
	ShowOutline                    = 2,
	ExecutePreConstruct            = 4,
	EWidgetDesignFlags_MAX         = 5,
};

enum class EBindingKind : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EDesignPreviewSizeMode : uint8_t
{
	FillScreen                     = 0,
	Custom                         = 1,
	CustomOnScreen                 = 2,
	Desired                        = 3,
	DesiredOnScreen                = 4,
	EDesignPreviewSizeMode_MAX     = 5,
};

enum class EWidgetForcedLOD : uint8_t
{
	None                           = 0,
	Inactive                       = 1,
	LOD0                           = 2,
	LOD1                           = 3,
	LOD2                           = 4,
	LOD3                           = 5,
	LOD4                           = 6,
	LOD5                           = 7,
	LOD6                           = 8,
	LOD7                           = 9,
	EWidgetForcedLOD_MAX           = 10,
};

enum class EWidgetGeometryMode : uint8_t
{
	Plane                          = 0,
	Cylinder                       = 1,
	Sphere                         = 2,
	EWidgetGeometryMode_MAX        = 3,
};

enum class EWidgetBlendMode : uint8_t
{
	Opaque                         = 0,
	Masked                         = 1,
	Transparent                    = 2,
	EWidgetBlendMode_MAX           = 3,
};

enum class EWidgetTimingPolicy : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EWidgetSpace : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EWidgetInteractionSource : uint8_t
{
	World                          = 0,
	Mouse                          = 1,
	CenterScreen                   = 2,
	Custom                         = 3,
	EWidgetInteractionSource_MAX   = 4,
};

enum class EFollowMethod : uint8_t
{
	LookAtLocation                 = 0,
	FollowCamera                   = 1,
	FollowPawn                     = 2,
	Stationary                     = 3,
	EFollowMethod_MAX              = 4,
};

enum class ECoherentUIGTKeys : uint8_t
{
	LeftMouseButton                = 0,
	RightMouseButton               = 1,
	MiddleMouseButton              = 2,
	ThumbMouseButton               = 3,
	ThumbMouseButton2              = 4,
	BackSpace                      = 5,
	Tab                            = 6,
	Enter                          = 7,
	Pause                          = 8,
	CapsLock                       = 9,
	Escape                         = 10,
	SpaceBar                       = 11,
	PageUp                         = 12,
	PageDown                       = 13,
	End                            = 14,
	Home                           = 15,
	Left                           = 16,
	Up                             = 17,
	Right                          = 18,
	Down                           = 19,
	Insert                         = 20,
	Delete                         = 21,
	Zero                           = 22,
	One                            = 23,
	Two                            = 24,
	Three                          = 25,
	Four                           = 26,
	Five                           = 27,
	Six                            = 28,
	Seven                          = 29,
	Eight                          = 30,
	Nine                           = 31,
	A                              = 32,
	B                              = 33,
	C                              = 34,
	D                              = 35,
	E                              = 36,
	F                              = 37,
	G                              = 38,
	H                              = 39,
	I                              = 40,
	J                              = 41,
	K                              = 42,
	L                              = 43,
	M                              = 44,
	N                              = 45,
	O                              = 46,
	P                              = 47,
	Q                              = 48,
	R                              = 49,
	S                              = 50,
	T                              = 51,
	U                              = 52,
	V                              = 53,
	W                              = 54,
	X                              = 55,
	Y                              = 56,
	Z                              = 57,
	NumPadZero                     = 58,
	NumPadOne                      = 59,
	NumPadTwo                      = 60,
	NumPadThree                    = 61,
	NumPadFour                     = 62,
	NumPadFive                     = 63,
	NumPadSix                      = 64,
	NumPadSeven                    = 65,
	NumPadEight                    = 66,
	NumPadNine                     = 67,
	Multiply                       = 68,
	Add                            = 69,
	Subtract                       = 70,
	Decimal                        = 71,
	Divide                         = 72,
	F1                             = 73,
	F2                             = 74,
	F3                             = 75,
	F4                             = 76,
	F5                             = 77,
	F6                             = 78,
	F7                             = 79,
	F8                             = 80,
	F9                             = 81,
	F10                            = 82,
	F11                            = 83,
	F12                            = 84,
	NumLock                        = 85,
	ScrollLock                     = 86,
	LeftShift                      = 87,
	RightShift                     = 88,
	LeftControl                    = 89,
	RightControl                   = 90,
	LeftAlt                        = 91,
	RightAlt                       = 92,
	LeftCommand                    = 93,
	RightCommand                   = 94,
	Semicolon                      = 95,
	Equals                         = 96,
	Comma                          = 97,
	Underscore                     = 98,
	Period                         = 99,
	Slash                          = 100,
	Tilde                          = 101,
	LeftBracket                    = 102,
	Backslash                      = 103,
	RightBracket                   = 104,
	Quote                          = 105,
	Unknown                        = 106,
	ECoherentUIGTKeys_MAX          = 107,
};

enum class ECoherentUIGTInputPropagationBehaviour : uint8_t
{
	None                           = 0,
	Keyboard                       = 1,
	Joystick                       = 2,
	KeyboardAndJoystick            = 3,
	ECoherentUIGTInputPropagationBehaviour_MAX = 4,
};

enum class E*4b570e43fe : uint8_t
{
	*ec4c8dd535                    = 0,
	*c1f352207b                    = 1,
	*bf221c0c83                    = 2,
	*457dd6a631                    = 3,
	*4b570e43fe_MAX                = 4,
};

enum class E*7e6527f3d7 : uint8_t
{
	*7a17c08ca8                    = 0,
	*472d0a2b03                    = 1,
	*7de9b26f50                    = 2,
	*7e6527f3d7_MAX                = 3,
};

enum class E*2618d811ee : uint8_t
{
	*cae2bda8c7                    = 0,
	*2a70cb8944                    = 1,
	*d799300809                    = 2,
	*eb14dd8931                    = 3,
	*2618d811ee_MAX                = 4,
};

enum class ECoherentUIGTMSAA : uint8_t
{
	MSAA_1x                        = 0,
	MSAA_2x                        = 1,
	MSAA_4x                        = 2,
	MSAA_MAX                       = 3,
};

enum class ECoherentUIGTSettingsSeverity : uint8_t
{
	Trace                          = 0,
	Debug                          = 1,
	Info                           = 2,
	Warning                        = 3,
	AssertFailure                  = 4,
	Error                          = 5,
	ECoherentUIGTSettingsSeverity_MAX = 6,
};

enum class EHDRCaptureGamut : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EThreePlayerSplitScreenType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETwoPlayerSplitScreenType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ECustomizableObjectProjectorType : uint8_t
{
	Planar                         = 0,
	Cylindrical                    = 1,
	Wrapping                       = 2,
	ECustomizableObjectProjectorType_MAX = 3,
};

enum class EMutableCompileMeshType : uint8_t
{
	Full                           = 0,
	Local                          = 1,
	LocalAndChildren               = 2,
	AddWorkingSetNoChildren        = 3,
	AddWorkingSetAndChildren       = 4,
	EMutableCompileMeshType_MAX    = 5,
};

enum class ECustomizableObjectGroupType : uint8_t
{
	COGT_TOGGLE                    = 0,
	COGT_ALL                       = 1,
	COGT_ONE                       = 2,
	COGT_ONE_OR_NONE               = 3,
	COGT_MAX                       = 4,
};

enum class EMutableParameterType : uint8_t
{
	None                           = 0,
	Bool                           = 1,
	Int                            = 2,
	Float                          = 3,
	Color                          = 4,
	Projector                      = 5,
	Texture                        = 6,
	EMutableParameterType_MAX      = 7,
};

enum class ECustomizableObjectRelevancy : uint8_t
{
	All                            = 0,
	ClientOnly                     = 1,
	ECustomizableObjectRelevancy_MAX = 2,
};

enum class EBeaconConnectionState : uint8_t
{
	Invalid                        = 0,
	Closed                         = 1,
	Pending                        = 2,
	Open                           = 3,
	EBeaconConnectionState_MAX     = 4,
};

enum class EPartyReservationResult : uint8_t
{
	NoResult                       = 0,
	RequestPending                 = 1,
	GeneralError                   = 2,
	PartyLimitReached              = 3,
	IncorrectPlayerCount           = 4,
	RequestTimedOut                = 5,
	ReservationDuplicate           = 6,
	ReservationNotFound            = 7,
	ReservationAccepted            = 8,
	ReservationDenied              = 9,
	ReservationDenied_Banned       = 10,
	ReservationRequestCanceled     = 11,
	ReservationInvalid             = 12,
	BadSessionId                   = 13,
	EPartyReservationResult_MAX    = 14,
};

enum class EClientRequestType : uint8_t
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	EClientRequestType_MAX         = 6,
};

enum class EClothingWindMethod : uint8_t
{
	Legacy                         = 0,
	Accurate                       = 1,
	EClothingWindMethod_MAX        = 2,
};

enum class EMaskTarget_PhysMesh : uint8_t
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	MaskTarget_MAX                 = 4,
};

enum class ETslSLBStageDifficulty : uint8_t
{
	Easy                           = 0,
	Normal                         = 1,
	Hard                           = 2,
	Max                            = 3,
	ETslSLBStageDifficulty_MAX     = 4,
};

enum class ETslSLBStage : uint8_t
{
	Stage1                         = 0,
	Stage2                         = 1,
	Stage3                         = 2,
	Stage4                         = 3,
	Stage5                         = 4,
	Stage6                         = 5,
	Max                            = 6,
	ETslSLBStage_MAX               = 7,
};

enum class EBombGameAreaType : uint8_t
{
	None                           = 0,
	StartArea                      = 1,
	PlantedASite                   = 2,
	PlantedBSite                   = 3,
	NormalArea                     = 4,
	EBombGameAreaType_MAX          = 5,
};

enum class EBombItemCategory : uint8_t
{
	None                           = 0,
	Pistol                         = 1,
	SMG                            = 2,
	AR                             = 3,
	SG                             = 4,
	DMR                            = 5,
	SR                             = 6,
	Equipment                      = 7,
	Throwable                      = 8,
	ETC                            = 9,
	EBombItemCategory_MAX          = 10,
};

enum class EBombTeamStateInfoType : uint8_t
{
	MoveASite                      = 0,
	MoveBSite                      = 1,
	SaveMoney                      = 2,
	GiveMoney                      = 3,
	Rush                           = 4,
	SaveMe                         = 5,
	MAX                            = 10,
	EBombTeamStateInfoType_MAX     = 11,
};

enum class ECoinTakeType : uint8_t
{
	None                           = 0,
	StoreSellItemToCustomer        = 1,
	CustomerSellItemToStore        = 2,
	KillReward                     = 3,
	KillAssistReward               = 4,
	BombInstallReward              = 5,
	BombDefuseReward               = 6,
	RoundWin                       = 7,
	Donate                         = 8,
	Receipt                        = 9,
	RoundStartNormal               = 10,
	RoundStartDecisive             = 11,
	RoundDefeat                    = 12,
	TeamRoleChange                 = 13,
	MinAllowanceCoin               = 14,
	MaxAllowanceCoin               = 15,
	ThriftyDiffSpendCoin           = 16,
	Admin                          = 17,
	ECoinTakeType_MAX              = 18,
};

enum class EBombModeSoundType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETimeBombPhaseType : uint8_t
{
	Unknown                        = 0,
	Planting_Phase1                = 1,
	Planting_Phase2                = 2,
	Planting_Phase3                = 3,
	Explosion                      = 4,
	Defusing                       = 5,
	ETimeBombPhaseType_MAX         = 6,
};

enum class EBombMatchWinType : uint8_t
{
	Draw                           = 0,
	ExceedRoundWin                 = 1,
	ExceedUseBombKit               = 2,
	ExceedKillCount                = 3,
	EnemyAllLogout                 = 4,
	EBombMatchWinType_MAX          = 5,
};

enum class E*1d2e7f1627 : uint8_t
{
	*708f4aeeb2                    = 0,
	*f469ae2833                    = 1,
	*1a4b9ec6b6                    = 2,
	*fb496ec7fa                    = 3,
	*db305ba7f1                    = 4,
	*1d2e7f1627_MAX                = 5,
};

enum class EBombPlantedState : uint8_t
{
	NotSet                         = 0,
	Planting                       = 1,
	Planted                        = 2,
	Defused                        = 3,
	Exploded                       = 4,
	EBombPlantedState_MAX          = 5,
};

enum class EBombRoundInProgressState : uint8_t
{
	Invalid                        = 0,
	TeamDecision                   = 1,
	Preparing                      = 2,
	Playing                        = 3,
	Ending                         = 4,
	EBombRoundInProgressState_MAX  = 5,
};

enum class EBombRoundAttribute : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	OverTime                       = 2,
	TeamRoleChanged                = 4,
	EBombRoundAttribute_MAX        = 5,
};

enum class EBombRoundResultConditionType : uint8_t
{
	None                           = 0,
	Excellent                      = 1,
	Impressive                     = 2,
	Overwhelming                   = 3,
	Perfect                        = 4,
	Thrifty                        = 5,
	MAX                            = 6,
	EBombRoundResultConditionType_MAX = 7,
};

enum class EBombRoundResultHistoryType : uint8_t
{
	None                           = 0,
	TimeUp                         = 1,
	BombExploded                   = 2,
	BombDefused                    = 3,
	TeamElimination                = 4,
	TeamGameLogout                 = 5,
	EBombRoundResultHistoryType_MAX = 6,
};

enum class EBombUITeamStatusType : uint8_t
{
	None                           = 0,
	Attack                         = 1,
	Defence                        = 2,
	MAX                            = 3,
	EBombUITeamStatusType_MAX      = 4,
};

enum class EBombScopeInfo : uint8_t
{
	None                           = 0,
	Hologram                       = 1,
	Reddot                         = 2,
	Scope2x                        = 3,
	Scope3x                        = 4,
	Scope4x                        = 5,
	Scope6x                        = 6,
	Scope8x                        = 7,
	Scope15x                       = 8,
	MAX                            = 9,
	EBombScopeInfo_MAX             = 10,
};

enum class EBombTeamRole : uint8_t
{
	None                           = 0,
	AttackTeam                     = 1,
	DefenseTeam                    = 2,
	ROLE_MAX                       = 3,
	EBombTeamRole_MAX              = 4,
};

enum class EBombUIMarkStatusType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EBombUIMatchResultType : uint8_t
{
	None                           = 0,
	Lose                           = 1,
	Win                            = 2,
	Draw                           = 3,
	MAX                            = 4,
	EBombUIMatchResultType_MAX     = 5,
};

enum class EBombUIPlayerStatusType : uint8_t
{
	None                           = 0,
	Alive                          = 1,
	DBNO                           = 2,
	Die                            = 3,
	Disconnected                   = 4,
	MAX                            = 5,
	EBombUIPlayerStatusType_MAX    = 6,
};

enum class EBombObserverHudMapMode : uint8_t
{
	MiniMap                        = 0,
	WorldMap                       = 1,
	EBombObserverHudMapMode_MAX    = 2,
};

enum class EBombObserverStatusBoardRoundStateUIType : uint8_t
{
	WaitingRound                   = 0,
	LeftTeamWin                    = 1,
	RightTeamWin                   = 2,
	CurrentRound                   = 3,
	EBombObserverStatusBoardRoundStateUIType_MAX = 4,
};

enum class EBombObserverTeamInfoPlayerStateUIType : uint8_t
{
	None                           = 0,
	Live                           = 1,
	Dbno                           = 2,
	Dead                           = 3,
	EBombObserverTeamInfoPlayerStateUIType_MAX = 4,
};

enum class EBombStartEffectWidgetAPI : uint8_t
{
	Type1_PlayStartEffect          = 0,
	Type2_PlayStartRoundEffect     = 1,
	EBombStartEffectWidgetAPI_MAX  = 2,
};

enum class ETslSLBGeneratorState : uint8_t
{
	Breakdown                      = 0,
	NeedFuel                       = 1,
	BeforeActivate                 = 2,
	Activate                       = 3,
	MAX                            = 4,
	ETslSLBGeneratorState_MAX      = 5,
};

enum class ETslSLBZombieSpawnType : uint8_t
{
	Instant                        = 0,
	Time                           = 1,
	ETslSLBZombieSpawnType_MAX     = 2,
};

enum class EZombieTargetingType : uint8_t
{
	Passive                        = 0,
	Aggressive                     = 1,
	AggresiveRandom                = 2,
	EZombieTargetingType_MAX       = 3,
};

enum class E*8e1219c7a4 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAITaskState : uint8_t
{
	Idle                           = 0,
	Tasking                        = 1,
	Done                           = 2,
	InValid                        = 3,
	EAITaskState_MAX               = 4,
};

enum class EAIBattleState : uint8_t
{
	None                           = 0,
	ReturnToSpawnLocation          = 1,
	Patrol                         = 2,
	Battle                         = 3,
	EAIBattleState_MAX             = 4,
};

enum class EOneOnOneRoomState : uint8_t
{
	None                           = 0,
	MatchPrepare                   = 1,
	MatchStart                     = 2,
	MatchEnd                       = 3,
	MatchEndResult                 = 4,
	RoundStart                     = 5,
	RoundPlaying                   = 6,
	GiveScore                      = 7,
	BreakTime                      = 8,
	RoundResult                    = 9,
	RoundEnd                       = 10,
	EOneOnOneRoomState_MAX         = 11,
};

enum class EOneOnOneTicketState : uint8_t
{
	None                           = 0,
	Waiting                        = 1,
	CountDown                      = 2,
	Playing                        = 3,
	EOneOnOneTicketState_MAX       = 4,
};

enum class EOneOnOneInvenRecoverType : uint8_t
{
	None                           = 0,
	Empty                          = 1,
	Recover                        = 2,
	EOneOnOneInvenRecoverType_MAX  = 3,
};

enum class EOneOnOneMessageType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EThrowBuffType : uint8_t
{
	None                           = 0,
	Invincible                     = 1,
	SpeedUp                        = 2,
	EThrowBuffType_MAX             = 3,
};

enum class ETslSLBInteractionType : uint8_t
{
	None                           = 0,
	Generator                      = 1,
	Refueling                      = 2,
	ClearDebuff                    = 3,
	OpenLastDoor                   = 4,
	MAX                            = 5,
	ETslSLBInteractionType_MAX     = 6,
};

enum class ETDMCarePackageKitType : uint8_t
{
	CarepackageKit_Off             = 0,
	CarepackageKit_Basic           = 1,
	CarepackageKit_ARKit           = 2,
	CarepackageKit_SRKit           = 3,
	CarepackageKit_MAX             = 4,
};

enum class EPrivateTrainingRoomPhase : uint8_t
{
	None                           = 0,
	FinishSelect_Practice          = 1,
	StartSelect_Weapon             = 2,
	SetupStart_Practice            = 3,
	CountDownStart_Practice        = 4,
	Start_Practice                 = 5,
	Cancel_Practice                = 6,
	Finish_Practice                = 7,
	Restart_Practice               = 8,
	Exit_Practice                  = 9,
	EPrivateTrainingRoomPhase_MAX  = 10,
};

enum class EPrivateWaitingRoomPhase : uint8_t
{
	None                           = 0,
	LoadingMap                     = 1,
	Ready                          = 2,
	StartSelect_Practice           = 3,
	EPrivateWaitingRoomPhase_MAX   = 4,
};

enum class ETrainingButtonActiveType : uint8_t
{
	Default                        = 0,
	AimTrainingOnly                = 1,
	ETrainingButtonActiveType_MAX  = 2,
};

enum class EBuffCountType : uint8_t
{
	HideCount                      = 0,
	ItemCount                      = 1,
	AmmoCount                      = 2,
	EBuffCountType_MAX             = 3,
};

enum class EPackageState : uint8_t
{
	Normal                         = 0,
	Broken                         = 1,
	Empty                          = 2,
	EPackageState_MAX              = 3,
};

enum class EHeatState : uint8_t
{
	Stable                         = 0,
	IncreaseHeat                   = 1,
	DecreaseHeat                   = 2,
	OverHeated                     = 3,
	CoolingDown                    = 4,
	EHeatState_MAX                 = 5,
};

enum class EHealthDebuffType : uint8_t
{
	None                           = 0,
	Bleed                          = 1,
	EHealthDebuffType_MAX          = 2,
};

enum class EIBRRBluezone : uint8_t
{
	BlueZone                       = 0,
	Random                         = 1,
	MAX                            = 2,
	EIBRRBluezone_MAX              = 3,
};

enum class E*c88648b74a : uint8_t
{
	*ad51d6f1c6                    = 0,
	*08fed98dae                    = 1,
	*b55c5c18e3                    = 2,
	*c88648b74a_MAX                = 3,
};

enum class ETslSLBAreaBlockActorState : uint8_t
{
	Close                          = 0,
	Open                           = 1,
	MAX                            = 2,
	ETslSLBAreaBlockActorState_MAX = 3,
};

enum class ESLBTriggerShapeType : int32_t
{
	Box                            = 0,
	Sphere                         = 1,
	ESLBTriggerShapeType_MAX       = 2,
};

enum class ETslSLBExitActorState : uint8_t
{
	Close                          = 0,
	Open                           = 1,
	MAX                            = 2,
	ETslSLBExitActorState_MAX      = 3,
};

enum class ETslTrainingDashboardRangeUIType : uint8_t
{
	None                           = 0,
	Range10                        = 1,
	Range50                        = 2,
	Range100                       = 3,
	ETslTrainingDashboardRangeUIType_MAX = 4,
};

enum class ETslTrainingDashboardPracticeUIType : uint8_t
{
	None                           = 0,
	Practice_Aim                   = 1,
	Practice_Sound                 = 2,
	ETslTrainingDashboardPracticeUIType_MAX = 3,
};

enum class ETrainingRoomInteractionType : int32_t
{
	None                           = 0,
	Training_Stop                  = 1,
	ETrainingRoomInteractionType_MAX = 2,
};

enum class ETouchIndex : uint8_t
{
	Touch1                         = 0,
	Touch2                         = 1,
	Touch3                         = 2,
	Touch4                         = 3,
	Touch5                         = 4,
	Touch6                         = 5,
	Touch7                         = 6,
	Touch8                         = 7,
	Touch9                         = 8,
	Touch10                        = 9,
	ETouchIndex_MAX                = 10,
};

enum class ETouchType : uint8_t
{
	Began                          = 0,
	Moved                          = 1,
	Stationary                     = 2,
	Ended                          = 3,
	NumTypes                       = 4,
	ETouchType_MAX                 = 5,
};

enum class EConsoleForGamepadLabels : uint8_t
{
	None                           = 0,
	XBoxOne                        = 1,
	PS4                            = 2,
	EConsoleForGamepadLabels_MAX   = 3,
};

enum class EControllerHand : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Pad                            = 2,
	ExternalCamera                 = 3,
	Gun                            = 4,
	Special                        = 5,
	Special                        = 6,
	Special                        = 7,
	Special                        = 8,
	Special                        = 9,
	Special                        = 10,
	Special                        = 11,
	Special                        = 12,
	Special                        = 13,
	EControllerHand_MAX            = 14,
};

enum class ETextFlowDirection : uint8_t
{
	Auto                           = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ETextFlowDirection_MAX         = 3,
};

enum class ETextWrappingPolicy : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ETextJustify : uint8_t
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	ETextJustify_MAX               = 3,
};

enum class ETableViewMode : uint8_t
{
	List                           = 0,
	Tile                           = 1,
	Tree                           = 2,
	ETableViewMode_MAX             = 3,
};

enum class ESelectionMode : uint8_t
{
	None                           = 0,
	Single                         = 1,
	SingleToggle                   = 2,
	Multi                          = 3,
	ESelectionMode_MAX             = 4,
};

enum class EStretch : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EStretchDirection : uint8_t
{
	Both                           = 0,
	DownOnly                       = 1,
	UpOnly                         = 2,
	EStretchDirection_MAX          = 3,
};

enum class EProgressBarFillType : uint8_t
{
	LeftToRight                    = 0,
	RightToLeft                    = 1,
	FillFromCenter                 = 2,
	TopToBottom                    = 3,
	BottomToTop                    = 4,
	EProgressBarFillType_MAX       = 5,
};

enum class EMobileCSMQuality : uint8_t
{
	NoFiltering                    = 0,
	PCF_1x1                        = 1,
	PCF_2x2                        = 2,
	EMobileCSMQuality_MAX          = 3,
};

enum class E*80cf05b2f8 : uint8_t
{
	*a9f70fab0d                    = 0,
	*2898c2456b                    = 1,
	*ba4fc50409                    = 2,
	*342e9d1e1e                    = 3,
	*80cf05b2f8_MAX                = 4,
};

enum class EPrefabVisualizerType : uint8_t
{
	WireBox                        = 0,
	WireSphere                     = 1,
	EPrefabVisualizerType_MAX      = 2,
};

enum class E*7a16ac8725 : uint8_t
{
	*d71fe7609a                    = 0,
	*a18e3b2d1b                    = 1,
	*06a9377bf9                    = 2,
	*bab20bb9f3                    = 3,
	*7a16ac8725_MAX                = 4,
};

enum class E*5645a097b2 : uint8_t
{
	*d0bff29786                    = 0,
	*c5b11751a1                    = 1,
	*cf02697490                    = 2,
	*226deedca3                    = 3,
	*5645a097b2_MAX                = 4,
};

enum class EGrassScaling : uint8_t
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	EGrassScaling_MAX              = 3,
};

enum class ELandscapeLODFalloff : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ELandscapeLayerDisplayMode : uint8_t
{
	Default                        = 0,
	Alphabetical                   = 1,
	UserSpecific                   = 2,
	ELandscapeLayerDisplayMode_MAX = 3,
};

enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	None                           = 0,
	UseMaxLayers                   = 1,
	ExistingOnly                   = 2,
	UseComponentWhitelist          = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
};

enum class ELandscapeImportAlphamapType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*b59f50b6f5 : uint8_t
{
	*4e60fd32b9                    = 0,
	*d33bcf6646                    = 1,
	*f1865dae5c                    = 2,
	*657dba6e51                    = 3,
	*2cbe26c613                    = 4,
	*b59f50b6f5_MAX                = 5,
};

enum class E*ded4c8881e : uint8_t
{
	*37bcabf171                    = 0,
	*40abeb50d1                    = 1,
	*df309a5388                    = 2,
	*ded4c8881e_MAX                = 3,
};

enum class E*3d43a29296 : uint8_t
{
	*f6c130cb7b                    = 0,
	*75e841d4c0                    = 1,
	*1caa430f3c                    = 2,
	*c8934b7185                    = 3,
	*3d43a29296_MAX                = 4,
};

enum class E*00c4464a6d : uint8_t
{
	*6ccd8d8fa5                    = 0,
	*dbf87b80c3                    = 1,
	*0a68a10291                    = 2,
	*1ec2be737f                    = 3,
	*e83f2fce16                    = 4,
	*ebc1081a57                    = 5,
	*00c4464a6d_MAX                = 6,
};

enum class E*3a1c16fb10 : uint8_t
{
	*ce976f979f                    = 0,
	*62dadfe9e7                    = 1,
	*f741881a6f                    = 2,
	*0682e6a8f0                    = 3,
	*ccdf615c73                    = 4,
	*3a1c16fb10_MAX                = 5,
};

enum class ESpawnOwnership : uint8_t
{
	InnerSequence                  = 0,
	MasterSequence                 = 1,
	External                       = 2,
	ESpawnOwnership_MAX            = 3,
};

enum class EMovieSceneObjectBindingSpace : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EMovieSceneKeyInterpolation : uint8_t
{
	Auto                           = 0,
	User                           = 1,
	Break                          = 2,
	Linear                         = 3,
	Constant                       = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
};

enum class E*3a3c3b732a : uint8_t
{
	*b614123144                    = 0,
	*c0bf3bcb9c                    = 1,
	*b63b2bc638                    = 2,
	*3a3c3b732a_MAX                = 3,
};

enum class ESectionEvaluationFlags : uint8_t
{
	None                           = 0,
	PreRoll                        = 1,
	PostRoll                       = 2,
	ESectionEvaluationFlags_MAX    = 3,
};

enum class EEvaluationMethod : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class E*b3c98d53c5 : uint8_t
{
	*a176312918                    = 0,
	*4bf44d7312                    = 1,
	*2c3eb05e68                    = 2,
	*845a975b69                    = 3,
	*b3c98d53c5_MAX                = 4,
};

enum class EModifyCurveApplyMode : uint8_t
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	EModifyCurveApplyMode_MAX      = 3,
};

enum class ERBFDistanceMethod : uint8_t
{
	Euclidean                      = 0,
	Quaternion                     = 1,
	SwingAngle                     = 2,
	ERBFDistanceMethod_MAX         = 3,
};

enum class ERBFFunctionType : uint8_t
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	ERBFFunctionType_MAX           = 5,
};

enum class EPoseDriverOutput : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EPoseDriverSource : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EPoseDriverType : uint8_t
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3,
};

enum class ESnapshotSourceMode : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ERefPoseType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESequenceEvalReinit : uint8_t
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3,
};

enum class ESphericalLimitType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAnimPhysSimSpaceType : uint8_t
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5,
};

enum class EAnimPhysLinearConstraintType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EAnimPhysAngularConstraintType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EDrivenDestinationMode : uint8_t
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3,
};

enum class EDrivenBoneModificationMode : uint8_t
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class EComponentType : uint8_t
{
	None                           = 0,
	TranslationX                   = 1,
	TranslationY                   = 2,
	TranslationZ                   = 3,
	RotationX                      = 4,
	RotationY                      = 5,
	RotationZ                      = 6,
	Scale                          = 7,
	ScaleX                         = 8,
	ScaleY                         = 9,
	ScaleZ                         = 10,
	EComponentType_MAX             = 11,
};

enum class ECopyBoneDeltaMode : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EInterpolationBlend : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7,
	EInterpolationBlend_MAX        = 8,
};

enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3,
};

enum class ESplineBoneAxis : uint8_t
{
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	ESplineBoneAxis_MAX            = 4,
};

enum class EMovieScene3DPathSection_Axis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NEG_X                          = 3,
	NEG_Y                          = 4,
	NEG_Z                          = 5,
	MovieScene3DPathSection_MAX    = 6,
};

enum class E*124fdabd7e : uint8_t
{
	*08f76b5132                    = 0,
	*430a1a4f20                    = 1,
	*f825251286                    = 2,
	*e702f4a7cf                    = 3,
	*124fdabd7e_MAX                = 4,
};

enum class E*fc5d9252a3 : uint8_t
{
	*dffc6d760b                    = 0,
	*1140a211d6                    = 1,
	*54de121085                    = 2,
	*69c434b093                    = 3,
	*fc5d9252a3_MAX                = 4,
};

enum class ELevelVisibility : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EParticleKey : uint8_t
{
	Activate                       = 0,
	Deactivate                     = 1,
	Trigger                        = 2,
	EParticleKey_MAX               = 3,
};

enum class ECameraFocusMethod : uint8_t
{
	None                           = 0,
	Manual                         = 1,
	Tracking                       = 2,
	ECameraFocusMethod_MAX         = 3,
};

enum class EGameplayTagQueryExprType : uint8_t
{
	Undefined                      = 0,
	AnyTagsMatch                   = 1,
	AllTagsMatch                   = 2,
	NoTagsMatch                    = 3,
	AnyExprMatch                   = 4,
	AllExprMatch                   = 5,
	NoExprMatch                    = 6,
	EGameplayTagQueryExprType_MAX  = 7,
};

enum class EGameplayContainerMatchType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGameplayTagMatchType : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class EGameplayTagSourceType : uint8_t
{
	Native                         = 0,
	DefaultTagList                 = 1,
	TagList                        = 2,
	DataTable                      = 3,
	Invalid                        = 4,
	EGameplayTagSourceType_MAX     = 5,
};

enum class EInAppPurchaseState : uint8_t
{
	Unknown                        = 0,
	Success                        = 1,
	Failed                         = 2,
	Cancelled                      = 3,
	Invalid                        = 4,
	NotAllowed                     = 5,
	Restored                       = 6,
	AlreadyOwned                   = 7,
	EInAppPurchaseState_MAX        = 8,
};

enum class EMPMatchOutcome : uint8_t
{
	None                           = 0,
	Quit                           = 1,
	Won                            = 2,
	Lost                           = 3,
	Tied                           = 4,
	TimeExpired                    = 5,
	First                          = 6,
	Second                         = 7,
	Third                          = 8,
	Fourth                         = 9,
	EMPMatchOutcome_MAX            = 10,
};

enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4,
};

enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	Compressor                     = 0,
	Limiter                        = 1,
	Expander                       = 2,
	Gate                           = 3,
	Count                          = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5,
};

enum class EActorSequenceObjectReferenceType : uint8_t
{
	ContextActor                   = 0,
	ExternalActor                  = 1,
	Component                      = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};

enum class E*1781a80fa6 : uint8_t
{
	*28a558c86d                    = 0,
	*db44089679                    = 1,
	*d769ba1f4b                    = 2,
	*c2b1ca8a67                    = 3,
	*9e029d651d                    = 4,
	*f50ddbedbd                    = 5,
	*74ce3728a3                    = 6,
	*1781a80fa6_MAX                = 7,
};

enum class ENiagaraInputNodeUsage : uint8_t
{
	Undefined                      = 0,
	Parameter                      = 1,
	Attribute                      = 2,
	SystemConstant                 = 3,
	ENiagaraInputNodeUsage_MAX     = 4,
};

enum class ENiagaraDataSetType : uint8_t
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3,
};

enum class E*f9cdd2db64 : uint8_t
{
	*fa6d8ea3a5                    = 0,
	*1929a04159                    = 1,
	*e3931e7b61                    = 2,
	*23779a8a8e                    = 3,
	*f9cdd2db64_MAX                = 4,
};

enum class E*1694b9ad5d : uint8_t
{
	*b091262b16                    = 0,
	*c0f9600faa                    = 1,
	*23e12efcd4                    = 2,
	*b613192655                    = 3,
	*1694b9ad5d_MAX                = 4,
};

enum class E*b35e304882 : uint8_t
{
	*e2aa7488ff                    = 0,
	*f4b979eacf                    = 1,
	*580e067de4                    = 2,
	*2a943a9036                    = 3,
	*b35e304882_MAX                = 4,
};

enum class ENiagaraScriptUsage : uint8_t
{
	Function                       = 0,
	Module                         = 1,
	SpawnScript                    = 2,
	SpawnScriptInterpolated        = 3,
	UpdateScript                   = 4,
	EffectScript                   = 5,
	ENiagaraScriptUsage_MAX        = 6,
};

enum class EUnusedAttributeBehaviour : uint8_t
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	PassThrough                    = 4,
	EUnusedAttributeBehaviour_MAX  = 5,
};

enum class ENiagaraCollisionMode : uint8_t
{
	None                           = 0,
	SceneGeometry                  = 1,
	DepthBuffer                    = 2,
	DistanceField                  = 3,
	ENiagaraCollisionMode_MAX      = 4,
};

enum class EScriptCompileIndices : uint8_t
{
	SpawnScript                    = 0,
	UpdateScript                   = 1,
	EventScript                    = 2,
	EScriptCompileIndices_MAX      = 3,
};

enum class E*226be69970 : uint8_t
{
	*d80f6bf206                    = 0,
	*28d4f3664d                    = 1,
	*c5287964c0                    = 2,
	*c55416c971                    = 3,
	*226be69970_MAX                = 4,
};

enum class EMediaPlayerTrack : uint8_t
{
	Audio                          = 0,
	Binary                         = 1,
	Caption                        = 2,
	Script                         = 3,
	Subtitle                       = 4,
	Text                           = 5,
	Video                          = 6,
	EMediaPlayerTrack_MAX          = 7,
};

enum class EWRALOutput : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	EWRALOutput_MAX                = 2,
};

enum class EZipUtilityCompletionState : uint8_t
{
	SUCCESS                        = 0,
	FAILURE_NOT_FOUND              = 1,
	FAILURE_UNKNOWN                = 2,
	EZipUtilityCompletionState_MAX = 3,
};

enum class E*07f7881323 : uint8_t
{
	*ea9b4c76a4                    = 0,
	*bf1072e2a6                    = 1,
	*e63a1269e8                    = 2,
	*51f9e838cd                    = 3,
	*07f7881323_MAX                = 4,
};

enum class E*75463dc7f6 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class Enum_MagazineReloadAnimStateActionType : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	NewEnumerator3                 = 3,
	NewEnumerator4                 = 4,
	NewEnumerator5                 = 5,
	Enum_MAX                       = 6,
};

enum class EFlipbookCollisionMode : uint8_t
{
	NoCollision                    = 0,
	FirstFrameCollision            = 1,
	EachFrameCollision             = 2,
	EFlipbookCollisionMode_MAX     = 3,
};

enum class ESpritePivotMode : uint8_t
{
	Top_Left                       = 0,
	Top_Center                     = 1,
	Top_Right                      = 2,
	Center_Left                    = 3,
	Center_Center                  = 4,
	Center_Right                   = 5,
	Bottom_Left                    = 6,
	Bottom_Center                  = 7,
	Bottom_Right                   = 8,
	Custom                         = 9,
	ESpritePivotMode_MAX           = 10,
};

enum class ESpritePolygonMode : uint8_t
{
	SourceBoundingBox              = 0,
	TightBoundingBox               = 1,
	ShrinkWrapped                  = 2,
	FullyCustom                    = 3,
	Diced                          = 4,
	ESpritePolygonMode_MAX         = 5,
};

enum class ESpriteShapeType : uint8_t
{
	Box                            = 0,
	Circle                         = 1,
	Polygon                        = 2,
	ESpriteShapeType_MAX           = 3,
};

enum class ESpriteCollisionMode : uint8_t
{
	None                           = 0,
	Use2DPhysics                   = 1,
	Use3DPhysics                   = 2,
	ESpriteCollisionMode_MAX       = 3,
};

enum class E*c3ddb54a48 : uint8_t
{
	*388e44a337                    = 0,
	*5815c81459                    = 1,
	*85632353b4                    = 2,
	*c3ddb54a48_MAX                = 3,
};

enum class ETileMapProjectionMode : uint8_t
{
	Orthogonal                     = 0,
	IsometricDiamond               = 1,
	IsometricStaggered             = 2,
	HexagonalStaggered             = 3,
	ETileMapProjectionMode_MAX     = 4,
};

enum class E*f30bd38aa2 : uint8_t
{
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
	                               = -3617008641903833651,
};

enum class ESubstanceGenerationMode : uint8_t
{
	SGM_PlatformDefault            = 0,
	SGM_Baked                      = 1,
	SGM_OnLoadSync                 = 2,
	SGM_OnLoadSyncAndCache         = 3,
	SGM_OnLoadAsync                = 4,
	SGM_OnLoadAsyncAndCache        = 5,
	SGM_MAX                        = 6,
};

enum class ESubstanceEngineType : uint8_t
{
	SET_CPU                        = 0,
	SET_GPU                        = 1,
	SET_MAX                        = 2,
};

enum class ESubChannelType : uint8_t
{
	Diffuse                        = 0,
	Ambient                        = 1,
	BaseColor                      = 2,
	Metallic                       = 3,
	Roughness                      = 4,
	Emissive                       = 5,
	Normal                         = 6,
	Mask                           = 7,
	Opacity                        = 8,
	Refraction                     = 9,
	AmbientOcclusion               = 10,
	Glossiness                     = 11,
	Height                         = 12,
	Displacement                   = 13,
	Reflection                     = 14,
	Invalid                        = 15,
	ESubChannelType_MAX            = 16,
};

enum class E*4edb237b36 : uint8_t
{
	*d9b9540321                    = 0,
	*aaf6c39577                    = 1,
	*2e2671612d                    = 2,
	*5b8b53f317                    = 3,
	*ed1cde6025                    = 4,
	*a460c795dd                    = 5,
	*67407b456c                    = 6,
	*a86caf3f54                    = 7,
	*a80c889a3a                    = 8,
	*5f1c004cb0                    = 9,
	*4edb237b36_MAX                = 10,
};

enum class E*9f29e0d69b : uint8_t
{
	*031c41a41a                    = 0,
	*23335f026d                    = 1,
	*60487d1730                    = 2,
	*9f29e0d69b_MAX                = 3,
};

enum class E*23d2932e93 : uint8_t
{
	*b5f7ba4d57                    = 0,
	*761428609a                    = 1,
	*4a86e44353                    = 2,
	*9ef026f8c0                    = 3,
	*25b33a3d44                    = 4,
	*23d2932e93_MAX                = 5,
};

enum class ESoundVolumeShape : uint8_t
{
	Box                            = 0,
	Sphere                         = 1,
	Capsule                        = 2,
	ESoundVolumeShape_MAX          = 3,
};

enum class EAkIgnoreRolloffDirection : uint8_t
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	Front                          = 3,
	Back                           = 4,
	LeftAndRight                   = 5,
	LeftAndFront                   = 6,
	LeftAndBack                    = 7,
	RightAndFront                  = 8,
	RightAndBack                   = 9,
	BackAndFront                   = 10,
	EAkIgnoreRolloffDirection_MAX  = 11,
};

enum class ECoherentRenderingSettingsSeverity : uint8_t
{
	Trace                          = 0,
	Debug                          = 1,
	Info                           = 2,
	Warning                        = 3,
	AssertFailure                  = 4,
	Error                          = 5,
	ECoherentRenderingSettingsSeverity_MAX = 6,
};

enum class E*e3fe3f47cd : uint8_t
{
	*565788a428                    = 0,
	*add0511faa                    = 1,
	*bfaf86929a                    = 2,
	*e24828a614                    = 3,
	*e3fe3f47cd_MAX                = 4,
};

enum class E*1d9fa22693 : uint8_t
{
	*be6d7705a3                    = 0,
	*f6d3dc9e70                    = 1,
	*dbe357b3fb                    = 2,
	*bfe6899f9a                    = 3,
	*35f4df03b6                    = 4,
	*1d9fa22693_MAX                = 5,
};

enum class EHoudiniRuntimeSettingsAxisImport : uint8_t
{
	HRSAI_Unreal                   = 0,
	HRSAI_Houdini                  = 1,
	HRSAI_MAX                      = 2,
};

enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
	HRSRF_Always                   = 0,
	HRSRF_OnlyIfMissing            = 1,
	HRSRF_Nothing                  = 2,
	HRSRF_MAX                      = 3,
};

enum class EHoudiniRuntimeSettingsSessionType : uint8_t
{
	HRSST_InProcess                = 0,
	HRSST_Socket                   = 1,
	HRSST_NamedPipe                = 2,
	HRSST_MAX                      = 3,
};

enum class E*8ebb59d1d3 : uint8_t
{
	*a4508d40df                    = 0,
	*ad102f1be6                    = 1,
	*2daf9f9985                    = 2,
	*541a71663f                    = 3,
	*8ebb59d1d3_MAX                = 4,
};

enum class EHoudiniHandleType : uint8_t
{
	Xform                          = 0,
	Bounder                        = 1,
	Unsupported                    = 2,
	EHoudiniHandleType_MAX         = 3,
};

enum class EVectorVMOp : uint8_t
{
	done                           = 0,
	add                            = 1,
	sub                            = 2,
	mul                            = 3,
	div                            = 4,
	mad                            = 5,
	lerp                           = 6,
	rcp                            = 7,
	rsq                            = 8,
	sqrt                           = 9,
	neg                            = 10,
	abs                            = 11,
	exp                            = 12,
	exp2                           = 13,
	log                            = 14,
	log2                           = 15,
	sin                            = 16,
	cos                            = 17,
	tan                            = 18,
	asin                           = 19,
	acos                           = 20,
	atan                           = 21,
	atan2                          = 22,
	ceil                           = 23,
	floor                          = 24,
	fmod                           = 25,
	frac                           = 26,
	trunc                          = 27,
	clamp                          = 28,
	min                            = 29,
	max                            = 30,
	pow                            = 31,
	sign                           = 32,
	step                           = 33,
	random                         = 34,
	noise                          = 35,
	output                         = 36,
	cmplt                          = 37,
	cmple                          = 38,
	cmpgt                          = 39,
	cmpge                          = 40,
	cmpeq                          = 41,
	cmpneq                         = 42,
	select                         = 43,
	addi                           = 44,
	subi                           = 45,
	muli                           = 46,
	clampi                         = 47,
	mini                           = 48,
	maxi                           = 49,
	absi                           = 50,
	negi                           = 51,
	signi                          = 52,
	cmplti                         = 53,
	cmplei                         = 54,
	cmpgti                         = 55,
	cmpgei                         = 56,
	cmpeqi                         = 57,
	cmpneqi                        = 58,
	bit_and                        = 59,
	bit_or                         = 60,
	bit_xor                        = 61,
	bit_not                        = 62,
	logic_and                      = 63,
	logic_or                       = 64,
	logic_xor                      = 65,
	logic_not                      = 66,
	f2i                            = 67,
	i2f                            = 68,
	f2b                            = 69,
	b2f                            = 70,
	i2b                            = 71,
	b2i                            = 72,
	inputdata_32bit                = 73,
	inputdata_noadvance_32bit      = 74,
	outputdata_32bit               = 75,
	acquireindex                   = 76,
	external_func_call             = 77,
	exec_index                     = 78,
	noise2D                        = 79,
	noise3D                        = 80,
	enter_stat_scope               = 81,
	exit_stat_scope                = 82,
	round                          = 83,
	NumOpcodes                     = 84,
	EVectorVMOp_MAX                = 85,
};

enum class EVectorVMOperandLocation : uint8_t
{
	Register                       = 0,
	Constant                       = 1,
	Num                            = 2,
	EVectorVMOperandLocation_MAX   = 3,
};

enum class EVectorVMBaseTypes : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	Num                            = 3,
	EVectorVMBaseTypes_MAX         = 4,
};

enum class EEffectorSpaceEnum : uint8_t
{
	ES_Additive                    = 0,
	ES_World                       = 1,
	ES_Component                   = 2,
	ES_MAX                         = 3,
};

enum class EPoleVectorModeEnum : uint8_t
{
	PV_None                        = 0,
	PV_Position                    = 1,
	PV_Bone                        = 2,
	PV_AngleOffset                 = 3,
	PV_MAX                         = 4,
};

