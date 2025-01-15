                                                      /* Create by #FF69B4 */
enum class EPrefabVisualizerType : uint8_t
{
	WireBox                        = 0,
	WireSphere                     = 1,
	EPrefabVisualizerType_MAX      = 2,
};

enum class EFollowMethod : uint8_t
{
	LookAtLocation                 = 0,
	FollowCamera                   = 1,
	FollowPawn                     = 2,
	Stationary                     = 3,
	EFollowMethod_MAX              = 4,
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

enum class E*c29bb4d3da : uint8_t
{
	*bd1d9ffbb5                    = 0,
	*2b7facede9                    = 1,
	*c73e25ca8e                    = 2,
	*c29bb4d3da_MAX                = 3,
};

enum class E*3e68f617dd : uint8_t
{
	*119bb41b88                    = 0,
	*87d1eeb536                    = 1,
	*2b2ce2821d                    = 2,
	*3e68f617dd_MAX                = 3,
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

enum class EBlastActorDestroyReason : uint8_t
{
	Split                          = 0,
	Remove                         = 1,
	EBlastActorDestroyReason_MAX   = 2,
};

enum class EBlastAssetChunkFlags : uint8_t
{
	None                           = 0,
	Static                         = 1,
	EBlastAssetChunkFlags_MAX      = 2,
};

enum class EBlastCapMeshForwardAxis : uint8_t
{
	AxisX                          = 0,
	AxisY                          = 1,
	Max                            = 2,
	EBlastCapMeshForwardAxis_MAX   = 3,
};

enum class EBlastMeshTerminationCriterion : uint8_t
{
	NumOfTriangles                 = 0,
	NumOfVertices                  = 1,
	Max                            = 2,
	EBlastMeshTerminationCriterion_MAX = 3,
};

enum class E*b2c6c094a7 : uint8_t
{
	*a0322800c3                    = 0,
	*a6dd42cb36                    = 1,
	*57272ca5d5                    = 2,
	*98a9f80725                    = 3,
	*db4fa1ee92                    = 4,
	*28a592bee4                    = 5,
	*b2c6c094a7_MAX                = 6,
};

enum class EBlastDebugRenderMode : uint8_t
{
	None                           = 0,
	SupportGraph                   = 1,
	ChunkCentroids                 = 2,
	SupportGraphHealth             = 3,
	EBlastDebugRenderMode_MAX      = 4,
};

enum class EBlastDamageResult : uint8_t
{
	None                           = 0,
	Damaged                        = 1,
	Split                          = 2,
	EBlastDamageResult_MAX         = 3,
};

enum class EBreathType : uint8_t
{
	Apnea                          = 0,
	ADS                            = 1,
	EBreathType_MAX                = 2,
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

enum class E*302523609c : uint8_t
{
	*6d4aaf09e6                    = 0,
	*29fd74fe01                    = 1,
	*34480f36c6                    = 2,
	*302523609c_MAX                = 3,
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
	Damage_None                    = 0,
	Damage_Instant                 = 1,
	Damage_Gun                     = 2,
	Damage_Melee                   = 3,
	Damage_Punch                   = 4,
	Damage_ZombiePunch             = 5,
	Damage_Groggy                  = 6,
	Damage_BlueZone                = 7,
	Damage_VehicleHit              = 8,
	Damage_VehicleCrashHit         = 9,
	Damage_Molotov                 = 10,
	Damage_Explosion               = 11,
	Damage_Explosion_Grenade       = 12,
	Damage_Explosion_RedZone       = 13,
	Damage_Explosion_Vehicle       = 14,
	Damage_Explosion_PlantedTimeBomb = 15,
	Damage_Instant_Fall            = 16,
	Damage_Drown                   = 17,
	Damage_BleedOut                = 18,
	Damage_Explosion_JerryCan      = 19,
	Damage_MeleeThrow              = 20,
	Damage_Explosion_C4            = 21,
	Damage_Explosion_StickyBomb    = 22,
	Damage_Explosion_Breach        = 23,
	Damage_Explosion_PanzerFaustWarhead = 24,
	Damage_Explosion_PanzerFaustWarheadVehicleArmorPenetration = 25,
	Damage_Explosion_PanzerFaustBackBlast = 26,
	Damage_Explosion_Mortar        = 27,
	Damage_Explosion_BlackZone     = 28,
	Damage_Explosion_Meteor        = 29,
	Damage_TrainHit                = 30,
	Damage_Explosion_PropaneTank   = 31,
	Damage_LootTruckHit            = 32,
	Damage_Explosion_LootTruck     = 33,
	Damage_ShipHit                 = 34,
	Damage_Lava                    = 35,
	Damage_KillTruckHit            = 36,
	Damage_KillTruckTurret         = 37,
	Damage_HelicopterHit           = 38,
	Damage_Explosion_Aircraft      = 39,
	Damage_BlueZoneGrenade         = 40,
	Damage_FBRMolotov              = 41,
	Damage_Monster                 = 42,
	Damage_Ability                 = 43,
	Damage_Rotor                   = 44,
	Damage_MotorGlider             = 45,
	Damage_Gun_Penetrate_BRDM      = 46,
	Damage_Explosion_GasPump       = 47,
	Damage_Blizzard                = 48,
	Damage_SandStorm               = 49,
	Damage_CableCarHit             = 50,
	Damage_DropStructHit           = 51,
	Damage_Poision                 = 52,
	Damage_ZombieDash              = 53,
	Damage_StunGun                 = 54,
	Damage_EventWeapon             = 55,
	Damage_MAX                     = 56,
};

enum class E*318cc6a983 : uint8_t
{
	*0fee073c55                    = 0,
	*120fdc1c9f                    = 1,
	*77d5f2bd48                    = 2,
	*318cc6a983_MAX                = 3,
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
	Start                          = 0,
	Interactible                   = 1,
	Finish                         = 2,
	EPlatoonSupportRequestEventType_MAX = 3,
};

enum class EPlatoonCarePackageType : uint8_t
{
	NotDesignated                  = 0,
	WeaponPackage                  = 1,
	HealingPackage                 = 2,
	EPlatoonCarePackageType_MAX    = 3,
};

enum class EEquipSlotID : uint8_t
{
	Head                           = 0,
	Hat                            = 1,
	Eyes                           = 2,
	Mask                           = 3,
	Ghillie                        = 4,
	Torso                          = 5,
	TorsoArmor                     = 6,
	Outer                          = 7,
	Backpack                       = 8,
	Hands                          = 9,
	Legs                           = 10,
	Feet                           = 11,
	Belt                           = 12,
	Special01                      = 13,
	Special02                      = 14,
	WeaponPrimary                  = 15,
	WeaponSecondary                = 16,
	WeaponMelee                    = 17,
	WeaponThrowable                = 18,
	WeaponTacticalGear             = 19,
	Bluechip                       = 20,
	MaxOrNone                      = 21,
	EEquipSlotID_MAX               = 22,
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
	Thrown_Grenade                 = 0,
	Thrown_Molotov                 = 1,
	Thrown_Melee                   = 2,
	Thrown_Trap                    = 3,
	Thrown_StickyBomb              = 4,
	Thrown_C4                      = 5,
	Thrown_JerryCan                = 6,
	Thrown_BZ_Grenade              = 7,
	Thrown_TacPack                 = 8,
	Thrown_TraumaBag               = 9,
	Thrown_Toolbox                 = 10,
	Thrown_CanBomb                 = 11,
	Thrown_SpareTire               = 12,
	Thrown_IntegratedRepairKit     = 13,
	Thrown_PlantedBombKit          = 14,
	Thrown_DefusingBombKit         = 15,
	Thrown_Other                   = 16,
	Thrown_StructFlare             = 17,
	Thrown_MAX                     = 18,
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

enum class E*c432865832 : uint8_t
{
	*57edb87110                    = 0,
	*101886941f                    = 1,
	*ea20257a65                    = 2,
	*da4b65226d                    = 3,
	*a2d85859e2                    = 4,
	*f0c0e034d2                    = 5,
	*d9f4ce0003                    = 6,
	*760df06e7d                    = 7,
	*8a1518fd4c                    = 8,
	*c432865832_MAX                = 9,
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
	Initialized                    = 0,
	Prolonged                      = 1,
	CreateThunder                  = 2,
	ETslOvercastAction_MAX         = 3,
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
	Undefined                      = 0,
	Bullet_Hitted_LivingThings     = 1,
	Bullet_Hitted_Others           = 2,
	Weapon_Gun_Firing              = 3,
	Weapon_Grenade_Bounce          = 4,
	Weapon_Grenade_Explosion       = 5,
	Weapon_Grenade_ExplosionSound  = 6,
	Vehicle_Exhausting             = 7,
	Vehicle_Crash                  = 8,
	Character_FootStep             = 9,
	Character_Landing              = 10,
	MAX                            = 11,
	EDistanceBasedEvent_MAX        = 12,
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
	Targeting_None                 = 0,
	Targeting_Aiming               = 1,
	Targeting_Scoping              = 2,
	Targeting_MAX                  = 3,
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
	None                           = 0,
	Store                          = 1,
	Tuning                         = 2,
	RandomItem                     = 3,
	Weapon                         = 4,
	GarageOpen                     = 5,
	Selling                        = 6,
	EMarketCategoryType_MAX        = 7,
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

enum class E*1c41277566 : uint8_t
{
	*a2b6a9a375                    = 0,
	*f4bb2658fe                    = 1,
	*6005077df7                    = 2,
	*1b702fbb1b                    = 3,
	*1c41277566_MAX                = 4,
};

enum class E*b09bb3893c : uint8_t
{
	*4fff57ea37                    = 0,
	*dcb0db4a4a                    = 1,
	*258998b67f                    = 2,
	*fc28923754                    = 3,
	*9cfc31962a                    = 4,
	*17dda7be3c                    = 5,
	*45660cd192                    = 6,
	*051a8b507e                    = 7,
	*b09bb3893c_MAX                = 8,
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
	None                           = 0,
	Bandage                        = 1,
	FirstAid                       = 2,
	Medkit                         = 3,
	BattleReadyKit                 = 4,
	EnergyDrink                    = 5,
	Painkiller                     = 6,
	Adrenaline                     = 7,
	GasCan                         = 8,
	Key                            = 10,
	EmergencyPickup                = 11,
	SelfRevive                     = 12,
	Ascender                       = 13,
	RevivalTransmitter             = 14,
	TacticalGear                   = 15,
	Bicycle                        = 16,
	SkinVehicle                    = 17,
	Buff                           = 18,
	RubberBoat                     = 19,
	ECastableItemType_MAX          = 20,
};

enum class EItemRequestType : uint8_t
{
	None                           = 0,
	Heal                           = 1,
	Ammo                           = 2,
	EItemRequestType_MAX           = 3,
};

enum class ESpecialZoneAdditionalEffect : uint8_t
{
	RemoveFireAndSmoke             = 0,
	DeactivateElecTacticalGear     = 1,
	DeactivateElecWorldObject      = 2,
	DeactivateReticle              = 3,
	DeactivateVehicle              = 4,
	ESpecialZoneAdditionalEffect_MAX = 5,
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
	Other                          = 0,
	Baltic                         = 1,
	Desert                         = 2,
	Savage                         = 3,
	DihorOtok                      = 4,
	Summerland                     = 5,
	Tiger                          = 6,
	Chimera                        = 7,
	Heaven                         = 8,
	Kiki                           = 9,
	Neon                           = 10,
	Erangel                        = 11,
	ETslMapName_MAX                = 12,
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
	NotMatchingState               = 0,
	Matching                       = 1,
	GamePrepared                   = 2,
	EDualMatchingState_MAX         = 3,
};

enum class EBuffPropertyType : uint8_t
{
	CoolTime                       = 0,
	MeleeDamageRatio               = 1,
	OtherDamageRatio               = 2,
	AllDamageRatio                 = 3,
	MeleeAttackDamageRatio         = 4,
	OtherAttackDamageRatio         = 5,
	MeleeBehindAttackDamageRatio   = 6,
	LandingDamageRatio             = 7,
	GetBoostOnDeal                 = 8,
	MovementSpeedModifier          = 9,
	OnFootSpeedAccelModifier       = 10,
	JumpVelocityModifier           = 11,
	MaxHpModifier                  = 12,
	DecreaseRevivalCastTime        = 13,
	ReloadingSpeedModifier         = 14,
	MultiProperty                  = 15,
	RecoilModifier                 = 16,
	ReduceGaugeRatio               = 17,
	DebuffResistance               = 18,
	EBuffPropertyType_MAX          = 19,
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
	None                           = 0,
	Normal                         = 1,
	Lead                           = 2,
	EPartnerLevel_MAX              = 3,
};

enum class ELeagueMatchStatistic : uint8_t
{
	Kill                           = 0,
	Damage                         = 1,
	Assist                         = 2,
	ELeagueMatchStatistic_MAX      = 3,
};

enum class EBlueZoneShape : uint8_t
{
	None                           = 0,
	Circle                         = 1,
	Rectangle                      = 2,
	EBlueZoneShape_MAX             = 3,
};

enum class EGameZoneType : uint8_t
{
	SafeZone                       = 0,
	PlayZone                       = 1,
	BlueZone                       = 2,
	RedZone                        = 3,
	BlackZone                      = 4,
	EGameZoneType_MAX              = 5,
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
	None                           = 0,
	Blue                           = 1,
	Red                            = 2,
	EPlatoonTeam_MAX               = 3,
};

enum class EPrivateTrainingRoomType : uint8_t
{
	IndoorRange                    = 0,
	PracticalTrainingRoom          = 1,
	None                           = 2,
	EPrivateTrainingRoomType_MAX   = 3,
};

enum class E*ee8b4f4d9a : uint8_t
{
	*5056f6025d                    = 0,
	*2590f7f3ca                    = 1,
	*371c6653a7                    = 2,
	*ee8b4f4d9a_MAX                = 3,
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
	NoChange                       = 0,
	Rainy                          = 1,
	Foggy                          = 2,
	EWeatherChange_MAX             = 3,
};

enum class E*17d40c1dde : uint8_t
{
	*e4f73c6712                    = 0,
	*6b6d391fc2                    = 1,
	*3a86a52584                    = 2,
	*1741e75716                    = 3,
	*02e0a8aa1f                    = 4,
	*5c1991e1c2                    = 5,
	*17d40c1dde_MAX                = 6,
};

enum class EMinimapColorType : uint8_t
{
	DESATURATED                    = 0,
	SATURATED                      = 1,
	EMinimapColorType_MAX          = 2,
};

enum class EServerStatType : uint8_t
{
	UE                             = 0,
	NET                            = 1,
	FRAMEPRO                       = 2,
	EServerStatType_MAX            = 3,
};

enum class E*fa52f45786 : uint8_t
{
	*9f04c11137                    = 0,
	*ff4faa4986                    = 1,
	*857463b5cf                    = 2,
	*fa52f45786_MAX                = 3,
};

enum class EStoreCategory : uint8_t
{
	None                           = 0,
	Equipment                      = 1,
	Attachment                     = 2,
	ETC                            = 3,
	Intermediate                   = 4,
	HighLevel                      = 5,
	AR                             = 6,
	DMR                            = 7,
	SR                             = 8,
	SG                             = 9,
	SMG                            = 10,
	CarePackage                    = 11,
	CarePackage2                   = 12,
	EStoreCategory_MAX             = 13,
};

enum class EMarketLevel : uint8_t
{
	None                           = 0,
	GroupA                         = 1,
	GroupB                         = 2,
	GroupC                         = 3,
	GroupD                         = 4,
	EMarketLevel_MAX               = 5,
};

enum class ERedZoneGenerateType : uint8_t
{
	None                           = 0,
	Uniform_Distribution           = 1,
	Inside                         = 2,
	Ringtaw                        = 3,
	Outsider                       = 4,
	RingtawOrOutsider              = 5,
	InsideOrRingtawOrOutsider      = 6,
	ERedZoneGenerateType_MAX       = 7,
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
	Action                         = 0,
	Axis                           = 1,
	Action_Combo                   = 2,
	EActionType_MAX                = 3,
};

enum class EEmergencyPickupState : uint8_t
{
	None                           = 0,
	Prepare                        = 1,
	Aircraft                       = 2,
	EEmergencyPickupState_MAX      = 3,
};

enum class E*dc96b4afd5 : uint8_t
{
	*e72ef4afed                    = 0,
	*8b4418cd0c                    = 1,
	*0dba53a138                    = 2,
	*4814a9cd63                    = 3,
	*184f83722e                    = 4,
	*dc96b4afd5_MAX                = 5,
};

enum class EGamepadInputResponseTypes : uint8_t
{
	Pressed                        = 1,
	Released                       = 2,
	Tap                            = 4,
	Hold                           = 8,
	DoubleTap                      = 16,
	EGamepadInputResponseTypes_MAX = 17,
};

enum class EGamepadPresets : uint8_t
{
	ControllerTypeA                = 0,
	ControllerTypeB                = 1,
	ControllerTypeC                = 2,
	CustomType                     = 3,
	Max                            = 4,
	EGamepadPresets_MAX            = 5,
};

enum class ETslInputModes : uint8_t
{
	Toggle                         = 0,
	Hold                           = 1,
	DoubleTap                      = 2,
	ETslInputModes_MAX             = 3,
};

enum class EGameplayClientReplay : uint8_t
{
	Replay                         = 0,
	Killcam                        = 1,
	KeyGuide                       = 2,
	EGameplayClientReplay_MAX      = 3,
};

enum class E*36d15e7eb7 : uint8_t
{
	*02c3e23e60                    = 0,
	*d9d1eecc8d                    = 1,
	*36d15e7eb7_MAX                = 2,
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

enum class E*f90e381453 : uint8_t
{
	*f1b8dd4eba                    = 0,
	*a9129d02d3                    = 1,
	*d735709751                    = 2,
	*f90e381453_MAX                = 3,
};

enum class E*70aa7d4146 : uint8_t
{
	*2808783811                    = 0,
	*44523be949                    = 1,
	*f77f626f87                    = 2,
	*9f8fd59b06                    = 3,
	*66cf4b2958                    = 4,
	*96de74250c                    = 5,
	*70aa7d4146_MAX                = 6,
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
	None                           = 0,
	FromBeginning                  = 1,
	AfterDeath                     = 2,
	AfterExtermination             = 3,
	EagleEye                       = 8,
	EObserverAuthorityType_MAX     = 9,
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
	GroupO                         = 14,
	GroupP                         = 15,
	GroupQ                         = 16,
	GroupR                         = 17,
	GroupS                         = 18,
	GroupT                         = 19,
	GroupU                         = 20,
	GroupV                         = 21,
	GroupW                         = 22,
	GroupX                         = 23,
	GroupY                         = 24,
	GroupZ                         = 25,
	MAX                            = 26,
	EThingSpotGroupType_MAX        = 27,
};

enum class ERadioWheelMessageType : uint8_t
{
	None                           = 0,
	RadioMessage                   = 1,
	Emoji                          = 2,
	ERadioWheelMessageType_MAX     = 3,
};

enum class EColorBlindType : uint8_t
{
	Normal                         = 0,
	Deuteranopia                   = 1,
	Protanopia                     = 2,
	Tritanopia                     = 3,
	EColorBlindType_MAX            = 4,
};

enum class EFrameRateLimitType : uint8_t
{
	Unlimited                      = 0,
	Fixed                          = 1,
	Fixed                          = 2,
	Customizable                   = 3,
	DisplayBased                   = 4,
	EFrameRateLimitType_MAX        = 5,
};

enum class ECameraViewBehaviour : uint8_t
{
	FpsAndTps                      = 0,
	FpsOnly                        = 1,
	TpsOnly                        = 2,
	ECameraViewBehaviour_MAX       = 3,
};

enum class E*0324ef2f37 : uint8_t
{
	*4f1d4fd07d                    = 0,
	*20499cf7b5                    = 1,
	*6da1068b8c                    = 2,
	*0324ef2f37_MAX                = 3,
};

enum class EMatchStartType : uint8_t
{
	Normal                         = 0,
	Airborne                       = 1,
	Monster                        = 2,
	EMatchStartType_MAX            = 3,
};

enum class ETslDestructibleObjectType : uint8_t
{
	None                           = 0,
	JerryCan                       = 1,
	BulletproofShield              = 2,
	Window                         = 3,
	Door                           = 4,
	Fence                          = 5,
	Hay                            = 6,
	Camera                         = 7,
	Bamboo                         = 8,
	Helmet                         = 9,
	Vehicle                        = 10,
	Wheel                          = 11,
	Land                           = 12,
	BirdCage                       = 13,
	JukeBox                        = 14,
	ETslDestructibleObjectType_MAX = 15,
};

enum class ETslInputDeviceTypeBranch_BPOnly : uint8_t
{
	KeyboardMouse                  = 0,
	XboxGamepad                    = 1,
	PS4Gamepad                     = 2,
	SwitchGamepad                  = 3,
	ETslInputDeviceTypeBranch_MAX  = 4,
};

enum class ETslInputDeviceGroupBranch_BPOnly : uint8_t
{
	KeyboardMouse                  = 0,
	Gamepad                        = 1,
	ETslInputDeviceGroupBranch_MAX = 2,
};

enum class ETslPlatformTypeBranch_BPOnly : uint8_t
{
	PC                             = 0,
	Xbox                           = 5,
	PS4                            = 6,
	Invalid                        = 255,
	ETslPlatformTypeBranch_MAX     = 256,
};

enum class ETslPlatformGroupBranch_BPOnly : uint8_t
{
	PC                             = 0,
	Console                        = 1,
	ETslPlatformGroupBranch_MAX    = 2,
};

enum class EKickProcess : uint8_t
{
	Disconnect                     = 0,
	Shutdown                       = 1,
	ShutdownIn10Sec                = 2,
	DuplicatedLogin                = 3,
	EKickProcess_MAX               = 4,
};

enum class EStatTrakState : uint8_t
{
	Run                            = 0,
	Locked                         = 1,
	Error                          = 2,
	EStatTrakState_MAX             = 3,
};

enum class ESkinMeshParamerType : uint8_t
{
	None                           = 0,
	GunAiming                      = 1,
	GunScoping                     = 2,
	ESkinMeshParamerType_MAX       = 3,
};

enum class E*96d9294354 : uint8_t
{
	*89874fce8e                    = 0,
	*352349d633                    = 1,
	*d17a7f7e0f                    = 2,
	*3565e0f6f1                    = 3,
	*19c08dfba5                    = 4,
	*96d9294354_MAX                = 5,
};

enum class ESkinMeshType : uint8_t
{
	SkeletalMesh                   = 0,
	AsyncStaticMesh                = 1,
	StaticMesh                     = 2,
	ESkinMeshType_MAX              = 3,
};

enum class EVehicleSkinCategory : uint8_t
{
	None                           = 0,
	FourSeaterSUV                  = 1,
	FourSeaterSedan                = 2,
	TwoSeaterSportsCar             = 3,
	TwoSeaterMotorbike             = 4,
	OneSeaterBicycle               = 5,
	EVehicleSkinCategory_MAX       = 6,
};

enum class ETslHUDConfigType : uint8_t
{
	None                           = 0,
	Main                           = 1,
	Mode                           = 2,
	Map                            = 3,
	Platform                       = 4,
	Event                          = 5,
	Debug                          = 6,
	ETslHUDConfigType_MAX          = 7,
};

enum class EAuxilaryIconRequestor : uint8_t
{
	None                           = 0,
	Minimap                        = 1,
	OwningWidget                   = 2,
	EAuxilaryIconRequestor_MAX     = 3,
};

enum class ERadioMessageAlarmSoundCategory : uint8_t
{
	Normal                         = 0,
	Notify                         = 1,
	Warning                        = 2,
	Important                      = 3,
	Invalid                        = 255,
	ERadioMessageAlarmSoundCategory_MAX = 256,
};

enum class EInventoryRadioMessageType : uint8_t
{
	Vicinity                       = 0,
	Inventory                      = 1,
	Equipment                      = 2,
	Weapon                         = 3,
	Attachment                     = 4,
	TacticalGear                   = 5,
	Empty_Head                     = 6,
	Empty_TorsoArmor               = 7,
	Empty_Backpack                 = 8,
	Empty_PrimaryWeapon            = 9,
	Empty_SecondaryWeapon          = 10,
	Empty_WeaponMelee              = 11,
	Empty_WeaponThrowable          = 12,
	Empty_LowMagScope              = 13,
	Empty_HighMagScope             = 14,
	Empty_Muzzle                   = 15,
	Empty_LowerRail                = 16,
	Empty_Magazine                 = 17,
	Empty_Stock                    = 18,
	Empty_Canted                   = 19,
	None                           = 20,
	EInventoryRadioMessageType_MAX = 21,
};

enum class ERadioWheelCancelWays : uint8_t
{
	None                           = 0,
	NormalRelease                  = 1,
	CenterSelected                 = 2,
	RightClickRelease              = 3,
	ERadioWheelCancelWays_MAX      = 4,
};

enum class ERadioMessageInteractionType : uint8_t
{
	DroppedItem                    = 0,
	Vehicle                        = 1,
	CarepackageOrDeadbox           = 2,
	VendingMachine                 = 3,
	RevivalTower                   = 4,
	Market                         = 5,
	EnemySpotted                   = 6,
	Normal                         = 7,
	None                           = 8,
	ERadioMessageInteractionType_MAX = 9,
};

enum class ERadioMessageCategory : uint8_t
{
	Affirmative                    = 0,
	ThankYou                       = 1,
	NeedMed                        = 2,
	Negative                       = 3,
	Sorry                          = 4,
	NeedAmmo                       = 5,
	EnemySpotted                   = 6,
	EnemyAreaSpotted               = 7,
	ItemSpotted                    = 8,
	Ping                           = 9,
	AreaPing                       = 10,
	HelpMe                         = 11,
	Attack                         = 12,
	Defend                         = 13,
	GroupUp                        = 14,
	AreaNeedHelp                   = 15,
	AreaBackup                     = 16,
	WayPoint                       = 17,
	EmergencyPickup                = 18,
	TeamMateEmote                  = 19,
	Inventory                      = 20,
	PlantingBomb                   = 21,
	DefusingBomb                   = 22,
	MovePlantedBombSite            = 23,
	BombCoin                       = 24,
	Rush                           = 25,
	RewardProvided                 = 26,
	TeamParkourReady               = 27,
	IngameMission                  = 28,
	Emoji                          = 29,
	Heal                           = 30,
	Revive                         = 31,
	Reviving                       = 32,
	Recall                         = 33,
	Move                           = 34,
	Escape                         = 35,
	LetsCharge                     = 36,
	BeQuiet                        = 37,
	VoiceTalk                      = 38,
	Max                            = 39,
	Invalid                        = 255,
	ERadioMessageCategory_MAX      = 256,
};

enum class ERadioMessageDecorateType : uint8_t
{
	None                           = 0,
	EnemySpotted                   = 1,
	WorldMapPing                   = 2,
	RewardProvided                 = 3,
	ERadioMessageDecorateType_MAX  = 4,
};

enum class E*7d5f94df2c : uint8_t
{
	*1655353d0a                    = 0,
	*e0447e1f67                    = 1,
	*5317c33251                    = 2,
	*0409e83eff                    = 3,
	*7d5f94df2c_MAX                = 4,
};

enum class EAuxilaryIconType : uint8_t
{
	Invalid                        = 0,
	Detected_Player                = 1,
	Detected_Player_Above          = 2,
	Detected_Player_Below          = 3,
	EAuxilaryIconType_MAX          = 4,
};

enum class EDirectMessageType : uint8_t
{
	Radio                          = 0,
	Direct                         = 1,
	DirectReply                    = 2,
	Warning                        = 3,
	System                         = 4,
	EDirectMessageType_MAX         = 5,
};

enum class EDirectMessageOutGameType : uint8_t
{
	Normal                         = 0,
	Preset                         = 1,
	System                         = 2,
	ClanNormal                     = 3,
	ClanSystem                     = 4,
	EDirectMessageOutGameType_MAX  = 5,
};

enum class EObserverHudAnimType : uint8_t
{
	TeamWipeOutAnim                = 0,
	PersonalKillingSpreeAnim       = 1,
	TeamTotalKillingSpreeAnim      = 2,
	EObserverHudAnimType_MAX       = 3,
};

enum class ESystemMenuButtonType : uint8_t
{
	RESUME                         = 0,
	SETTINGS                       = 1,
	TEAM_MANAGEMENT                = 2,
	KEY_GUIDE                      = 3,
	RESTART_LOBBY                  = 4,
	LEAVE_MATCH                    = 5,
	RETURN_TO_GAME                 = 6,
	EXIT_TO_DESKTOP                = 7,
	GM_COMMAND_INGAME_HELPER       = 8,
	MATCH_LOG                      = 9,
	ESystemMenuButtonType_MAX      = 10,
};

enum class EUIAkEvent : uint8_t
{
	None                           = 0,
	HoverWeak                      = 1,
	HoverMedium                    = 2,
	SettingSlider                  = 3,
	Confirm                        = 4,
	Cancel                         = 5,
	PopupModal                     = 6,
	SystemMessage                  = 7,
	EUIAkEvent_MAX                 = 8,
};

enum class ERadioMessagePresets : uint8_t
{
	Preset1                        = 0,
	Preset2                        = 1,
	ERadioMessagePresets_MAX       = 2,
};

enum class EPlatoonSupportRequestType : uint8_t
{
	NoRequest                      = 0,
	FireSupportRequest             = 1,
	WeaponPackageRequest           = 2,
	HealingPackageRequest          = 3,
	EPlatoonSupportRequestType_MAX = 4,
};

enum class EReportUiType : uint8_t
{
	Normal                         = 0,
	Respawn                        = 1,
	EReportUiType_MAX              = 2,
};

enum class ECharacterIconType : uint8_t
{
	Normal                         = 0,
	Vehicle                        = 1,
	Parachute                      = 2,
	Die                            = 3,
	Groggy                         = 4,
	Quitter                        = 5,
	Observer                       = 6,
	Aircraft                       = 7,
	EmergencyPickup                = 8,
	Mortar                         = 9,
	ECharacterIconType_MAX         = 10,
};

enum class EUiShowType : uint8_t
{
	AlwaysShow                     = 0,
	TpsOnlyShow                    = 1,
	FpsOnlyShow                    = 2,
	AlwaysHide                     = 3,
	EUiShowType_MAX                = 4,
};

enum class ETslHudType : uint8_t
{
	None                           = 0,
	CharacterHud                   = 1,
	SpectatorHud                   = 2,
	ObserverHud                    = 3,
	ReplayHud                      = 4,
	LeagueReplayHud                = 5,
	ETslHudType_MAX                = 6,
};

enum class E*496a0e179d : uint8_t
{
	*5d0d3ee736                    = 0,
	*faab830d80                    = 1,
	*6e79289a7e                    = 2,
	*0c189dca9f                    = 3,
	*1a85dde2b0                    = 4,
	*496a0e179d_MAX                = 5,
};

enum class ETslUpdateHudReason : uint8_t
{
	None                           = 0,
	HUD_Initialize                 = 1,
	HUD_ApplySettings              = 2,
	HUD_NewMatchState              = 3,
	HUD_NewGameMode                = 4,
	PC_ChangeState                 = 5,
	PC_SetViewTarget               = 6,
	PC_RepPawn                     = 7,
	PC_RepRider                    = 8,
	PC_SwitchToObserver            = 9,
	ETslUpdateHudReason_MAX        = 10,
};

enum class EWidgetShowType : uint8_t
{
	Show                           = 0,
	Hide                           = 1,
	Toggle                         = 2,
	EWidgetShowType_MAX            = 3,
};

enum class ECastLevel : uint8_t
{
	None                           = 0,
	NoRestriction                  = 1,
	Restriction                    = 2,
	OnlyRotationRestriction        = 3,
	ECastLevel_MAX                 = 4,
};

enum class ECastPriority : uint8_t
{
	None                           = 0,
	Low                            = 1,
	Normal                         = 2,
	High                           = 3,
	Max                            = 4,
	ECastPriority_MAX              = 5,
};

enum class ETurningDirection : uint8_t
{
	None                           = 0,
	Right                          = 1,
	Right                          = 2,
	Right                          = 3,
	Right                          = 4,
	Left                           = 5,
	Left                           = 6,
	Left                           = 7,
	Left                           = 8,
	ETurningDirection_MAX          = 9,
};

enum class E*7ca2ecb33f : uint8_t
{
	*28afcd1506                    = 0,
	*583d69dc2d                    = 1,
	*286ad8cace                    = 2,
	*476688f9e9                    = 3,
	*522b6e9d2a                    = 4,
	*82a54fa6b2                    = 5,
	*4925ca2ac0                    = 6,
	*612c49bec8                    = 7,
	*3f889db3cd                    = 8,
	*7ca2ecb33f_MAX                = 9,
};

enum class ETargetAnimDynamicsHairType : uint8_t
{
	None                           = 0,
	Ponytail                       = 1,
	Twintails                      = 2,
	ETargetAnimDynamicsHairType_MAX = 3,
};

enum class EAnimDynamicsMutableTagType : uint8_t
{
	None                           = 0,
	HEAD_NS                        = 1,
	EAnimDynamicsMutableTagType_MAX = 2,
};

enum class ETargetAnimDynamicsType : uint8_t
{
	None                           = 0,
	Hair                           = 1,
	Coat                           = 2,
	ETargetAnimDynamicsType_MAX    = 3,
};

enum class EAnimatableCustomizableTypes : uint8_t
{
	Hair                           = 0,
	Outer                          = 1,
	Legs                           = 2,
	Torso                          = 3,
	Head                           = 4,
	Mask                           = 5,
	Ghillie                        = 6,
	Backpack                       = 7,
	Eyes                           = 8,
	TorsoArmor                     = 9,
	Hands                          = 10,
	Feet                           = 11,
	Belt                           = 12,
	Face                           = 13,
	Max                            = 14,
	EAnimatableCustomizableTypes_MAX = 15,
};

enum class EAnimWeaponSpecificClass : uint8_t
{
	None                           = 0,
	EAnimWeaponSpecificClass_MAX   = 1,
};

enum class EAnimVehicleSeatType : uint8_t
{
	Rider                          = 0,
	Pillion                        = 1,
	VehicleDriver                  = 2,
	VehiclePassenger               = 3,
	Pilot                          = 4,
	AircraftPassenger              = 5,
	GliderPassenger                = 6,
	EAnimVehicleSeatType_MAX       = 7,
};

enum class E*772488bf6e : uint8_t
{
	*470c88e106                    = 0,
	*8da1b0805f                    = 1,
	*4284d4093b                    = 2,
	*fde5e3af5e                    = 3,
	*772488bf6e_MAX                = 4,
};

enum class EUnarmedAnimType : uint8_t
{
	Default                        = 0,
	Spray                          = 1,
	EUnarmedAnimType_MAX           = 2,
};

enum class EAnimStance : uint8_t
{
	Stand                          = 0,
	Crouch                         = 1,
	Prone                          = 2,
	Groggy                         = 3,
	EAnimStance_MAX                = 4,
};

enum class EAnimWeaponType : uint8_t
{
	None                           = 0,
	Rifle                          = 1,
	Launcher                       = 2,
	Pistol                         = 3,
	Throwable                      = 4,
	SpikeTrap                      = 5,
	Melee                          = 6,
	Shield                         = 7,
	Mortar                         = 8,
	MAX                            = 9,
	EAnimWeaponType_MAX            = 10,
};

enum class ERaycastDirection : uint8_t
{
	Forward                        = 0,
	Down_45_Degrees                = 1,
	Down                           = 2,
	ERaycastDirection_MAX          = 3,
};

enum class ELobbyPoseProcessType : uint8_t
{
	PreviewScenePose               = 0,
	DefaultScenePose               = 1,
	ELobbyPoseProcessType_MAX      = 2,
};

enum class ELobbyPosePlayType : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Ranked                         = 2,
	Profile                        = 3,
	EndOfMatch                     = 4,
	ELobbyPosePlayType_MAX         = 5,
};

enum class E*b3adba8146 : uint8_t
{
	*bc558b30b7                    = 0,
	*8f37bc7f0a                    = 1,
	*2389e266f7                    = 2,
	*b3adba8146_MAX                = 3,
};

enum class E*6aacda8d37 : uint8_t
{
	*a6395e13cc                    = 0,
	*2b844c031c                    = 1,
	*929a7ea35c                    = 2,
	*67dfc09075                    = 3,
	*76fd565254                    = 4,
	*6aacda8d37_MAX                = 5,
};

enum class ELobbyCharacterTransitionType : uint8_t
{
	AppealReady                    = 0,
	AppealNotReady                 = 1,
	Ready                          = 2,
	NotReady                       = 3,
	ReadyToNotReady                = 4,
	NotReadyToReady                = 5,
	EmoteToReady                   = 6,
	EmoteToNotReady                = 7,
	ELobbyCharacterTransitionType_MAX = 8,
};

enum class EOutGameMontageState : uint8_t
{
	Default                        = 0,
	PlayingEmote                   = 1,
	PlayingLobbyPose               = 2,
	Interrupted                    = 3,
	Finished                       = 4,
	EOutGameMontageState_MAX       = 5,
};

enum class E*bbc592bb46 : uint8_t
{
	*f41bc5f242                    = 0,
	*2eac4bd53d                    = 1,
	*129ee2ba61                    = 2,
	*bbc592bb46_MAX                = 3,
};

enum class ELobbyBlurChangingStates : uint8_t
{
	AlwaysOff                      = 0,
	AlwaysOn                       = 1,
	ELobbyBlurChangingStates_MAX   = 2,
};

enum class ELobbyCameraStates : uint8_t
{
	XBox_Home                      = 0,
	Main                           = 1,
	Main                           = 2,
	Menu                           = 3,
	Custom                         = 4,
	Custom                         = 5,
	EventPass_Milestone            = 6,
	EventPass_Milestone            = 7,
	EventPass_Missions             = 8,
	ViewMode_Character             = 9,
	ViewMode_Weapon                = 10,
	ViewMode_Parachute             = 11,
	EventPass_Milestone_0_Particle = 12,
	None                           = 13,
	ELobbyCameraStates_MAX         = 14,
};

enum class ELobbyCustomizingSlotType : uint8_t
{
	None                           = 0,
	VehicleSlot                    = 1,
	WeaponSlot                     = 2,
	ELobbyCustomizingSlotType_MAX  = 3,
};

enum class ELobbyCharacterCameraType : uint8_t
{
	None                           = 0,
	WholeBodyCamera                = 1,
	TopCamera                      = 2,
	HeadCamera                     = 3,
	BodyCamera                     = 4,
	LegCamera                      = 5,
	FootCamera                     = 6,
	Max                            = 7,
	ELobbyCharacterCameraType_MAX  = 8,
};

enum class ETslOutGameCloudRequestErrorType : uint8_t
{
	Unknown                        = 0,
	InternalError                  = 1,
	ServerError                    = 2,
	RequestTimedOut                = 3,
	DataCorrupted                  = 4,
	CompressionFailed              = 5,
	DecompressionFailed            = 6,
	ETslOutGameCloudRequestErrorType_MAX = 7,
};

enum class ETslOutGameCloudRequestType : uint8_t
{
	Invalid                        = 0,
	SaveToCloud                    = 1,
	LoadFromCloud                  = 2,
	ETslOutGameCloudRequestType_MAX = 3,
};

enum class EViewModeActorCenterPosition : uint8_t
{
	None                           = 0,
	Center                         = 1,
	Bottom                         = 2,
	EViewModeActorCenterPosition_MAX = 3,
};

enum class EViewModeCategory : uint8_t
{
	None                           = 0,
	Weapon                         = 1,
	Parachute                      = 2,
	Character                      = 3,
	Vehicle                        = 4,
	FloatingVehicle                = 5,
	LootCrate                      = 6,
	EViewModeCategory_MAX          = 7,
};

enum class EObjectType : uint8_t
{
	AnimSpawnObject                = 0,
	PhysicsBody                    = 1,
	EObjectType_MAX                = 2,
};

enum class EEmoteMoveType : uint8_t
{
	None                           = 0,
	MoveFoward                     = 1,
	EEmoteMoveType_MAX             = 2,
};

enum class EEmotePlayType : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Group                          = 2,
	Interaction                    = 3,
	OnStage                        = 4,
	EEmotePlayType_MAX             = 5,
};

enum class EEmoteAnimType : uint8_t
{
	EmoteFullBody                  = 0,
	EmoteUpperBody                 = 1,
	EmoteArm                       = 2,
	EEmoteAnimType_MAX             = 3,
};

enum class EDamageVictimActorType : uint8_t
{
	Default                        = 0,
	Character                      = 1,
	Vehicle                        = 2,
	Wheel                          = 3,
	DestructibleActor              = 4,
	ExplosiveItem                  = 5,
	DummyAI                        = 6,
	EDamageVictimActorType_MAX     = 7,
};

enum class ECollisionProfileType : uint8_t
{
	Profiles                       = 0,
	DefaultChannelResponses        = 1,
	EditProfiles                   = 2,
	ProfileRedirects               = 3,
	CollisionChannelRedirects      = 4,
	ECollisionProfileType_MAX      = 5,
};

enum class EAntiCheatKickType : uint8_t
{
	Default                        = 0,
	HWID                           = 1,
	MouseMacro                     = 2,
	InGame                         = 3,
	BattleEye                      = 4,
	EAntiCheatKickType_MAX         = 5,
};

enum class EMovingState : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	EMovingState_MAX               = 3,
};

enum class EPlayerInputType : uint8_t
{
	KeyboardMouse                  = 0,
	Gamepad                        = 1,
	Mixed                          = 2,
	EPlayerInputType_MAX           = 3,
};

enum class ECheatType : uint8_t
{
	None                           = 0,
	SpeedHack                      = 1,
	SpeedHack_StanceFree           = 2,
	SpeedHack_FakeParachuting      = 3,
	SpeedHack_MovementChecker      = 4,
	IgnoreWall_Hit                 = 5,
	IgnoreWall_Sight               = 6,
	IgnoreWall_Sight2              = 7,
	IgnoreVelocity_Hit             = 8,
	IgnoreVelocity                 = 9,
	ItemPackage                    = 10,
	CarePackageMount               = 11,
	Aimbot                         = 12,
	VerifyLagSwitch                = 13,
	InvalidNetConnectionClose      = 14,
	InvalidImpact                  = 15,
	InvalidImpact_Adjusted         = 16,
	InvalidImpactZ                 = 17,
	InvalidImpactZ_Adjusted        = 18,
	InvalidImpact_Gun_C            = 19,
	InvalidImpact_Gun_C_Adjusted   = 20,
	InvalidOrigin_Gun              = 21,
	InvalidOrigin_Gun_Adjusted     = 22,
	InvalidOrigin_Melee            = 23,
	InvalidOrigin_Melee_Adjusted   = 24,
	InvalidOrigin_Punch            = 25,
	InvalidOrigin_Punch_Adjusted   = 26,
	InvalidOrigin_Throwable        = 27,
	InvalidOrigin_MeleeThrow       = 28,
	InvalidOrigin_MeleeThrow_Adjusted = 29,
	InvalidSimStep_MeleeThrow      = 30,
	InvalidRange                   = 31,
	InvalidRange2                  = 32,
	InvalidRange2_Adjusted         = 33,
	InvalidRange_MeleeThrow        = 34,
	InvalidKick                    = 35,
	InvalidA0                      = 36,
	InvalidB1                      = 37,
	InvalidB1                      = 38,
	InvalidH0                      = 39,
	InvalidOrigin_Gun_C            = 40,
	InvalidOrigin_Gun_C_Adjusted   = 41,
	InvalidD0                      = 42,
	InvalidS0                      = 43,
	InvalidH1                      = 44,
	InvalidH2                      = 45,
	InvalidH3                      = 46,
	InvalidC0                      = 47,
	InvalidC1                      = 48,
	InvalidC2                      = 49,
	InvalidC3                      = 50,
	InvalidC4                      = 51,
	InvalidC5                      = 52,
	InvalidC6                      = 53,
	InvalidC7                      = 54,
	InvalidT0                      = 55,
	InvalidT2                      = 56,
	InvalidAimDir                  = 57,
	InvalidPelletDir               = 58,
	InvalidAmmoSpeed               = 59,
	InvalidAmmoDir                 = 60,
	InvalidCharacterFlag           = 61,
	InvalidCharacterXRay           = 62,
	InvalidPropertyCrc             = 63,
	InvalidWeaponCrc               = 64,
	InvalidWeaponRecoil            = 65,
	InvalidWeaponRecoilMultiplier  = 66,
	InvalidSwayBuffer              = 67,
	InvalidCameraYaw               = 68,
	InvalidWeaponPackageCrc        = 69,
	InvalidWeaponFlag              = 70,
	InvalidHitComponent            = 71,
	InvalidCollisionProfileCrc     = 72,
	InvalidPakListCrc              = 73,
	InvalidCharacterCrc            = 74,
	InvalidHitLocation             = 75,
	InvalidSight                   = 76,
	InvalidBackface                = 77,
	InvalidMovementCurveCrc        = 78,
	InvalidDriverFire              = 79,
	InvalidVehicleOverlap          = 80,
	InvalidViewRotation            = 81,
	InvalidPenetration             = 82,
	InvalidPunchSpeed              = 83,
	InvalidMortarFireInterval      = 84,
	InvalidMortarAllowedShots      = 85,
	InvalidSandboxItemUsage        = 86,
	InvalidInitialPenetratingAmmo  = 87,
	InvalidPenetratingAmmoId       = 88,
	InvalidMeleeAttackSpeed        = 89,
	InvalidSkydiveAttack           = 90,
	CHKSUM_PUNCH                   = 91,
	CHKSUM_MELEE                   = 92,
	CHKSUM_A0                      = 93,
	CHKSUM_T0                      = 94,
	CHKSUM_S0                      = 95,
	CHKSUM_D0                      = 96,
	CHKSUM_V0                      = 97,
	CHKSUM_W0                      = 98,
	CHKSUM_T1                      = 99,
	CHKSUM_D1                      = 100,
	CHKSUM_CD                      = 101,
	CHKSUM_LC                      = 102,
	CHKSUM_P0                      = 103,
	CHKSUM_BP                      = 104,
	CHKSUM_G1                      = 105,
	CHKSUM_H2                      = 106,
	CHKSUM_H3                      = 107,
	CHKSUM_UO                      = 108,
	CHKSUM_UF                      = 109,
	VHC_RI                         = 110,
	VHC_MG_FF                      = 111,
	VHC_MG_FC                      = 112,
	VHC_MG_SW                      = 113,
	VHC_MG_OS                      = 114,
	VHC_MG_BC                      = 115,
	VHC_MG_TC                      = 116,
	VHC_MG_PL                      = 117,
	VHC_MG_HL                      = 118,
	VHC_MG_SD                      = 119,
	VHC_MG_AA                      = 120,
	VHC_MG_AV                      = 121,
	VHC_MG_AD                      = 122,
	VHC_MG_WM                      = 123,
	VHC_MGB_FF                     = 124,
	VHC_MGB_FC                     = 125,
	VHC_MGB_OS                     = 126,
	VHC_MGB_BC                     = 127,
	VHC_MGB_TC                     = 128,
	VHC_MGB_PL                     = 129,
	VHC_MGB_HL                     = 130,
	VHC_MGB_AA                     = 131,
	VHC_MGB_AV                     = 132,
	VHC_MGB_AD                     = 133,
	VHC_MGF_OS                     = 134,
	VHC_MGF_TC                     = 135,
	VHC_MGF_BC                     = 136,
	VHC_MGF_SD                     = 137,
	VHC_MGF_AA                     = 138,
	VHC_MGF_AV                     = 139,
	VHC_KILL                       = 140,
	VHC_ED                         = 141,
	VHC_TRY_BYPASS_SERVERSIMUL     = 142,
	VHC_BYPASSED_SERVERSIMUL       = 143,
	VHC_FORCE_SERVERSIMUL          = 144,
	CK_ACTIVATE                    = 145,
	CK_DEACTIVATE                  = 146,
	AntiCheatKick_WallHack         = 147,
	AntiCheatKick_ESP              = 148,
	AntiCheatKick_SpeedHack1       = 149,
	AntiCheatKick_SpeedHack2       = 150,
	AntiCheatKick_SpeedHack3       = 151,
	AntiCheatKick_PLFC             = 152,
	AntiCheatKick_TCFC             = 153,
	AntiCheatKick_HL               = 154,
	AntiCheatKick_OS               = 155,
	AntiCheatKick_FC               = 156,
	AntiCheatKick_SV               = 157,
	VehicleSimulation_PLFC         = 158,
	VehicleSimulation_TCFC         = 159,
	VehicleSimulation_HL           = 160,
	VehicleSimulation_OS           = 161,
	VehicleSimulation_FC           = 162,
	CC_ACTIVATE                    = 163,
	CC_DEACTIVATE                  = 164,
	CC_FORCE_ERROR_CORRECTION      = 165,
	FLC_ACTIVATE                   = 166,
	FLC_DEACTIVATE                 = 167,
	FallingCorrection              = 168,
	VaultingCorrection             = 169,
	QS_AJ                          = 170,
	QS_VZ                          = 171,
	KGB_AF                         = 172,
	HighLocationVehicle            = 173,
	HighLocationBoat               = 174,
	UnderLandscapeBoat             = 175,
	UnderLandscapeVehicle          = 176,
	UnderLandscapeCharacter        = 177,
	InsideMeshCharacter            = 178,
	BC_BoatCorrection              = 179,
	HBR_InvalidDashDistance        = 180,
	DESP_ClientDataInvalidCheckSum = 181,
	HitInSmoke                     = 182,
	BoneFocusedShoot               = 183,
	CenterFocusedShoot             = 184,
	Combination_Undefined          = 185,
	Combination_FlyingCar          = 186,
	Combination_InsideMeshAttack   = 187,
	AbnormalMovementPostVaultSpeed = 188,
	AbnormalMovementPostVaultDistance = 189,
	VaultOverLimitDistance         = 190,
	Vehicle_PhysXDisabled          = 191,
	Vehicle_GravityDisabled        = 192,
	InvalidShotWhileReload         = 193,
	InvalidShotWhileManualFireCycle = 194,
	_____InformationLogBegin_____  = 195,
	ConsoleInputLog                = 196,
	FireInputLog                   = 197,
	ScopeCameraRotationLog         = 198,
	PitchAfterShotLog              = 199,
	DESP_ClientData                = 200,
	_____InformationLogEnd_____    = 201,
	ItemInvalidDistance            = 202,
	MaxCheatType                   = 203,
	ECheatType_MAX                 = 204,
};

enum class ELobbyItemPointSellingType : uint8_t
{
	Normal                         = 0,
	WeeklyDouble                   = 1,
	ELobbyItemPointSellingType_MAX = 2,
};

enum class ELobbyItemPlatform : uint8_t
{
	PC_Steam                       = 0,
	PC_NonSteam                    = 1,
	Xbox                           = 2,
	ELobbyItemPlatform_MAX         = 3,
};

enum class ELobbyItemTier : uint8_t
{
	Basic                          = 0,
	Common                         = 1,
	Classic                        = 2,
	Special                        = 3,
	Rare                           = 4,
	Elite                          = 5,
	Epic                           = 6,
	Legendary                      = 7,
	Ultimate                       = 8,
	Event                          = 9,
	ELobbyItemTier_MAX             = 10,
};

enum class ELobbyItemCategory : uint8_t
{
	Belt                           = 0,
	Body                           = 1,
	Eyes                           = 2,
	Feet                           = 3,
	Head                           = 4,
	Jacket                         = 5,
	Legs                           = 6,
	Mask                           = 7,
	Hands                          = 8,
	Box                            = 9,
	Key                            = 10,
	WeaponSkin                     = 11,
	ParachuteSkin                  = 12,
	HelmetSkin                     = 13,
	BackpackSkin                   = 14,
	TorsoArmorSkin                 = 15,
	VehicleSkin                    = 16,
	CastableSkin                   = 17,
	Multislot                      = 18,
	ELobbyItemCategory_MAX         = 19,
};

enum class EEquipableItemLevelType : uint8_t
{
	None                           = 0,
	Level1                         = 1,
	Level2                         = 2,
	Level3                         = 3,
	Level4                         = 4,
	EEquipableItemLevelType_MAX    = 5,
};

enum class EConstraintSlotType : uint8_t
{
	Block                          = 0,
	Hide                           = 1,
	Max                            = 2,
	EConstraintSlotType_MAX        = 3,
};

enum class E*f429e60eaa : uint8_t
{
	*94da74ac8c                    = 0,
	*bd4a0e2d95                    = 1,
	*953d656fee                    = 2,
	*f429e60eaa_MAX                = 3,
};

enum class E*decdf9f683 : uint8_t
{
	*d6b788dce1                    = 0,
	*e41c15c299                    = 1,
	*ec6384bab2                    = 2,
	*793735b357                    = 3,
	*ed61bf0c7e                    = 4,
	*decdf9f683_MAX                = 5,
};

enum class EItemSpotGroupType : uint8_t
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
	GroupO                         = 14,
	GroupP                         = 15,
	GroupQ                         = 16,
	GroupR                         = 17,
	GroupS                         = 18,
	GroupT                         = 19,
	GroupU                         = 20,
	GroupV                         = 21,
	GroupW                         = 22,
	GroupX                         = 23,
	GroupY                         = 24,
	GroupZ                         = 25,
	MAX                            = 26,
	EItemSpotGroupType_MAX         = 27,
};

enum class EItemSpotType : uint8_t
{
	TypeA                          = 0,
	TypeB                          = 1,
	TypeC                          = 2,
	TypeD                          = 3,
	TypeE                          = 4,
	TypeF                          = 5,
	TypeG                          = 6,
	TypeH                          = 7,
	TypeI                          = 8,
	TypeJ                          = 9,
	TypeK                          = 10,
	TypeL                          = 11,
	TypeM                          = 12,
	TypeN                          = 13,
	TypeO                          = 14,
	TypeP                          = 15,
	TypeQ                          = 16,
	TypeR                          = 17,
	TypeS                          = 18,
	TypeT                          = 19,
	TypeU                          = 20,
	TypeV                          = 21,
	TypeW                          = 22,
	TypeX                          = 23,
	TypeY                          = 24,
	TypeZ                          = 25,
	MAX                            = 26,
	EItemSpotType_MAX              = 27,
};

enum class EItemOverrideType : uint8_t
{
	NONE                           = 0,
	TypeA                          = 1,
	TypeB                          = 2,
	TypeC                          = 3,
	TypeD                          = 4,
	TypeE                          = 5,
	TypeF                          = 6,
	TypeG                          = 7,
	TypeH                          = 8,
	TypeI                          = 9,
	TypeJ                          = 10,
	TypeK                          = 11,
	TypeL                          = 12,
	TypeM                          = 13,
	TypeN                          = 14,
	EItemOverrideType_MAX          = 15,
};

enum class EContinuousHealItem : uint8_t
{
	Continuous_On                  = 0,
	Bandaged_Only                  = 1,
	Continuous_Off                 = 2,
	EContinuousHealItem_MAX        = 3,
};

enum class ECustomPartType : uint8_t
{
	Vehicle                        = 0,
	ECustomPartType_MAX            = 1,
};

enum class EThermalItemType : uint8_t
{
	Character                      = 0,
	Vehicle                        = 1,
	Blood                          = 2,
	Fire                           = 3,
	Ghillie                        = 4,
	CountOrNone                    = 5,
	EThermalItemType_MAX           = 6,
};

enum class EEquipableItemSoundType : uint8_t
{
	None                           = 0,
	Vest                           = 1,
	LongCoat                       = 2,
	HipSack                        = 3,
	Cloth                          = 4,
	BackPack                       = 5,
	MilitaryShoes                  = 6,
	Sneakers                       = 7,
	EEquipableItemSoundType_MAX    = 8,
};

enum class EEquipableItemSoundGroup : uint8_t
{
	Default                        = 0,
	Shoes                          = 1,
	EEquipableItemSoundGroup_MAX   = 2,
};

enum class EItemCategory : uint8_t
{
	None                           = 0,
	Equipment                      = 1,
	Weapon                         = 2,
	Attachment                     = 3,
	Ammunition                     = 4,
	Use                            = 5,
	Skin                           = 6,
	Event                          = 7,
	Part                           = 8,
	EItemCategory_MAX              = 9,
};

enum class EItemPackageType : uint8_t
{
	None                           = 0,
	RootBox                        = 1,
	CarePackage                    = 2,
	DroppedEventPackage            = 3,
	VehicleTrunk                   = 4,
	ItemPackageType_MAX            = 5,
};

enum class EVehicleConvertState : uint8_t
{
	None                           = 0,
	Play                           = 1,
	Cancel                         = 2,
	Finish                         = 3,
	EVehicleConvertState_MAX       = 4,
};

enum class EVehiclePartType : uint8_t
{
	BodyColor                      = 0,
	WheelColor                     = 1,
	BrakeCaliperColor              = 2,
	BoostEffect                    = 3,
	WheelMesh                      = 4,
	PinstripeColor                 = 5,
	Spoiler                        = 6,
	Interior                       = 7,
	EVehiclePartType_MAX           = 8,
};

enum class EVehicleRideType : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Aircraft                       = 2,
	Mortar                         = 3,
	EVehicleRideType_MAX           = 4,
};

enum class E*571c757e85 : uint8_t
{
	*4edcf6a2fe                    = 0,
	*cfbca6638a                    = 1,
	*d8ed945f65                    = 2,
	*571c757e85_MAX                = 3,
};

enum class E*db65fe1e13 : uint8_t
{
	*a9dbf0a03c                    = 0,
	*2106beec7c                    = 1,
	*67bb4e960d                    = 2,
	*c53b75e06b                    = 3,
	*db65fe1e13_MAX                = 4,
};

enum class E*dd865cb9a1 : uint8_t
{
	*5388801ec7                    = 0,
	*6f7532b29b                    = 1,
	*be348606cd                    = 2,
	*c305985dfc                    = 3,
	*39edb11673                    = 4,
	*f7b883f393                    = 5,
	*bf72a89e01                    = 6,
	*619d7c6ca7                    = 7,
	*e3f3d65861                    = 8,
	*793aa0f811                    = 9,
	*0507a0598b                    = 10,
	*4282b8dbd2                    = 11,
	*f6a716bebb                    = 12,
	*ef39816f52                    = 13,
	*fb4ad488cc                    = 14,
	*205267715c                    = 15,
	*4e0530d938                    = 16,
	*799eb852cf                    = 17,
	*c561ec42a9                    = 18,
	*67ee36b55b                    = 19,
	*61d1a8cbbc                    = 20,
	*68692f92f2                    = 21,
	*148f97c6b2                    = 22,
	*127b8e47b9                    = 23,
	*28e8b87976                    = 24,
	*0deffad93e                    = 25,
	*6b1b621eb8                    = 26,
	*2c6b2b9006                    = 27,
	*021fc191a3                    = 28,
	*16045c9e37                    = 29,
	*01efe9ec19                    = 30,
	*20cfb216ed                    = 31,
	*1443bc1b65                    = 32,
	*7f45db8a91                    = 33,
	*064e0cfd27                    = 34,
	*04a6ec0bc4                    = 35,
	*641fe690d5                    = 36,
	*08eac00ba4                    = 37,
	*45e53191a7                    = 38,
	*17f5e1c811                    = 39,
	*f8815c5225                    = 40,
	*d4096ac0ec                    = 41,
	*5a1c8dd0ae                    = 42,
	*ee48ccfc15                    = 43,
	*f8464a526a                    = 44,
	*8ef110664d                    = 45,
	*d7fe48ef43                    = 46,
	*5abb95f6cc                    = 47,
	*1da71db868                    = 48,
	*0fdc419c8c                    = 49,
	*a9c8a83651                    = 50,
	*fb5f56b735                    = 51,
	*3f5b15f7cc                    = 52,
	*d773ea3877                    = 53,
	*f560916f91                    = 54,
	*dd865cb9a1_MAX                = 55,
};

enum class E*1cc4bbb0a1 : uint8_t
{
	*1db2db253f                    = 0,
	*7c9d184d0c                    = 1,
	*7c81852077                    = 2,
	*c6fe21b278                    = 3,
	*1cc4bbb0a1_MAX                = 4,
};

enum class ERiderType : uint8_t
{
	Driver                         = 0,
	Passenger                      = 1,
	ERiderType_MAX                 = 2,
};

enum class EMovementBaseType : uint8_t
{
	None                           = 0,
	Train                          = 1,
	Ship                           = 2,
	CableCar                       = 3,
	Escalator                      = 4,
	COUNT                          = 5,
	EMovementBaseType_MAX          = 6,
};

enum class ESeatState : uint8_t
{
	Empty                          = 0,
	Player                         = 1,
	Teammate                       = 2,
	Enemy                          = 3,
	ESeatState_MAX                 = 4,
};

enum class EAttackType : uint8_t
{
	None                           = 0,
	Weapon                         = 1,
	VehicleCrash                   = 2,
	VehicleExplosion               = 3,
	Fall                           = 4,
	BlueZone                       = 5,
	RedZone                        = 6,
	BlackZone                      = 7,
	EAttackType_MAX                = 8,
};

enum class E*e317702651 : uint8_t
{
	*4a68a562f1                    = 0,
	*55bfe69563                    = 1,
	*6312de8450                    = 2,
	*51196dce40                    = 3,
	*e317702651_MAX                = 4,
};

enum class EVaultAnimType : uint8_t
{
	VaultNone                      = 0,
	Vault200_Stationary            = 1,
	Vault200_Mobile                = 2,
	Vault200_Narrow                = 3,
	Vault160_Stationary            = 4,
	Vault160_Mobile                = 5,
	Vault160_Narrow                = 6,
	Vault120_Stationary            = 7,
	Vault120_Mobile                = 8,
	Vault120_Slide                 = 9,
	Vault120_Narrow                = 10,
	Vault90_Stationary             = 11,
	Vault90_Mobile                 = 12,
	Vault90_Slide                  = 13,
	Vault90_Narrow                 = 14,
	Climb200_Stationary            = 15,
	Climb200_Mobile                = 16,
	Climb200_Slide                 = 17,
	Climb200_Narrow                = 18,
	Climb160_Stationary            = 19,
	Climb160_Mobile                = 20,
	Climb160_Slide                 = 21,
	Climb160_Narrow                = 22,
	Climb120_Stationary            = 23,
	Climb120_Mobile                = 24,
	Climb120_Slide                 = 25,
	Climb120_Narrow                = 26,
	Climb90_Stationary             = 27,
	Climb90_Mobile                 = 28,
	Climb90_Slide                  = 29,
	Climb90_Narrow                 = 30,
	Vault90Roll                    = 31,
	Vault120Window                 = 32,
	Vault60_Stationary             = 33,
	Vault60_Mobile                 = 34,
	Vault60_Slide                  = 35,
	Vault60_Narrow                 = 36,
	Climb60_Stationary             = 37,
	Climb60_Mobile                 = 38,
	Climb60_Narrow                 = 39,
	LedgeGrab_Up_Climb             = 40,
	LedgeGrab_Up_Climb_Swing       = 41,
	LedgeGrab_Up_Climb_HalfSwing   = 42,
	LedgeGrab_Up_Vault             = 43,
	LedgeGrab_Up_Vault_Swing       = 44,
	LedgeGrab_Up_Vault_HalfSwing   = 45,
	LedgeGrab_High_Climb           = 46,
	LedgeGrab_High_Climb_Swing     = 47,
	LedgeGrab_High_Climb_HalfSwing = 48,
	LedgeGrab_High_Vault           = 49,
	LedgeGrab_High_Vault_Swing     = 50,
	LedgeGrab_High_Vault_HalfSwing = 51,
	LedgeGrab_Low_Climb            = 52,
	LedgeGrab_Low_Climb_Swing      = 53,
	LedgeGrab_Low_Climb_HalfSwing  = 54,
	LedgeGrab_Low_Vault            = 55,
	LedgeGrab_Low_Vault_Swing      = 56,
	LedgeGrab_Low_Vault_HalfSwing  = 57,
	LedgeGrab_Low_Vault_Narrow     = 58,
	LedgeGrab_Low_Vault_HalfSwing_Narrow = 59,
	LedgeGrab_Low_Vault_Swing_Narrow = 60,
	LedgeGrab_High_Vault_Narrow    = 61,
	LedgeGrab_High_Vault_HalfSwing_Narrow = 62,
	LedgeGrab_High_Vault_Swing_Narrow = 63,
	LedgeGrab_Up_Vault_Narrow      = 64,
	LedgeGrab_Up_Vault_HalfSwing_Narrow = 65,
	LedgeGrab_Up_Vault_Swing_Narrow = 66,
	EVaultAnimType_MAX             = 67,
};

enum class EBuffOverlapSolveMethod : uint8_t
{
	IgnoreLater                    = 0,
	Overwrite                      = 1,
	RestartTimer                   = 2,
	Stack                          = 3,
	EBuffOverlapSolveMethod_MAX    = 4,
};

enum class EGuardRank : uint8_t
{
	Grunt                          = 0,
	Boss                           = 1,
	EGuardRank_MAX                 = 2,
};

enum class EReportDetailCauseType : uint8_t
{
	None                           = 0,
	AutoAim                        = 1,
	NoRecoil                       = 2,
	EspOrPenetration               = 3,
	Speedhack                      = 4,
	WallPenetration                = 5,
	FlyingCar                      = 6,
	Other                          = 7,
	EReportDetailCauseType_MAX     = 8,
};

enum class EReportedSessionType : uint8_t
{
	PublicOrCustomGame             = 0,
	Killcam                        = 1,
	Replay                         = 2,
	PublicDuel                     = 3,
	EReportedSessionType_MAX       = 4,
};

enum class EReportCause : uint8_t
{
	Default                        = 0,
	Cheat                          = 1,
	TeamKill                       = 2,
	Teaming                        = 3,
	InappropriateID                = 4,
	VerbalHarassment               = 5,
	Griefing                       = 6,
	StreamSniping                  = 7,
	InappropriateClanTag           = 8,
	Abusing                        = 9,
	MarketingSpamming              = 10,
	EReportCause_MAX               = 11,
};

enum class ETslBpRewardLogicType : uint8_t
{
	None                           = 0,
	Public                         = 1,
	ScoreBased                     = 2,
	ETslBpRewardLogicType_MAX      = 3,
};

enum class ETslApRewardLogicType : uint8_t
{
	None                           = 0,
	Public                         = 1,
	ETslApRewardLogicType_MAX      = 2,
};

enum class EMatchLogTab : uint8_t
{
	All                            = 0,
	Squad                          = 1,
	You                            = 2,
	EMatchLogTab_MAX               = 3,
};

enum class EVoiceChannelType : uint8_t
{
	None                           = 0,
	All                            = 1,
	GlobalOnly                     = 2,
	TeamOnly                       = 3,
	EVoiceChannelType_MAX          = 4,
};

enum class ECharacterActionComponentType : uint8_t
{
	MovementAction                 = 0,
	AimAssist                      = 1,
	Jump                           = 2,
	Vault                          = 3,
	ItemUse                        = 4,
	StanceAction                   = 5,
	Gunplay                        = 6,
	Max                            = 7,
	ECharacterActionComponentType_MAX = 8,
};

enum class ESetHealthReason : uint8_t
{
	Undefined                      = 0,
	ByPlayerHeal                   = 1,
	ByPlayerDamage                 = 2,
	ByPassiveRecovery              = 3,
	ByReviveOrDeploy               = 4,
	BySystem                       = 5,
	ESetHealthReason_MAX           = 6,
};

enum class ECharacterActionEventType : uint8_t
{
	None                           = 0,
	WeaponChange                   = 1,
	ItemUseCast                    = 2,
	TakeDamage                     = 4,
	PostDealDamage                 = 8,
	TryToUnarmedAttack             = 16,
	TryToMeleeAttack               = 32,
	ECharacterActionEventType_MAX  = 33,
};

enum class E*8dae8bec4e : uint8_t
{
	*e56ee46a6e                    = 0,
	*e49eb74d56                    = 1,
	*989d60c451                    = 2,
	*c161b4e5d0                    = 3,
	*77880e51b7                    = 4,
	*6c0aa15a78                    = 5,
	*26ae229ec0                    = 6,
	*8dae8bec4e_MAX                = 7,
};

enum class ECharacterGait : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	ECharacterGait_MAX             = 3,
};

enum class ETslCharacterType : uint8_t
{
	none                           = 0,
	user                           = 1,
	user_ai                        = 2,
	npc_pillar                     = 3,
	npc_guard                      = 4,
	monster_bear                   = 5,
	monster_chicken                = 6,
	npc_killtruck                  = 7,
	npc_zombie                     = 8,
	ETslCharacterType_MAX          = 9,
};

enum class EGender : uint8_t
{
	Male                           = 0,
	Female                         = 1,
	EGender_MAX                    = 2,
};

enum class ETslCustomMovementMode : uint8_t
{
	Vaulting                       = 0,
	Freefalling                    = 1,
	Parachuting                    = 2,
	UsingAscender                  = 3,
	TeamParkour                    = 4,
	ETslCustomMovementMode_MAX     = 5,
};

enum class ELandingSoundSwitchState : uint8_t
{
	None                           = 0,
	Light                          = 1,
	Heavy                          = 2,
	VeryHeavy                      = 3,
	ELandingSoundSwitchState_MAX   = 4,
};

enum class EInteractableActorType : uint8_t
{
	None                           = 0,
	BlueChipTower                  = 1,
	GasPump                        = 2,
	JukeBox                        = 3,
	PlantedBomb                    = 4,
	Vehicle_Seat                   = 5,
	Vehicle_Wheel                  = 6,
	Door                           = 7,
	DroppedItem                    = 8,
	Ascender                       = 9,
	Zipline                        = 10,
	VendingMachine                 = 11,
	Firework                       = 12,
	StrongBox                      = 13,
	ElectricCharger                = 14,
	EInteractableActorType_MAX     = 15,
};

enum class EInteractInputType : uint8_t
{
	None                           = 0,
	MainInteract                   = 1,
	SecondaryInteract              = 2,
	MainInteract_Hold              = 3,
	SecondaryInteract_Hold         = 4,
	EInteractInputType_MAX         = 5,
};

enum class EGamepadHudDataType : uint8_t
{
	EFloat                         = 0,
	EBool                          = 1,
	EFString                       = 2,
	GamepadHudDataType_MAX         = 3,
};

enum class ESandboxGroupType : uint8_t
{
	None                           = 0,
	Weapon                         = 1,
	Attachment                     = 2,
	Item                           = 3,
	Vehicle                        = 4,
	Sensitivity                    = 5,
	Power                          = 6,
	Special                        = 7,
	ESandboxGroupType_MAX          = 8,
};

enum class ESandboxQuantityType : int32_t
{
	None                           = 0,
	Item                           = 1,
	Vehicle                        = 2,
	ESandboxQuantityType_MAX       = 3,
};

enum class ESandboxSpecialButtonType : int32_t
{
	None                           = 0,
	EquipLv3                       = 1,
	AddAmmo                        = 2,
	SettingAPrevious               = 3,
	SettingAGunset                 = 4,
	SaveGear                       = 5,
	LoadGear                       = 6,
	ESandboxSpecialButtonType_MAX  = 7,
};

enum class ESandboxPowerType : int32_t
{
	None                           = 0,
	Fly                            = 1,
	InvulnerableEffect             = 2,
	CarePackage                    = 4,
	RedZone                        = 8,
	Revive                         = 16,
	TeamRevive                     = 32,
	GiveItemToEveryone             = 64,
	BlueZone                       = 128,
	ESandboxPowerType_MAX          = 129,
};

enum class ESandboxSoundType : uint8_t
{
	None                           = 0,
	ItemSpawnClick                 = 1,
	ItemSpawnSuccess               = 2,
	ESandboxSoundType_MAX          = 3,
};

enum class ESandboxValidateItemResult : uint8_t
{
	Success                        = 0,
	Invalid_Item_IdMismatch        = 1,
	Invalid_Item_RequestParamMismatch = 2,
	Invalid_Power_Training         = 3,
	Invalid_Vehicle_Training       = 4,
	ESandboxValidateItemResult_MAX = 5,
};

enum class ESpecialZoneState : uint8_t
{
	Disabled                       = 0,
	BeforeMatch                    = 1,
	WaitingStartDelay              = 2,
	Warning                        = 3,
	Activating                     = 4,
	ActivationDone                 = 5,
	Deactivating                   = 6,
	Removed                        = 7,
	Finished                       = 8,
	ESpecialZoneState_MAX          = 9,
};

enum class ESpecialZoneType : uint8_t
{
	None                           = 0,
	Blizzard                       = 1,
	SandStorm                      = 2,
	EMP                            = 3,
	ESpecialZoneType_MAX           = 4,
};

enum class EScopeType : uint8_t
{
	Main                           = 0,
	Right                          = 1,
	Total                          = 2,
	None                           = 3,
	EScopeType_MAX                 = 4,
};

enum class EEquippedWeaponRTPC : uint8_t
{
	None                           = 0,
	HandBomb_Bottle                = 1,
	HandBomb_Metal                 = 2,
	Melee                          = 3,
	Pistol                         = 4,
	SMG                            = 5,
	AR                             = 6,
	SR                             = 7,
	Max                            = 8,
	EEquippedWeaponRTPC_MAX        = 9,
};

enum class E*9475ac2029 : uint8_t
{
	*bbf62f312e                    = 0,
	*362d1d1166                    = 1,
	*f7d29c3e1b                    = 2,
	*362861bd3e                    = 3,
	*6a517587bc                    = 4,
	*166e179130                    = 5,
	*b1e2d3f705                    = 6,
	*9475ac2029_MAX                = 7,
};

enum class EReticleType : uint8_t
{
	RedDot                         = 0,
	HoloSight                      = 1,
	Scope2x                        = 2,
	Scope3x                        = 3,
	Scope4x                        = 4,
	Scope6x                        = 5,
	Scope8x                        = 6,
	EReticleType_MAX               = 7,
};

enum class EDamageZoneType : uint8_t
{
	Head                           = 0,
	Torso                          = 1,
	Arm                            = 2,
	Pelvis                         = 3,
	Leg                            = 4,
	EDamageZoneType_MAX            = 5,
};

enum class ETppAimCameraPosition : uint8_t
{
	LatestAimPosition              = 0,
	LastPeekingPosition            = 1,
	ResetToRightShoulderPosition   = 2,
	ResetToLeftShoulderPosition    = 3,
	ETppAimCameraPosition_MAX      = 4,
};

enum class EAccessorySlot : uint8_t
{
	Slot_Primary                   = 0,
	Slot_Secondary                 = 1,
	Slot_SideArm                   = 2,
	Slot_Melee                     = 3,
	Slot_Thrown                    = 4,
	Slot_Belt                      = 5,
	Slot_None                      = 6,
	Slot_MAX                       = 7,
};

enum class EWeaponDisplayTypes : uint8_t
{
	None                           = 0,
	Handgun                        = 1,
	SMG                            = 2,
	AR                             = 3,
	Shotgun                        = 4,
	SR                             = 5,
	DMR                            = 6,
	LMG                            = 7,
	AMR                            = 8,
	Melee                          = 9,
	Throwable                      = 10,
	Shield                         = 11,
	Crossbow                       = 12,
	Launcher                       = 13,
	GrenadeLauncher                = 14,
	Mortar                         = 15,
	TacticalGear                   = 16,
	FlareGun                       = 17,
	Special                        = 18,
	EWeaponDisplayTypes_MAX        = 19,
};

enum class EWeaponClass : uint8_t
{
	Class_None                     = 0,
	Class_Pistol                   = 1,
	Class_SMG                      = 2,
	Class_Rifle                    = 3,
	Class_Carbine                  = 4,
	Class_Shotgun                  = 5,
	Class_Sniper                   = 6,
	Class_DMR                      = 7,
	Class_LMG                      = 8,
	Class_Melee                    = 9,
	Class_Throwable                = 10,
	Class_Shield                   = 11,
	Class_Crossbow                 = 12,
	Class_Launcher                 = 13,
	Class_GrenadeLauncher          = 14,
	Class_Mortar                   = 15,
	EWeaponClass_MAX               = 16,
};

enum class EAllowedThrowMode : uint8_t
{
	Any                            = 0,
	ThrowHigh                      = 1,
	ThrowLow                       = 2,
	EAllowedThrowMode_MAX          = 3,
};

enum class E*3dc8494cf7 : uint8_t
{
	*7d2c5ef3d2                    = 0,
	*faaab04396                    = 1,
	*4cd9e70d1e                    = 2,
	*3dc8494cf7_MAX                = 3,
};

enum class ETwoHandedWeapon : uint8_t
{
	JerryCan                       = 0,
	TacPack                        = 1,
	TraumaBag                      = 2,
	SpotterScope                   = 3,
	Drone                          = 4,
	BlueChipDetector               = 5,
	Toolbox                        = 6,
	SpareTire                      = 7,
	IntegratedRepairKit            = 8,
	PlantedBombKit                 = 9,
	DefusingBombKit                = 10,
	ETwoHandedWeapon_MAX           = 11,
};

enum class EAttachmentCalculateType : uint8_t
{
	Addition                       = 0,
	Multiply                       = 1,
	EAttachmentCalculateType_MAX   = 2,
};

enum class EAutoEquipAttachmentForScopeMode : uint8_t
{
	Off                            = 0,
	Sight_Only                     = 1,
	ALL                            = 2,
	EAutoEquipAttachmentForScopeMode_MAX = 3,
};

enum class EFiringMode : uint8_t
{
	Normal                         = 0,
	Burst                          = 1,
	FullAuto                       = 2,
	FullAutoFast                   = 3,
	EFiringMode_MAX                = 4,
};

enum class EWeaponHand : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Total                          = 2,
	EWeaponHand_MAX                = 3,
};

enum class EWeaponArmState : uint8_t
{
	None                           = 0,
	NotArmed                       = 1,
	Arming                         = 2,
	Armed                          = 3,
	UnArming                       = 4,
	EWeaponArmState_MAX            = 5,
};

enum class EProjectileExplosionStartType : uint8_t
{
	NotStart                       = 0,
	Impact                         = 1,
	Delay                          = 2,
	ImpactOrDelay                  = 3,
	EProjectileExplosionStartType_MAX = 4,
};

enum class EControlType : uint8_t
{
	Move                           = 0,
	Jump                           = 1,
	Fire                           = 2,
	Aim                            = 3,
	Arm                            = 4,
	Unarm                          = 5,
	Reload                         = 6,
	Interact                       = 7,
	Peek                           = 8,
	Roll                           = 9,
	Crouch                         = 10,
	Prone                          = 11,
	UseItem                        = 12,
	ThrowMelee                     = 13,
	CookThrowable                  = 14,
	ItemCatch                      = 15,
	ItemThrow                      = 16,
	InspectWeapon                  = 17,
	ToggleFiringMode               = 18,
	ToggleThrowMode                = 19,
	EControlType_MAX               = 20,
};

enum class ECharFlagsNormal : uint8_t
{
	IsGroggying                    = 0,
	IsActiveRagdollActive          = 1,
	HasShieldEquipped              = 2,
	IsInBluezone                   = 3,
	IsBeingHealed                  = 4,
	IsSelfHemostasis               = 5,
	ECharFlagsNormal_MAX           = 6,
};

enum class ECharFlagsSkipOwner : uint8_t
{
	WantsToRun                     = 0,
	WantsToSprint                  = 1,
	WantsToSprintingAuto           = 2,
	WantsToRollingLeft             = 3,
	WantsToRollingRight            = 4,
	AimStateActive                 = 5,
	IsThirdPerson                  = 6,
	IsReviving                     = 7,
	IgnoreRotation                 = 8,
	IsWeaponObstructed             = 9,
	IsObstructedWeaponLookingUpperSide = 10,
	IsCoatEquipped                 = 11,
	IsThrowHigh                    = 12,
	WantsToCancelVault             = 13,
	IsScopingRemote                = 14,
	IsAimingRemote                 = 15,
	IsFirstPersonRemote            = 16,
	IsInVehicleRemote              = 17,
	IsPeekLeftRemote               = 18,
	IsPeekRightRemote              = 19,
	IsHoldingAngled                = 20,
	ECharFlagsSkipOwner_MAX        = 21,
};

enum class E*2e2ad0f4bf : uint8_t
{
	*fdf2ff51e0                    = 0,
	*f9ba6697cb                    = 1,
	*e1c8905ccc                    = 2,
	*2e2ad0f4bf_MAX                = 3,
};

enum class E*18ffb9c1f6 : uint8_t
{
	*63cec813fb                    = 0,
	*b18d1d5dda                    = 1,
	*7d45bb712f                    = 2,
	*69b5c88a65                    = 3,
	*a107d0618d                    = 4,
	*18ffb9c1f6_MAX                = 5,
};

enum class ECustomGripBlendSpaceType : uint8_t
{
	None                           = 0,
	Stand                          = 1,
	Crouch                         = 2,
	Prone                          = 3,
	ProneTransition                = 4,
	ProneLocomotion                = 5,
	ECustomGripBlendSpaceType_MAX  = 6,
};

enum class EMasteryItemType : uint8_t
{
	Charm                          = 0,
	Mesh                           = 1,
	EMasteryItemType_MAX           = 2,
};

enum class ETableType : uint8_t
{
	Ammo                           = 0,
	Attachment                     = 1,
	Equipment                      = 2,
	Skin                           = 3,
	SkinThrowable                  = 4,
	Weapon                         = 5,
	WeaponThrowable                = 6,
	WeaponShield                   = 7,
	Castable                       = 8,
	UsedByAction                   = 9,
	Event                          = 10,
	Craft                          = 11,
	VehiclePart                    = 12,
	Bluechip                       = 13,
	Market                         = 14,
	TableType_MAX                  = 15,
};

enum class E*81dc37ab10 : uint8_t
{
	*1f72d16d1a                    = 0,
	*e24cb143d8                    = 1,
	*245b560c39                    = 2,
	*81dc37ab10_MAX                = 3,
};

enum class ECorrectedSpawnLocationTraceType : uint8_t
{
	Sweep                          = 0,
	Trace                          = 1,
	ECorrectedSpawnLocationTraceType_MAX = 2,
};

enum class EThrowableState : uint8_t
{
	Idle                           = 0,
	PinOff                         = 1,
	Cooking                        = 2,
	Throw                          = 3,
	Dropped                        = 4,
	EThrowableState_MAX            = 5,
};

enum class EAIPoseState : uint8_t
{
	Stand                          = 0,
	Crouch                         = 1,
	Prone                          = 2,
	Jump                           = 3,
	Reload                         = 4,
	UnArmed                        = 5,
	EAIPoseState_MAX               = 6,
};

enum class E*4b917af165 : uint8_t
{
	*e142f3d2c6                    = 0,
	*a8a3de7826                    = 1,
	*bfe652c407                    = 2,
	*02a325bfcc                    = 3,
	*7b0fa6f73a                    = 4,
	*bf76a379b1                    = 5,
	*33dcc8518d                    = 6,
	*4b917af165_MAX                = 7,
};

enum class E*df85629c4c : uint8_t
{
	*a7eb66b9f6                    = 0,
	*c7992ddcd4                    = 1,
	*e9e262fb75                    = 2,
	*e62a88715f                    = 3,
	*5760d4ada2                    = 4,
	*df85629c4c_MAX                = 5,
};

enum class E*b1d54d1fcd : uint8_t
{
	*2065b07efc                    = 0,
	*100ff2f6bb                    = 1,
	*4115f355c9                    = 2,
	*dedd475a55                    = 3,
	*b1d54d1fcd_MAX                = 4,
};

enum class E*585fd60bb7 : uint8_t
{
	*4ce1ea5b90                    = 0,
	*c241293cac                    = 1,
	*6c875ff7c5                    = 2,
	*9bf5a93c28                    = 3,
	*a19faf2ccb                    = 4,
	*84f156ac69                    = 5,
	*32959aa3ac                    = 6,
	*585fd60bb7_MAX                = 7,
};

enum class E*84943e2eb0 : uint8_t
{
	*a734661246                    = 0,
	*48b48f57ad                    = 1,
	*dc1c454422                    = 2,
	*536c0ecec1                    = 3,
	*52b990d1ce                    = 4,
	*84943e2eb0_MAX                = 5,
};

enum class ESurviveWeaponPropSlot : uint8_t
{
	SWPS_MainShootWeapon1          = 0,
	SWPS_MainShootWeapon2          = 1,
	SWPS_SubShootWeapon            = 2,
	SWPS_MeleeWeapon               = 3,
	SWPS_HandProp                  = 4,
	SWPS_Max                       = 5,
};

enum class E*cc8f340b97 : uint8_t
{
	*4e8a190bdf                    = 0,
	*8d75093f8b                    = 1,
	*958c3c05d5                    = 2,
	*accf665969                    = 3,
	*1d1eff1425                    = 4,
	*abb099c52a                    = 5,
	*158e40ec8f                    = 6,
	*196bf98146                    = 7,
	*cc8f340b97_MAX                = 8,
};

enum class E*d7a6fa635a : uint8_t
{
	*8006a25de3                    = 0,
	*89671ee276                    = 1,
	*f1ce0d3d25                    = 2,
	*d7a6fa635a_MAX                = 3,
};

enum class EAINewFocusPriority : uint8_t
{
	Default                        = 0,
	Move                           = 1,
	Gameplay                       = 2,
	EAINewFocusPriority_MAX        = 3,
};

enum class EAIMovePose : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	CrouchSprint                   = 2,
	KeepCurrentPose                = 3,
	EAIMovePose_MAX                = 4,
};

enum class EAITriggerAttrType : uint8_t
{
	None                           = 0,
	Health                         = 1,
	Energy                         = 2,
	EAITriggerAttrType_MAX         = 3,
};

enum class EAIAttrCompareType : uint8_t
{
	None                           = 0,
	Great                          = 1,
	Less                           = 2,
	EAIAttrCompareType_MAX         = 3,
};

enum class EAIEquipSpawnItemType : uint8_t
{
	Shoot_Weap                     = 0,
	Backpack                       = 1,
	other                          = 2,
	EAIEquipSpawnItemType_MAX      = 3,
};

enum class E*53161c9085 : uint8_t
{
	*dc1f6ffbc8                    = 0,
	*479889c24b                    = 1,
	*44199fdfcb                    = 2,
	*285c33cf4c                    = 3,
	*aeb651011e                    = 4,
	*40e39aeb0c                    = 5,
	*9cb814f4d3                    = 6,
	*53161c9085_MAX                = 7,
};

enum class E*ae50ce5945 : uint8_t
{
	*532966917a                    = 0,
	*ebef717086                    = 1,
	*8e86da4f30                    = 2,
	*b5bc65e818                    = 3,
	*ae50ce5945_MAX                = 4,
};

enum class EAscenderDirection : uint8_t
{
	RopeForward                    = 0,
	RopeBackward                   = 1,
	MAX                            = 2,
	EAscenderDirection_MAX         = 3,
};

enum class EAscenderRopeSubType : uint8_t
{
	None                           = 0,
	Ziplinegun                     = 1,
	EAscenderRopeSubType_MAX       = 2,
};

enum class EAscenderRopeType : uint8_t
{
	None                           = 0,
	AscenderRope                   = 1,
	AscenderZipline                = 2,
	EAscenderRopeType_MAX          = 3,
};

enum class EWeaponReloadMethod : uint8_t
{
	Magazine                       = 0,
	OneByOne                       = 1,
	OneByOneAndClip                = 2,
	EWeaponReloadMethod_MAX        = 3,
};

enum class EWeaponReloadCancelReason : uint8_t
{
	Default                        = 0,
	PlayerInterrupted              = 1,
	PlayerMovement                 = 2,
	PlayerInteraction              = 3,
	WeaponSwitch                   = 4,
	PlayerIncapacitated            = 5,
	VehicleMoving                  = 6,
	EWeaponReloadCancelReason_MAX  = 7,
};

enum class EWeaponReloadAnimExec : uint8_t
{
	Tactical                       = 0,
	Charge                         = 1,
	Single                         = 2,
	Loop                           = 3,
	EWeaponReloadAnimExec_MAX      = 4,
};

enum class EWeaponState : uint8_t
{
	Idle                           = 0,
	Firing                         = 1,
	Reloading                      = 2,
	EWeaponState_MAX               = 3,
};

enum class EWeaponTransitionState : uint8_t
{
	Stable                         = 0,
	Arming                         = 1,
	UnArming                       = 2,
	EWeaponTransitionState_MAX     = 3,
};

enum class EPerceptionType : uint8_t
{
	Sight                          = 0,
	Disapp                         = 1,
	Hearing                        = 2,
	Attack                         = 3,
	None                           = 4,
	EPerceptionType_MAX            = 5,
};

enum class EAttachParent : uint8_t
{
	None                           = 0,
	Character                      = 1,
	WeaponGun                      = 2,
	EAttachParent_MAX              = 3,
};

enum class ETslParticleEnvironmentAttachPolicy : uint8_t
{
	Nearest                        = 0,
	Manual                         = 1,
	ETslParticleEnvironmentAttachPolicy_MAX = 2,
};

enum class EHealingItemType : uint8_t
{
	HealItem                       = 0,
	BoostItem                      = 1,
	EHealingItemType_MAX           = 2,
};

enum class EItemPickupFailReason : int32_t
{
	None                           = 0,
	ItemIsInvalid                  = 1,
	ShouldHaveItemIsFalse          = 2,
	PickUpItemFinish_UltronFail    = 3,
	NotEnoughSpace                 = 4,
	EItemPickupFailReason_MAX      = 5,
};

enum class EItemPickupInfo : int32_t
{
	None                           = 0,
	RealLooting                    = 1,
	BluezonePhase                  = 2,
	FakeLooting                    = 3,
	AfterAllLooting                = 4,
	CheckWeaponTask                = 5,
	Test                           = 6,
	EItemPickupInfo_MAX            = 7,
};

enum class EComparisonTarget : uint8_t
{
	Value                          = 0,
	BBKey                          = 1,
	EComparisonTarget_MAX          = 2,
};

enum class EAIMapName : uint8_t
{
	Baltic                         = 0,
	Desert                         = 1,
	Sanhok                         = 2,
	DihorOtok                      = 3,
	Summerland                     = 4,
	Paramo                         = 5,
	Tiger                          = 6,
	Chimera                        = 7,
	Heaven                         = 8,
	Kiki                           = 9,
	Other                          = 10,
	EAIMapName_MAX                 = 11,
};

enum class EAICommand : uint8_t
{
	None                           = 0,
	Moving                         = 1,
	Battle                         = 2,
	EAICommand_MAX                 = 3,
};

enum class EAIActionState : uint8_t
{
	Idle                           = 0,
	Battle                         = 1,
	BattleMoving                   = 2,
	Healing                        = 3,
	Farming                        = 4,
	Moving                         = 5,
	Swimming                       = 6,
	EAIActionState_MAX             = 7,
};

enum class EPickupItemStatus : uint8_t
{
	NeedWeapon                     = 0,
	NeedBaseEquip                  = 1,
	NeedOneMoreWeapon              = 2,
	NeedHealItem                   = 3,
	NeedBoostItem                  = 4,
	NeedThrowableItem              = 5,
	NeedPan                        = 6,
	NeedNoItem                     = 7,
	EPickupItemStatus_MAX          = 8,
};

enum class EIntoCircleLevel : uint8_t
{
	AlreadyInWhite                 = 0,
	NearWhite                      = 1,
	MiddleWhite                    = 2,
	ReachableWhite                 = 3,
	UnreachableWhite               = 4,
	EIntoCircleLevel_MAX           = 5,
};

enum class EValueCompareFunc : uint8_t
{
	MoreThan                       = 0,
	MoreThanOrEqual                = 1,
	LessThan                       = 2,
	LessThanOrEqual                = 3,
	Equal                          = 4,
	NotEqual                       = 5,
	EValueCompareFunc_MAX          = 6,
};

enum class EAIParameter : uint8_t
{
	None                           = 0,
	Offensive                      = 1,
	PrepareType                    = 2,
	EAIParameter_MAX               = 3,
};

enum class EAIBehaviors : uint8_t
{
	Normal                         = 0,
	Chasing                        = 1,
	Runaway                        = 2,
	EAIBehaviors_MAX               = 3,
};

enum class EComparisonTargetCircle : uint8_t
{
	WhiteCircle                    = 0,
	BlueCircle                     = 1,
	EComparisonTargetCircle_MAX    = 2,
};

enum class EPercivedGrenadeType : int32_t
{
	FragGrenade                    = 0,
	StickyBomb                     = 1,
	C4                             = 2,
	EPercivedGrenadeType_MAX       = 3,
};

enum class EEnemyCompareElement : uint8_t
{
	None                           = 0,
	HouseId                        = 1,
	EEnemyCompareElement_MAX       = 2,
};

enum class EInfoPointWithHouse : uint8_t
{
	All                            = 0,
	InHouse                        = 1,
	OutHouse                       = 2,
	EInfoPointWithHouse_MAX        = 3,
};

enum class ETargetLocation : uint8_t
{
	WhiteCircle                    = 0,
	OtherLocation                  = 1,
	ETargetLocation_MAX            = 2,
};

enum class ETestMoveDirection : uint8_t
{
	Front                          = 0,
	Back                           = 1,
	Left                           = 2,
	Right                          = 3,
	ETestMoveDirection_MAX         = 4,
};

enum class EThownWeapon_AI : uint8_t
{
	GRENADE                        = 0,
	MOLOTOV                        = 1,
	SMOKEBOMB                      = 2,
	FLASHBANG                      = 3,
	EThownWeapon_MAX               = 4,
};

enum class EPatrolSpeed : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	EPatrolSpeed_MAX               = 3,
};

enum class E*ea054a0888 : uint8_t
{
	*321f611890                    = 0,
	*78e00f93c3                    = 1,
	*b718f2a63a                    = 2,
	*e2ecf12c35                    = 3,
	*ea054a0888_MAX                = 4,
};

enum class EModifyBlackboardDataValueType : uint8_t
{
	Int                            = 0,
	Float                          = 1,
	Bool                           = 2,
	String                         = 3,
	Object                         = 4,
	Vector3                        = 5,
	EModifyBlackboardDataValueType_MAX = 6,
};

enum class EThrowWeaponActionMethod : uint8_t
{
	Default                        = 0,
	MaintainCookingAndFinish       = 1,
	ThrowImmediatelyAndFinish      = 2,
	EThrowWeaponActionMethod_MAX   = 3,
};

enum class EThownWeapon : uint8_t
{
	GRENADE                        = 0,
	MOLOTOV                        = 1,
	SMOKEBOMB                      = 2,
	FLASHBANG                      = 3,
	EThownWeapon_MAX               = 4,
};

enum class EBoosterItem : uint8_t
{
	ADRENALINE                     = 0,
	PAINKILLER                     = 1,
	ENERGYDRINK                    = 2,
	EBoosterItem_MAX               = 3,
};

enum class E*1d58bb9553 : uint8_t
{
	*d6d6b7f79c                    = 0,
	*972a58bd90                    = 1,
	*6d1d8e9b0b                    = 2,
	*48df457660                    = 3,
	*77d0c9cb07                    = 4,
	*1d58bb9553_MAX                = 5,
};

enum class E*9c37e41f85 : uint8_t
{
	*8a8effaa69                    = 0,
	*1a8d3ca574                    = 1,
	*55624d061a                    = 2,
	*bb98024fb9                    = 3,
	*50dcb89cba                    = 4,
	*9c37e41f85_MAX                = 5,
};

enum class E*5291e89f83 : uint8_t
{
	*ed29c7bd2f                    = 0,
	*7b96281ef7                    = 1,
	*4ddd01a308                    = 2,
	*a96237fde1                    = 3,
	*5291e89f83_MAX                = 4,
};

enum class EReactionObjectType : uint8_t
{
	Fence                          = 0,
	Hay                            = 1,
	Camera                         = 2,
	Bamboo                         = 3,
	BirdCage                       = 4,
	LandscapeReacting              = 5,
	EReactionObjectType_MAX        = 6,
};

enum class E*73ecefdab1 : uint8_t
{
	*02ef784413                    = 0,
	*14a7f6b55b                    = 1,
	*535e9ecd80                    = 2,
	*6459976e7d                    = 3,
	*73ecefdab1_MAX                = 4,
};

enum class ECraftResult : uint8_t
{
	Success                        = 0,
	Invalid_Character              = 1,
	Invalid_Inventory              = 2,
	Invalid_Equipment              = 3,
	Invalid_CraftingRuleComponent  = 4,
	Invalid_CraftItemData          = 5,
	Invalid_ReservedCraftItem      = 6,
	Invalid_PlayerState            = 7,
	Not_Enough_Material            = 8,
	Not_Enough_Space               = 9,
	Miss_Matched_RestrictFilter    = 10,
	Restricted_Stance              = 11,
	ECraftResult_MAX               = 12,
};

enum class ECustomCarepackageState : uint8_t
{
	Transporting                   = 0,
	Falling                        = 1,
	Landing                        = 2,
	ECustomCarepackageState_MAX    = 3,
};

enum class E*1d3c6b43b5 : uint8_t
{
	*34f904288f                    = 0,
	*3023169316                    = 1,
	*5c302c921a                    = 2,
	*7bce0fc8aa                    = 3,
	*dcc89bf73d                    = 16,
	*053c80487e                    = 17,
	*2e374a3fb6                    = 18,
	*187f497db5                    = 19,
	*2a8ed54016                    = 32,
	*42135ee15d                    = 33,
	*9124f4c0f2                    = 34,
	*c113b586f4                    = 35,
	*01b176ee20                    = 36,
	*1d3c6b43b5_MAX                = 37,
};

enum class ELocationType : uint8_t
{
	LANDMARK                       = 0,
	EXTRA_LANDMARK                 = 1,
	CITY                           = 2,
	CITY_DETAIL                    = 3,
	TOWN                           = 4,
	COMPOUNDS                      = 5,
	EXTRA                          = 6,
	TEST_SHOW_ALL                  = 7,
	ELocationType_MAX              = 8,
};

enum class EReplayTimelineMode : uint8_t
{
	ReplayPlay                     = 0,
	ReplayEditor                   = 1,
	ReplayRender                   = 2,
	EReplayTimelineMode_MAX        = 3,
};

enum class E*650ee13a5a : uint8_t
{
	*601f853f9a                    = 0,
	*c3640f3ca3                    = 1,
	*9e24874b1f                    = 2,
	*c303ffe42e                    = 3,
	*780d95af05                    = 4,
	*650ee13a5a_MAX                = 5,
};

enum class ELoadingScreenType : uint8_t
{
	NONE                           = 0,
	ICE_BRAKE                      = 1,
	RULE_SET                       = 2,
	WEAPON                         = 3,
	ATTACHMENT                     = 4,
	EQUIPMENT                      = 5,
	ITEM                           = 6,
	VEHICLE                        = 7,
	SYSTEM                         = 8,
	DEFAULT                        = 9,
	GAME_MODE                      = 10,
	EXPOSE_WITH_HIGHEST_PRIORITY   = 11,
	ELoadingScreenType_MAX         = 12,
};

enum class E*b7d98ebb5b : uint8_t
{
	*15dee88276                    = 0,
	*10426b11fb                    = 1,
	*fca482b380                    = 2,
	*b7d98ebb5b_MAX                = 3,
};

enum class EValueType : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	String                         = 2,
	Bool                           = 3,
	EValueType_MAX                 = 4,
};

enum class ETslControllerType : uint8_t
{
	Mouse                          = 0,
	GamePad                        = 1,
	Total                          = 2,
	ETslControllerType_MAX         = 3,
};

enum class ETableCheckerHideOption : int32_t
{
	Hide                           = 0,
	Show                           = 1,
	ETableCheckerHideOption_MAX    = 2,
};

enum class EKeyHintGradeSettingValue : uint8_t
{
	Basic                          = 1,
	Advanced                       = 2,
	EKeyHintGradeSettingValue_MAX  = 3,
};

enum class EKeyHintGradeBitmask : uint8_t
{
	Basic                          = 0,
	Advanced                       = 1,
	EKeyHintGradeBitmask_MAX       = 2,
};

enum class EBeginningState : uint8_t
{
	Invalid                        = 0,
	Normal                         = 1,
	StartIsland                    = 2,
	Airplane                       = 3,
	Skydiving                      = 4,
	Parachuting                    = 5,
	EBeginningState_MAX            = 6,
};

enum class ETslWeatherAction : uint8_t
{
	NotDefined                     = 0,
	Initialized                    = 1,
	Prolonged                      = 2,
	ETslWeatherAction_MAX          = 3,
};

enum class EGameStartupTimeRecordType : uint8_t
{
	ExecPubgBegin                  = 0,
	ClientBegin                    = 1,
	MoviePlaying                   = 2,
	MovieEnded                     = 3,
	WelcomeScreenLoadStarted       = 4,
	WelcomeScreenLoadEnded         = 5,
	LobbyLoadStarted               = 6,
	LobbyLoadEnded                 = 7,
	Count                          = 8,
	SectionSeparator               = 9,
	EGameStartupTimeRecordType_MAX = 10,
};

enum class EDecoyFiringState : uint8_t
{
	Firing                         = 0,
	BetweenShots                   = 1,
	BetweenSequences               = 2,
	EDecoyFiringState_MAX          = 3,
};

enum class EDecoyState : uint8_t
{
	Uninitialized                  = 0,
	Cooking                        = 1,
	DelayedFiring                  = 2,
	Firing                         = 3,
	Reloading                      = 4,
	DelayedEnding                  = 5,
	EndOfLife                      = 6,
	EDecoyState_MAX                = 7,
};

enum class EDESPMode : uint8_t
{
	None                           = 0,
	UniformDivision                = 1,
	RadiusFromCenter               = 2,
	EDESPMode_MAX                  = 3,
};

enum class EDoorState : uint8_t
{
	Closed                         = 0,
	Closing                        = 1,
	Opened                         = 2,
	Opening                        = 3,
	EDoorState_MAX                 = 4,
};

enum class EDestrucibleSurfaceSourceType : uint8_t
{
	Unknown                        = 0,
	Projectile                     = 1,
	Grenade                        = 2,
	Warhead                        = 3,
	Slashing                       = 4,
	EDestrucibleSurfaceSourceType_MAX = 5,
};

enum class EFExplosivePropDataType : uint8_t
{
	Default                        = 0,
	PropaneTank                    = 1,
	SmallTank                      = 2,
	RacingExplosive                = 3,
	GasPump                        = 4,
	EVCharger                      = 5,
	EFExplosivePropDataType_MAX    = 6,
};

enum class EDynamicWeather : uint8_t
{
	NotInitialized                 = 0,
	Initialized                    = 1,
	BlendInStarted                 = 2,
	Saturated                      = 3,
	BlendOutStarted                = 4,
	BlendOutEnded                  = 5,
	Finished                       = 6,
	EDynamicWeather_MAX            = 7,
};

enum class E*52bc5f8034 : uint8_t
{
	*d15f316fe1                    = 0,
	*4163698181                    = 1,
	*dcf212d338                    = 2,
	*8c85240a89                    = 3,
	*52bc5f8034_MAX                = 4,
};

enum class ESeatDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	Left                           = 2,
	Right                          = 3,
	DirMax                         = 4,
	ESeatDirection_MAX             = 5,
};

enum class EBlueChipTowerInteractState : uint8_t
{
	InvalidTower                   = 0,
	InvalidMovement                = 1,
	Occupied                       = 2,
	Cooltime                       = 3,
	Breakdown                      = 4,
	Phase                          = 5,
	EmptyChip                      = 6,
	Allowed                        = 7,
	EBlueChipTowerInteractState_MAX = 8,
};

enum class ETdmSpawnKit : uint8_t
{
	Shotgun                        = 0,
	Smg                            = 1,
	Ar                             = 2,
	Dmr                            = 3,
	Sr                             = 4,
	Etc                            = 5,
	Max                            = 6,
	ETdmSpawnKit_MAX               = 7,
};

enum class ESpecialEquipmentType : uint8_t
{
	Default                        = 0,
	BluezoneBlocker                = 1,
	EmergencyParachute             = 2,
	Toolbox                        = 3,
	TacPack                        = 4,
	TraumaBag                      = 5,
	SoftRole                       = 6,
	ESpecialEquipmentType_MAX      = 7,
};

enum class ELobbyItemBundleType : uint8_t
{
	Bundle                         = 0,
	Generator                      = 1,
	ELobbyItemBundleType_MAX       = 2,
};

enum class ELobbyCharacterAnimationType : uint8_t
{
	Default                        = 0,
	Wardrobe                       = 1,
	Appearance                     = 2,
	ELobbyCharacterAnimationType_MAX = 3,
};

enum class EParameterLUTChannel : uint8_t
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	RGBA                           = 4,
	Undefined                      = 5,
	EParameterLUTChannel_MAX       = 6,
};

enum class EMaterialParameterType : uint8_t
{
	Bool                           = 0,
	Scalar                         = 1,
	Vector                         = 2,
	Texture                        = 3,
	Undefined                      = 4,
	EMaterialParameterType_MAX     = 5,
};

enum class E*56f55bda3c : int32_t
{
	*2d959f7d9e                    = 0,
	*d5dc6ae321                    = 1,
	*a8df14245f                    = 2,
	*3ed794cae2                    = 3,
	*56f55bda3c_MAX                = 4,
};

enum class ENpcDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	Left                           = 2,
	Right                          = 3,
	ForwardRight                   = 4,
	BackwardRight                  = 5,
	BackwardLeft                   = 6,
	ForwardLeft                    = 7,
	ENpcDirection_MAX              = 8,
};

enum class ENpcWalkingSpeedType : uint8_t
{
	Idle                           = 0,
	Walk                           = 1,
	Run                            = 2,
	Sprint                         = 3,
	ENpcWalkingSpeedType_MAX       = 4,
};

enum class ENpcCharacterStateType : uint8_t
{
	Default                        = 0,
	Respawn                        = 1,
	Fire1                          = 2,
	Fire2                          = 3,
	Fire3                          = 4,
	Knockback                      = 5,
	Knockdown                      = 6,
	Getup                          = 7,
	ThrowPhase1                    = 8,
	ThrowPhase2                    = 9,
	ThrowPhase3                    = 10,
	Blind                          = 11,
	Despawn                        = 12,
	RunnerScream                   = 13,
	ThrowBuff                      = 14,
	Scream                         = 15,
	Kidnap                         = 16,
	Dash                           = 17,
	InSafeZone                     = 18,
	MeleeAttackWhileKidnapping     = 19,
	DoctorThrowPhase1              = 20,
	DoctorThrowPhase2              = 21,
	DoctorThrowPhase3              = 22,
	ENpcCharacterStateType_MAX     = 23,
};

enum class ERandomType : uint8_t
{
	Random                         = 0,
	Shuffle                        = 1,
	Ascending                      = 2,
	Descending                     = 3,
	ERandomType_MAX                = 4,
};

enum class ECustomAnimDataType : uint8_t
{
	CustomAnimData                 = 0,
	AnimSequence                   = 1,
	ECustomAnimDataType_MAX        = 2,
};

enum class ECustomAnimSlotType : uint8_t
{
	FullBody                       = 0,
	UpperBody                      = 1,
	FullBodyInstance               = 2,
	UpperBodyInstance              = 3,
	LowerBody                      = 4,
	ECustomAnimSlotType_MAX        = 5,
};

enum class ERetriggerCounter : uint8_t
{
	First                          = 0,
	Sec                            = 1,
	Third                          = 2,
	Fourth                         = 3,
	ERetriggerCounter_MAX          = 4,
};

enum class EPathDebugType : uint8_t
{
	None                           = 0,
	Location                       = 1,
	SelectNpc                      = 2,
	EPathDebugType_MAX             = 3,
};

enum class E*de95d73a63 : uint8_t
{
	*dfa9e0491e                    = 0,
	*9b97061963                    = 1,
	*bebd28603a                    = 2,
	*d4c5f0aca6                    = 3,
	*00ce4919d1                    = 4,
	*de95d73a63_MAX                = 5,
};

enum class E*fd4f848604 : uint8_t
{
	*ec36815330                    = 0,
	*e4401981e6                    = 1,
	*88330b2604                    = 2,
	*ad467e69e1                    = 3,
	*fd4f848604_MAX                = 4,
};

enum class E*fd9267e8d0 : uint8_t
{
	*908fcc0bcb                    = 0,
	*b3a5c34f3c                    = 1,
	*6af5e03985                    = 2,
	*d38731a7f4                    = 3,
	*fd9267e8d0_MAX                = 4,
};

enum class E*df8da51290 : uint8_t
{
	*273de28eab                    = 0,
	*d1126a9c3a                    = 1,
	*8b551de541                    = 2,
	*dd4168e7e9                    = 3,
	*df8da51290_MAX                = 4,
};

enum class E*b511be500a : uint8_t
{
	*f2d370b0fa                    = 0,
	*2fda379622                    = 1,
	*aaac18458a                    = 2,
	*3e49e11c8a                    = 3,
	*b511be500a_MAX                = 4,
};

enum class E*de396df549 : uint8_t
{
	*19834b07fd                    = 0,
	*8d1a58210a                    = 1,
	*334e6f1a23                    = 2,
	*9fca89feb0                    = 3,
	*de396df549_MAX                = 4,
};

enum class ETargetInteractionPurpose : int32_t
{
	Move                           = 0,
	Reset                          = 1,
	ETargetInteractionPurpose_MAX  = 2,
};

enum class ESpareTireProcessState : uint8_t
{
	None                           = 0,
	PutWorking                     = 1,
	PutCancel                      = 2,
	PutFinish                      = 3,
	TakeWorking                    = 4,
	TakeCancel                     = 5,
	TakeFinish                     = 6,
	ESpareTireProcessState_MAX     = 7,
};

enum class EMapColor : uint8_t
{
	Undefined                      = 0,
	Red                            = 1,
	Green                          = 2,
	Blue                           = 3,
	Yellow                         = 4,
	EMapColor_MAX                  = 5,
};

enum class EPackageDoorState : uint8_t
{
	CLOSED                         = 0,
	OPENING                        = 1,
	OPENED                         = 2,
	EPackageDoorState_MAX          = 3,
};

enum class EThingGroupSpawnType : uint8_t
{
	None                           = 0,
	Probability                    = 1,
	TotalCount                     = 2,
	EThingGroupSpawnType_MAX       = 3,
};

enum class E*49eecb626a : uint8_t
{
	*2fb86076d7                    = 0,
	*9736903f51                    = 1,
	*3c930a4ded                    = 2,
	*3043a4c6a1                    = 3,
	*2e58bfca2b                    = 4,
	*fba11a3d7a                    = 5,
	*536bbc573a                    = 6,
	*a7988d1191                    = 7,
	*49eecb626a_MAX                = 8,
};

enum class ETeamParkourRole : uint8_t
{
	Role_None                      = 0,
	Role_Supporter                 = 1,
	Role_Uploader                  = 2,
	Role_MAX                       = 3,
};

enum class ETeamParkourState : uint8_t
{
	None                           = 0,
	ReadyToRaising                 = 1,
	ReadyToPulling                 = 2,
	Uploading                      = 3,
	Finish                         = 4,
	Failed                         = 5,
	ETeamParkourState_MAX          = 6,
};

enum class E*e4f2c12ead : uint8_t
{
	*32f2e5e7fb                    = 0,
	*d8115d1ebd                    = 1,
	*85558dda55                    = 2,
	*a0bbe6c15d                    = 3,
	*e4f2c12ead_MAX                = 4,
};

enum class E*31a3ee4f7f : uint8_t
{
	*62cf0f1716                    = 0,
	*f266f7304f                    = 1,
	*0fee6e6d63                    = 2,
	*8565e48f3b                    = 3,
	*31a3ee4f7f_MAX                = 4,
};

enum class EContainerState : uint8_t
{
	Closed                         = 0,
	Opening                        = 1,
	Opened                         = 2,
	EContainerState_MAX            = 3,
};

enum class ESpawnDestroyTiming : uint8_t
{
	Undefined                      = 0,
	SpawnOnMatchStart              = 1,
	DestoryOnMatchStart            = 2,
	ESpawnDestroyTiming_MAX        = 3,
};

enum class EAirDropType : uint8_t
{
	NormalCarePackage              = 0,
	CustomAirDrop                  = 1,
	Hunger                         = 2,
	EAirDropType_MAX               = 3,
};

enum class EHelicopterState : uint8_t
{
	Normal                         = 0,
	Smoke                          = 1,
	Explosion                      = 2,
	EHelicopterState_MAX           = 3,
};

enum class EEmergencyAircraftState : uint8_t
{
	None                           = 0,
	Flame                          = 1,
	Explosion                      = 2,
	LastExplosion                  = 3,
	Destroy                        = 4,
	EEmergencyAircraftState_MAX    = 5,
};

enum class EEmPickup_PathValidationState : uint8_t
{
	None                           = 0,
	InProgress                     = 1,
	Valid                          = 2,
	Invalid                        = 3,
	EEmPickup_MAX                  = 4,
};

enum class E*d11d0af561 : uint8_t
{
	*49d45cda3e                    = 0,
	*f90daec362                    = 1,
	*1f5db8b2e9                    = 2,
	*cface1e477                    = 3,
	*6dc87277ea                    = 4,
	*97640ea924                    = 5,
	*712f5ec4c7                    = 6,
	*eca06eeb1f                    = 7,
	*942d590cf0                    = 8,
	*f13a9fe2fd                    = 9,
	*ff527cf9da                    = 10,
	*a80c5d08ea                    = 11,
	*297b19f2ad                    = 12,
	*d11d0af561_MAX                = 13,
};

enum class E*d9d535a8c1 : uint8_t
{
	*f1672ae872                    = 0,
	*3008925bdd                    = 1,
	*5ec9df2c2f                    = 2,
	*4299bdc5ab                    = 3,
	*d9d535a8c1_MAX                = 4,
};

enum class E*cf5cd0c5f1 : uint8_t
{
	*8f2b05f171                    = 0,
	*4b16bf2b9b                    = 1,
	*2625bf8f13                    = 2,
	*ae7de44370                    = 3,
	*2ea7cc2b9a                    = 4,
	*d564326c69                    = 5,
	*cf5cd0c5f1_MAX                = 6,
};

enum class EVehicleEngineState : uint8_t
{
	EEngineStateAutoOff            = 0,
	EEngineStateAutoOn             = 1,
	EEngineStateManualOff          = 2,
	EEngineStateManualOn           = 3,
	EVehicleEngineState_MAX        = 4,
};

enum class E*d57c98f8ea : uint8_t
{
	*0b69f22582                    = 0,
	*cf05c5970a                    = 1,
	*62aea88813                    = 2,
	*375ebf9f23                    = 3,
	*b3942fb00d                    = 4,
	*d57c98f8ea_MAX                = 5,
};

enum class ETslTrainingTeleportType : uint8_t
{
	InfoThumnail                   = 0,
	MapIconVolume                  = 1,
	NONE                           = 2,
	ETslTrainingTeleportType_MAX   = 3,
};

enum class ETslTrainingType : uint8_t
{
	Aim_Sound_Lab                  = 0,
	Grenades                       = 1,
	FiringRange                    = 2,
	VehicleSpot                    = 3,
	GunItemSpot                    = 4,
	CarShootingRange               = 5,
	JumpSchool                     = 6,
	PracticeRange                  = 7,
	OneOnOneArena                  = 8,
	NONE                           = 9,
	ETslTrainingType_MAX           = 10,
};

enum class ETrainingScoreType : uint8_t
{
	None                           = 0,
	HeadShot                       = 1,
	Kill                           = 2,
	SoundCatch                     = 3,
	TotalScore                     = 4,
	AimAccuracy                    = 5,
	ETrainingScoreType_MAX         = 6,
};

enum class ETrainingPracticeType : uint8_t
{
	None                           = 0,
	Practice_Aim                   = 1,
	Practice_Sound                 = 2,
	ETrainingPracticeType_MAX      = 3,
};

enum class EOneOnOneResultType : uint8_t
{
	None                           = 0,
	Lose                           = 1,
	Win                            = 2,
	Draw                           = 3,
	Escape                         = 4,
	EOneOnOneResultType_MAX        = 5,
};

enum class EOneOnOneSideType : uint8_t
{
	None                           = 0,
	Home                           = 1,
	Away                           = 2,
	Audience                       = 3,
	EOneOnOneSideType_MAX          = 4,
};

enum class EOneOnOneStageType : uint8_t
{
	None                           = 0,
	Arena                          = 1,
	Audience                       = 2,
	EOneOnOneStageType_MAX         = 3,
};

enum class EClanNoticeUGCLevel : uint8_t
{
	Hide                           = 0,
	Show                           = 1,
	EClanNoticeUGCLevel_MAX        = 2,
};

enum class EClanNameUGCLevel : uint8_t
{
	HideAll                        = 0,
	OnlyMine                       = 1,
	MineAndOthersTag               = 2,
	ShowAll                        = 3,
	EClanNameUGCLevel_MAX          = 4,
};

enum class ERepairKitTargetType : uint8_t
{
	None                           = 0,
	DroppedItem                    = 1,
	Character                      = 2,
	Vehicle                        = 3,
	ERepairKitTargetType_MAX       = 4,
};

enum class ELobbySceneTravelState : uint8_t
{
	Started                        = 0,
	Inprogress                     = 1,
	InprogressEnd                  = 2,
	Finished                       = 3,
	ELobbySceneTravelState_MAX     = 4,
};

enum class ETslPreloadPriority : uint8_t
{
	Static                         = 0,
	Dynamic                        = 1,
	ETslPreloadPriority_MAX        = 2,
};

enum class EBlueChipTowerState : uint8_t
{
	IsUnavailable                  = 0,
	IsAvailable                    = 1,
	IsInUse                        = 2,
	IsLaunching                    = 3,
	RegisterFinished               = 4,
	NeedToCharge                   = 5,
	Cancel                         = 6,
	Broken                         = 7,
	EBlueChipTowerState_MAX        = 8,
};

enum class EBlueChipTowerAnimState : uint8_t
{
	Wait                           = 0,
	IsInUse                        = 1,
	Success                        = 2,
	BlueChipTowerAnimState_MAX     = 3,
};

enum class EFollowTargetType : int32_t
{
	Bot                            = 0,
	CurrentPlayer                  = 1,
	EFollowTargetType_MAX          = 2,
};

enum class EControlDebuffType : uint8_t
{
	None                           = 0,
	Stun                           = 1,
	Trap                           = 2,
	Slow                           = 3,
	EControlDebuffType_MAX         = 4,
};

enum class EBulletproofShieldDurabilityState : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Damaged                        = 2,
	DamagedSeverely                = 3,
	Destroyed                      = 4,
	EBulletproofShieldDurabilityState_MAX = 5,
};

enum class EBulletproofShieldInstallState : uint8_t
{
	None                           = 0,
	InstallInprogress              = 1,
	InstallComplete                = 2,
	Destroyed                      = 3,
	EBulletproofShieldInstallState_MAX = 4,
};

enum class ELobbyWeaponProcessorSlot : uint8_t
{
	CustomizeViewModeSlot          = 0,
	LobbyPoseSlot                  = 1,
	None                           = 2,
	ELobbyWeaponProcessorSlot_MAX  = 3,
};

enum class ELivingThingState : uint8_t
{
	Idle                           = 0,
	Alert                          = 1,
	Dead                           = 2,
	Max                            = 3,
	ELivingThingState_MAX          = 4,
};

enum class EBodyCarryState : uint8_t
{
	Inactive                       = 0,
	Active                         = 1,
	PickingUp                      = 2,
	Dropping                       = 3,
	EBodyCarryState_MAX            = 4,
};

enum class ECountInfoAnimType : uint8_t
{
	None                           = 0,
	Default                        = 1,
	Decreasing                     = 2,
	Increasing                     = 3,
	Warning                        = 4,
	Emerging                       = 5,
	Vanishing                      = 6,
	ECountInfoAnimType_MAX         = 7,
};

enum class ECounterWidgetType : uint8_t
{
	Assist                         = 0,
	ECounterWidgetType_MAX         = 1,
};

enum class EHungerCarePackageState : uint8_t
{
	Closed                         = 0,
	Opening                        = 1,
	Opened                         = 2,
	EHungerCarePackageState_MAX    = 3,
};

enum class ECustomDamageEventReactionType : uint8_t
{
	SpawnActor                     = 0,
	StopSpawnedParticles           = 1,
	HideMesh                       = 2,
	HideMeshInstance               = 3,
	HideBone                       = 4,
	ApplyPhysicalAnimationProfile  = 5,
	SetCollisionEnabled            = 6,
	ECustomDamageEventReactionType_MAX = 7,
};

enum class E*3e764fc702 : uint8_t
{
	*c10e5782b8                    = 0,
	*031417383a                    = 1,
	*f2c7e19a70                    = 2,
	*3e764fc702_MAX                = 3,
};

enum class EScmCollisionGroup : uint8_t
{
	Default                        = 0,
	FireField                      = 1,
	ExplosiveItem                  = 2,
	EScmCollisionGroup_MAX         = 3,
};

enum class EDamageFieldType : uint8_t
{
	Default                        = 0,
	DirectTick                     = 1,
	EDamageFieldType_MAX           = 2,
};

enum class E*a22587af48 : uint8_t
{
	*64eb740af2                    = 0,
	*edffa5dff4                    = 1,
	*90e1c8536f                    = 2,
	*86a62bcd8b                    = 3,
	*a22587af48_MAX                = 4,
};

enum class EOptionTab : int32_t
{
	Graphics                       = 0,
	Audio                          = 1,
	Controls                       = 2,
	Gameplay                       = 3,
	KeyBindings                    = 4,
	EOptionTab_MAX                 = 5,
};

enum class ETslGameOptionKeyBindingType : uint8_t
{
	None                           = 0,
	Action                         = 1,
	Axis                           = 2,
	ETslGameOptionKeyBindingType_MAX = 3,
};

enum class ETslGameOptionSupplementaryType : uint8_t
{
	None                           = 0,
	KeyboardLayout                 = 1,
	PreviewImage                   = 2,
	PreviewCrosshair               = 3,
	VolumeUnitMeter                = 4,
	PreviewMaterial                = 5,
	LinkButton                     = 6,
	ETslGameOptionSupplementaryType_MAX = 7,
};

enum class ENaviGamepadInputType : uint8_t
{
	DPad_Pressed                   = 0,
	DPad_Released                  = 1,
	Axis                           = 2,
	Axis_Hold                      = 3,
	ENaviGamepadInputType_MAX      = 4,
};

enum class ETslFenceSelector : uint8_t
{
	None                           = 0,
	Use                            = 1,
	Use                            = 2,
	Use                            = 3,
	Use                            = 4,
	ETslFenceSelector_MAX          = 5,
};

enum class EFlowTextState : uint8_t
{
	None                           = 0,
	Wait                           = 1,
	FlowLeftOut                    = 2,
	FlowLeftIn                     = 3,
	FlowRightOut                   = 4,
	FlowRightIn                    = 5,
	BlinkAnimation                 = 6,
	EFlowTextState_MAX             = 7,
};

enum class E*dbbf737259 : uint8_t
{
	*b1f4606073                    = 0,
	*ff42c29aee                    = 1,
	*2dc577af02                    = 2,
	*20eef4244f                    = 3,
	*dbbf737259_MAX                = 4,
};

enum class EMissileState : int32_t
{
	NONE                           = 0,
	Falling                        = 1,
	Impact                         = 2,
	ExplosionOnLandscapeOrRoad     = 3,
	ExplosionOnAir                 = 4,
	ExplosionImmediately           = 5,
	Exploded                       = 6,
	EMissileState_MAX              = 7,
};

enum class ETslBlackZoneState : uint8_t
{
	BZ_WaitingForMatchStart        = 0,
	BZ_SelectNewBlackZone          = 1,
	BZ_BeginStrike                 = 2,
	BZ_FireMisile                  = 3,
	BZ_EndBombing                  = 4,
	BZ_MAX                         = 5,
};

enum class E*cf8b9a132a : uint8_t
{
	*390bc36ae6                    = 0,
	*aa4616585c                    = 1,
	*ca2071ce0c                    = 2,
	*95562fd3ca                    = 3,
	*6a60f07b4e                    = 4,
	*cf8b9a132a_MAX                = 5,
};

enum class EVendingMachineType : uint8_t
{
	AMMUNITION                     = 0,
	BOOSTING                       = 1,
	THROWABLE                      = 2,
	WEAPON                         = 3,
	HEALING                        = 4,
	EVendingMachineType_MAX        = 5,
};

enum class EItemSpawnType : uint8_t
{
	FixedRatioAndAdjustableTotalNumber = 0,
	AdjustableRatioAndFixedTotalNumber = 1,
	AdjustableRatioAndAdjustableTotalNumber = 2,
	Invalid                        = 3,
	EItemSpawnType_MAX             = 4,
};

enum class ERedZoneInprogressState : uint8_t
{
	InitRedZone                    = 0,
	StartRedZone                   = 1,
	PrepareNextRedZone             = 2,
	BombingStart                   = 3,
	Bombing                        = 4,
	FinishRedZone                  = 5,
	ERedZoneInprogressState_MAX    = 6,
};

enum class EItemClientAnimSeqUnload : int32_t
{
	None                           = 0,
	Disable                        = 1,
	Enable                         = 2,
	EItemClientAnimSeqUnload_MAX   = 3,
};

enum class EGarageState : int32_t
{
	None                           = 0,
	DoorClosed                     = 1,
	DoorOpening                    = 2,
	DoorOpenedWithSiren            = 3,
	DoorOpenedWithFlashing         = 4,
	FinalState                     = 5,
	EGarageState_MAX               = 6,
};

enum class EGasPumpType : uint8_t
{
	Fuel                           = 0,
	Electric                       = 1,
	EGasPumpType_MAX               = 2,
};

enum class EGasPumpState : uint8_t
{
	Inactive                       = 0,
	StartFueling                   = 1,
	StopFueling                    = 2,
	StopFuelingFull                = 3,
	EGasPumpState_MAX              = 4,
};

enum class E*5ef0e62107 : uint8_t
{
	*07409d110e                    = 0,
	*4365636ff6                    = 1,
	*771d8bfe21                    = 2,
	*5ef0e62107_MAX                = 3,
};

enum class ETslIngameMission_ConditionData_InteractionType : uint8_t
{
	None                           = 0,
	VehicleRadio                   = 1,
	BodyCarry                      = 2,
	InteractableActor              = 3,
	ETslIngameMission_ConditionData_MAX = 4,
};

enum class ETslIngameMission_Condition_PlaceType : uint8_t
{
	None                           = 0,
	SecretRoom                     = 1,
	Market                         = 2,
	ETslIngameMission_Condition_MAX = 3,
};

enum class ETslIngameMission_ConditionData_VisitType : uint8_t
{
	None                           = 0,
	Region                         = 1,
	Place                          = 2,
	ETslIngameMission_ConditionData_MAX = 3,
};

enum class ETslIngameMission_ConditionData_ReviveType : uint8_t
{
	None                           = 0,
	SelfDBNO                       = 1,
	TeamDBNO                       = 2,
	Bluechip                       = 3,
	ETslIngameMission_ConditionData_MAX = 4,
};

enum class ETslIngameMission_Condition_ParkourType : uint8_t
{
	None                           = 0,
	Vaulting                       = 1,
	Cooperative                    = 2,
	ETslIngameMission_Condition_MAX = 3,
};

enum class ETslIngameMission_ConditionData_KillType : uint8_t
{
	None                           = 0,
	Vehicle                        = 1,
	RidingShot                     = 2,
	HeadShot                       = 3,
	ETslIngameMission_ConditionData_MAX = 4,
};

enum class ETslIngameMission_ConditionData_KillAssistType : uint8_t
{
	Kill                           = 0,
	Assist                         = 1,
	KillOrAssist                   = 2,
	ETslIngameMission_ConditionData_MAX = 3,
};

enum class ETslIngameMission_Condition_ComparisonType : uint8_t
{
	Less                           = 0,
	Greater                        = 1,
	ETslIngameMission_Condition_MAX = 2,
};

enum class ETslIngameMission_CoditionData_VehicleType : uint8_t
{
	None                           = 0,
	Floating                       = 1,
	Wheeled                        = 2,
	MotorBike                      = 3,
	Flying                         = 4,
	All                            = 5,
	ETslIngameMission_CoditionData_MAX = 6,
};

enum class ETslIngameMission_CoditionData_MoveType : uint8_t
{
	None                           = 0,
	Walk                           = 1,
	Drive                          = 2,
	Parachute                      = 3,
	Swim                           = 4,
	SafeZone                       = 5,
	ETslIngameMission_CoditionData_MAX = 6,
};

enum class ETslIngameMissionCondition_FlareGunUsage : uint8_t
{
	None                           = 0,
	BRDM                           = 1,
	CarePackage                    = 2,
	ETslIngameMissionCondition_MAX = 3,
};

enum class ETslIngameMission_ConditionData_ItemType : uint8_t
{
	Any                            = 0,
	Equipable                      = 1,
	Weapon                         = 2,
	Castable                       = 3,
	ETslIngameMission_ConditionData_MAX = 4,
};

enum class ETslIngameMission_ConditionData_ItemUseType : uint8_t
{
	None                           = 0,
	ItemConsume                    = 1,
	Flaregun                       = 2,
	ItemThrow                      = 3,
	FireWeapon                     = 4,
	ETslIngameMission_ConditionData_MAX = 5,
};

enum class ETslIngameMission_ConditionData_ItemMissionType : uint8_t
{
	None                           = 0,
	PickUp                         = 1,
	Use                            = 2,
	Request                        = 3,
	Give                           = 4,
	ETslIngameMission_ConditionData_MAX = 5,
};

enum class ETslIngameMissionRewardType : uint8_t
{
	Normal                         = 0,
	Jackpot                        = 1,
	ETslIngameMissionRewardType_MAX = 2,
};

enum class ETslIngameMissionType : uint8_t
{
	None                           = 0,
	Newbie                         = 1,
	Easy                           = 2,
	Normal                         = 3,
	Hard                           = 4,
	Event                          = 5,
	ETslIngameMissionType_MAX      = 6,
};

enum class E*6349946025 : uint8_t
{
	*c837860058                    = 0,
	*cc7b771cfa                    = 1,
	*6b6b1fbe09                    = 2,
	*6349946025_MAX                = 3,
};

enum class ETslIngameMissionFailReason : uint8_t
{
	Success                        = 0,
	Invalid_IngameMissionManagerClass = 1,
	Invalid_IngameMissionManagerObject = 2,
	Invalid_IngameMissionDataTables = 3,
	Invalid_IngameMissionCondition = 4,
	Fail_EnableIngameMission       = 5,
	Fail_CheckMissionActivation_MissionDataNull = 6,
	Fail_CheckMissionActivation_Inactive = 7,
	Fail_CheckMissionActivation_InvalidMap = 8,
	Fail_CheckMissionActivation_InvalidMode = 9,
	Fail_CheckMissionActivation_LackTeammates = 10,
	Fail_CheckMissionActivation_GameStateNull = 11,
	Fail_CheckMissionActivation_ReachSurvivalLvLimit = 12,
	Fail_CheckMissionActivation_UsedMission = 13,
	Fail_CheckRewardActivation_MissionDataNull = 14,
	Fail_CheckRewardActivation_InvalidMap = 15,
	Fail_ReplaceMission_InvalidMissionId = 16,
	Fail_ReplaceMission_MissionCompleted = 17,
	Fail_ReplaceMission_NoDataLeft = 18,
	Fail_ReplaceMission_ReachReplacementLimit = 19,
	Fail_ProcessNewMission_TooFewMissions = 20,
	Fail_ProcessNewMission_InvalidIndex = 21,
	ETslIngameMissionFailReason_MAX = 22,
};

enum class E*0d63ffdfb2 : uint8_t
{
	*40ff6c3689                    = 0,
	*4287fe6a7e                    = 1,
	*e5a39a5b4f                    = 2,
	*b13e9013c3                    = 3,
	*0d63ffdfb2_MAX                = 4,
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

enum class EJukeBoxAnimState : uint8_t
{
	OPEN                           = 0,
	CLOSED                         = 1,
	JukeBoxAnimState_MAX           = 2,
};

enum class ELivingThingThreatLevel : uint8_t
{
	NoChanged                      = 0,
	IncrementThreatLevel           = 1,
	DecrementThreatLevel           = 2,
	Calm                           = 3,
	Fear                           = 4,
	Panic                          = 5,
	Dead                           = 6,
	MAX                            = 7,
	ELivingThingThreatLevel_MAX    = 8,
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
	None                           = 0,
	Initialized                    = 1,
	Dead                           = 2,
	RevivalTarget                  = 3,
	RevivalRegisted                = 4,
	Revived                        = 5,
	ETslRevivalPlayerState_MAX     = 6,
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
	None                           = 0,
	Distance                       = 1,
	Frustum                        = 2,
	LastRenderedTime               = 4,
	SameTransform                  = 8,
	NearbyTransform                = 16,
	DistAndFrustumAndNear          = 19,
	All                            = 255,
	ETslParticleCullType_MAX       = 256,
};

enum class ETslParticleGroupPriority : uint8_t
{
	High                           = 0,
	Low                            = 1,
	ETslParticleGroupPriority_MAX  = 2,
};

enum class EPlayerAction : uint8_t
{
	ToggleCrouch                   = 0,
	ToggleCameraTpptoFpp           = 1,
	ToggleCameraFpptoTpp           = 2,
	PeekLeft                       = 3,
	PeekRight                      = 4,
	HoldBreath                     = 5,
	HoldAngled                     = 6,
	ToggleQuickThrow               = 7,
	StartCookingThrowable          = 8,
	WeaponInspection               = 9,
	ToggleEngine                   = 10,
	SetMapMarkerAtCurrentPosition  = 11,
	AddWayPoint                    = 12,
	ToggleExtendedMinimap          = 13,
	ToggleEmoteWheel               = 14,
	ToggleThrowableItemWheel       = 15,
	ToggleHealItemWheel            = 16,
	ToggleRadioMessageTextWheel    = 17,
	Max                            = 18,
	EPlayerAction_MAX              = 19,
};

enum class E*e7959bb115 : uint8_t
{
	*161a1cb369                    = 0,
	*ff7e6485d1                    = 1,
	*6c611436a5                    = 2,
	*a76bfc2961                    = 3,
	*00f0fd97c8                    = 4,
	*e7959bb115_MAX                = 5,
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

enum class E*a328f8fb4a : uint8_t
{
	*30db04ed6a                    = 0,
	*9e963b868c                    = 1,
	*6d9d6cd71c                    = 2,
	*a328f8fb4a_MAX                = 3,
};

enum class ETslPubgIdAssetType : uint8_t
{
	NONE                           = 0,
	NAMEPLATE                      = 1,
	EMBLEM                         = 2,
	EMBLEM_ANIMATED                = 3,
	MEDAL1                         = 4,
	MEDAL2                         = 5,
	CLANPLATE                      = 6,
	CLANPLATE_LOW_DEFINITION       = 7,
	TIER                           = 8,
	ETslPubgIdAssetType_MAX        = 9,
};

enum class EEmojiPlayType : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	EEmojiPlayType_MAX             = 2,
};

enum class EDestructibleHardDoorState : uint8_t
{
	Normal                         = 0,
	Damaged                        = 1,
	Crashed                        = 2,
	EDestructibleHardDoorState_MAX = 3,
};

enum class ETslReferenceObjType : uint8_t
{
	GameMode                       = 0,
	Character                      = 1,
	Preload                        = 2,
	ETslReferenceObjType_MAX       = 3,
};

enum class E*da3bdc9897 : uint8_t
{
	*7bc365a543                    = 0,
	*85c0fdcd19                    = 1,
	*a37a77321f                    = 2,
	*975178395d                    = 3,
	*54c2bc0f8e                    = 4,
	*da3bdc9897_MAX                = 5,
};

enum class ESoftRoleState : uint8_t
{
	Open                           = 0,
	Closed                         = 1,
	Inspect                        = 2,
	ESoftRoleState_MAX             = 3,
};

enum class E*a916ec943b : uint8_t
{
	*230c8cbf19                    = 0,
	*1f5a3bfd38                    = 1,
	*53f1672381                    = 2,
	*2151469f45                    = 3,
	*f7f5b1cd4e                    = 4,
	*a916ec943b_MAX                = 5,
};

enum class E*44fca191b8 : uint8_t
{
	*93eeb7b880                    = 0,
	*e7663621db                    = 1,
	*31eb1fedeb                    = 2,
	*97da84d81c                    = 3,
	*5ca4e1ac8b                    = 4,
	*ad2b58fa36                    = 5,
	*76bf44fa7b                    = 6,
	*463ed4dbd5                    = 7,
	*6d04b41dd1                    = 8,
	*e6376a61c7                    = 9,
	*2b74fbf831                    = 10,
	*1d8f472b5b                    = 11,
	*44fca191b8_MAX                = 12,
};

enum class ERideVehicle : uint8_t
{
	None                           = 0,
	Ride                           = 1,
	Leave                          = 2,
	ERideVehicle_MAX               = 3,
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
	Default                        = 0,
	Vehicle                        = 1,
	Parachute                      = 2,
	Die                            = 3,
	Groggy                         = 4,
	Quitter                        = 5,
	AirCraft                       = 6,
	ItemRequest                    = 7,
	EmergencyPickup                = 8,
	Revival                        = 11,
	SpecificMode                   = 12,
	Tasered                        = 13,
	ETslTeamInfoIconState_MAX      = 14,
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
	ABSOLUTE_COORD                 = 0,
	AREA_RESTRICTED_COORD          = 1,
	CIRCULAR_RESTRICTED_COORD      = 2,
	ETslWheelWidgetMouseCursorDirectionType_MAX = 3,
};

enum class ETslWheelWidgetSelectType : uint8_t
{
	BY_CLICK                       = 0,
	BY_RELEASE                     = 1,
	BY_MAX                         = 2,
};

enum class EMinimapFocus : uint8_t
{
	CharacterFocus                 = 0,
	NextPlayzoneFocus              = 1,
	None                           = 2,
	EMinimapFocus_MAX              = 3,
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
	Normal                         = 0,
	Groggy                         = 1,
	Dead                           = 2,
	Vehicle                        = 3,
	Parachute                      = 4,
	Quitter                        = 5,
	Aircraft                       = 6,
	ItemRequest                    = 7,
	EmergencyPickup                = 8,
	EMarkStates_MAX                = 9,
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

enum class EDuelUIState : uint8_t
{
	None                           = 0,
	Battle                         = 1,
	Spectating                     = 2,
	MAX                            = 3,
	EDuelUIState_MAX               = 4,
};

enum class EDuelUITeam : uint8_t
{
	None                           = 0,
	MyTeam                         = 1,
	OpposingTeam                   = 2,
	MAX                            = 3,
	EDuelUITeam_MAX                = 4,
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
	FullAuto                       = 0,
	ThreeRoundBurst                = 1,
	TwoRoundBurst                  = 2,
	SemiAuto                       = 3,
	Single                         = 4,
	FullAutoFast                   = 5,
	FullAuto_SG                    = 6,
	ThreeRoundBurst_SG             = 7,
	SemiAuto_SG                    = 8,
	EFiremode_MAX                  = 9,
};

enum class ETraumaBagHealMode : uint8_t
{
	NoHealItem                     = 0,
	Bandage                        = 1,
	FirstAidKit                    = 2,
	Medkit                         = 3,
	BattleReadyKit                 = 4,
	MaxAndNone                     = 5,
	ETraumaBagHealMode_MAX         = 6,
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

enum class E*6863354ded : uint8_t
{
	*244c07bfae                    = 0,
	*e61bb5d387                    = 1,
	*4decdd37e9                    = 2,
	*f92f8b20bf                    = 3,
	*cf8e9fe2c1                    = 4,
	*63d0be0c33                    = 5,
	*9e765c6569                    = 6,
	*222c42ea41                    = 7,
	*bc3cf7d91c                    = 8,
	*b8f793da2c                    = 9,
	*6863354ded_MAX                = 10,
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

enum class E*0e7732de50 : uint8_t
{
	*1b366db292                    = 0,
	*81153a9bcf                    = 1,
	*c81a6dd0b8                    = 2,
	*0e7732de50_MAX                = 3,
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

enum class E*1542e0341a : uint8_t
{
	*7765e0eefd                    = 0,
	*748f509e16                    = 1,
	*07c46d55af                    = 2,
	*1542e0341a_MAX                = 3,
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

enum class E*16881841c1 : uint8_t
{
	*a0806af231                    = 0,
	*2cb28438a3                    = 1,
	*3553c18a37                    = 2,
	*4974080a7e                    = 3,
	*16881841c1_MAX                = 4,
};

enum class EActorSequenceObjectReferenceType : uint8_t
{
	ContextActor                   = 0,
	ExternalActor                  = 1,
	Component                      = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};

enum class ETaskResourceOverlapPolicy : uint8_t
{
	StartOnTop                     = 0,
	StartAtEnd                     = 1,
	ETaskResourceOverlapPolicy_MAX = 2,
};

enum class EGameplayTaskRunResult : uint8_t
{
	Error                          = 0,
	Failed                         = 1,
	Success_Paused                 = 2,
	Success_Active                 = 3,
	Success_Finished               = 4,
	EGameplayTaskRunResult_MAX     = 5,
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
	Destroyed                      = 0,
	LevelTransition                = 1,
	EndPlayInEditor                = 2,
	RemovedFromWorld               = 3,
	Quit                           = 4,
	EEndPlayReason_MAX             = 5,
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
	NoFiltering                    = 0,
	LOD                            = 1,
	ENotifyFilterType_MAX          = 2,
};

enum class EMontageNotifyTickType : uint8_t
{
	Queued                         = 0,
	BranchingPoint                 = 1,
	EMontageNotifyTickType_MAX     = 2,
};

enum class EAnimNotifyEventType : uint8_t
{
	Begin                          = 0,
	End                            = 1,
	EAnimNotifyEventType_MAX       = 2,
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
	Native                         = 0,
	SimpleConstructionScript       = 1,
	UserConstructionScript         = 2,
	Instance                       = 3,
	EComponentCreationMethod_MAX   = 4,
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

enum class E*2191f3f1d2 : uint8_t
{
	*89e321db38                    = 0,
	*852cd3b474                    = 1,
	*a9b0f7db0f                    = 2,
	*429df45702                    = 3,
	*49d6ec6bef                    = 4,
	*2191f3f1d2_MAX                = 5,
};

enum class E*68187ccbf4 : uint8_t
{
	*31248cf5e7                    = 0,
	*b1cd68e953                    = 1,
	*342b529573                    = 2,
	*b5e98f1ee2                    = 3,
	*05db0140a7                    = 4,
	*d86f4b1fb2                    = 5,
	*2a3d65cb1a                    = 6,
	*68187ccbf4_MAX                = 7,
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

enum class EDrawDebugTrace : uint8_t
{
	None                           = 0,
	ForOneFrame                    = 1,
	ForDuration                    = 2,
	Persistent                     = 3,
	EDrawDebugTrace_MAX            = 4,
};

enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33,
};

enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33,
};

enum class EQuitPreference : uint8_t
{
	Quit                           = 0,
	Background                     = 1,
	EQuitPreference_MAX            = 2,
};

enum class EMoveComponentAction : uint8_t
{
	Move                           = 0,
	Stop                           = 1,
	Return                         = 2,
	EMoveComponentAction_MAX       = 3,
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
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	SnapToTarget                   = 2,
	EAttachmentRule_MAX            = 3,
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

enum class E*d9dcc1ca4a : uint8_t
{
	*90fa2a8abc                    = 0,
	*5013dafa60                    = 1,
	*494dc92233                    = 2,
	*d9dcc1ca4a_MAX                = 3,
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

enum class E*dbe0375600 : uint8_t
{
	*e43db73df4                    = 0,
	*cba935f34b                    = 1,
	*538860984f                    = 2,
	*cc8624d38d                    = 3,
	*dbe0375600_MAX                = 4,
};

enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	Undefined                      = 0,
	AlwaysSpawn                    = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding           = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5,
};

enum class EActorUpdateOverlapsMethod : uint8_t
{
	UseConfigDefault               = 0,
	AlwaysUpdate                   = 1,
	OnlyUpdateMovable              = 2,
	NeverUpdate                    = 3,
	EActorUpdateOverlapsMethod_MAX = 4,
};

enum class E*70764b0291 : uint8_t
{
	*0f1ba37330                    = 0,
	*824e43a19c                    = 1,
	*5bfa69d691                    = 2,
	*70764b0291_MAX                = 3,
};

enum class E*a30bd425f3 : uint8_t
{
	*df5c0c06c9                    = 0,
	*f2b70529c7                    = 1,
	*34fe0bc3f6                    = 2,
	*e98b30b56f                    = 3,
	*a30bd425f3_MAX                = 4,
};

enum class EAutoPossessAI : uint8_t
{
	Disabled                       = 0,
	PlacedInWorld                  = 1,
	Spawned                        = 2,
	PlacedInWorldOrSpawned         = 3,
	EAutoPossessAI_MAX             = 4,
};

enum class E*e678a9539f : uint8_t
{
	*9706b60852                    = 0,
	*93505c61ed                    = 1,
	*ed71892330                    = 2,
	*1919a13e5e                    = 3,
	*9f479e452a                    = 4,
	*dbbd59be51                    = 5,
	*e678a9539f_MAX                = 6,
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

enum class E*771386a0e6 : uint8_t
{
	*f62fa0d48c                    = 0,
	*c8717d5de4                    = 1,
	*7777afdd40                    = 2,
	*c174d1a49a                    = 3,
	*f7bb146aa7                    = 4,
	*771386a0e6_MAX                = 5,
};

enum class EMeshBufferAccess : uint8_t
{
	Default                        = 0,
	ForceCPUAndGPU                 = 1,
	EMeshBufferAccess_MAX          = 2,
};

enum class E*363f6631af : uint8_t
{
	*424035893d                    = 0,
	*d0a7f6597f                    = 1,
	*8c6ccf7f43                    = 2,
	*363f6631af_MAX                = 3,
};

enum class E*3db2262671 : uint8_t
{
	*ccca485a6c                    = 0,
	*1d00493824                    = 1,
	*50566fcfc4                    = 2,
	*ef72819e00                    = 3,
	*3db2262671_MAX                = 4,
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
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64,
};

enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4,
};

enum class ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_ConnectedDormantPartial   = 4,
	DORM_Initial                   = 5,
	DORN_MAX                       = 6,
	ENetDormancy_MAX               = 7,
};

enum class E*d1ca6f3f7a : uint8_t
{
	*9a39d65bc7                    = 0,
	*b15f5815d9                    = 1,
	*fa84875538                    = 2,
	*33bc93e898                    = 3,
	*c957d1490e                    = 4,
	*93c76cded4                    = 5,
	*2fba0f4f9f                    = 6,
	*efa5c37bed                    = 7,
	*d1ca6f3f7a_MAX                = 8,
};

enum class E*0378fdd7e0 : uint8_t
{
	*3ef26451e7                    = 0,
	*dec8bac663                    = 1,
	*ba846ec7c3                    = 2,
	*0378fdd7e0_MAX                = 3,
};

enum class E*b1288d38ed : uint8_t
{
	*d78ed87b43                    = 0,
	*1652f27b47                    = 1,
	*358b8b009a                    = 2,
	*95ec103b95                    = 3,
	*b1288d38ed_MAX                = 4,
};

enum class ECollisionEnabled : uint8_t
{
	NoCollision                    = 0,
	QueryOnly                      = 1,
	PhysicsOnly                    = 2,
	QueryAndPhysics                = 3,
	ECollisionEnabled_MAX          = 4,
};

enum class E*ca098b0495 : uint8_t
{
	*367590a8f5                    = 0,
	*64fa88ce4d                    = 1,
	*70f1b1ecb6                    = 2,
	*56cc5f436d                    = 3,
	*4e34d4958e                    = 4,
	*c5c961d2ac                    = 5,
	*ca098b0495_MAX                = 6,
};

enum class ESleepFamily : uint8_t
{
	Normal                         = 0,
	Sensitive                      = 1,
	Custom                         = 2,
	ESleepFamily_MAX               = 3,
};

enum class E*b4f4a4c7aa : uint8_t
{
	*55264b3172                    = 0,
	*01c9884230                    = 1,
	*0396bc3290                    = 2,
	*b4f4a4c7aa_MAX                = 3,
};

enum class E*1d7dede4a0 : uint8_t
{
	*ce912731ae                    = 0,
	*e21f48fa76                    = 1,
	*9295414626                    = 2,
	*8529a6c2e7                    = 3,
	*1d7dede4a0_MAX                = 4,
};

enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3,
};

enum class E*0b87d35c7a : uint8_t
{
	*a7d9d69519                    = 0,
	*5867742a11                    = 1,
	*ec6bdb1685                    = 2,
	*0b87d35c7a_MAX                = 3,
};

enum class E*ef8eeeb32d : uint8_t
{
	*a53111c282                    = 0,
	*f603a23177                    = 1,
	*2a1f5ef92c                    = 2,
	*c27de093de                    = 3,
	*ef8eeeb32d_MAX                = 4,
};

enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33,
};

enum class ENetworkSmoothingMode : uint8_t
{
	Disabled                       = 0,
	Linear                         = 1,
	Exponential                    = 2,
	Replay                         = 3,
	RotationOnly                   = 4,
	ENetworkSmoothingMode_MAX      = 5,
};

enum class E*a030e275ae : uint8_t
{
	*8052eb2a41                    = 0,
	*4d2e81563b                    = 1,
	*9864c81f52                    = 2,
	*e1e8131bed                    = 3,
	*a030e275ae_MAX                = 4,
};

enum class E*bf2b9be251 : uint8_t
{
	*728d889ec7                    = 0,
	*cc9cca6a51                    = 1,
	*df162edc46                    = 2,
	*67e2b3f2f2                    = 3,
	*43ed01f8ae                    = 4,
	*64c298f21e                    = 5,
	*228658e4d6                    = 6,
	*bf2b9be251_MAX                = 7,
};

enum class E*e4029852f0 : uint8_t
{
	*c481caa0fa                    = 0,
	*9b91e9773c                    = 1,
	*b60c26cef9                    = 2,
	*c7ed63d0dc                    = 3,
	*c92b92888e                    = 4,
	*e4029852f0_MAX                = 5,
};

enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_MAX                = 8,
};

enum class E*54e9989042 : uint8_t
{
	*8ed5b1c1c6                    = 0,
	*343a627787                    = 1,
	*142fcd0041                    = 2,
	*fc8199408d                    = 3,
	*54e9989042_MAX                = 4,
};

enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_MAX                        = 10,
};

enum class EParticleCollisionMode : uint8_t
{
	SceneDepth                     = 0,
	DistanceField                  = 1,
	HeightBuffer                   = 2,
	EParticleCollisionMode_MAX     = 3,
};

enum class E*43d92ea96c : uint8_t
{
	*75c05150c7                    = 0,
	*386c957de1                    = 1,
	*3adb59587f                    = 2,
	*3259d2bd2c                    = 3,
	*43d92ea96c_MAX                = 4,
};

enum class EGBufferFormat : uint8_t
{
	Force8BitsPerChannel           = 0,
	Default                        = 1,
	HighPrecisionNormals           = 3,
	Force16BitsPerChannel          = 5,
	EGBufferFormat_MAX             = 6,
};

enum class E*2a4b8b846c : uint8_t
{
	*bb860732f6                    = 0,
	*cfbf964fe4                    = 1,
	*7934a06c05                    = 2,
	*a850deb41d                    = 3,
	*2a4b8b846c_MAX                = 4,
};

enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	SCS_SceneColorHDRNoAlpha       = 1,
	SCS_FinalColorLDR              = 2,
	SCS_SceneColorSceneDepth       = 3,
	SCS_SceneDepth                 = 4,
	SCS_DeviceDepth                = 5,
	SCS_Normal                     = 6,
	SCS_BaseColor                  = 7,
	SCS_BRO_SuperSampling          = 8,
	SCS_BRO_Masked                 = 9,
	SCS_LightingOnly               = 10,
	SCS_MAX                        = 11,
};

enum class ETranslucentSortPolicy : uint8_t
{
	SortByDistance                 = 0,
	SortByProjectedZ               = 1,
	SortAlongAxis                  = 2,
	ETranslucentSortPolicy_MAX     = 3,
};

enum class E*a114880675 : uint8_t
{
	*4c5d45fbe5                    = 0,
	*f90069def5                    = 1,
	*0409e83eff                    = 2,
	*a114880675_MAX                = 3,
};

enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfaceDirectional         = 5,
	TLM_SurfacePerVertexNonDirectional = 6,
	TLM_SurfacePerVertexDirectional = 7,
	TLM_MAX                        = 8,
};

enum class E*89dbd02d77 : uint8_t
{
	*1e9fb2fc63                    = 0,
	*bc71cfb4ef                    = 1,
	*1fcd83b29d                    = 2,
	*20e836fe59                    = 3,
	*89dbd02d77_MAX                = 4,
};

enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_MAX                      = 6,
};

enum class E*dcfa06b883 : uint8_t
{
	*79490014b5                    = 0,
	*19d178cc09                    = 1,
	*e323697f5c                    = 2,
	*dcfa06b883_MAX                = 3,
};

enum class E*c37cad237c : uint8_t
{
	*bb124af5fb                    = 0,
	*4f9be555ec                    = 1,
	*c1dd6090a1                    = 2,
	*384e40f757                    = 3,
	*c37cad237c_MAX                = 4,
};

enum class E*38b916353a : uint8_t
{
	*2a5e163937                    = 0,
	*9c94858c81                    = 1,
	*ad4a173be3                    = 2,
	*38b916353a_MAX                = 3,
};

enum class E*9841d6de58 : uint8_t
{
	*da5946e1b3                    = 0,
	*adcc76a329                    = 1,
	*4503ae5eaf                    = 2,
	*1676532d8e                    = 3,
	*9841d6de58_MAX                = 4,
};

enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3,
};

enum class E*d2cfe44823 : uint8_t
{
	*ea3012c656                    = 0,
	*69ceb1d665                    = 1,
	*b1dfa14da3                    = 2,
	*904c5717d2                    = 3,
	*a15a51a3a0                    = 4,
	*d7ecd3bee0                    = 5,
	*a0b0440554                    = 6,
	*5d13be91b8                    = 8,
	*9b56fe1353                    = 9,
	*e4686a4122                    = 10,
	*82b0dd1e65                    = 11,
	*571e3b5183                    = 12,
	*c146f8d226                    = 14,
	*9637b690ba                    = 15,
	*e4a1d53c2b                    = 16,
	*45589d3ca9                    = 18,
	*0797144483                    = 19,
	*c0367b9e4e                    = 20,
	*e99445866b                    = 21,
	*1547e3f6c8                    = 22,
	*5bfd541faa                    = 23,
	*0508b12fc0                    = 24,
	*2082ba02d6                    = 25,
	*ce13bb1e52                    = 26,
	*73924b8e29                    = 27,
	*a2ae376329                    = 28,
	*d2fa6e8480                    = 29,
	*5d70e9e541                    = 30,
	*19ae14b246                    = 31,
	*add4b6262f                    = 32,
	*985bc30546                    = 255,
	*d2cfe44823_MAX                = 256,
};

enum class EDemoFailure : uint8_t
{
	None                           = 0,
	PlayCommand                    = 1,
	PlayNoWorld                    = 2,
	PlayPIE                        = 3,
	PlayCreateDemoDriver           = 4,
	Connect                        = 5,
	ConnectNoWorld                 = 6,
	ConnectNoGameInstance          = 7,
	ConnectInitBase                = 8,
	ConnectStreamingReady          = 9,
	ConnectDemoNotFound            = 10,
	ConnectCorrupt                 = 11,
	ConnectSpecificCorrupt         = 12,
	ConnectPostNoWorld             = 13,
	ConnectLoadMap                 = 14,
	TickDispatchStreamer           = 15,
	TickDispatchFileAr             = 16,
	ConditionallyReadFrame         = 17,
	ConditionallyReadFrameFileAr   = 18,
	ConditionallyReadFrameStreamer = 19,
	ConditionallyReadFrameTimeChecksum = 20,
	ConditionallyReadFrameFileAr2  = 21,
	ConditionallyReadFrameExternalData = 22,
	ConditionallyReadFramePacket   = 23,
	ConditionallyProcessPacket     = 24,
	DownloadHeader                 = 25,
	DownloadHeaderDemoNotFound     = 26,
	DownloadHeaderCorrupt          = 27,
	DownloadHeaderSpecificCorrupt  = 28,
	DownloadHeaderLevelNamesAndTimes = 29,
	CheckpointReady                = 30,
	CheckpointArchiveEmpty         = 31,
	CheckpointReadFrame            = 32,
	CheckpointReadFrameFileAr      = 33,
	CheckpointReadFrameStreamer    = 34,
	CheckpointReadFrameTimeChecksum = 35,
	CheckpointReadFrameFileAr2     = 36,
	CheckpointReadFrameExternalData = 37,
	CheckpointReadFramePacket      = 38,
	CheckpointProcessPacket        = 39,
	RecCommand                     = 40,
	RecNoReplays                   = 41,
	RecNoWorld                     = 42,
	RecPIE                         = 43,
	RecAlreadyPlay                 = 44,
	RecCreateDemoDriver            = 45,
	Listen                         = 46,
	ListenInitBase                 = 47,
	ListenNoWorldSettings          = 48,
	ListenWriteHeader              = 49,
	ListenStreamingReady           = 50,
	TickFlushStreamer              = 51,
	TickFlushFileAr                = 52,
	SeamlessTravelWriteHeader      = 53,
	EDemoFailure_MAX               = 54,
};

enum class E*6fe80970cf : uint8_t
{
	*ea07537d50                    = 0,
	*4f3513b919                    = 1,
	*d3397a6cc8                    = 2,
	*e8f0209898                    = 3,
	*6fe80970cf_MAX                = 4,
};

enum class ENetworkLagState : uint8_t
{
	NotLagging                     = 0,
	Lagging                        = 1,
	ENetworkLagState_MAX           = 2,
};

enum class EMouseLockMode : uint8_t
{
	DoNotLock                      = 0,
	LockOnCapture                  = 1,
	LockAlways                     = 2,
	EMouseLockMode_MAX             = 3,
};

enum class EMouseCaptureMode : uint8_t
{
	NoCapture                      = 0,
	CapturePermanently             = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown         = 3,
	CaptureDuringRightMouseDown    = 4,
	EMouseCaptureMode_MAX          = 5,
};

enum class ENodeEnabledState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	DevelopmentOnly                = 2,
	ENodeEnabledState_MAX          = 3,
};

enum class ENodeAdvancedPins : uint8_t
{
	NoPins                         = 0,
	Shown                          = 1,
	Hidden                         = 2,
	ENodeAdvancedPins_MAX          = 3,
};

enum class ENodeTitleType : uint8_t
{
	FullTitle                      = 0,
	ListView                       = 1,
	EditableTitle                  = 2,
	MenuTitle                      = 3,
	MAX_TitleTypes                 = 4,
	ENodeTitleType_MAX             = 5,
};

enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2,
};

enum class E*4ffd780cf4 : uint8_t
{
	*5929aec960                    = 0,
	*fa11207255                    = 1,
	*1ae36765e5                    = 2,
	*4ffd780cf4_MAX                = 3,
};

enum class E*68d9a22928 : uint8_t
{
	*42767d2840                    = 0,
	*d6c2692554                    = 1,
	*acc6a7c5ea                    = 2,
	*34b07e1edc                    = 3,
	*4f97fe3908                    = 4,
	*ba1a152a5d                    = 5,
	*68d9a22928_MAX                = 6,
};

enum class E*f69e5176b7 : uint8_t
{
	*36a13c8638                    = 0,
	*10c60935bc                    = 1,
	*b97a1fb215                    = 2,
	*5401b185db                    = 3,
	*f69e5176b7_MAX                = 4,
};

enum class ESimplygonMaterialChannel : uint8_t
{
	SG_MATERIAL_CHANNEL_AMBIENT    = 0,
	SG_MATERIAL_CHANNEL_DIFFUSE    = 1,
	SG_MATERIAL_CHANNEL_SPECULAR   = 2,
	SG_MATERIAL_CHANNEL_OPACITY    = 3,
	SG_MATERIAL_CHANNEL_EMISSIVE   = 4,
	SG_MATERIAL_CHANNEL_NORMALS    = 5,
	SG_MATERIAL_CHANNEL_DISPLACEMENT = 6,
	SG_MATERIAL_CHANNEL_BASECOLOR  = 7,
	SG_MATERIAL_CHANNEL_ROUGHNESS  = 8,
	SG_MATERIAL_CHANNEL_METALLIC   = 9,
	SG_MATERIAL_CHANNEL_AO         = 10,
	SG_MATERIAL_CHANNEL_SUBSURFACE = 11,
	SG_MATERIAL_CHANNEL_OPACITYMASK = 12,
	SG_MATERIAL_CHANNEL_MAX        = 13,
};

enum class ESimplygonTextureResolution : uint8_t
{
	TextureResolution              = 0,
	TextureResolution              = 1,
	TextureResolution              = 2,
	TextureResolution              = 3,
	TextureResolution              = 4,
	TextureResolution              = 5,
	TextureResolution              = 6,
	TextureResolution              = 7,
	TextureResolution_MAX          = 8,
};

enum class ESimplygonColorChannels : uint8_t
{
	RGBA                           = 0,
	RGB                            = 1,
	L                              = 2,
	ESimplygonColorChannels_MAX    = 3,
};

enum class ESimplygonTextureSamplingQuality : uint8_t
{
	Poor                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	ESimplygonTextureSamplingQuality_MAX = 4,
};

enum class ESimplygonCasterType : uint8_t
{
	None                           = 0,
	Color                          = 1,
	Normals                        = 2,
	Opacity                        = 3,
	ESimplygonCasterType_MAX       = 4,
};

enum class ESimplygonTextureStrech : uint8_t
{
	None                           = 0,
	VerySmall                      = 1,
	Small                          = 2,
	Medium                         = 3,
	Large                          = 4,
	VeryLarge                      = 5,
	ESimplygonTextureStrech_MAX    = 6,
};

enum class EMaterialLODType : uint8_t
{
	Off                            = 0,
	BakeTexture                    = 1,
	BakeVertexColor                = 2,
	Replace                        = 3,
	EMaterialLODType_MAX           = 4,
};

enum class ESimplygonLODType : uint8_t
{
	Reduction                      = 0,
	Remeshing                      = 1,
	ESimplygonLODType_MAX          = 2,
};

enum class EOptimizationMetric : uint8_t
{
	TrianglePercentage             = 0,
	OnScreenSize                   = 1,
	MaxDeviation                   = 2,
	EOptimizationMetric_MAX        = 3,
};

enum class EMaterialProxySmaplingQuality : uint8_t
{
	Poor                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EMaterialProxySmaplingQuality_MAX = 4,
};

enum class EUVStrech : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	VeryLarge                      = 3,
	EUVStrech_MAX                  = 4,
};

enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2,
};

enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX          = 4,
};

enum class E*d234c56074 : uint8_t
{
	*a68368a9a4                    = 0,
	*7882d73e08                    = 1,
	*9664dc1890                    = 2,
	*d234c56074_MAX                = 3,
};

enum class EMeshLODSelectionType : uint8_t
{
	AllLODs                        = 0,
	SpecificLOD                    = 1,
	CalculateLOD                   = 2,
	LowestDetailLOD                = 3,
	EMeshLODSelectionType_MAX      = 4,
};

enum class E*f1913b959e : uint8_t
{
	*93272aca92                    = 0,
	*0a1e0e91d3                    = 1,
	*42ffaf0772                    = 2,
	*ccf82a5a89                    = 3,
	*f1913b959e_MAX                = 4,
};

enum class ELandscapeCullingPrecision : uint8_t
{
	High                           = 0,
	Medium                         = 1,
	Low                            = 2,
	ELandscapeCullingPrecision_MAX = 3,
};

enum class EPhysXAggregationMode : uint8_t
{
	NoCollision                    = 0,
	BlockAllWithComplexAsSimple    = 1,
	EPhysXAggregationMode_MAX      = 2,
};

enum class EChartAggregationMode : uint8_t
{
	TextureSize                    = 0,
	SurfaceArea                    = 1,
	PixelDensity                   = 2,
	UVSize                         = 4,
	EChartAggregationMode_MAX      = 5,
};

enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	Triangles                      = 0,
	Vertices                       = 1,
	Any                            = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3,
};

enum class EImposterCaptureType : uint8_t
{
	No                             = 0,
	Quarter                        = 1,
	Half                           = 2,
	Full                           = 3,
	EImposterCaptureType_MAX       = 4,
};

enum class EMeshFeatureImportance : uint8_t
{
	Off                            = 0,
	Lowest                         = 1,
	Low                            = 2,
	Normal                         = 3,
	High                           = 4,
	Highest                        = 5,
	EMeshFeatureImportance_MAX     = 6,
};

enum class EAutoBenchPathType : uint8_t
{
	SnakeCurve                     = 0,
	HilbertCurve                   = 1,
	EAutoBenchPathType_MAX         = 2,
};

enum class EAutoBenchViewMode : uint8_t
{
	Default                        = 0,
	Top                            = 1,
	EAutoBenchViewMode_MAX         = 2,
};

enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor               = 0,
	MP_Opacity                     = 1,
	MP_OpacityMask                 = 2,
	MP_DiffuseColor                = 3,
	MP_SpecularColor               = 4,
	MP_BaseColor                   = 5,
	MP_Metallic                    = 6,
	MP_Specular                    = 7,
	MP_Roughness                   = 8,
	MP_Normal                      = 9,
	MP_WorldPositionOffset         = 10,
	MP_WorldDisplacement           = 11,
	MP_TessellationMultiplier      = 12,
	MP_SubsurfaceColor             = 13,
	MP_SubsurfaceProfile           = 14,
	MP_CustomData0                 = 15,
	MP_CustomData1                 = 16,
	MP_AmbientOcclusion            = 17,
	MP_Refraction                  = 18,
	MP_CustomizedUVs0              = 19,
	MP_CustomizedUVs1              = 20,
	MP_CustomizedUVs2              = 21,
	MP_CustomizedUVs3              = 22,
	MP_CustomizedUVs4              = 23,
	MP_CustomizedUVs5              = 24,
	MP_CustomizedUVs6              = 25,
	MP_CustomizedUVs7              = 26,
	MP_PixelDepthOffset            = 27,
	MP_Temperature                 = 28,
	MP_TemperatureAlpha            = 29,
	MP_MaterialAttributes          = 30,
	MP_CustomOutput                = 31,
	MP_MAX                         = 32,
};

enum class EDOFMode : uint8_t
{
	Default                        = 0,
	SixDOF                         = 1,
	YZPlane                        = 2,
	XZPlane                        = 3,
	XYPlane                        = 4,
	CustomPlane                    = 5,
	None                           = 6,
	EDOFMode_MAX                   = 7,
};

enum class ENavigationQueryResult : uint8_t
{
	Invalid                        = 0,
	Error                          = 1,
	Fail                           = 2,
	Success                        = 3,
	ENavigationQueryResult_MAX     = 4,
};

enum class ENavDataGatheringModeConfig : uint8_t
{
	Invalid                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringModeConfig_MAX = 3,
};

enum class ENavDataGatheringMode : uint8_t
{
	Default                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringMode_MAX      = 3,
};

enum class ENavigationOptionFlag : uint8_t
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3,
	ENavigationOptionFlag_MAX      = 4,
};

enum class E*05e45b3179 : uint8_t
{
	*3098dc386a                    = 0,
	*ff86df04c7                    = 1,
	*4eeae52f61                    = 2,
	*1e3c9096a8                    = 3,
	*704e38a98b                    = 4,
	*a0d677381b                    = 5,
	*207133e377                    = 6,
	*8ff729c1c9                    = 7,
	*1ba3a267f7                    = 8,
	*c6ab853c82                    = 9,
	*d7c9f1205c                    = 10,
	*05e45b3179_MAX                = 11,
};

enum class EHasCustomNavigableGeometry : uint8_t
{
	No                             = 0,
	Yes                            = 1,
	EvenIfNotCollidable            = 2,
	DontExport                     = 3,
	EHasCustomNavigableGeometry_MAX = 4,
};

enum class E*ed48500c0c : uint8_t
{
	*a2e898bd33                    = 0,
	*5baeba37bd                    = 1,
	*ea33bb7f9b                    = 2,
	*a1c9807260                    = 3,
	*ed48500c0c_MAX                = 4,
};

enum class EStaticMeshLODType : uint8_t
{
	Reduction                      = 0,
	Proxy                          = 1,
	EStaticMeshLODType_MAX         = 2,
};

enum class E*003e2e72cb : uint8_t
{
	*b1066bd443                    = 0,
	*c7a6a2b2b2                    = 1,
	*782ab3480b                    = 2,
	*003e2e72cb_MAX                = 3,
};

enum class E*6929843f02 : uint8_t
{
	*92d82469b1                    = 0,
	*3a8f88fb30                    = 1,
	*7fb68ba6c0                    = 2,
	*18c5d01d16                    = 3,
	*c27083de54                    = 4,
	*d4b4dbdafc                    = 5,
	*cc4f8e0266                    = 6,
	*67a998ed0d                    = 7,
	*6929843f02_MAX                = 8,
};

enum class E*689a5ab08f : uint8_t
{
	*21709d5e50                    = 0,
	*d2457a6af8                    = 1,
	*05bdaa131e                    = 2,
	*93f8ece406                    = 3,
	*e7e528a9b5                    = 4,
	*7be564f126                    = 5,
	*689a5ab08f_MAX                = 6,
};

enum class E*d12a1a73ec : uint8_t
{
	*f443aad2f4                    = 0,
	*b86d0e5d00                    = 1,
	*6bea88d7fb                    = 2,
	*7362ebe674                    = 3,
	*d12a1a73ec_MAX                = 4,
};

enum class E*1bf3147080 : uint8_t
{
	*2354b82154                    = 0,
	*018e9418c0                    = 1,
	*c8d1ec2ab5                    = 2,
	*a9d2c1834f                    = 3,
	*3bcdfacd90                    = 4,
	*76d3805a34                    = 5,
	*9ca4c0247d                    = 6,
	*1bf3147080_MAX                = 7,
};

enum class EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23,
};

enum class E*90700fe5de : uint8_t
{
	*e7d2ac552c                    = 0,
	*c10c26d06b                    = 1,
	*39a13e04de                    = 2,
	*fc03e2bb27                    = 3,
	*bdb292e343                    = 4,
	*22f5f5e54e                    = 5,
	*90700fe5de_MAX                = 6,
};

enum class E*b557c0b11b : uint8_t
{
	*b9a2e4f186                    = 0,
	*bb002266b4                    = 1,
	*8dade9b0ea                    = 2,
	*a67b56af41                    = 3,
	*6562c079c1                    = 4,
	*b557c0b11b_MAX                = 5,
};

enum class E*c87dccccb1 : uint8_t
{
	*8185e57ae0                    = 0,
	*63f2750df8                    = 1,
	*d458350517                    = 2,
	*feb0f8e655                    = 3,
	*edb64166c1                    = 4,
	*c87dccccb1_MAX                = 5,
};

enum class EHBAOBlurRadius : uint8_t
{
	AOBR_BlurRadius0               = 0,
	AOBR_BlurRadius2               = 1,
	AOBR_BlurRadius4               = 2,
	AOBR_MAX                       = 3,
};

enum class EBloomMethod : uint8_t
{
	BM_SOG                         = 0,
	BM_FFT                         = 1,
	BM_MAX                         = 2,
};

enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_MAX                        = 2,
};

enum class EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MSAA                       = 3,
	AAM_MAX                        = 4,
};

enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3,
};

enum class ECameraAnimPlaySpace : uint8_t
{
	CameraLocal                    = 0,
	World                          = 1,
	UserDefined                    = 2,
	ECameraAnimPlaySpace_MAX       = 3,
};

enum class ECameraProjectionMode : uint8_t
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ECameraProjectionMode_MAX      = 2,
};

enum class E*6ac28dbfeb : uint8_t
{
	*310633e279                    = 0,
	*3edc95c0f1                    = 1,
	*4ef41dbdf9                    = 2,
	*6ac28dbfeb_MAX                = 3,
};

enum class E*15ba2db3f0 : uint8_t
{
	*0e37a922a6                    = 0,
	*f1e25c1bad                    = 1,
	*848429f12a                    = 2,
	*15ba2db3f0_MAX                = 3,
};

enum class EDynamicForceFeedbackAction : uint8_t
{
	Start                          = 0,
	Update                         = 1,
	Stop                           = 2,
	EDynamicForceFeedbackAction_MAX = 3,
};

enum class E*3df3824186 : uint8_t
{
	*5ed6d6d580                    = 0,
	*4143ca56b8                    = 1,
	*7c69d993c4                    = 2,
	*62a25f3453                    = 3,
	*3df3824186_MAX                = 4,
};

enum class E*9d4fb532b8 : uint8_t
{
	*e7257163dc                    = 0,
	*22422e0b72                    = 1,
	*6a040b376c                    = 2,
	*6ff5521273                    = 3,
	*9d4fb532b8_MAX                = 4,
};

enum class E*d65da7cd28 : uint8_t
{
	*b57811e98a                    = 0,
	*c4cb7e186f                    = 1,
	*9739eec45b                    = 2,
	*68c1d47108                    = 3,
	*04d42eaade                    = 4,
	*d65da7cd28_MAX                = 5,
};

enum class EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_MAX                         = 6,
};

enum class ERuntimeGenerationType : uint8_t
{
	Static                         = 0,
	DynamicModifiersOnly           = 1,
	Dynamic                        = 2,
	LegacyGeneration               = 3,
	ERuntimeGenerationType_MAX     = 4,
};

enum class ERecastPartitioning : uint8_t
{
	Monotone                       = 0,
	Watershed                      = 1,
	ChunkyMonotone                 = 2,
	ERecastPartitioning_MAX        = 3,
};

enum class E*436ef9b55a : uint8_t
{
	*bf5b8456ec                    = 0,
	*ed674d6c4f                    = 1,
	*86e2153e3b                    = 2,
	*30d4c35829                    = 3,
	*436ef9b55a_MAX                = 4,
};

enum class ENavLinkDirection : uint8_t
{
	BothWays                       = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ENavLinkDirection_MAX          = 3,
};

enum class E*a1e119049d : uint8_t
{
	*6145579b58                    = 0,
	*c36af675dd                    = 1,
	*07c030f743                    = 2,
	*06f1b7f1f1                    = 3,
	*a1e119049d_MAX                = 4,
};

enum class E*8c11561093 : uint8_t
{
	*459e66a8a4                    = 0,
	*6f7af9fc99                    = 1,
	*b5f83b7246                    = 2,
	*350824c702                    = 3,
	*8c11561093_MAX                = 4,
};

enum class E*4cd310206b : uint8_t
{
	*da8473cd62                    = 0,
	*0f8fb73007                    = 1,
	*c5490a9dab                    = 2,
	*4cd310206b_MAX                = 3,
};

enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6,
};

enum class E*7a718bde57 : uint8_t
{
	*171edf81db                    = 0,
	*ac76e94940                    = 1,
	*4ae1e33436                    = 2,
	*88a4d6c170                    = 3,
	*7a718bde57_MAX                = 4,
};

enum class E*464132be11 : uint8_t
{
	*5c0f957869                    = 0,
	*b963dceae8                    = 1,
	*7fd22bd4a9                    = 2,
	*5ad3e18460                    = 3,
	*0de58e7d5d                    = 4,
	*89eb17ee7e                    = 5,
	*be18900f08                    = 6,
	*8f8f17c55e                    = 7,
	*4f1de1b7ff                    = 8,
	*464132be11_MAX                = 9,
};

enum class E*992b1ef11b : uint8_t
{
	*96df8f136b                    = 0,
	*5343656a73                    = 1,
	*571de103ce                    = 2,
	*b37ae148ea                    = 3,
	*992b1ef11b_MAX                = 4,
};

enum class EAxisOption : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	X_Neg                          = 3,
	Y_Neg                          = 4,
	Z_Neg                          = 5,
	Custom                         = 6,
	EAxisOption_MAX                = 7,
};

enum class EAnimInterpolationType : uint8_t
{
	Linear                         = 0,
	Step                           = 1,
	EAnimInterpolationType_MAX     = 2,
};

enum class ECurveBlendOption : uint8_t
{
	MaxWeight                      = 0,
	NormalizeByWeight              = 1,
	BlendByWeight                  = 2,
	ECurveBlendOption_MAX          = 3,
};

enum class EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3,
};

enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3,
};

enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4,
};

enum class EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3,
};

enum class ESkeletalMeshLODType : uint8_t
{
	Reduction                      = 0,
	Proxy                          = 1,
	ESkeletalMeshLODType_MAX       = 2,
};

enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_ScreenSize                = 2,
	SMOT_MAX                       = 3,
};

enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6,
};

enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles            = 0,
	SMTC_NumOfVerts                = 1,
	SMTC_TriangleOrVert            = 2,
	SMTC_AbsNumOfTriangles         = 3,
	SMTC_AbsNumOfVerts             = 4,
	SMTC_AbsTriangleOrVert         = 5,
	SMTC_MAX                       = 6,
};

enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7,
};

enum class E*f844e8a916 : uint8_t
{
	*856295d5d8                    = 0,
	*f9dd22b726                    = 1,
	*f34d19c0e5                    = 2,
	*61153dd24c                    = 3,
	*296cc5b944                    = 4,
	*f844e8a916_MAX                = 5,
};

enum class E*3d5acad3bd : uint8_t
{
	*ade1365c17                    = 0,
	*6e95d20401                    = 1,
	*8d487ca39b                    = 2,
	*85da96bff9                    = 3,
	*073fa8baa5                    = 4,
	*3d5acad3bd_MAX                = 5,
};

enum class EAnimGroupRole : uint8_t
{
	CanBeLeader                    = 0,
	AlwaysFollower                 = 1,
	AlwaysLeader                   = 2,
	TransitionLeader               = 3,
	EAnimGroupRole_MAX             = 4,
};

enum class E*06949141d6 : uint8_t
{
	*fdc6a7f4f5                    = 0,
	*08b20fd458                    = 1,
	*5a035db9dd                    = 2,
	*6e8ed23f19                    = 3,
	*06949141d6_MAX                = 4,
};

enum class E*660e003ede : uint8_t
{
	*a16a90916b                    = 1,
	*79e465883b                    = 2,
	*2b4c6d7335                    = 4,
	*bdf09738ca                    = 5,
	*660e003ede_MAX                = 6,
};

enum class ERootMotionSourceStatusFlags : uint8_t
{
	Prepared                       = 1,
	Finished                       = 2,
	MarkedForRemoval               = 4,
	ERootMotionSourceStatusFlags_MAX = 5,
};

enum class ERootMotionAccumulateMode : uint8_t
{
	Override                       = 0,
	Additive                       = 1,
	ERootMotionAccumulateMode_MAX  = 2,
};

enum class E*9033da1a73 : uint8_t
{
	*5da7d17a87                    = 0,
	*5dabedd4bb                    = 1,
	*126cde393a                    = 2,
	*c831cbdbe4                    = 3,
	*9033da1a73_MAX                = 4,
};

enum class ESplineDecalActorSelector : uint8_t
{
	Use                            = 0,
	Use                            = 1,
	Use                            = 2,
	Use                            = 3,
	None                           = 4,
	ESplineDecalActorSelector_MAX  = 5,
};

enum class EBoneTranslationRetargetingMode : uint8_t
{
	Animation                      = 0,
	Skeleton                       = 1,
	AnimationScaled                = 2,
	AnimationRelative              = 3,
	EBoneTranslationRetargetingMode_MAX = 4,
};

enum class E*447cfc9652 : uint8_t
{
	*a012c3e6b7                    = 0,
	*72150fe17f                    = 1,
	*72c6217a6c                    = 2,
	*a0585325a8                    = 3,
	*447cfc9652_MAX                = 4,
};

enum class E*090eb62d2b : uint8_t
{
	*6083b2dc9a                    = 1,
	*2bfb6ad4a3                    = 2,
	*1d78af220e                    = 4,
	*46b081740e                    = 8,
	*31cf489d25                    = 16,
	*d5cd1ac431                    = 32,
	*1b290d6005                    = 64,
	*a3c6fa589a                    = 65,
	*090eb62d2b_MAX                = 66,
};

enum class E*5d8a312258 : uint8_t
{
	*4e8deed36c                    = 0,
	*0b6a6647d1                    = 1,
	*9e70a3a3d4                    = 2,
	*faad324f33                    = 3,
	*5d8a312258_MAX                = 4,
};

enum class E*e0ae86f87f : uint8_t
{
	*226d9e5fad                    = 0,
	*de0a141f61                    = 1,
	*4fb44d974c                    = 2,
	*634ef771e8                    = 3,
	*e0ae86f87f_MAX                = 4,
};

enum class EAngularDriveMode : uint8_t
{
	SLERP                          = 0,
	TwistAndSwing                  = 1,
	EAngularDriveMode_MAX          = 2,
};

enum class EAttenuationShape : uint8_t
{
	Sphere                         = 0,
	Capsule                        = 1,
	Box                            = 2,
	Cone                           = 3,
	EAttenuationShape_MAX          = 4,
};

enum class EAttenuationDistanceModel : uint8_t
{
	Linear                         = 0,
	Logarithmic                    = 1,
	Inverse                        = 2,
	LogReverse                     = 3,
	NaturalSound                   = 4,
	Custom                         = 5,
	EAttenuationDistanceModel_MAX  = 6,
};

enum class E*05fc84afee : uint8_t
{
	*280d473b0a                    = 0,
	*068c320629                    = 1,
	*bcc79b9380                    = 2,
	*05fc84afee_MAX                = 3,
};

enum class E*e011c2a069 : uint8_t
{
	*ec05d44b10                    = 0,
	*b5dca8713a                    = 1,
	*04e36bab25                    = 2,
	*7f7f3a6f87                    = 3,
	*fcacafb568                    = 4,
	*e011c2a069_MAX                = 5,
};

enum class EPreviewIndexType : uint8_t
{
	RandomSeed                     = 0,
	VariantIndex                   = 1,
	PermutationIndex               = 2,
	EPreviewIndexType_MAX          = 3,
};

enum class ESpawnPointRollType : uint8_t
{
	Probability                    = 0,
	LocalRatio                     = 1,
	GlobalRatio                    = 2,
	ESpawnPointRollType_MAX        = 3,
};

enum class E*a980f75b24 : uint8_t
{
	*3d612404d8                    = 0,
	*0b3422afe5                    = 1,
	*1d8f472b5b                    = 2,
	*a980f75b24_MAX                = 3,
};

enum class EPrimaryAssetCookRule : uint8_t
{
	Unknown                        = 0,
	NeverCook                      = 1,
	DevelopmentCook                = 2,
	AlwaysCook                     = 3,
	EPrimaryAssetCookRule_MAX      = 4,
};

enum class EBoneSpaces : uint8_t
{
	WorldSpace                     = 0,
	ComponentSpace                 = 1,
	EBoneSpaces_MAX                = 2,
};

enum class EMeshComponentUpdateFlag : uint8_t
{
	AlwaysTickPoseAndRefreshBones  = 0,
	AlwaysTickPose                 = 1,
	OnlyTickPoseWhenRendered       = 2,
	EMeshComponentUpdateFlag_MAX   = 3,
};

enum class E*3bdd4d76a4 : uint8_t
{
	*4d2df93619                    = 0,
	*2ad3bbe8c7                    = 1,
	*8ebbdb8e49                    = 2,
	*3bdd4d76a4_MAX                = 3,
};

enum class E*d55b4fe647 : uint8_t
{
	*5347f6ca15                    = 0,
	*79e51ab440                    = 1,
	*59854c2dfa                    = 2,
	*d55b4fe647_MAX                = 3,
};

enum class E*182f2cb327 : uint8_t
{
	*d0349147ec                    = 0,
	*6a7c9e1523                    = 1,
	*7ebd3a54a3                    = 2,
	*c52ffee7f0                    = 3,
	*182f2cb327_MAX                = 4,
};

enum class E*d7c9b85306 : uint8_t
{
	*e1b4268571                    = 0,
	*b96e681813                    = 1,
	*583d5ba2b0                    = 2,
	*d7c9b85306_MAX                = 3,
};

enum class EAnimationMode : uint8_t
{
	AnimationBlueprint             = 0,
	AnimationSingleNode            = 1,
	AnimationCustomMode            = 2,
	EAnimationMode_MAX             = 3,
};

enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	SkipSimulatingBones            = 0,
	SkipAllBones                   = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2,
};

enum class ESplineMeshAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESplineMeshAxis_MAX            = 3,
};

enum class ETextureDownscaleOptions : uint8_t
{
	Default                        = 0,
	Unfiltered                     = 1,
	SimpleAverage                  = 2,
	Sharpen0                       = 3,
	Sharpen1                       = 4,
	Sharpen2                       = 5,
	Sharpen3                       = 6,
	Sharpen4                       = 7,
	Sharpen5                       = 8,
	Sharpen6                       = 9,
	Sharpen7                       = 10,
	Sharpen8                       = 11,
	Sharpen9                       = 12,
	Sharpen10                      = 13,
	ETextureDownscaleOptions_MAX   = 14,
};

enum class ETextureSamplerFilter : uint8_t
{
	Point                          = 0,
	Bilinear                       = 1,
	Trilinear                      = 2,
	AnisotropicPoint               = 3,
	AnisotropicLinear              = 4,
	ETextureSamplerFilter_MAX      = 5,
};

enum class ETexturePowerOfTwoSetting : uint8_t
{
	None                           = 0,
	PadToPowerOfTwo                = 1,
	PadToSquarePowerOfTwo          = 2,
	ETexturePowerOfTwoSetting_MAX  = 3,
};

enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20,
};

enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Landscape         = 12,
	TEXTUREGROUP_LandscapeNormalMap = 13,
	TEXTUREGROUP_LandscapeSpecular = 14,
	TEXTUREGROUP_Cinematic         = 15,
	TEXTUREGROUP_Effects           = 16,
	TEXTUREGROUP_EffectsNotFiltered = 17,
	TEXTUREGROUP_Skybox            = 18,
	TEXTUREGROUP_UI                = 19,
	TEXTUREGROUP_Lightmap          = 20,
	TEXTUREGROUP_RenderTarget      = 21,
	TEXTUREGROUP_MobileFlattened   = 22,
	TEXTUREGROUP_ProcBuilding_Face = 23,
	TEXTUREGROUP_ProcBuilding_LightMap = 24,
	TEXTUREGROUP_Shadowmap         = 25,
	TEXTUREGROUP_ColorLookupTable  = 26,
	TEXTUREGROUP_Terrain_Heightmap = 27,
	TEXTUREGROUP_Terrain_Weightmap = 28,
	TEXTUREGROUP_Bokeh             = 29,
	TEXTUREGROUP_IESLightProfile   = 30,
	TEXTUREGROUP_Pixels2D          = 31,
	TEXTUREGROUP_HierarchicalLOD   = 32,
	TEXTUREGROUP_MAX               = 33,
};

enum class E*f3263f8c4a : uint8_t
{
	*3c251b4231                    = 0,
	*dd76010975                    = 1,
	*97d0afdce7                    = 2,
	*2c922f202b                    = 3,
	*adeb93364c                    = 4,
	*889de6f71f                    = 5,
	*c1956c04e6                    = 6,
	*69c3bc4e07                    = 7,
	*e3e26d7493                    = 8,
	*2409d32d78                    = 9,
	*a005dca094                    = 10,
	*f3263f8c4a_MAX                = 11,
};

enum class E*4b27ebddb6 : uint8_t
{
	*b2802dc69c                    = 0,
	*f7edff89e5                    = 1,
	*859eb54cc4                    = 2,
	*5ff1a3967f                    = 3,
	*4b27ebddb6_MAX                = 4,
};

enum class E*081c57740e : uint8_t
{
	*2cd635c861                    = 0,
	*49a9ed500c                    = 1,
	*f11a8720c5                    = 2,
	*290ee19f41                    = 3,
	*081c57740e_MAX                = 4,
};

enum class E*3ba5ea4201 : uint8_t
{
	*ae8ddcbc2c                    = 0,
	*f42d4b2818                    = 1,
	*6576e786e2                    = 2,
	*e39234b77c                    = 3,
	*5916a0d8d3                    = 4,
	*be5d5961ef                    = 5,
	*3ba5ea4201_MAX                = 6,
};

enum class E*557e4e7ff4 : uint8_t
{
	*3103f45bb1                    = 0,
	*4b8e61974b                    = 1,
	*ffcc740c4f                    = 2,
	*16a7cfe83b                    = 3,
	*557e4e7ff4_MAX                = 4,
};

enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4,
};

enum class ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_MAX                         = 12,
};

enum class ESplineCoordinateSpace : uint8_t
{
	Local                          = 0,
	World                          = 1,
	ESplineCoordinateSpace_MAX     = 2,
};

enum class ESplinePointType : uint8_t
{
	Linear                         = 0,
	Curve                          = 1,
	Constant                       = 2,
	CurveClamped                   = 3,
	CurveCustomTangent             = 4,
	ESplinePointType_MAX           = 5,
};

enum class E*6cdcd791e6 : uint8_t
{
	*b659dd8247                    = 0,
	*de504edc1f                    = 1,
	*f7f9f6601c                    = 2,
	*a8c05373b7                    = 3,
	*f473e40c09                    = 4,
	*6cdcd791e6_MAX                = 5,
};

enum class E*bc830045de : uint8_t
{
	*330ceae73a                    = 0,
	*c1d81eb928                    = 1,
	*227527653b                    = 2,
	*e74a38459a                    = 3,
	*bc830045de_MAX                = 4,
};

enum class E*c1f510b22b : uint8_t
{
	*4f11b55947                    = 0,
	*1fd1a5cf40                    = 1,
	*0d4735ef70                    = 2,
	*c1f510b22b_MAX                = 3,
};

enum class E*c5c07d8824 : uint8_t
{
	*ee130d8d77                    = 0,
	*c752f5f58c                    = 1,
	*d1f0d89b35                    = 2,
	*f812a8afba                    = 3,
	*c5c07d8824_MAX                = 4,
};

enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3,
};

enum class EWindSourceType : uint8_t
{
	Directional                    = 0,
	Point                          = 1,
	EWindSourceType_MAX            = 2,
};

enum class ETimelineDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	ETimelineDirection_MAX         = 2,
};

enum class E*0305c763fc : uint8_t
{
	*c87d20cd72                    = 0,
	*ea8399f7d1                    = 1,
	*5cf5f3cd12                    = 2,
	*0305c763fc_MAX                = 3,
};

enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3,
};

enum class ENotifyTriggerMode : uint8_t
{
	AllAnimations                  = 0,
	HighestWeightedAnimation       = 1,
	None                           = 2,
	ENotifyTriggerMode_MAX         = 3,
};

enum class E*64ecd02756 : uint8_t
{
	*5df4207d1a                    = 0,
	*3493f7fa2b                    = 1,
	*d871b917e4                    = 2,
	*3583f9ef53                    = 3,
	*64ecd02756_MAX                = 4,
};

enum class E*ebe58b66b2 : uint8_t
{
	*1747ef0634                    = 0,
	*c311cf078d                    = 1,
	*5a0794590b                    = 2,
	*ebe58b66b2_MAX                = 3,
};

enum class E*24cf9a1f57 : uint8_t
{
	*1954da4fb5                    = 0,
	*6783d88b06                    = 1,
	*c30ff346bc                    = 2,
	*24cf9a1f57_MAX                = 3,
};

enum class EMontagePlayReturnType : uint8_t
{
	MontageLength                  = 0,
	Duration                       = 1,
	EMontagePlayReturnType_MAX     = 2,
};

enum class E*5af66eb9d7 : uint8_t
{
	*5ed6389080                    = 0,
	*ac66dbc390                    = 1,
	*21e470c176                    = 2,
	*27c1b10f3d                    = 3,
	*d7a98b606d                    = 4,
	*5af66eb9d7_MAX                = 5,
};

enum class EBlueprintNativizationFlag : uint8_t
{
	Disabled                       = 0,
	Dependency                     = 1,
	ExplicitlyEnabled              = 2,
	EBlueprintNativizationFlag_MAX = 3,
};

enum class EBlueprintCompileMode : uint8_t
{
	Default                        = 0,
	Development                    = 1,
	FinalRelease                   = 2,
	EBlueprintCompileMode_MAX      = 3,
};

enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6,
};

enum class E*9db75c663f : uint8_t
{
	*de965820d5                    = 0,
	*7a2587965f                    = 1,
	*5a5497390e                    = 2,
	*94217986da                    = 3,
	*962d0e606b                    = 4,
	*993a508920                    = 5,
	*8f46b19456                    = 6,
	*9db75c663f_MAX                = 7,
};

enum class EEvaluateCurveTableResult : uint8_t
{
	RowFound                       = 0,
	RowNotFound                    = 1,
	EEvaluateCurveTableResult_MAX  = 2,
};

enum class EGrammaticalNumber : uint8_t
{
	Singular                       = 0,
	Plural                         = 1,
	EGrammaticalNumber_MAX         = 2,
};

enum class EGrammaticalGender : uint8_t
{
	Neuter                         = 0,
	Masculine                      = 1,
	Feminine                       = 2,
	Mixed                          = 3,
	EGrammaticalGender_MAX         = 4,
};

enum class ESuggestProjVelocityTraceOption : uint8_t
{
	DoNotTrace                     = 0,
	TraceFullPath                  = 1,
	OnlyTraceWhileAscending        = 2,
	ESuggestProjVelocityTraceOption_MAX = 3,
};

enum class EHMDWornState : uint8_t
{
	Unknown                        = 0,
	Worn                           = 1,
	NotWorn                        = 2,
	EHMDWornState_MAX              = 3,
};

enum class EHMDTrackingOrigin : uint8_t
{
	Floor                          = 0,
	Eye                            = 1,
	EHMDTrackingOrigin_MAX         = 2,
};

enum class EOrientPositionSelector : uint8_t
{
	Orientation                    = 0,
	Position                       = 1,
	OrientationAndPosition         = 2,
	EOrientPositionSelector_MAX    = 3,
};

enum class E*1244969d5e : uint8_t
{
	*65112dca21                    = 0,
	*988fcd3fab                    = 1,
	*d31d1d882d                    = 2,
	*9e21ea8718                    = 3,
	*1244969d5e_MAX                = 4,
};

enum class EEasingFunc : uint8_t
{
	Linear                         = 0,
	Step                           = 1,
	SinusoidalIn                   = 2,
	SinusoidalOut                  = 3,
	SinusoidalInOut                = 4,
	EaseIn                         = 5,
	EaseOut                        = 6,
	EaseInOut                      = 7,
	ExpoIn                         = 8,
	ExpoOut                        = 9,
	ExpoInOut                      = 10,
	CircularIn                     = 11,
	CircularOut                    = 12,
	CircularInOut                  = 13,
	EEasingFunc_MAX                = 14,
};

enum class ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7,
};

enum class EFNavigationSystemRunMode : uint8_t
{
	InvalidMode                    = 0,
	GameMode                       = 1,
	EditorMode                     = 2,
	SimulationMode                 = 3,
	PIEMode                        = 4,
	FNavigationSystemRunMode_MAX   = 5,
};

enum class E*a7a2bbc1a7 : uint8_t
{
	*4a0cb89fb9                    = 0,
	*694e78b403                    = 1,
	*cdd73db699                    = 2,
	*a7a2bbc1a7_MAX                = 3,
};

enum class EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3,
};

enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAndComplex        = 1,
	CTF_UseSimpleAsComplex         = 2,
	CTF_UseComplexAsSimple         = 3,
	CTF_MAX                        = 4,
};

enum class E*79b51e314c : uint8_t
{
	*8ec1f54f66                    = 0,
	*0a0e472f62                    = 1,
	*ecac23dc9b                    = 2,
	*79b51e314c_MAX                = 3,
};

enum class E*84cb4ad498 : uint8_t
{
	*33acc1438c                    = 0,
	*b83de35cc4                    = 1,
	*fc6db3fe38                    = 2,
	*f84ae8d5e6                    = 3,
	*54c8e37099                    = 4,
	*91d1a2c47b                    = 5,
	*a365f13d46                    = 6,
	*b21f5e88f8                    = 7,
	*84cb4ad498_MAX                = 8,
};

enum class E*66459a16c5 : uint8_t
{
	*68dc8b35ff                    = 0,
	*6797a76b00                    = 1,
	*3a73a2821e                    = 2,
	*ac64419da6                    = 3,
	*27b541ca52                    = 4,
	*9eda9de3bf                    = 5,
	*66459a16c5_MAX                = 6,
};

enum class EFrictionCombineMode : uint8_t
{
	Average                        = 0,
	Min                            = 1,
	Multiply                       = 2,
	Max                            = 3,
	EFrictionCombineMode_MAX       = 4,
};

enum class ESettingsLockedAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	Invalid                        = 4,
	ESettingsLockedAxis_MAX        = 5,
};

enum class ESettingsDOF : uint8_t
{
	Full3D                         = 0,
	YZPlane                        = 1,
	XZPlane                        = 2,
	XYPlane                        = 3,
	ESettingsDOF_MAX               = 4,
};

enum class EAutoExposureMethodUI : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_MAX                        = 2,
};

enum class EEarlyZPass : uint8_t
{
	None                           = 0,
	OpaqueOnly                     = 1,
	OpaqueAndMasked                = 2,
	Auto                           = 3,
	EEarlyZPass_MAX                = 4,
};

enum class ECustomDepthStencil : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledOnDemand                = 2,
	EnabledWithStencil             = 3,
	ECustomDepthStencil_MAX        = 4,
};

enum class EMobileMSAASampleCount : uint8_t
{
	One                            = 1,
	Two                            = 2,
	Four                           = 4,
	Eight                          = 8,
	EMobileMSAASampleCount_MAX     = 9,
};

enum class ECompositingSampleCount : uint8_t
{
	One                            = 1,
	Two                            = 2,
	Four                           = 4,
	Eight                          = 8,
	ECompositingSampleCount_MAX    = 9,
};

enum class EClearSceneOptions : uint8_t
{
	NoClear                        = 0,
	HardwareClear                  = 1,
	QuadAtMaxZ                     = 2,
	EClearSceneOptions_MAX         = 3,
};

enum class EUIScalingRule : uint8_t
{
	ShortestSide                   = 0,
	LongestSide                    = 1,
	Horizontal                     = 2,
	Vertical                       = 3,
	Custom                         = 4,
	EUIScalingRule_MAX             = 5,
};

enum class ERenderFocusRule : uint8_t
{
	Always                         = 0,
	NonPointer                     = 1,
	NavigationOnly                 = 2,
	Never                          = 3,
	ERenderFocusRule_MAX           = 4,
};

enum class E*0b7a02524a : uint8_t
{
	*3d157e7732                    = 0,
	*6f2a90910a                    = 1,
	*7b192424de                    = 2,
	*a948f3a15e                    = 3,
	*0b7a02524a_MAX                = 4,
};

enum class E*5fd97b0d78 : uint8_t
{
	*c1d013b10f                    = 0,
	*a9bb922087                    = 1,
	*a4983e763d                    = 2,
	*d305c3c53f                    = 3,
	*5fd97b0d78_MAX                = 4,
};

enum class E*2a76d14afe : uint8_t
{
	*5b7ad7b136                    = 0,
	*1b4dde40b6                    = 1,
	*dcf353a037                    = 2,
	*bec3941091                    = 3,
	*bbd57cb0f1                    = 4,
	*6624512c98                    = 5,
	*2a76d14afe_MAX                = 6,
};

enum class E*c90fc1e42d : uint8_t
{
	*be32ff2bd7                    = 0,
	*59a7bdf0cf                    = 1,
	*41a0eac0c8                    = 2,
	*5c67bd5786                    = 3,
	*1bbe0b87ed                    = 4,
	*03adf046fe                    = 5,
	*22523aec84                    = 6,
	*c90fc1e42d_MAX                = 7,
};

enum class E*c5a4774782 : uint8_t
{
	*84217d19b8                    = 0,
	*851869510a                    = 1,
	*4ca1414ddc                    = 2,
	*725061db90                    = 3,
	*2b0dec8aed                    = 4,
	*367cd23bbd                    = 5,
	*c5a4774782_MAX                = 6,
};

enum class E*ea80319d09 : uint8_t
{
	*7a6dcabbbe                    = 0,
	*0ac8e12f5d                    = 1,
	*ec31623e80                    = 2,
	*40b3966d36                    = 3,
	*ea80319d09_MAX                = 4,
};

enum class EFontCacheType : uint8_t
{
	Offline                        = 0,
	Runtime                        = 1,
	EFontCacheType_MAX             = 2,
};

enum class EGraphicsAPIType : uint8_t
{
	DX11                           = 0,
	DX11_Enhanced                  = 1,
	DX12                           = 2,
	EGraphicsAPIType_MAX           = 3,
};

enum class EWindowMode : uint8_t
{
	Fullscreen                     = 0,
	WindowedFullscreen             = 1,
	Windowed                       = 2,
	EWindowMode_MAX                = 3,
};

enum class E*62b9bf0eb3 : uint8_t
{
	*b1895d58a5                    = 0,
	*88d7e1e949                    = 1,
	*23bf3f8156                    = 2,
	*81f4d4d2ef                    = 3,
	*62b9bf0eb3_MAX                = 4,
};

enum class E*5a78e94925 : uint8_t
{
	*6b36886f1f                    = 0,
	*7adfbdd15d                    = 1,
	*594ef7ce6f                    = 2,
	*bf0ea756ea                    = 3,
	*5a78e94925_MAX                = 4,
};

enum class E*462c0f2897 : uint8_t
{
	*b4aab5fbc8                    = 0,
	*444613a077                    = 1,
	*2e2f1dbcbe                    = 2,
	*7078234072                    = 3,
	*fc5a1a1146                    = 4,
	*a203df3266                    = 5,
	*18bf505439                    = 6,
	*462c0f2897_MAX                = 7,
};

enum class E*6c5fbff80d : uint8_t
{
	*05e1605077                    = 0,
	*4290fe8501                    = 1,
	*60879ea9c5                    = 2,
	*f6e9727e9d                    = 3,
	*4507b91ba7                    = 4,
	*6c5fbff80d_MAX                = 5,
};

enum class E*62f3a06b9a : uint8_t
{
	*57ee63c1ef                    = 0,
	*259fa6b589                    = 1,
	*857586021e                    = 2,
	*f40d5806ad                    = 3,
	*62f3a06b9a_MAX                = 4,
};

enum class E*bc79f78cf3 : uint8_t
{
	*452f9e35ec                    = 0,
	*4ccd65ed0e                    = 1,
	*64e9682de3                    = 2,
	*fbe8f39f8c                    = 3,
	*bc79f78cf3_MAX                = 4,
};

enum class EMaterialAttributeBlend : uint8_t
{
	Blend                          = 0,
	UseA                           = 1,
	UseB                           = 2,
	EMaterialAttributeBlend_MAX    = 3,
};

enum class E*16666c9307 : uint8_t
{
	*0e38b8934c                    = 0,
	*4f7de418c5                    = 1,
	*10f86302bd                    = 2,
	*b62dd0e763                    = 3,
	*16666c9307_MAX                = 4,
};

enum class E*16fe8271cf : uint8_t
{
	*7754f8f8dc                    = 0,
	*a7e046197a                    = 1,
	*4d8e990629                    = 2,
	*d610200c78                    = 3,
	*980642bd95                    = 4,
	*16fe8271cf_MAX                = 5,
};

enum class E*a160b68713 : uint8_t
{
	*75143b084c                    = 0,
	*c109c4edca                    = 1,
	*800e211925                    = 2,
	*0ce7d94338                    = 3,
	*729b8714ec                    = 4,
	*a160b68713_MAX                = 5,
};

enum class E*89a5ac37a6 : uint8_t
{
	*ddc6858ea5                    = 0,
	*e018d22cc3                    = 1,
	*edd45bc17a                    = 2,
	*0a664e99f4                    = 3,
	*decbd72e3a                    = 4,
	*189304191f                    = 5,
	*813a61b40b                    = 6,
	*ae6d085c0d                    = 7,
	*3176b9afc6                    = 8,
	*b83349e487                    = 9,
	*89a5ac37a6_MAX                = 10,
};

enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6,
};

enum class E*88a27edd30 : uint8_t
{
	*4054a49bef                    = 0,
	*06c96fef70                    = 1,
	*ec9547efcd                    = 2,
	*88a27edd30_MAX                = 3,
};

enum class EMaterialSceneAttributeInputMode : uint8_t
{
	Coordinates                    = 0,
	OffsetFraction                 = 1,
	EMaterialSceneAttributeInputMode_MAX = 2,
};

enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModel               = 22,
	PPI_AmbientOcclusion           = 23,
	PPI_CustomStencil              = 24,
	PPI_StoredBaseColor            = 25,
	PPI_StoredSpecular             = 26,
	PPI_ScreenCopy                 = 27,
	PPI_SceneStencil               = 28,
	PPI_IndoorMask                 = 29,
	PPI_GIVolumes                  = 30,
	PPI_Thermal                    = 31,
	PPI_MAX                        = 32,
};

enum class E*4ff690cd6f : uint8_t
{
	*669593e11b                    = 0,
	*f3bc8f0a87                    = 1,
	*283e561df9                    = 2,
	*15bb3d4afc                    = 3,
	*4ff690cd6f_MAX                = 4,
};

enum class E*207003218a : uint8_t
{
	*90a70d4b1c                    = 0,
	*ccff0ed139                    = 1,
	*6c2c7fe876                    = 2,
	*207003218a_MAX                = 3,
};

enum class E*2c378d7688 : uint8_t
{
	*c4d848f3ac                    = 0,
	*f646293501                    = 1,
	*bfaf4f15a6                    = 2,
	*24a754cff2                    = 3,
	*a0adc2b683                    = 4,
	*f077d2af5f                    = 5,
	*3b20712f4c                    = 6,
	*d72038347e                    = 7,
	*2c378d7688_MAX                = 8,
};

enum class E*571136b612 : uint8_t
{
	*4da948d3f0                    = 0,
	*b2b2113cc0                    = 1,
	*9033dabe52                    = 2,
	*7e6a545cb0                    = 3,
	*18d920d01c                    = 4,
	*5e39aa697a                    = 5,
	*571136b612_MAX                = 6,
};

enum class ETextureChannel : uint8_t
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	ETextureChannel_MAX            = 4,
};

enum class E*12a953ab59 : uint8_t
{
	*c9720d61c9                    = 0,
	*33a8eb2594                    = 1,
	*699a4de0e3                    = 2,
	*2a24fa9ccf                    = 3,
	*304ec307e0                    = 4,
	*12a953ab59_MAX                = 5,
};

enum class E*568ef16778 : uint8_t
{
	*5ec3d13eb7                    = 0,
	*30d948881c                    = 1,
	*34e3523d56                    = 2,
	*562e90a558                    = 3,
	*ab80840856                    = 4,
	*568ef16778_MAX                = 5,
};

enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2,
};

enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_MAX                  = 6,
};

enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_MAX            = 6,
};

enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_MAX         = 6,
};

enum class E*bb6fadac25 : uint8_t
{
	*9a7726b3f9                    = 0,
	*643ac5e65a                    = 1,
	*1d97edaa33                    = 2,
	*4926be3ada                    = 3,
	*31a8af52b0                    = 4,
	*447a5f4eee                    = 5,
	*bb6fadac25_MAX                = 6,
};

enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_ViewportOffset            = 6,
	MEVP_MAX                       = 7,
};

enum class E*64114e16a5 : uint8_t
{
	*3fc93726a1                    = 0,
	*1e95ca006b                    = 1,
	*590aaac7e2                    = 2,
	*15132f01f2                    = 3,
	*b7a72f4e7a                    = 4,
	*6506e8265e                    = 5,
	*69512203ec                    = 6,
	*64114e16a5_MAX                = 7,
};

enum class E*334c5b4d18 : uint8_t
{
	*d0d68ef35a                    = 0,
	*a21b180113                    = 1,
	*41a1e58171                    = 2,
	*43d9a5cc09                    = 3,
	*bba71d41a0                    = 4,
	*1673e8eed1                    = 5,
	*8b9389d023                    = 6,
	*0daf7cedae                    = 7,
	*d5a940ebbd                    = 8,
	*334c5b4d18_MAX                = 9,
};

enum class E*12f3fa529b : uint8_t
{
	*c5e463000e                    = 0,
	*db321ca85a                    = 1,
	*1e1d5400a7                    = 2,
	*5a0a37d06b                    = 3,
	*232ce48a6c                    = 4,
	*45422312d5                    = 5,
	*370eb3e48c                    = 6,
	*fcf8d2e4eb                    = 7,
	*b900ba6e2f                    = 8,
	*faf991d438                    = 9,
	*f36d4281d9                    = 10,
	*6390907085                    = 11,
	*b782f4a4ad                    = 12,
	*12f3fa529b_MAX                = 13,
};

enum class E*ba2aa14f47 : uint8_t
{
	*9e8fd65212                    = 0,
	*4fb85e7600                    = 1,
	*89c83c6ceb                    = 2,
	*7889059493                    = 3,
	*30d3f55a74                    = 4,
	*ace5a4383c                    = 5,
	*ba2aa14f47_MAX                = 6,
};

enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5,
};

enum class E*6e8d0bcdc4 : uint8_t
{
	*a29c66fc58                    = 0,
	*f9d2f8a481                    = 1,
	*80942b7052                    = 2,
	*6e8d0bcdc4_MAX                = 3,
};

enum class E*0ef0a1e3b4 : uint8_t
{
	*487f060173                    = 0,
	*94caa544c7                    = 1,
	*6bbf74ac31                    = 2,
	*a39d5e5e99                    = 3,
	*6da3998644                    = 4,
	*f7ed52dd2a                    = 5,
	*90ed482e0a                    = 6,
	*48c1c41286                    = 7,
	*0ef0a1e3b4_MAX                = 8,
};

enum class EParticleSystemInsignificanceReaction : uint8_t
{
	Auto                           = 0,
	Complete                       = 1,
	DisableTick                    = 2,
	DisableTickAndKill             = 3,
	Num                            = 4,
	EParticleSystemInsignificanceReaction_MAX = 5,
};

enum class EParticleSignificanceLevel : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Critical                       = 3,
	Num                            = 4,
	EParticleSignificanceLevel_MAX = 5,
};

enum class E*cc29f37171 : uint8_t
{
	*7adaff07c6                    = 0,
	*9aad05a986                    = 1,
	*f799fd4cc9                    = 2,
	*cc29f37171_MAX                = 3,
};

enum class E*2b36535b81 : uint8_t
{
	*baabac2363                    = 0,
	*9c73065920                    = 1,
	*c81cd971d1                    = 2,
	*5a01016489                    = 3,
	*f38ba3a8fc                    = 4,
	*fc3ed91a43                    = 5,
	*be46dbfa2c                    = 6,
	*a1a4c675b7                    = 7,
	*22e7bfc47c                    = 8,
	*3e1ef2a6bf                    = 9,
	*2b36535b81_MAX                = 10,
};

enum class E*7b10f16583 : uint8_t
{
	*9aefa0c28b                    = 0,
	*2ca672a33a                    = 1,
	*617c37c858                    = 2,
	*7b10f16583_MAX                = 3,
};

enum class E*071fd48759 : uint8_t
{
	*8515261949                    = 0,
	*6063756be0                    = 1,
	*91f9080d40                    = 2,
	*786a53e3e4                    = 3,
	*d148487033                    = 4,
	*071fd48759_MAX                = 5,
};

enum class E*f1f8d658ef : uint8_t
{
	*909a3cfb1e                    = 0,
	*c8c7b50050                    = 1,
	*3077291a00                    = 2,
	*cf2ce1eae8                    = 3,
	*fde7e34d71                    = 4,
	*dd9fe29bfc                    = 5,
	*f1f8d658ef_MAX                = 6,
};

enum class E*13fde14645 : uint8_t
{
	*e45e242424                    = 0,
	*cb09de0f6e                    = 1,
	*e5918e0979                    = 2,
	*13fde14645_MAX                = 3,
};

enum class E*773427872d : uint8_t
{
	*47217586ef                    = 0,
	*07ab045b76                    = 1,
	*b8e93439f0                    = 2,
	*f672aaf407                    = 3,
	*773427872d_MAX                = 4,
};

enum class E*c4549a01d4 : uint8_t
{
	*6931b947aa                    = 0,
	*f6c6ad0fb6                    = 1,
	*9f82d50b06                    = 2,
	*b6113d7b1d                    = 3,
	*c0bf18289e                    = 4,
	*99f13ae9f0                    = 5,
	*f490c92940                    = 6,
	*c4549a01d4_MAX                = 7,
};

enum class EParticleCollisionResponse : uint8_t
{
	Bounce                         = 0,
	Stop                           = 1,
	Kill                           = 2,
	EParticleCollisionResponse_MAX = 3,
};

enum class E*c785471b91 : uint8_t
{
	*f49c265cee                    = 0,
	*ce2bb512be                    = 1,
	*5570860112                    = 2,
	*c785471b91_MAX                = 3,
};

enum class E*71f8e91d2c : uint8_t
{
	*4fbd9edce2                    = 0,
	*f60c7dd231                    = 1,
	*b541075333                    = 2,
	*71f8e91d2c_MAX                = 3,
};

enum class E*f70e6d8c6b : uint8_t
{
	*635b855871                    = 0,
	*a44df42f7f                    = 1,
	*14a1b60906                    = 2,
	*f70e6d8c6b_MAX                = 3,
};

enum class E*49f7c4e261 : uint8_t
{
	*ad4ab58d49                    = 0,
	*a73bc7e1ef                    = 1,
	*709347aa27                    = 2,
	*06e014c2de                    = 3,
	*49f7c4e261_MAX                = 4,
};

enum class E*b694943b02 : uint8_t
{
	*1cb48b4339                    = 0,
	*55a6ba9e52                    = 1,
	*4d0b6d1e02                    = 2,
	*b694943b02_MAX                = 3,
};

enum class E*c90fd6e6ad : uint8_t
{
	*8dadd4de23                    = 0,
	*7ef974f8b4                    = 1,
	*ae05fadc96                    = 2,
	*08af8d63e8                    = 3,
	*c90fd6e6ad_MAX                = 4,
};

enum class E*f9aa1addd1 : uint8_t
{
	*10878513d6                    = 0,
	*4e77d966a0                    = 1,
	*decaffc99d                    = 2,
	*892fa0d73f                    = 3,
	*dc86e6c74b                    = 4,
	*d4c52e3e13                    = 5,
	*3bf193c8a3                    = 6,
	*1f2f17f549                    = 7,
	*57bbae14d3                    = 8,
	*eb4e9f9437                    = 9,
	*5205edac92                    = 10,
	*f9aa1addd1_MAX                = 11,
};

enum class E*50db35f3a2 : uint8_t
{
	*b601fca029                    = 0,
	*8b3ea74496                    = 1,
	*436750ba37                    = 2,
	*ddf89eb8f1                    = 3,
	*f1d6104664                    = 4,
	*07fdb72673                    = 5,
	*f39ea91837                    = 6,
	*50db35f3a2_MAX                = 7,
};

enum class E*2ac35d3720 : uint8_t
{
	*d03309dd3a                    = 0,
	*6f47b8040c                    = 1,
	*c102c934ed                    = 2,
	*6ebf5151e7                    = 3,
	*f2b7a36690                    = 4,
	*51da7e5adb                    = 5,
	*2ac35d3720_MAX                = 6,
};

enum class E*461e869bd6 : uint8_t
{
	*4843f746b8                    = 0,
	*152486975f                    = 1,
	*f91b00767d                    = 2,
	*461e869bd6_MAX                = 3,
};

enum class E*e07281ebfe : uint8_t
{
	*8d233b1435                    = 0,
	*d0c7a94b2d                    = 1,
	*f30611ec57                    = 2,
	*b83f739871                    = 3,
	*e07281ebfe_MAX                = 4,
};

enum class E*0a78c8c49e : uint8_t
{
	*68817ca425                    = 0,
	*83ee820965                    = 1,
	*0c9cb68bd7                    = 2,
	*98012087f3                    = 3,
	*48cfe6e265                    = 4,
	*8ccf18cefb                    = 5,
	*0a78c8c49e_MAX                = 6,
};

enum class EParticleUVFlipMode : uint8_t
{
	None                           = 0,
	FlipUV                         = 1,
	FlipUOnly                      = 2,
	FlipVOnly                      = 3,
	RandomFlipUV                   = 4,
	RandomFlipUOnly                = 5,
	RandomFlipVOnly                = 6,
	RandomFlipUVIndependent        = 7,
	EParticleUVFlipMode_MAX        = 8,
};

enum class E*75a2e43fd8 : uint8_t
{
	*845485be30                    = 0,
	*6e3f3b5563                    = 1,
	*2536c1f51e                    = 2,
	*1365351f0d                    = 3,
	*75a2e43fd8_MAX                = 4,
};

enum class E*1f58e58104 : uint8_t
{
	*8c1eea225b                    = 0,
	*7d6d1b1363                    = 1,
	*61aee6e5ae                    = 2,
	*5da40a47f3                    = 3,
	*1f58e58104_MAX                = 4,
};

enum class E*ad3a9bc5a7 : uint8_t
{
	*2240f83154                    = 0,
	*968a245fe9                    = 1,
	*193a1e2c34                    = 2,
	*34545d924d                    = 3,
	*ad3a9bc5a7_MAX                = 4,
};

enum class E*9ffbb063cd : uint8_t
{
	*8ff407ce73                    = 0,
	*561027abfb                    = 1,
	*cd1cfb018d                    = 2,
	*0d817b80af                    = 3,
	*53fc3455a3                    = 4,
	*53bab5a2c1                    = 5,
	*2c3819d625                    = 6,
	*d4bc1e9066                    = 7,
	*0fa55d26a0                    = 8,
	*db8a9da49b                    = 9,
	*ff4e3d5034                    = 10,
	*189bf414b3                    = 11,
	*70cce2a0c0                    = 12,
	*95c33111b2                    = 13,
	*9ffbb063cd_MAX                = 14,
};

enum class E*9c3872da7a : uint8_t
{
	*1834aea8ad                    = 0,
	*4424b065b2                    = 1,
	*e483ed4415                    = 2,
	*f8e80b60a0                    = 3,
	*abb31e262e                    = 4,
	*d4fd84193a                    = 5,
	*9c3872da7a_MAX                = 6,
};

enum class E*ebd5fcf4c5 : uint8_t
{
	*97cbe8f2c7                    = 0,
	*046b2bb00f                    = 1,
	*85d386af35                    = 2,
	*972a7d0e9b                    = 3,
	*ebd5fcf4c5_MAX                = 4,
};

enum class E*af9d7b7b9f : uint8_t
{
	*0917e23c6c                    = 0,
	*b9adfbdb4a                    = 1,
	*6be0bdb4b5                    = 2,
	*5dadce17cb                    = 3,
	*af9d7b7b9f_MAX                = 4,
};

enum class E*20ba067b79 : uint8_t
{
	*dc7c29585d                    = 0,
	*dd969e7c00                    = 1,
	*f27df7b637                    = 2,
	*7c18e0334c                    = 3,
	*aa58da0f29                    = 4,
	*ec64f2f5d1                    = 5,
	*052902e468                    = 6,
	*b986dd7bc7                    = 7,
	*20ba067b79_MAX                = 8,
};

enum class E*9fc3a14038 : uint8_t
{
	*4c969ef49c                    = 0,
	*11f56bf13a                    = 1,
	*74c15bb21f                    = 2,
	*9fc3a14038_MAX                = 3,
};

enum class E*f7085d4717 : uint8_t
{
	*4ac370cdc9                    = 0,
	*a2fec8265b                    = 1,
	*05a53b3d4a                    = 2,
	*9c84ef59e3                    = 3,
	*86564ebea7                    = 4,
	*f7085d4717_MAX                = 5,
};

enum class E*a16d9dbee5 : uint8_t
{
	*b637c46e0e                    = 0,
	*6a3a5b88e3                    = 1,
	*1e41a1f8d6                    = 2,
	*a16d9dbee5_MAX                = 3,
};

enum class E*bcbdafd373 : uint8_t
{
	*f07fa214cd                    = 0,
	*099f0c3af3                    = 1,
	*a2057c4764                    = 2,
	*3ed5a5a187                    = 3,
	*bcbdafd373_MAX                = 4,
};

enum class E*b6aa696570 : uint8_t
{
	*4cfac1a728                    = 0,
	*377b1e0c68                    = 1,
	*92c16d5579                    = 2,
	*f3615addd0                    = 3,
	*b6aa696570_MAX                = 4,
};

enum class EReporterLineStyle : uint8_t
{
	Line                           = 0,
	Dash                           = 1,
	EReporterLineStyle_MAX         = 2,
};

enum class ELegendPosition : uint8_t
{
	Outside                        = 0,
	Inside                         = 1,
	ELegendPosition_MAX            = 2,
};

enum class EGraphDataStyle : uint8_t
{
	Lines                          = 0,
	Filled                         = 1,
	EGraphDataStyle_MAX            = 2,
};

enum class EGraphAxisStyle : uint8_t
{
	Lines                          = 0,
	Notches                        = 1,
	Grid                           = 2,
	EGraphAxisStyle_MAX            = 3,
};

enum class EConstraintTransform : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	EConstraintTransform_MAX       = 2,
};

enum class EControlConstraint : uint8_t
{
	Orientation                    = 0,
	Translation                    = 1,
	Max                            = 2,
	EControlConstraint_MAX         = 3,
};

enum class E*43f88f129c : uint8_t
{
	*63a85dda2c                    = 0,
	*14279c3cf7                    = 1,
	*1856742d7d                    = 2,
	*cae93df99d                    = 3,
	*43f88f129c_MAX                = 4,
};

enum class EMaxConcurrentResolutionRule : uint8_t
{
	PreventNew                     = 0,
	StopOldest                     = 1,
	StopFarthestThenPreventNew     = 2,
	StopFarthestThenOldest         = 3,
	StopLowestPriority             = 4,
	StopQuietest                   = 5,
	StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule_MAX = 7,
};

enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25,
};

enum class E*8a512f582e : uint8_t
{
	*01d2b9f4e8                    = 0,
	*1e2bec15d9                    = 1,
	*b61620c3d9                    = 2,
	*b98962725c                    = 3,
	*67fc2e5956                    = 4,
	*22558d97c0                    = 5,
	*4d6d7415e3                    = 6,
	*4cbdc60cc3                    = 7,
	*9876389827                    = 8,
	*8a512f582e_MAX                = 9,
};

enum class EAudioOutputTarget : uint8_t
{
	Speaker                        = 0,
	Controller                     = 1,
	ControllerFallbackToSpeaker    = 2,
	EAudioOutputTarget_MAX         = 3,
};

enum class E*d4dd77a124 : uint8_t
{
	*1c9f0966b3                    = 0,
	*fa7040f9d1                    = 1,
	*7df7051dd4                    = 2,
	*e10e2b2070                    = 3,
	*d4dd77a124_MAX                = 4,
};

enum class E*822293132b : uint8_t
{
	*2149f2e838                    = 0,
	*efa8c293a0                    = 1,
	*b7ef322009                    = 2,
	*e7d16f61d9                    = 3,
	*8425a655b8                    = 4,
	*822293132b_MAX                = 5,
};

enum class E*ab7fff4588 : uint8_t
{
	*491cecfcc9                    = 0,
	*21056e6e90                    = 1,
	*e385338a49                    = 2,
	*ab7fff4588_MAX                = 3,
};

enum class EVolumetricDataFormat : uint8_t
{
	R8                             = 0,
	RG8                            = 1,
	RGBA8                          = 2,
	R16                            = 3,
	RG16                           = 4,
	R16_Float                      = 5,
	RG16_Float                     = 6,
	RGBA16_Float                   = 7,
	R32_Float                      = 8,
	RG32_Float                     = 9,
	RGBA32_Float                   = 10,
	EVolumetricDataFormat_MAX      = 11,
};

enum class EPostCopyOperation : uint8_t
{
	None                           = 0,
	LogicalNegateBool              = 1,
	Dereference                    = 2,
	EPostCopyOperation_MAX         = 3,
};

enum class EPinHidingMode : uint8_t
{
	NeverAsPin                     = 0,
	PinHiddenByDefault             = 1,
	PinShownByDefault              = 2,
	AlwaysAsPin                    = 3,
	EPinHidingMode_MAX             = 4,
};

enum class EAnimAlphaInputType : uint8_t
{
	Float                          = 0,
	Bool                           = 1,
	Curve                          = 2,
	EAnimAlphaInputType_MAX        = 3,
};

enum class EEvaluatorMode : uint8_t
{
	EM_Standard                    = 0,
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

enum class E*eaad4a58e6 : uint8_t
{
	*2e913abbf9                    = 0,
	*eeae72d38d                    = 1,
	*9c92300757                    = 2,
	*eaad4a58e6_MAX                = 3,
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

enum class EThreePlayerSplitScreenType : uint8_t
{
	FavorTop                       = 0,
	FavorBottom                    = 1,
	EThreePlayerSplitScreenType_MAX = 2,
};

enum class ETwoPlayerSplitScreenType : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	ETwoPlayerSplitScreenType_MAX  = 2,
};

enum class E*c82fc057f6 : uint8_t
{
	*a328251db0                    = 0,
	*2e359cf92c                    = 1,
	*2546166cf6                    = 2,
	*f705de0219                    = 3,
	*c82fc057f6_MAX                = 4,
};

enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	Source                         = 0,
	Target                         = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2,
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

enum class E*0cbcaac1a3 : uint8_t
{
	*7dc638f002                    = 0,
	*2cfe81b8df                    = 1,
	*71e9191ec8                    = 2,
	*0cbcaac1a3_MAX                = 3,
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

enum class E*874f9e2a96 : uint8_t
{
	*be4a630f00                    = 0,
	*b8e115d497                    = 1,
	*96b4b9e12b                    = 2,
	*d2b824375b                    = 3,
	*874f9e2a96_MAX                = 4,
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

enum class E*08a6eb2e2e : uint8_t
{
	*4a47ec646b                    = 0,
	*5e5352308a                    = 1,
	*6cff896af4                    = 2,
	*cef3b0cedd                    = 3,
	*08a6eb2e2e_MAX                = 4,
};

enum class E*9a278eaea7 : uint8_t
{
	*1f7a1bba9f                    = 0,
	*647a966bcf                    = 1,
	*ce57b2b359                    = 2,
	*9a278eaea7_MAX                = 3,
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

enum class E*d66c734c84 : uint8_t
{
	*a4c754c6b4                    = 0,
	*f30e256482                    = 1,
	*ac3b3fc403                    = 2,
	*99615a8f75                    = 3,
	*d66c734c84_MAX                = 4,
};

enum class E*7832abaad3 : uint8_t
{
	*8a59418277                    = 0,
	*32cbc47864                    = 1,
	*07cd6e6761                    = 2,
	*c779b46b2c                    = 3,
	*7832abaad3_MAX                = 4,
};

enum class E*dd4533a47c : uint8_t
{
	*57931d0656                    = 0,
	*5cb3048a86                    = 1,
	*d41c89f091                    = 2,
	*42e2e1439f                    = 3,
	*dd4533a47c_MAX                = 4,
};

enum class E*732cfca882 : uint8_t
{
	*b5aa73aace                    = 0,
	*88a112c4ad                    = 1,
	*7eb2096df0                    = 2,
	*79405aecbd                    = 3,
	*732cfca882_MAX                = 4,
};

enum class E*6d058deff4 : uint8_t
{
	*de7a53592d                    = 0,
	*57931d0656                    = 1,
	*10012e9742                    = 2,
	*6d058deff4_MAX                = 3,
};

enum class E*7cda0712e5 : uint8_t
{
	*6c235d6fdb                    = 0,
	*006daf2d0b                    = 1,
	*5c269cc48d                    = 2,
	*7cda0712e5_MAX                = 3,
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

enum class E*eca6bffb32 : uint8_t
{
	*1045b9a6e0                    = 1,
	*3848189d38                    = 2,
	*96a793f22b                    = 4,
	*f12a6df766                    = 5,
	*eca6bffb32_MAX                = 6,
};

enum class E*e1526b6713 : uint8_t
{
	*1228764a1b                    = 0,
	*8fa7f8d581                    = 1,
	*5f479182ba                    = 2,
	*1e39a4b392                    = 3,
	*e1526b6713_MAX                = 4,
};

enum class E*6222e9068d : uint8_t
{
	*8b4b35c861                    = 0,
	*8623e06d9a                    = 1,
	*665a51f26f                    = 2,
	*d594cc0193                    = 3,
	*6222e9068d_MAX                = 4,
};

enum class EWaitAttributeChangeComparison : uint8_t
{
	None                           = 0,
	GreaterThan                    = 1,
	LessThan                       = 2,
	GreaterThanOrEqualTo           = 3,
	LessThanOrEqualTo              = 4,
	NotEqualTo                     = 5,
	ExactlyEqualTo                 = 6,
	MAX                            = 7,
	EWaitAttributeChangeComparison_MAX = 8,
};

enum class E*c56c050b82 : uint8_t
{
	*7e4b185554                    = 0,
	*0844f3a6b7                    = 1,
	*3401ea723c                    = 2,
	*02508dedc9                    = 3,
	*34d5ef4842                    = 4,
	*402b962172                    = 5,
	*7d1efaa82a                    = 6,
	*6bf0925eb8                    = 7,
	*f1d35297ec                    = 8,
	*01ff07a66e                    = 9,
	*c56c050b82_MAX                = 10,
};

enum class E*5e0a9ba2be : uint8_t
{
	*6984c12908                    = 0,
	*aedcfd385a                    = 1,
	*cd748d7373                    = 2,
	*5e0a9ba2be_MAX                = 3,
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
	OnEveryPerception              = 0,
	OnPerceptionChange             = 1,
	EAISenseNotifyType_MAX         = 2,
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
	TwoPoints                      = 0,
	Rotation                       = 1,
	EEnvDirection_MAX              = 2,
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

enum class E*31f4c21f79 : uint8_t
{
	*cba82467fa                    = 0,
	*fd2f15b640                    = 1,
	*de1326207c                    = 2,
	*39ccde83ef                    = 3,
	*31f4c21f79_MAX                = 4,
};

enum class E*a7c617d4e0 : uint8_t
{
	*56099ff90b                    = 0,
	*586650e983                    = 1,
	*bd8e31e908                    = 2,
	*a7c617d4e0_MAX                = 3,
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

enum class E*29456b22c9 : uint8_t
{
	*8862374c45                    = 0,
	*e70d6a979b                    = 1,
	*3d6686b499                    = 2,
	*29456b22c9_MAX                = 3,
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
	Set                            = 0,
	NotSet                         = 1,
	EBasicKeyOperation_MAX         = 2,
};

enum class E*083e1737ec : uint8_t
{
	*64bb1f8a4d                    = 0,
	*d295273492                    = 1,
	*4343ad3e96                    = 2,
	*083e1737ec_MAX                = 3,
};

enum class EBlackBoardEntryComparison : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	EBlackBoardEntryComparison_MAX = 2,
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
	AbortBackground                = 0,
	WaitForBackground              = 1,
	EBTParallelMode_MAX            = 2,
};

enum class E*e7b896364f : uint8_t
{
	*23866854b0                    = 0,
	*df90822e0c                    = 1,
	*d4494b1218                    = 2,
	*e7b896364f_MAX                = 3,
};

enum class EEQSNormalizationType : uint8_t
{
	Absolute                       = 0,
	RelativeToScores               = 1,
	EEQSNormalizationType_MAX      = 2,
};

enum class E*552f47fed6 : uint8_t
{
	*c8717b5bac                    = 0,
	*8624a0567e                    = 1,
	*2f42401714                    = 2,
	*312944e854                    = 3,
	*7c6adaca31                    = 4,
	*552f47fed6_MAX                = 5,
};

enum class E*aec69bbab8 : uint8_t
{
	*d07890551e                    = 0,
	*71c74c54fc                    = 1,
	*67dc971aee                    = 2,
	*aec69bbab8_MAX                = 3,
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

enum class E*66db14d4ca : uint8_t
{
	*cd1b845189                    = 0,
	*3e1187f45a                    = 1,
	*be6729e799                    = 2,
	*66db14d4ca_MAX                = 3,
};

enum class E*ff14544c5d : uint8_t
{
	*a3c28d13d9                    = 0,
	*ed2c34d4e2                    = 1,
	*39bbb98a1c                    = 2,
	*ff14544c5d_MAX                = 3,
};

enum class E*35213ea757 : uint8_t
{
	*323fcb5b19                    = 0,
	*b65dacaca9                    = 1,
	*52e2c1b57e                    = 2,
	*35213ea757_MAX                = 3,
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
	Forward                        = 0,
	Reverse                        = 1,
	PingPong                       = 2,
	EUMGSequencePlayMode_MAX       = 3,
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
	Automatic                      = 0,
	Fill                           = 1,
	ESlateSizeRule_MAX             = 2,
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
	Function                       = 0,
	Property                       = 1,
	EBindingKind_MAX               = 2,
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
	RealTime                       = 0,
	GameTime                       = 1,
	EWidgetTimingPolicy_MAX        = 2,
};

enum class EWidgetSpace : uint8_t
{
	World                          = 0,
	Screen                         = 1,
	EWidgetSpace_MAX               = 2,
};

enum class EWidgetInteractionSource : uint8_t
{
	World                          = 0,
	Mouse                          = 1,
	CenterScreen                   = 2,
	Custom                         = 3,
	EWidgetInteractionSource_MAX   = 4,
};

enum class E*99d0fdbe49 : uint8_t
{
	*2a39db3001                    = 0,
	*3c265c22fb                    = 1,
	*a896ad08d9                    = 2,
	*9e7004a94c                    = 3,
	*6c6a52a554                    = 4,
	*881e8451fb                    = 5,
	*65e54aca64                    = 6,
	*99d0fdbe49_MAX                = 7,
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

enum class E*906f5e49a1 : uint8_t
{
	*e0e7584ef7                    = 1,
	*457b0b63e5                    = 2,
	*3ef2ce35a0                    = 3,
	*f2af908ff2                    = 4,
	*906f5e49a1_MAX                = 5,
};

enum class ESimulationOverlap : uint8_t
{
	CollisionOverlap               = 0,
	ShadeOverlap                   = 1,
	None                           = 2,
	ESimulationOverlap_MAX         = 3,
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
	NoMirror                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushMirrorType_MAX      = 4,
};

enum class ESlateBrushTileType : uint8_t
{
	NoTile                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushTileType_MAX        = 4,
};

enum class ESlateColorStylingMode : uint8_t
{
	UseColor_Specified             = 0,
	UseColor_Specified_Link        = 1,
	UseColor_Foreground            = 2,
	UseColor_Foreground_Subdued    = 3,
	UseColor_MAX                   = 4,
};

enum class ESlateBrushDrawType : uint8_t
{
	NoDrawType                     = 0,
	Box                            = 1,
	Border                         = 2,
	Image                          = 3,
	ESlateBrushDrawType_MAX        = 4,
};

enum class EUINavigationRule : uint8_t
{
	Escape                         = 0,
	Explicit                       = 1,
	Wrap                           = 2,
	Stop                           = 3,
	Custom                         = 4,
	Invalid                        = 5,
	EUINavigationRule_MAX          = 6,
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

enum class ESelectInfo : uint8_t
{
	OnKeyPress                     = 0,
	OnNavigation                   = 1,
	OnMouseClick                   = 2,
	Direct                         = 3,
	ESelectInfo_MAX                = 4,
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
	Default                        = 0,
	OnEnter                        = 1,
	OnUserMovedFocus               = 2,
	OnCleared                      = 3,
	ETextCommit_MAX                = 4,
};

enum class ETextShapingMethod : uint8_t
{
	Auto                           = 0,
	KerningOnly                    = 1,
	FullShaping                    = 2,
	ETextShapingMethod_MAX         = 3,
};

enum class E*4a38cc7ebc : uint8_t
{
	*3c34ab7046                    = 0,
	*c0fe0f208b                    = 1,
	*a3c86ca8cb                    = 2,
	*4a38cc7ebc_MAX                = 3,
};

enum class EFontLoadingPolicy : uint8_t
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3,
};

enum class E*93ee56007c : uint8_t
{
	*c54f453e4e                    = 0,
	*c829d500f1                    = 1,
	*d3fe12460a                    = 2,
	*27d9b0bfd1                    = 3,
	*93ee56007c_MAX                = 4,
};

enum class E*0bed099491 : uint8_t
{
	*823cac63c4                    = 0,
	*e272210233                    = 1,
	*18bc6d2480                    = 2,
	*0bed099491_MAX                = 3,
};

enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2,
};

enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MAX              = 12,
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

enum class E*8cc844ec97 : uint8_t
{
	*fad63ee8ca                    = 0,
	*33de3afa5a                    = 1,
	*d59148040a                    = 2,
	*8cc844ec97_MAX                = 3,
};

enum class E*360b4e31e2 : uint8_t
{
	*4393454138                    = 0,
	*07e5c0b665                    = 1,
	*cad8ae2a38                    = 2,
	*d0bea56a26                    = 3,
	*360b4e31e2_MAX                = 4,
};

enum class EButtonTouchMethod : uint8_t
{
	DownAndUp                      = 0,
	PreciseTap                     = 1,
	EButtonTouchMethod_MAX         = 2,
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
	CheckBox                       = 0,
	ToggleButton                   = 1,
	ESlateCheckBoxType_MAX         = 2,
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

enum class E*70734891a4 : uint8_t
{
	*ee39e54c92                    = 0,
	*65e5d506b7                    = 1,
	*7203bdf231                    = 2,
	*70734891a4_MAX                = 3,
};

enum class E*23f138249d : uint8_t
{
	*dc81a1e559                    = 0,
	*9afa981cc2                    = 1,
	*e2233dde70                    = 2,
	*b2afb031b5                    = 3,
	*a7eee62966                    = 4,
	*23f138249d_MAX                = 5,
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

enum class E*10fd249a15 : uint8_t
{
	*baad17fe3f                    = 0,
	*aa5f528a37                    = 1,
	*c85dcb720e                    = 2,
	*392f7f63a8                    = 3,
	*937ddd80b7                    = 4,
	*fb70fb785e                    = 5,
	*4514f0cbf2                    = 6,
	*10fd249a15_MAX                = 7,
};

enum class E*f32ec52d7e : uint8_t
{
	*df499ed730                    = 0,
	*bd6b11590e                    = 1,
	*456bb6adc9                    = 2,
	*e08cb723b4                    = 3,
	*5aab49e195                    = 4,
	*f32ec52d7e_MAX                = 5,
};

enum class E*9200a91e5b : uint8_t
{
	*c92f5dd447                    = 0,
	*c348b57cc5                    = 1,
	*f857266fec                    = 2,
	*9971e2f35b                    = 3,
	*935e13ca71                    = 4,
	*82c7ef1d6c                    = 5,
	*82daa1a023                    = 6,
	*6375992502                    = 7,
	*6e32cf2f45                    = 8,
	*4242f1e695                    = 9,
	*df329a8155                    = 10,
	*294e540211                    = 11,
	*76d7b98153                    = 12,
	*a02a089183                    = 13,
	*b7b87d17af                    = 14,
	*58d7c3f2f7                    = 15,
	*af09358b56                    = 16,
	*1f4fed2b39                    = 17,
	*513dfb36dd                    = 18,
	*765b600ff6                    = 19,
	*d660b60586                    = 20,
	*b44485d6af                    = 21,
	*66d4ac2298                    = 22,
	*9200a91e5b_MAX                = 23,
};

enum class E*609a6c3151 : uint8_t
{
	*70195fdd91                    = 0,
	*36faed986b                    = 1,
	*838c1de978                    = 2,
	*d9590661d2                    = 3,
	*9e92a9b196                    = 4,
	*bce167ed8e                    = 5,
	*2862b4a5d0                    = 6,
	*d971f5cc90                    = 7,
	*f02cbff085                    = 8,
	*c435a738f1                    = 9,
	*acff63237d                    = 10,
	*4acc0893fe                    = 11,
	*d89917fb2e                    = 12,
	*8a023eb938                    = 13,
	*bd361f5ca3                    = 14,
	*83e31455da                    = 15,
	*26acbea8fb                    = 16,
	*e7aec44d0a                    = 17,
	*14bbae9b2e                    = 18,
	*9c264ef618                    = 19,
	*e062bce35d                    = 20,
	*782c48fc86                    = 21,
	*3cea967fbd                    = 22,
	*7fe75946a7                    = 23,
	*2b33ab664d                    = 24,
	*642c926d37                    = 25,
	*4c18da8a6b                    = 26,
	*4e2abb8c1d                    = 27,
	*3e758272fb                    = 28,
	*f27bcaaef5                    = 29,
	*5304791285                    = 30,
	*d52db86369                    = 31,
	*33c58a812c                    = 32,
	*b290473dbb                    = 33,
	*77f80ae298                    = 34,
	*98247c2d51                    = 35,
	*f78fc1855b                    = 36,
	*b27110ca5e                    = 37,
	*318f204798                    = 38,
	*65778184bd                    = 39,
	*81c446221e                    = 40,
	*9169b64200                    = 41,
	*138f042b60                    = 42,
	*c3060a1f82                    = 43,
	*1c9cd84ce5                    = 44,
	*e722d3989d                    = 45,
	*d4cca1b237                    = 46,
	*d86172fb04                    = 47,
	*e5942e0214                    = 48,
	*d04b0f3aa8                    = 49,
	*c5658a9f1e                    = 50,
	*b6e8e4f751                    = 51,
	*8a5915770b                    = 52,
	*dd14e16930                    = 53,
	*897ef06008                    = 54,
	*06707e6b44                    = 55,
	*c154f2eea9                    = 56,
	*9d06ca74bf                    = 57,
	*1b28bc5062                    = 58,
	*cd1c5af3fb                    = 59,
	*fa3b642211                    = 60,
	*ad9614a667                    = 61,
	*4299427f56                    = 62,
	*a86865747f                    = 63,
	*52aa0af853                    = 64,
	*8d78461ae9                    = 65,
	*1b771d366d                    = 66,
	*c996c392c6                    = 67,
	*10ee3bdcbf                    = 68,
	*41c8104b0e                    = 69,
	*3fcec21a6a                    = 70,
	*9e01b9fdf5                    = 71,
	*54a033ca40                    = 72,
	*e1980b1e3c                    = 73,
	*d66ce44757                    = 74,
	*0b54321782                    = 75,
	*106481ffa6                    = 76,
	*2b01d502d2                    = 77,
	*11fbe4a18f                    = 78,
	*2f726de19e                    = 79,
	*5b12b122ae                    = 80,
	*a0465dc615                    = 81,
	*7948d372b5                    = 82,
	*9d7e99c0c5                    = 83,
	*c394d8c476                    = 84,
	*446b226931                    = 85,
	*e000d50b14                    = 86,
	*bb7ba05475                    = 87,
	*39f757beb6                    = 88,
	*fba1587b36                    = 89,
	*1f67d6931e                    = 90,
	*a3fb7313a2                    = 91,
	*7577f11db0                    = 92,
	*25674a472d                    = 93,
	*b597ebbf51                    = 94,
	*847180a6bf                    = 95,
	*99420e639a                    = 96,
	*d4b59209c7                    = 97,
	*6746618117                    = 98,
	*298b5abec0                    = 99,
	*da7450e679                    = 100,
	*6eb219a4c5                    = 101,
	*c3fce82bfe                    = 102,
	*7d7f63b09d                    = 103,
	*efaf9d3b80                    = 104,
	*e2547d296f                    = 105,
	*a488b986c1                    = 106,
	*5e0ab87ce3                    = 107,
	*cb7295bbf0                    = 108,
	*716bf11e21                    = 109,
	*45dcefaed3                    = 110,
	*ebd5b57326                    = 111,
	*ce713a3355                    = 112,
	*2e45d4d2bf                    = 113,
	*0132ad05e6                    = 114,
	*a59fe2bd52                    = 115,
	*39b743a1b0                    = 116,
	*a0ed89412a                    = 117,
	*6b7527e06b                    = 118,
	*98f247bb25                    = 119,
	*b4ed4f3b1d                    = 120,
	*48f0f9b0be                    = 121,
	*2fbc82c808                    = 122,
	*7825aa8859                    = 123,
	*2c0ed1bc9c                    = 124,
	*be15118fa8                    = 125,
	*609a6c3151_MAX                = 126,
};

enum class E*24e9a0261c : uint8_t
{
	*18c74495c8                    = 0,
	*aca92d03d9                    = 1,
	*4c850a3910                    = 2,
	*46b4a4b801                    = 3,
	*186ef42588                    = 4,
	*36e034ec9d                    = 5,
	*5833717e0b                    = 6,
	*24e9a0261c_MAX                = 7,
};

enum class E*72dc6a81fe : uint8_t
{
	*4c850a3910                    = 0,
	*46b4a4b801                    = 1,
	*186ef42588                    = 2,
	*5833717e0b                    = 3,
	*72dc6a81fe_MAX                = 4,
};

enum class E*e1ae7608c1 : uint8_t
{
	*18c74495c8                    = 0,
	*aca92d03d9                    = 1,
	*36e034ec9d                    = 2,
	*5833717e0b                    = 3,
	*e1ae7608c1_MAX                = 4,
};

enum class E*a1f75c5aa9 : uint8_t
{
	*6e1fbc194c                    = 0,
	*fc76a8df63                    = 1,
	*5833717e0b                    = 2,
	*a1f75c5aa9_MAX                = 3,
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

enum class E*19f3a3ee53 : uint8_t
{
	*df0674a324                    = 0,
	*94c3c3512a                    = 1,
	*13251fd793                    = 2,
	*b5558dd5cd                    = 3,
	*19f3a3ee53_MAX                = 4,
};

enum class E*d2e9be6e47 : uint8_t
{
	*7a090817df                    = 0,
	*65b0d69406                    = 1,
	*b278961b6c                    = 2,
	*d2e9be6e47_MAX                = 3,
};

enum class E*dec03689c3 : uint8_t
{
	*dfc993a149                    = 0,
	*533d42cc49                    = 1,
	*48948413eb                    = 2,
	*51d56ed185                    = 3,
	*dec03689c3_MAX                = 4,
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

enum class E*856300b935 : uint8_t
{
	*9fa6b25c4d                    = 0,
	*3c1b031193                    = 1,
	*168d55713e                    = 2,
	*6806f8b2d6                    = 3,
	*856300b935_MAX                = 4,
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
	Linear                         = 0,
	SquareRoot                     = 1,
	ELandscapeLODFalloff_MAX       = 2,
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
	Additive                       = 0,
	Layered                        = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

enum class E*ff7f5cfc18 : uint8_t
{
	*b810dc2346                    = 0,
	*02ad60d218                    = 1,
	*84cd621cdc                    = 2,
	*cc83c19059                    = 3,
	*2b9e3dfb27                    = 4,
	*ff7f5cfc18_MAX                = 5,
};

enum class E*5df2fb7047 : uint8_t
{
	*c953690d04                    = 0,
	*e3b2affffb                    = 1,
	*1b38ceb3da                    = 2,
	*5df2fb7047_MAX                = 3,
};

enum class E*066d09575f : uint8_t
{
	*364dc95747                    = 0,
	*5121735fad                    = 1,
	*d3f332b271                    = 2,
	*1438c8ee41                    = 3,
	*066d09575f_MAX                = 4,
};

enum class E*5a0bb3e1b6 : uint8_t
{
	*b1754fb853                    = 0,
	*4badd7aa80                    = 1,
	*f877ca6111                    = 2,
	*ee1bd0a3bf                    = 3,
	*753dd90943                    = 4,
	*633959ce39                    = 5,
	*5a0bb3e1b6_MAX                = 6,
};

enum class E*3589cc0509 : uint8_t
{
	*d8e604262c                    = 0,
	*47231f27a6                    = 1,
	*70ba6155d9                    = 2,
	*905aa633a6                    = 3,
	*4d7a335979                    = 4,
	*3589cc0509_MAX                = 5,
};

enum class E*15ff970ba7 : uint8_t
{
	*dd28c175e7                    = 0,
	*d5fe08013d                    = 1,
	*2b8ee54633                    = 2,
	*9d78c619e4                    = 3,
	*f5b5aacaa1                    = 4,
	*aca0802066                    = 5,
	*f3ee4cecaa                    = 6,
	*bd5291a2be                    = 7,
	*38a00482c0                    = 8,
	*31e734f0ae                    = 9,
	*4f501c9268                    = 10,
	*029d146864                    = 11,
	*15ff970ba7_MAX                = 12,
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

enum class E*c1670a18f2 : uint8_t
{
	*3eac86132d                    = 0,
	*cda964d41d                    = 1,
	*2ec336aa04                    = 2,
	*5bb7d396f2                    = 3,
	*12ee4f1cdf                    = 4,
	*6f255f65f2                    = 5,
	*39a900191f                    = 6,
	*ff1a34a2c2                    = 7,
	*2eb57222ba                    = 8,
	*b8f6b7394d                    = 9,
	*c1670a18f2_MAX                = 10,
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

enum class ECameraFocusMethod : uint8_t
{
	None                           = 0,
	Manual                         = 1,
	Tracking                       = 2,
	ECameraFocusMethod_MAX         = 3,
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
	Unknown                        = 0,
	BombPlanting_Phase1            = 1,
	BombPlanting_Phase2            = 2,
	BombPlanting_Phase3            = 3,
	BombExplosion                  = 4,
	BombDefusing                   = 5,
	GiveCoin                       = 6,
	ReceiveCoin                    = 7,
	Purchase                       = 8,
	BombTimerStart                 = 9,
	BombTimerDismantle             = 10,
	BombTimeStop                   = 11,
	RestrictionTimer               = 12,
	EBombModeSoundType_MAX         = 13,
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

enum class E*462ef36553 : uint8_t
{
	*a22a2a9764                    = 0,
	*429df45702                    = 1,
	*a8335e3932                    = 2,
	*e9d1fe49b4                    = 3,
	*d02b318b5f                    = 4,
	*462ef36553_MAX                = 5,
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
	None                           = 0,
	BombInstall                    = 1,
	ExplosionPending               = 2,
	ExplosionComplete              = 3,
	Disarm                         = 4,
	DisarmCancel                   = 5,
	DisarmComplete                 = 6,
	MAX                            = 7,
	EBombUIMarkStatusType_MAX      = 8,
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

enum class E*21bd83fce6 : uint8_t
{
	*a4bceb1991                    = 0,
	*df03a5055d                    = 1,
	*dc2c929dce                    = 2,
	*7732f6a0be                    = 3,
	*7cc9bad152                    = 4,
	*57f7bb6428                    = 5,
	*12af1ad912                    = 6,
	*0b26555841                    = 7,
	*70c4a7036d                    = 8,
	*8f9da6dec0                    = 9,
	*e77b21bff6                    = 10,
	*bd3dbb857f                    = 11,
	*21bd83fce6_MAX                = 12,
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
	None                           = 0,
	StartSearch_Message            = 1,
	StopSearch_Message_Normal      = 2,
	StopSearch_Message_UseDiffFacility = 3,
	EnterArena_Message             = 4,
	ExitArena_Message_Normal       = 5,
	ExitArena_Message_FromAudience = 6,
	CannotSearch_Message_NotInProgress = 7,
	EOneOnOneMessageType_MAX       = 8,
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

enum class E*2e30ec1f3d : uint8_t
{
	*da2b150fde                    = 0,
	*ba06154f0e                    = 1,
	*f5c3553da5                    = 2,
	*2e30ec1f3d_MAX                = 3,
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

enum class EZipUtilityCompletionState : uint8_t
{
	SUCCESS                        = 0,
	FAILURE_NOT_FOUND              = 1,
	FAILURE_UNKNOWN                = 2,
	EZipUtilityCompletionState_MAX = 3,
};

enum class E*4a37e2fd52 : uint8_t
{
	*8ea768c04f                    = 0,
	*854a3f087c                    = 1,
	*632d7e5680                    = 2,
	*103068af31                    = 3,
	*4a37e2fd52_MAX                = 4,
};

enum class E*108313d2a9 : uint8_t
{
	*4fefb5c639                    = 0,
	*6a1259a028                    = 1,
	*3d19ca453a                    = 2,
	*43a0e9729c                    = 3,
	*81d65b2fec                    = 4,
	*036c246393                    = 5,
	*0ed1a0855f                    = 6,
	*bea9215f85                    = 7,
	*4d155434ec                    = 8,
	*9a03a67bc6                    = 9,
	*97acc2380b                    = 10,
	*6784d95f45                    = 11,
	*108313d2a9_MAX                = 12,
};

enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_MAX                       = 5,
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
	DefaultWrapping                = 0,
	AllowPerCharacterWrapping      = 1,
	ETextWrappingPolicy_MAX        = 2,
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
	None                           = 0,
	Fill                           = 1,
	ScaleToFit                     = 2,
	ScaleToFitX                    = 3,
	ScaleToFitY                    = 4,
	ScaleToFill                    = 5,
	ScaleBySafeZone                = 6,
	UserSpecified                  = 7,
	EStretch_MAX                   = 8,
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

enum class E*5eeddba3f2 : uint8_t
{
	*9f0b81358b                    = 0,
	*b9913382e8                    = 1,
	*0e61168d36                    = 2,
	*2b0cf5b7d1                    = 3,
	*5eeddba3f2_MAX                = 4,
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

enum class ESpawnOwnership : uint8_t
{
	InnerSequence                  = 0,
	MasterSequence                 = 1,
	External                       = 2,
	ESpawnOwnership_MAX            = 3,
};

enum class EMovieSceneObjectBindingSpace : uint8_t
{
	Local                          = 0,
	Root                           = 1,
	EMovieSceneObjectBindingSpace_MAX = 2,
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

enum class E*c67e9dfd7f : uint8_t
{
	*2e8541c256                    = 0,
	*4e47e66f35                    = 1,
	*7d331415f1                    = 2,
	*c67e9dfd7f_MAX                = 3,
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
	Static                         = 0,
	Swept                          = 1,
	EEvaluationMethod_MAX          = 2,
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
	DrivePoses                     = 0,
	DriveCurves                    = 1,
	EPoseDriverOutput_MAX          = 2,
};

enum class EPoseDriverSource : uint8_t
{
	Rotation                       = 0,
	Translation                    = 1,
	EPoseDriverSource_MAX          = 2,
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
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2,
};

enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,
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
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2,
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
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

enum class EAnimPhysAngularConstraintType : uint8_t
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2,
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
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2,
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

enum class E*9033472dab : uint8_t
{
	*197f2a3abe                    = 0,
	*040d46ede7                    = 1,
	*d8c9f23e69                    = 2,
	*75723a32ad                    = 3,
	*9033472dab_MAX                = 4,
};

enum class E*7f1f8a84ce : uint8_t
{
	*6e73e20338                    = 0,
	*dde86bec07                    = 1,
	*f061435f00                    = 2,
	*3f1e850ee2                    = 3,
	*7f1f8a84ce_MAX                = 4,
};

enum class ELevelVisibility : uint8_t
{
	Visible                        = 0,
	Hidden                         = 1,
	ELevelVisibility_MAX           = 2,
};

enum class EParticleKey : uint8_t
{
	Activate                       = 0,
	Deactivate                     = 1,
	Trigger                        = 2,
	EParticleKey_MAX               = 3,
};

enum class E*956aab8157 : uint8_t
{
	*ee7a133341                    = 0,
	*7b7848054f                    = 1,
	*1d973e5836                    = 2,
	*3359b4d6f7                    = 3,
	*559ca021bf                    = 4,
	*0e4542f2a3                    = 5,
	*956aab8157_MAX                = 6,
};

enum class E*437c680485 : uint8_t
{
	*c2038ce2b5                    = 0,
	*18b6ed700d                    = 1,
	*285e8adcd9                    = 2,
	*437c680485_MAX                = 3,
};

enum class E*0a3946e052 : uint8_t
{
	*2381ef30db                    = 0,
	*cf50ac2f10                    = 1,
	*9dd3161af9                    = 2,
	*7302541c19                    = 3,
	*0a3946e052_MAX                = 4,
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
	Any                            = 0,
	All                            = 1,
	EGameplayContainerMatchType_MAX = 2,
};

enum class EGameplayTagMatchType : uint8_t
{
	Explicit                       = 0,
	IncludeParentTags              = 1,
	EGameplayTagMatchType_MAX      = 2,
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

enum class E*6f2615673d : uint8_t
{
	*648ad3e72e                    = 0,
	*ea5e47cdbb                    = 1,
	*bcc844b79b                    = 2,
	*1e0a255f38                    = 3,
	*6f2615673d_MAX                = 4,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};

enum class E*82351fa58b : uint8_t
{
	*fe518d4c74                    = 0,
	*baa2908a80                    = 1,
	*386ec74265                    = 2,
	*dbab79b3fd                    = 3,
	*bfb174fa60                    = 4,
	*5f559d396b                    = 5,
	*17229a5120                    = 6,
	*82351fa58b_MAX                = 7,
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

enum class E*9ec8361904 : uint8_t
{
	*3d7e2a3abe                    = 0,
	*ce204b8d0b                    = 1,
	*b5cf7cfd96                    = 2,
	*ac45a89891                    = 3,
	*9ec8361904_MAX                = 4,
};

enum class E*9b0f409e36 : uint8_t
{
	*99984c11bf                    = 0,
	*503850e741                    = 1,
	*61f1fde8c0                    = 2,
	*cb7c87c177                    = 3,
	*9b0f409e36_MAX                = 4,
};

enum class E*02dbd62cc3 : uint8_t
{
	*450d465cd3                    = 0,
	*f69fb15b8c                    = 1,
	*17eed3fa08                    = 2,
	*0ac15f20ec                    = 3,
	*02dbd62cc3_MAX                = 4,
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

enum class E*6b5c22d3ca : uint8_t
{
	*ab00c5a8ab                    = 0,
	*cc7768ba9c                    = 1,
	*9186a82f67                    = 2,
	*914ab9022f                    = 3,
	*6b5c22d3ca_MAX                = 4,
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

enum class E*2511039ea8 : uint8_t
{
	*0b3c0102e8                    = 0,
	*546a45e3bb                    = 1,
	*a17476bc22                    = 2,
	*2511039ea8_MAX                = 3,
};

enum class EWRALOutput : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	EWRALOutput_MAX                = 2,
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

enum class E*0cd8a8bf63 : uint8_t
{
	*7da5359aa9                    = 0,
	*7016be5a41                    = 1,
	*11b7b43007                    = 2,
	*0cd8a8bf63_MAX                = 3,
};

enum class ETileMapProjectionMode : uint8_t
{
	Orthogonal                     = 0,
	IsometricDiamond               = 1,
	IsometricStaggered             = 2,
	HexagonalStaggered             = 3,
	ETileMapProjectionMode_MAX     = 4,
};

enum class E*19dbdd74e6 : uint8_t
{
	*e35c3a7cb7                    = 0,
	*968edc4466                    = 1,
	*02173a691b                    = 2,
	*8cce6dd2cb                    = 3,
	*19dbdd74e6_MAX                = 4,
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

enum class E*f77d2189bd : uint8_t
{
	*c817f75f22                    = 0,
	*87cca1708c                    = 1,
	*4ebd4540d9                    = 2,
	*e66442fd3d                    = 3,
	*f77d2189bd_MAX                = 4,
};

enum class E*8a533c5eb3 : uint8_t
{
	*e46f014b4a                    = 0,
	*a4b5b4dadb                    = 1,
	*d93758b5b9                    = 2,
	*3e09d113d4                    = 3,
	*9f14af86cd                    = 4,
	*8a533c5eb3_MAX                = 5,
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

enum class E*1e19850900 : uint8_t
{
	*c5a3c1bc33                    = 0,
	*9b5cca52f7                    = 1,
	*4ab1310ff4                    = 2,
	*d58a4b1f18                    = 3,
	*1e19850900_MAX                = 4,
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

