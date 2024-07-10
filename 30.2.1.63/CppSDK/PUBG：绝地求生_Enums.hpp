                                                      /* Create by #FF69B4 */
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

enum class E*14cc30b705 : uint8_t
{
	*ea014bd3c8                    = 0,
	*0ea9175cc5                    = 1,
	*02ac86a11c                    = 2,
	*14cc30b705_MAX                = 3,
};

enum class E*b7a8c732f5 : uint8_t
{
	*4f6733ec28                    = 0,
	*1d52400a9a                    = 1,
	*f2ad55b350                    = 2,
	*b7a8c732f5_MAX                = 3,
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

enum class EFollowMethod : uint8_t
{
	LookAtLocation                 = 0,
	FollowCamera                   = 1,
	FollowPawn                     = 2,
	Stationary                     = 3,
	EFollowMethod_MAX              = 4,
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
	CharacterBehaviorNotFound      = 43,
	TeamsPlantedBomb               = 44,
	ECastCancelReason_MAX          = 45,
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
	DronePackage                   = 11,
	EWeaponAttachmentSlotID_MAX    = 12,
};

enum class E*3df19bc578 : uint8_t
{
	*9beaa7aa60                    = 0,
	*a9972099a5                    = 1,
	*56b55a6b27                    = 2,
	*3df19bc578_MAX                = 3,
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
	Skin_MAX                       = 7,
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
	Damage_DronePackage            = 42,
	Damage_Monster                 = 43,
	Damage_Ability                 = 44,
	Damage_Rotor                   = 45,
	Damage_MotorGlider             = 46,
	Damage_Gun_Penetrate_BRDM      = 47,
	Damage_Explosion_GasPump       = 48,
	Damage_Blizzard                = 49,
	Damage_SandStorm               = 50,
	Damage_CableCarHit             = 51,
	Damage_DropStructHit           = 52,
	Damage_Poision                 = 53,
	Damage_ZombieDash              = 54,
	Damage_StunGun                 = 55,
	Damage_EventWeapon             = 56,
	Damage_MAX                     = 57,
};

enum class E*6293426db6 : uint8_t
{
	*45eead61b6                    = 0,
	*3126bb9846                    = 1,
	*0d7aa1853a                    = 2,
	*6293426db6_MAX                = 3,
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
	Thrown_SpotterScope            = 10,
	Thrown_Drone                   = 11,
	Thrown_BlueChipDetector        = 12,
	Thrown_Toolbox                 = 13,
	Thrown_CanBomb                 = 14,
	Thrown_SpareTire               = 15,
	Thrown_IntegratedRepairKit     = 16,
	Thrown_PlantedBombKit          = 17,
	Thrown_DefusingBombKit         = 18,
	Thrown_Other                   = 19,
	Thrown_StructFlare             = 20,
	Thrown_MAX                     = 21,
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

enum class E*0d24d8c982 : uint8_t
{
	*992255a93d                    = 0,
	*59b1e6a160                    = 1,
	*7903442a9c                    = 2,
	*e278574490                    = 3,
	*b5617b134b                    = 4,
	*2ce77df260                    = 5,
	*b82482be7c                    = 6,
	*eb531d032a                    = 7,
	*e58f6c2384                    = 8,
	*0d24d8c982_MAX                = 9,
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

enum class EPartnerLevel : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Lead                           = 2,
	EPartnerLevel_MAX              = 3,
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
	WhiteZoneRecon                 = 6,
	Selling                        = 7,
	EMarketCategoryType_MAX        = 8,
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

enum class E*c6f263158b : uint8_t
{
	*10a01b990a                    = 0,
	*cbe8c6abb6                    = 1,
	*171ba5c22c                    = 2,
	*b47b346212                    = 3,
	*c6f263158b_MAX                = 4,
};

enum class E*3275318045 : uint8_t
{
	*38ee05f81e                    = 0,
	*935c1d4e41                    = 1,
	*b724f64947                    = 2,
	*ca9b21bcf5                    = 3,
	*3f8a422d6d                    = 4,
	*85e0a2e335                    = 5,
	*23f9b3eb06                    = 6,
	*482ff772ef                    = 7,
	*3275318045_MAX                = 8,
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
	SpeedHack_FakeParachuting      = 2,
	IgnoreWall_Hit                 = 3,
	IgnoreWall_Sight               = 4,
	IgnoreVelocity_Hit             = 5,
	IgnoreVelocity                 = 6,
	IgnoreVelocity2                = 7,
	ItemPackage                    = 8,
	CarePackageMount               = 9,
	Aimbot                         = 10,
	VerifyLagSwitch                = 11,
	InvalidNetConnectionClose      = 12,
	InvalidImpact                  = 13,
	InvalidImpactZ                 = 14,
	InvalidImpact_Gun_C            = 15,
	InvalidOrigin_Gun              = 16,
	InvalidOrigin_Melee            = 17,
	InvalidOrigin_Punch            = 18,
	InvalidOrigin_Throwable        = 19,
	InvalidOrigin_MeleeThrow       = 20,
	InvalidSimStep_MeleeThrow      = 21,
	InvalidRange                   = 22,
	InvalidRange2                  = 23,
	InvalidRange_MeleeThrow        = 24,
	InvalidImpact_Adjusted         = 25,
	InvalidImpactZ_Adjusted        = 26,
	InvalidImpact_Gun_C_Adjusted   = 27,
	InvalidOrigin_Punch_Adjusted   = 28,
	InvalidOrigin_Melee_Adjusted   = 29,
	InvalidOrigin_MeleeThrow_Adjusted = 30,
	InvalidOrigin_Gun_Adjusted     = 31,
	InvalidOrigin_Gun_C_Adjusted   = 32,
	InvalidRange2_Adjusted         = 33,
	InvalidReviving                = 34,
	InvalidKick                    = 35,
	InvalidA0                      = 36,
	InvalidB1                      = 37,
	InvalidB1                      = 38,
	InvalidH0                      = 39,
	InvalidOrigin_Gun_C            = 40,
	InvalidD0                      = 41,
	InvalidS0                      = 42,
	InvalidH1                      = 43,
	InvalidH2                      = 44,
	InvalidH3                      = 45,
	InvalidC0                      = 46,
	InvalidC1                      = 47,
	InvalidC2                      = 48,
	InvalidC3                      = 49,
	InvalidC4                      = 50,
	InvalidC5                      = 51,
	InvalidC6                      = 52,
	InvalidC7                      = 53,
	InvalidT0                      = 54,
	InvalidT1                      = 55,
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
	InvalidItemPickup              = 87,
	InvalidMovementModeInContext   = 88,
	InvalidSkydiveAttack           = 89,
	CHKSUM_PUNCH                   = 90,
	CHKSUM_MELEE                   = 91,
	CHKSUM_A0                      = 92,
	CHKSUM_T0                      = 93,
	CHKSUM_S0                      = 94,
	CHKSUM_D0                      = 95,
	CHKSUM_V0                      = 96,
	CHKSUM_W0                      = 97,
	CHKSUM_T1                      = 98,
	CHKSUM_D1                      = 99,
	CHKSUM_CD                      = 100,
	CHKSUM_LC                      = 101,
	CHKSUM_P0                      = 102,
	CHKSUM_BP                      = 103,
	CHKSUM_G1                      = 104,
	CHKSUM_H2                      = 105,
	CHKSUM_H3                      = 106,
	CHKSUM_UO                      = 107,
	CHKSUM_UF                      = 108,
	VHC_RI                         = 109,
	VHC_MG_FF                      = 110,
	VHC_MG_FC                      = 111,
	VHC_MG_SW                      = 112,
	VHC_MG_OS                      = 113,
	VHC_MG_BC                      = 114,
	VHC_MG_TC                      = 115,
	VHC_MG_PL                      = 116,
	VHC_MG_HL                      = 117,
	VHC_MG_SD                      = 118,
	VHC_MG_AA                      = 119,
	VHC_MG_AV                      = 120,
	VHC_MG_AD                      = 121,
	VHC_MGB_FF                     = 122,
	VHC_MGB_FC                     = 123,
	VHC_MGB_OS                     = 124,
	VHC_MGB_BC                     = 125,
	VHC_MGB_TC                     = 126,
	VHC_MGB_PL                     = 127,
	VHC_MGB_HL                     = 128,
	VHC_MGB_AA                     = 129,
	VHC_MGB_AV                     = 130,
	VHC_MGB_AD                     = 131,
	VHC_MGF_OS                     = 132,
	VHC_MGF_TC                     = 133,
	VHC_MGF_BC                     = 134,
	VHC_MGF_SD                     = 135,
	VHC_MGF_AA                     = 136,
	VHC_MGF_AV                     = 137,
	VHC_KILL                       = 138,
	VHC_ED                         = 139,
	VHC_SERVERSIMUL                = 140,
	VHC_SIMULATION_ACTIVATE        = 141,
	VHC_SIMULATION_DEACTIVATE      = 142,
	VHC_TRY_BYPASS_SERVERSIMUL     = 143,
	VHC_BYPASSED_SERVERSIMUL       = 144,
	VHC_FORCE_SERVERSIMUL          = 145,
	CK_ACTIVATE                    = 146,
	CK_DEACTIVATE                  = 147,
	AntiCheatKick_WallHack         = 148,
	AntiCheatKick_ESP              = 149,
	AntiCheatKick_SpeedHack1       = 150,
	AntiCheatKick_SpeedHack2       = 151,
	AntiCheatKick_SpeedHack3       = 152,
	AntiCheatKick_PLFC             = 153,
	AntiCheatKick_TCFC             = 154,
	AntiCheatKick_HL               = 155,
	AntiCheatKick_OS               = 156,
	AntiCheatKick_FC               = 157,
	AntiCheatKick_SV               = 158,
	VehicleSimulation_PLFC         = 159,
	VehicleSimulation_TCFC         = 160,
	VehicleSimulation_HL           = 161,
	VehicleSimulation_OS           = 162,
	VehicleSimulation_FC           = 163,
	CC_ACTIVATE                    = 164,
	CC_DEACTIVATE                  = 165,
	CC_FORCE_ERROR_CORRECTION      = 166,
	FLC_ACTIVATE                   = 167,
	FLC_DEACTIVATE                 = 168,
	FallingCorrection              = 169,
	VaultingCorrection             = 170,
	QS_AJ                          = 171,
	QS_VZ                          = 172,
	KGB_AF                         = 173,
	ConsoleInputLog                = 174,
	FireInputLog                   = 175,
	ESPLog                         = 176,
	ESPRatioLog                    = 177,
	IsEnabledAntiESP               = 178,
	HighLocationVehicle            = 179,
	HighLocationBoat               = 180,
	UnderLandscapeBoat             = 181,
	UnderLandscapeCharacter        = 182,
	InsideMeshCharacter            = 183,
	BC_BoatCorrection              = 184,
	HBR_InvalidDashDistance        = 185,
	UNC_ACTIVATE                   = 186,
	UNC_DEACTIVATE                 = 187,
	UncAddUserFail                 = 188,
	UncSetUserInfoFail             = 189,
	UncDeleteUserFail              = 190,
	UncGetCookieFail               = 191,
	UncCookieVerifyFail            = 192,
	UncCookieNotRespond            = 193,
	DESP_SelfInfo                  = 194,
	DESP_SelfInvalidCheckSum       = 195,
	DESP_SelfInvalidCount          = 196,
	DESP_RemoteInfo                = 197,
	DESP_RemoteInvalidCheckSum     = 198,
	HitInSmoke                     = 199,
	BoneFocusedShoot               = 200,
	CenterFocusedShoot             = 201,
	Combination_Undefined          = 202,
	Combination_FlyingCar          = 203,
	Combination_InsideMeshAttack   = 204,
	AbnormalMovementPostVaultSpeed = 205,
	AbnormalMovementPostVaultDistance = 206,
	VaultOverLimitDistance         = 207,
	Vehicle_PhysXDisabled          = 208,
	Vehicle_GravityDisabled        = 209,
	MaxCheatType                   = 210,
	ECheatType_MAX                 = 211,
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

enum class ETslLocomotionNodeState : uint8_t
{
	Idle                           = 0,
	Locomotion                     = 1,
	Start                          = 2,
	Stop_Left                      = 3,
	Stop_Right                     = 4,
	Pivot_Left                     = 5,
	Pivot_Right                    = 6,
	FastTurn_Pivot                 = 7,
	ETslLocomotionNodeState_MAX    = 8,
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

enum class E*b0151fc3ce : uint8_t
{
	*19bd713fda                    = 0,
	*1b45c1cc1d                    = 1,
	*0a5bb2fb8b                    = 2,
	*c5931c768d                    = 3,
	*b0151fc3ce_MAX                = 4,
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
	Multislot                      = 17,
	ELobbyItemCategory_MAX         = 18,
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

enum class E*632d34ab3d : uint8_t
{
	*d5fa5fbdbe                    = 0,
	*683710f2cd                    = 1,
	*1818a2e9fb                    = 2,
	*632d34ab3d_MAX                = 3,
};

enum class E*83aeec5084 : uint8_t
{
	*e369bb4926                    = 0,
	*5a9083e126                    = 1,
	*13801482ee                    = 2,
	*9dae31e465                    = 3,
	*7944f73e1f                    = 4,
	*83aeec5084_MAX                = 5,
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

enum class E*cb33c3d21e : uint8_t
{
	*d05958f27f                    = 0,
	*8a253d1372                    = 1,
	*63168bab64                    = 2,
	*cb33c3d21e_MAX                = 3,
};

enum class E*5085c86bf8 : uint8_t
{
	*67cb34ea08                    = 0,
	*f9d4a63bc7                    = 1,
	*9fba640245                    = 2,
	*5085c86bf8_MAX                = 3,
};

enum class E*820d76c261 : uint8_t
{
	*9f0f1838c4                    = 0,
	*53b7f31998                    = 1,
	*01d02dc3ea                    = 2,
	*046c600000                    = 3,
	*820d76c261_MAX                = 4,
};

enum class E*db324dc468 : uint8_t
{
	*4d7318d62c                    = 0,
	*1a126c9e95                    = 1,
	*d12d15475a                    = 2,
	*bc72cf092e                    = 3,
	*58e606254a                    = 4,
	*ded7115c30                    = 5,
	*8d9b1fa5d8                    = 6,
	*412f7a1120                    = 7,
	*b66d5e4e79                    = 8,
	*ff8bc44b65                    = 9,
	*fd0a458cfd                    = 10,
	*ff3a9839b5                    = 11,
	*8c2e98c7db                    = 12,
	*008ba5826a                    = 13,
	*509e01e644                    = 14,
	*41247a1a6f                    = 15,
	*9b89ff83aa                    = 16,
	*ae613c473b                    = 17,
	*34caa0d828                    = 18,
	*42af587ed3                    = 19,
	*9fe5fc8845                    = 20,
	*56caa0a814                    = 21,
	*96aa3d7c4e                    = 22,
	*f14996aeb2                    = 23,
	*49b437b82d                    = 24,
	*95cae1d4a6                    = 25,
	*752bc7054d                    = 26,
	*b9102a947b                    = 27,
	*e97935f678                    = 28,
	*435fb2202b                    = 29,
	*a8bf4768a3                    = 30,
	*a793815fd3                    = 31,
	*2f2ab36e19                    = 32,
	*c17541036a                    = 33,
	*2808010639                    = 34,
	*ef136c7010                    = 35,
	*a2e4588ea7                    = 36,
	*25cdcece26                    = 37,
	*7d34265e13                    = 38,
	*a03176221a                    = 39,
	*2008265715                    = 40,
	*66534c3452                    = 41,
	*cbfec9a787                    = 42,
	*bd3fb64a6c                    = 43,
	*36bff607b0                    = 44,
	*9ab59ad19b                    = 45,
	*971690c40c                    = 46,
	*b7d34a50f7                    = 47,
	*ddd33e53be                    = 48,
	*6f332cdd59                    = 49,
	*eda9a6c356                    = 50,
	*4b5fde94df                    = 51,
	*d43f6cf709                    = 52,
	*a24e866b91                    = 53,
	*271d25a001                    = 54,
	*db324dc468_MAX                = 55,
};

enum class E*94e62ec7cc : uint8_t
{
	*698b9e72ff                    = 0,
	*584ecae608                    = 1,
	*8d64401ea0                    = 2,
	*9dd3601f9f                    = 3,
	*94e62ec7cc_MAX                = 4,
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

enum class EMovementSpamType : uint8_t
{
	LeanRight                      = 0,
	LeanLeft                       = 1,
	Crouch                         = 2,
	EMovementSpamType_MAX          = 3,
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

enum class EPlayerMoveType : uint8_t
{
	OnFoot                         = 0,
	OnSwim                         = 1,
	OnVehicle                      = 2,
	OnParachute                    = 3,
	OnFreefall                     = 4,
	EPlayerMoveType_MAX            = 5,
};

enum class E*2eb70bca0f : uint8_t
{
	*d8c8b5ef82                    = 0,
	*5544bb342a                    = 1,
	*3c7bfa43f0                    = 2,
	*ed7bb08646                    = 3,
	*2eb70bca0f_MAX                = 4,
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
	Bluechip                       = 19,
	ECastableItemType_MAX          = 20,
};

enum class EItemRequestType : uint8_t
{
	None                           = 0,
	Heal                           = 1,
	Ammo                           = 2,
	EItemRequestType_MAX           = 3,
};

enum class EPlayerAuthState : uint8_t
{
	None                           = 0,
	Login                          = 1,
	Logout                         = 2,
	EPlayerAuthState_MAX           = 3,
};

enum class ESpecialZoneAdditionalEffect : uint8_t
{
	RemoveFireAndSmoke             = 0,
	DestructDrone                  = 1,
	DeactivateElecTacticalGear     = 2,
	DeactivateElecWorldObject      = 3,
	DeactivateReticle              = 4,
	DeactivateVehicle              = 5,
	ESpecialZoneAdditionalEffect_MAX = 6,
};

enum class EAliveNumChangeType : uint8_t
{
	None                           = 0,
	Die                            = 1,
	ReviveOrRespawn                = 2,
	EAliveNumChangeType_MAX        = 3,
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

enum class ELastTeamIconState : uint8_t
{
	Normal                         = 0,
	Groggy                         = 1,
	Die                            = 2,
	ELastTeamIconState_MAX         = 3,
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

enum class ELeagueMatchStatistic : uint8_t
{
	Kill                           = 0,
	Damage                         = 1,
	Assist                         = 2,
	ELeagueMatchStatistic_MAX      = 3,
};

enum class ELeagueMatchResultState : uint8_t
{
	None                           = 0,
	WinnerWinnerChickenDinner      = 1,
	Statistic                      = 2,
	Ranking                        = 3,
	ELeagueMatchResultState_MAX    = 4,
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

enum class ETeamMateEmoteErrorType : uint8_t
{
	Normal                         = 0,
	ExcessFollower                 = 1,
	ExcessLimitDistance            = 2,
	ETeamMateEmoteErrorType_MAX    = 3,
};

enum class E*b7090adda3 : uint8_t
{
	*15fc6d21b0                    = 0,
	*022eb857c6                    = 1,
	*4193e8b561                    = 2,
	*b7090adda3_MAX                = 3,
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

enum class E*add3ea2c9c : uint8_t
{
	*b8433351a1                    = 0,
	*69500f4332                    = 1,
	*628738c53a                    = 2,
	*79e4170684                    = 3,
	*fa10c4c024                    = 4,
	*f051d3d167                    = 5,
	*add3ea2c9c_MAX                = 6,
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

enum class E*63596f2329 : uint8_t
{
	*133bbb1521                    = 0,
	*74c8434059                    = 1,
	*3bf8e87fb3                    = 2,
	*63596f2329_MAX                = 3,
};

enum class EStoreItemGroup : uint8_t
{
	None                           = 0,
	ItemGroupA                     = 1,
	ItemGroupB                     = 2,
	ItemGroupC                     = 3,
	EStoreItemGroup_MAX            = 4,
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
	Ringtaw                        = 2,
	Outsider                       = 3,
	RingtawOrOutsider              = 4,
	ERedZoneGenerateType_MAX       = 5,
};

enum class EGameEndState : uint8_t
{
	None                           = 0,
	CereMony                       = 1,
	MatchFinish                    = 2,
	EGameEndState_MAX              = 3,
};

enum class EGamepadInputResponseForTapIconWidget : uint8_t
{
	None                           = 0,
	Hold                           = 1,
	DoubleTap                      = 2,
	EGamepadInputResponseForTapIconWidget_MAX = 3,
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

enum class E*00954d63ea : uint8_t
{
	*fc4be6821b                    = 0,
	*db48a01ec6                    = 1,
	*63087b8d4c                    = 2,
	*385c484431                    = 3,
	*6256194e0b                    = 4,
	*00954d63ea_MAX                = 5,
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

enum class EKeyGuideShowCases : uint8_t
{
	Reload                         = 0,
	ExitVehicle                    = 1,
	EKeyGuideShowCases_MAX         = 2,
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

enum class E*6b031c504a : uint8_t
{
	*1343b06c43                    = 0,
	*76460980b1                    = 1,
	*6b031c504a_MAX                = 2,
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

enum class E*754b530c62 : uint8_t
{
	*4cfb5aa044                    = 0,
	*dfd6dc568e                    = 1,
	*ac95ecc946                    = 2,
	*754b530c62_MAX                = 3,
};

enum class E*dd17c5ed83 : uint8_t
{
	*c7df7b56f5                    = 0,
	*815e38ab04                    = 1,
	*ec4254cf67                    = 2,
	*b2cea0110b                    = 3,
	*a94a196ba7                    = 4,
	*dec26165f6                    = 5,
	*dd17c5ed83_MAX                = 6,
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

enum class E*51e7c38de1 : uint8_t
{
	*b0f520e84c                    = 0,
	*893f56f89c                    = 1,
	*6c8be199f6                    = 2,
	*51e7c38de1_MAX                = 3,
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

enum class E*22c6b9fa4c : uint8_t
{
	*e563657c08                    = 1,
	*5be5bf470c                    = 2,
	*afada6f41e                    = 3,
	*22c6b9fa4c_MAX                = 4,
};

enum class EBlueZoneInductorState : uint8_t
{
	None                           = 0,
	Banned_SafeZoneRecon_ByModeSetting = 1,
	Banned_SafeZoneFlare_ByModeSetting = 2,
	BannedBy_ModeSetting           = 3,
	Banned_SafeZoneRecon_ByOtherInductor = 4,
	Banned_SafeZoneRecon           = 5,
	Banned_SafeZoneFlare_ByOtherInductor = 8,
	Banned_SafeZoneFlare           = 10,
	BannedBy_OtherInductor         = 12,
	Banned_AnyType                 = 15,
	ActiveBy_SafeZoneRecon         = 16,
	ActiveBy_SafeZoneFlare         = 32,
	ActiveBy_MagneticInductor      = 64,
	ActiveBy_AnyReason             = 112,
	EBlueZoneInductorState_MAX     = 113,
};

enum class ECameraViewBehaviour : uint8_t
{
	FpsAndTps                      = 0,
	FpsOnly                        = 1,
	TpsOnly                        = 2,
	ECameraViewBehaviour_MAX       = 3,
};

enum class E*fe73a9a9f3 : uint8_t
{
	*3c745f85ab                    = 0,
	*8f671084c3                    = 1,
	*c8a7999bfc                    = 2,
	*fe73a9a9f3_MAX                = 3,
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

enum class EBuffOverlapSolveMethod : uint8_t
{
	IgnoreLater                    = 0,
	Overwrite                      = 1,
	RestartTimer                   = 2,
	Stack                          = 3,
	EBuffOverlapSolveMethod_MAX    = 4,
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

enum class E*96f4e55bd5 : uint8_t
{
	*46693ffb2e                    = 0,
	*91fcb3db2b                    = 1,
	*4a807da89b                    = 2,
	*7fa13ec6d7                    = 3,
	*bf163dc5cc                    = 4,
	*b58721362f                    = 5,
	*26a07128c4                    = 6,
	*dfb9a13877                    = 7,
	*bbcc94564b                    = 8,
	*96f4e55bd5_MAX                = 9,
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

enum class E*9a478960f1 : uint8_t
{
	*5f69ad14d7                    = 0,
	*8573d37b5a                    = 1,
	*123bb654f0                    = 2,
	*b2af0fcb9e                    = 3,
	*ed9492ed1b                    = 4,
	*9a478960f1_MAX                = 5,
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
	EVehicleSkinCategory_MAX       = 5,
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

enum class ERadioMessageInteractionType : uint8_t
{
	DroppedItem                    = 0,
	Vehicle                        = 1,
	CarepackageOrDeadbox           = 2,
	VendingMachine                 = 3,
	RevivalTower                   = 4,
	Market                         = 5,
	Normal                         = 6,
	None                           = 7,
	ERadioMessageInteractionType_MAX = 8,
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
	AreaNeedHelp                   = 12,
	AreaBackup                     = 13,
	WayPoint                       = 14,
	EmergencyPickup                = 15,
	TeamMateEmote                  = 16,
	Inventory                      = 17,
	PlantingBomb                   = 18,
	DefusingBomb                   = 19,
	MovePlantedBombSite            = 20,
	BombCoin                       = 21,
	Rush                           = 22,
	RewardProvided                 = 23,
	TeamParkourReady               = 24,
	IngameMission                  = 25,
	Max                            = 26,
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

enum class E*783698349e : uint8_t
{
	*852b26d720                    = 0,
	*125bc8b050                    = 1,
	*bc1f9a70a3                    = 2,
	*f8d7ee62b4                    = 3,
	*783698349e_MAX                = 4,
};

enum class EAuxilaryIconType : uint8_t
{
	Invalid                        = 0,
	Drone                          = 1,
	Drone_Destroyed                = 2,
	Detected_Player                = 3,
	Detected_Player_Above          = 4,
	Detected_Player_Below          = 5,
	EAuxilaryIconType_MAX          = 6,
};

enum class E*ea48c40b7e : uint8_t
{
	*ffd17590ef                    = 0,
	*ecd1b5f313                    = 1,
	*09ef584cdb                    = 2,
	*d410352a8c                    = 3,
	*ea48c40b7e_MAX                = 4,
};

enum class E*4f2e52261c : uint8_t
{
	*9d3b0d399d                    = 0,
	*adcfd62aaa                    = 1,
	*e33f5d3783                    = 2,
	*8ffa60ccb2                    = 3,
	*393b8d1233                    = 4,
	*da4fbf7c6c                    = 5,
	*6e17f3a477                    = 6,
	*8ba5dc85ea                    = 7,
	*ea92f851ea                    = 8,
	*ace1b4864f                    = 9,
	*d3813b46c2                    = 10,
	*47eeaa2b2f                    = 11,
	*638c0214c6                    = 12,
	*7fcafa07dd                    = 13,
	*4f2e52261c_MAX                = 14,
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

enum class EKeyHintType : uint8_t
{
	Menu                           = 0,
	Parachuting                    = 1,
	Character                      = 2,
	Driver                         = 3,
	Rider                          = 4,
	WeaponUse                      = 5,
	WeaponChange                   = 6,
	ADS                            = 7,
	Aim                            = 8,
	ADS_8x15x                      = 9,
	ADS_6x                         = 10,
	ADS_1x2x3x                     = 11,
	ADS_CantedSight                = 12,
	ADS_IronSight                  = 13,
	Throwing                       = 14,
	Heal                           = 15,
	Swimming                       = 16,
	TeamSpectating                 = 17,
	KillerSpectating               = 18,
	WorldMap                       = 19,
	None                           = 20,
	FreefallNew                    = 21,
	ParachuteNew                   = 22,
	SpikeTrap                      = 23,
	MotorGlider                    = 24,
	JerryCan                       = 25,
	Melee                          = 26,
	MeleeThrowing                  = 27,
	Other                          = 28,
	EKeyHintType_MAX               = 29,
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

enum class EInventoryListPackageType : uint8_t
{
	CarePackage                    = 0,
	InventoryOrDeathDropPackage    = 1,
	TrunkPackage                   = 2,
	ItemPackage                    = 3,
	Ground                         = 4,
	TacPack                        = 5,
	UnlockableItemPackage          = 6,
	Max                            = 7,
	EInventoryListPackageType_MAX  = 8,
};

enum class EInventorySlotStatePad : uint8_t
{
	Normal                         = 0,
	Focus                          = 1,
	Link                           = 2,
	WeakLink                       = 3,
	Selfput                        = 4,
	Disabled                       = 5,
	EInventorySlotStatePad_MAX     = 6,
};

enum class EInventorySlotType : uint8_t
{
	Vicinity                       = 0,
	Inventory                      = 1,
	Crafting                       = 2,
	Shop                           = 3,
	Equipment                      = 4,
	Weapon                         = 5,
	Max                            = 6,
	EInventorySlotType_MAX         = 7,
};

enum class ECarePackageIconType : uint8_t
{
	Normal                         = 0,
	Flying                         = 1,
	Opened                         = 2,
	ECarePackageIconType_MAX       = 3,
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
	ECharacterIconType_MAX         = 9,
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

enum class ETslWidgetCreationMethod : uint8_t
{
	CreateOnInit                   = 0,
	OnDemand                       = 1,
	OnDemandOnOnlyPC               = 2,
	OnDemandOnOnlyConsole          = 3,
	ETslWidgetCreationMethod_MAX   = 4,
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

enum class EMatchLogRelative : uint8_t
{
	None                           = 0,
	You                            = 1,
	Squad                          = 2,
	Other                          = 3,
	EMatchLogRelative_MAX          = 4,
};

enum class EMatchLogType : uint8_t
{
	None                           = 0,
	KillMessage                    = 1,
	SystemMessage                  = 2,
	EMatchLogType_MAX              = 3,
};

enum class EVivoxResponseState : uint8_t
{
	NotRequested                   = 0,
	Requested                      = 1,
	Fail                           = 2,
	Success                        = 3,
	EVivoxResponseState_MAX        = 4,
};

enum class EVoiceChannelType : uint8_t
{
	None                           = 0,
	All                            = 1,
	GlobalOnly                     = 2,
	TeamOnly                       = 3,
	EVoiceChannelType_MAX          = 4,
};

enum class EVaultStartType : uint8_t
{
	Basic                          = 0,
	AfterUsingAscender             = 1,
	AfterTeamParkourRaising        = 2,
	EVaultStartType_MAX            = 3,
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

enum class E*5e8f3f6f54 : uint8_t
{
	*7ba71a0302                    = 0,
	*9b6b07bee6                    = 1,
	*6c8a97416f                    = 2,
	*c93344b3e4                    = 3,
	*88a2181f1e                    = 4,
	*94c5de4be9                    = 5,
	*682e0b72c0                    = 6,
	*5e8f3f6f54_MAX                = 7,
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
	ETslCharacterType_MAX          = 8,
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

enum class EGamepadHudDataType : uint8_t
{
	EFloat                         = 0,
	EBool                          = 1,
	EFString                       = 2,
	GamepadHudDataType_MAX         = 3,
};

enum class ESandboxConsoleGuideKeyType : uint8_t
{
	None                           = 0,
	ExpandAndClose                 = 1,
	SpawnAndBack                   = 2,
	AdjustAndClose                 = 3,
	ConfirmAndBack                 = 4,
	SpawnAndClose                  = 5,
	ESandboxConsoleGuideKeyType_MAX = 6,
};

enum class ESandboxGroypType : uint8_t
{
	None                           = 0,
	Weapon                         = 1,
	Attachment                     = 2,
	Item                           = 3,
	Vehicle                        = 4,
	Sensitivity                    = 5,
	Power                          = 6,
	Special                        = 7,
	ESandboxGroypType_MAX          = 8,
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
	ESandboxSpecialButtonType_MAX  = 5,
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

enum class E*6118ada6a1 : uint8_t
{
	*cd3964100e                    = 0,
	*64b4e3f006                    = 1,
	*6805fd0a2e                    = 2,
	*9f76aba48b                    = 3,
	*7525f92e51                    = 4,
	*394c271a8a                    = 5,
	*260c1dff19                    = 6,
	*338c2b2e54                    = 7,
	*49d8b038ed                    = 8,
	*6118ada6a1_MAX                = 9,
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
	EAnimatableCustomizableTypes_MAX = 14,
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

enum class E*6d6b986d35 : uint8_t
{
	*3c7b3fc853                    = 0,
	*0f917ec73a                    = 1,
	*b26f90bacd                    = 2,
	*1154303eaf                    = 3,
	*6d6b986d35_MAX                = 4,
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

enum class E*cc73ddc545 : uint8_t
{
	*eae0fcb760                    = 0,
	*1fd43ee327                    = 1,
	*2d9d720ad0                    = 2,
	*2a45552d67                    = 3,
	*e32b044ee2                    = 4,
	*acdced1bad                    = 5,
	*32d46dc9e5                    = 6,
	*cc73ddc545_MAX                = 7,
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

enum class E*b9958d6b65 : uint8_t
{
	*744ea41fbd                    = 0,
	*3f54ade57a                    = 1,
	*86a851832f                    = 2,
	*b9958d6b65_MAX                = 3,
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

enum class ELandingState : uint8_t
{
	None                           = 0,
	Falling                        = 1,
	HeavyFalling                   = 2,
	ExtremeFalling                 = 3,
	FallingRecovery                = 4,
	PostLandingRecovery            = 5,
	ELandingState_MAX              = 6,
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

enum class E*b30d07de59 : uint8_t
{
	*047d6de248                    = 0,
	*097426d107                    = 1,
	*496bbbd5a9                    = 2,
	*b30d07de59_MAX                = 3,
};

enum class EPopupStyle : uint8_t
{
	Ok_Cancel                      = 0,
	Ok                             = 1,
	Yes_No                         = 2,
	Controller_KeyboardMouse       = 3,
	EPopupStyle_MAX                = 4,
};

enum class EKillcamDisplayCode : uint8_t
{
	NotVisible                     = 0,
	OptionDisabled                 = 1,
	Recording                      = 2,
	Playable                       = 3,
	Replay                         = 4,
	FailToLoad                     = 5,
	DemoFailure                    = 6,
	DetectedUnusualMovement        = 7,
	EKillcamDisplayCode_MAX        = 8,
};

enum class EWidgetShowType : uint8_t
{
	Show                           = 0,
	Hide                           = 1,
	Toggle                         = 2,
	EWidgetShowType_MAX            = 3,
};

enum class ERaycastDirection : uint8_t
{
	Forward                        = 0,
	Down_45_Degrees                = 1,
	Down                           = 2,
	ERaycastDirection_MAX          = 3,
};

enum class EObjectType : uint8_t
{
	AnimSpawnObject                = 0,
	PhysicsBody                    = 1,
	EObjectType_MAX                = 2,
};

enum class E*b78c26ff4b : uint8_t
{
	*1c6a007383                    = 0,
	*36abf47937                    = 1,
	*0bbbceeb94                    = 2,
	*c5340691e8                    = 3,
	*ded6b501b3                    = 4,
	*b78c26ff4b_MAX                = 5,
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

enum class E*b970359611 : uint8_t
{
	*fd5dbc0fea                    = 0,
	*a740b57681                    = 1,
	*637efcb18c                    = 2,
	*b970359611_MAX                = 3,
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

enum class E*fefbd4fe4d : uint8_t
{
	*8d46b586f0                    = 0,
	*cd998b9d9a                    = 1,
	*86e4d57f63                    = 2,
	*1c09927a36                    = 3,
	*7158598271                    = 4,
	*adfabb2c47                    = 5,
	*89c277a08f                    = 6,
	*fefbd4fe4d_MAX                = 7,
};

enum class E*0de226a1fd : uint8_t
{
	*6795c76cc6                    = 0,
	*5a7ba6355b                    = 1,
	*d15898509f                    = 2,
	*c1ecd9b2e3                    = 3,
	*de0a6c7cb5                    = 4,
	*0de226a1fd_MAX                = 5,
};

enum class E*be2647990a : uint8_t
{
	*0684fa353e                    = 0,
	*fb3a974a73                    = 1,
	*12cc0d2a6c                    = 2,
	*7479637836                    = 3,
	*be2647990a_MAX                = 4,
};

enum class E*53376a91f3 : uint8_t
{
	*81d0b51854                    = 0,
	*ac16ff71c3                    = 1,
	*3632ef45f5                    = 2,
	*d1eb062ce4                    = 3,
	*cac896f6e1                    = 4,
	*4ebf9b1f9a                    = 5,
	*5af816716c                    = 6,
	*53376a91f3_MAX                = 7,
};

enum class E*4fee5a0711 : uint8_t
{
	*b2a08823da                    = 0,
	*04cfc23486                    = 1,
	*16a5f9fb76                    = 2,
	*a8a51a14a5                    = 3,
	*5339807ec1                    = 4,
	*4fee5a0711_MAX                = 5,
};

enum class E*0fbb946c69 : uint8_t
{
	*35dfb41f52                    = 0,
	*cc6fdfe54d                    = 1,
	*757507f029                    = 2,
	*0fbb946c69_MAX                = 3,
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

enum class E*c7ab295762 : uint8_t
{
	*727e5f0217                    = 0,
	*a94705eccb                    = 1,
	*2c4dc12fdb                    = 2,
	*b41d5f6222                    = 3,
	*7e597f55ae                    = 4,
	*26d27592b0                    = 5,
	*328990baa9                    = 6,
	*a8df3433b5                    = 7,
	*c7ab295762_MAX                = 8,
};

enum class E*b864dd8b86 : uint8_t
{
	*58f2535e24                    = 0,
	*77ec83c9d7                    = 1,
	*6eab4bfac9                    = 2,
	*296abd4108                    = 3,
	*a6c9d766f5                    = 4,
	*b864dd8b86_MAX                = 5,
};

enum class ExtraPlayerLiveState : uint8_t
{
	InDefault                      = 0,
	InPlane                        = 1,
	InParachute                    = 2,
	InVehicle                      = 3,
	InDying                        = 4,
	InDied                         = 5,
	Offline                        = 6,
	ExtraPlayerLiveState_MAX       = 7,
};

enum class E*9125acf682 : uint8_t
{
	*4c0071c4e0                    = 0,
	*8e176a5e0b                    = 1,
	*5662643169                    = 2,
	*9125acf682_MAX                = 3,
};

enum class EAIWeaponShootType : uint8_t
{
	SingleShot                     = 0,
	Auto                           = 1,
	EAIWeaponShootType_MAX         = 2,
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

enum class E*3d7bb00ba9 : uint8_t
{
	*5ea3a36f5d                    = 0,
	*5676d0b264                    = 1,
	*6523460ef6                    = 2,
	*2486275f2d                    = 3,
	*9d6c78a856                    = 4,
	*06876245a0                    = 5,
	*fffbf177dd                    = 6,
	*3d7bb00ba9_MAX                = 7,
};

enum class ECurrentSoundState : uint8_t
{
	None                           = 0,
	MovingUp                       = 1,
	MovingUpSprinting              = 2,
	MovingDown                     = 3,
	MovingDownSprinting            = 4,
	Stopping                       = 5,
	ECurrentSoundState_MAX         = 6,
};

enum class E*b529f34ae3 : uint8_t
{
	*55cc90f4f0                    = 0,
	*098f2647a5                    = 1,
	*2b448b13ff                    = 2,
	*b529f34ae3_MAX                = 3,
};

enum class E*c3c47fa2a5 : uint8_t
{
	*a48d7a83c0                    = 0,
	*0c1782ef55                    = 1,
	*334b7fb9cb                    = 2,
	*63b36e8e01                    = 3,
	*c3c47fa2a5_MAX                = 4,
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
	BluezonePhyase                 = 2,
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

enum class ETeamModeType : uint8_t
{
	Solo                           = 1,
	Duo                            = 2,
	Squad                          = 4,
	ETeamModeType_MAX              = 5,
};

enum class E*24c958ba5f : uint8_t
{
	*d04927ea31                    = 0,
	*43e8e80d62                    = 1,
	*0dfcb4da23                    = 2,
	*e364a3f08e                    = 3,
	*a06de48799                    = 4,
	*c60c93a503                    = 5,
	*24c958ba5f_MAX                = 6,
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

enum class EAIAliveState : uint8_t
{
	Alive                          = 0,
	Groggy                         = 1,
	Dead                           = 2,
	EAIAliveState_MAX              = 3,
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

enum class EPrepareType : uint8_t
{
	StopMovement                   = 0,
	MoveRandomLoc                  = 1,
	ThrowToy                       = 2,
	TypeEnd                        = 3,
	EPrepareType_MAX               = 4,
};

enum class EAIBehaviors : uint8_t
{
	Normal                         = 0,
	Chasing                        = 1,
	Runaway                        = 2,
	EAIBehaviors_MAX               = 3,
};

enum class ERightMoveDirection : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Stop                           = 2,
	ERightMoveDirection_MAX        = 3,
};

enum class EForwardMoveDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	Stop                           = 2,
	EForwardMoveDirection_MAX      = 3,
};

enum class EUltronWithCircle : uint8_t
{
	InWhiteCircle                  = 0,
	InBlueCircle                   = 1,
	OutBlueCircle                  = 2,
	MaxNum                         = 3,
	EUltronWithCircle_MAX          = 4,
};

enum class EComparisonTargetCircle : uint8_t
{
	WhiteCircle                    = 0,
	BlueCircle                     = 1,
	EComparisonTargetCircle_MAX    = 2,
};

enum class ETurnDirection : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Stop                           = 2,
	ETurnDirection_MAX             = 3,
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

enum class EThrowablePoseState_AI : uint8_t
{
	Idle                           = 0,
	PinOffStart                    = 1,
	Cooking                        = 2,
	WaitForThrow                   = 3,
	Throwing                       = 4,
	EThrowablePoseState_MAX        = 5,
};

enum class EPatrolSpeed : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	EPatrolSpeed_MAX               = 3,
};

enum class E*d59afa0a4e : uint8_t
{
	*7e04f25e27                    = 0,
	*e4394a5368                    = 1,
	*f060eb5379                    = 2,
	*d21b7b3129                    = 3,
	*d59afa0a4e_MAX                = 4,
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

enum class EThownWeapon : uint8_t
{
	GRENADE                        = 0,
	MOLOTOV                        = 1,
	SMOKEBOMB                      = 2,
	FLASHBANG                      = 3,
	EThownWeapon_MAX               = 4,
};

enum class EThrowablePoseState : uint8_t
{
	Idle                           = 0,
	PinOffStart                    = 1,
	Cooking                        = 2,
	WaitForThrow                   = 3,
	Throwing                       = 4,
	EThrowablePoseState_MAX        = 5,
};

enum class EBoosterItem : uint8_t
{
	ADRENALINE                     = 0,
	PAINKILLER                     = 1,
	ENERGYDRINK                    = 2,
	EBoosterItem_MAX               = 3,
};

enum class E*bfd82f5fc2 : uint8_t
{
	*e4464c6153                    = 0,
	*d1dda21343                    = 1,
	*ece58a3269                    = 2,
	*d1038e5fa4                    = 3,
	*d9f398df20                    = 4,
	*bfd82f5fc2_MAX                = 5,
};

enum class EFightMovingType : uint8_t
{
	FM_Target                      = 0,
	FM_TargetPos                   = 1,
	FM_RandomPos                   = 2,
	FM_Max                         = 3,
};

enum class EMonsterPatrol : uint8_t
{
	Patrol_BackDomain              = 0,
	Patrol_Flee                    = 1,
	Patrol_RunawayHouse            = 2,
	Patrol_SpawnSpot               = 3,
	Patrol_Hearing                 = 4,
	Patrol_Random                  = 5,
	Patrol_Max                     = 6,
};

enum class E*91017a3b24 : uint8_t
{
	*fafbd5825e                    = 0,
	*a033f72d1b                    = 1,
	*dadb920e24                    = 2,
	*c4d20d16ef                    = 3,
	*0d0c870285                    = 4,
	*91017a3b24_MAX                = 5,
};

enum class E*d01906839f : uint8_t
{
	*c82eb16fda                    = 0,
	*9518acb7d9                    = 1,
	*9265ec1c66                    = 2,
	*a02245c705                    = 3,
	*afe60090c0                    = 4,
	*d01906839f_MAX                = 5,
};

enum class E*1d37cd9021 : uint8_t
{
	*c67c7586da                    = 0,
	*1dcb26af85                    = 1,
	*35304845ca                    = 2,
	*ba28290d06                    = 3,
	*1d37cd9021_MAX                = 4,
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

enum class E*db20c0621d : uint8_t
{
	*cb1392a372                    = 0,
	*05677cce19                    = 1,
	*ac4377ac15                    = 2,
	*b098c6f277                    = 3,
	*db20c0621d_MAX                = 4,
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

enum class ELobbyItemStateFlags : uint8_t
{
	Default                        = 0,
	Vehicle_DoorOpened             = 1,
	ELobbyItemStateFlags_MAX       = 2,
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

enum class E*1696a05322 : uint8_t
{
	*849883cd4b                    = 0,
	*128d289989                    = 1,
	*b108190a93                    = 2,
	*74f26356ec                    = 3,
	*4fd6b8b1c1                    = 16,
	*c6d6b5b92f                    = 17,
	*a757142d87                    = 18,
	*16ee4bea2a                    = 19,
	*92566fe107                    = 32,
	*2e09ffdd07                    = 33,
	*e2488ba1ae                    = 34,
	*228c1c1633                    = 35,
	*cb110b4baa                    = 36,
	*1696a05322_MAX                = 37,
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

enum class E*c17d950f2a : uint8_t
{
	*d5a5b8b512                    = 0,
	*b5ca277d33                    = 1,
	*226a8e1456                    = 2,
	*03e9990759                    = 3,
	*bf5fd5b73c                    = 4,
	*c17d950f2a_MAX                = 5,
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

enum class E*d9ba8b1ee2 : uint8_t
{
	*e483b94026                    = 0,
	*71729847c3                    = 1,
	*536aae4b80                    = 2,
	*d9ba8b1ee2_MAX                = 3,
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

enum class EVoiceInterfaceType : uint8_t
{
	VIVOX                          = 0,
	XIM                            = 1,
	GVOICE                         = 2,
	EVoiceInterfaceType_MAX        = 3,
};

enum class EVoiceTransmissionType : uint8_t
{
	None                           = 0,
	ToAll                          = 1,
	ToChannel                      = 2,
	EVoiceTransmissionType_MAX     = 3,
};

enum class EVoiceChannelJoinState : uint8_t
{
	NotJoined                      = 0,
	Joining                        = 1,
	Leaving                        = 2,
	Joined                         = 3,
	EVoiceChannelJoinState_MAX     = 4,
};

enum class EVoiceLoginState : uint8_t
{
	NotLoggedin                    = 0,
	Loggingin                      = 1,
	Loggedin                       = 2,
	EVoiceLoginState_MAX           = 3,
};

enum class EVoiceConnectionState : uint8_t
{
	NotConnected                   = 0,
	Connecting                     = 1,
	Connected                      = 2,
	EVoiceConnectionState_MAX      = 3,
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

enum class EeDESPMode : uint8_t
{
	None                           = 0,
	UniformDivision                = 1,
	RadiusFromCenter               = 2,
	eDESPMode_MAX                  = 3,
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
	EInteractInputType_MAX         = 3,
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

enum class E*5887d3c94b : uint8_t
{
	*dedefa5bf5                    = 0,
	*c6e2849d6d                    = 1,
	*c2a432d1e4                    = 2,
	*e4f953cb46                    = 3,
	*5887d3c94b_MAX                = 4,
};

enum class ECharacterInteractBehaviorType : uint8_t
{
	None                           = 0,
	ExtraSlotForMode               = 1,
	Revive                         = 2,
	BodyCarry                      = 3,
	TraumaBag                      = 4,
	InstantRevivalKit              = 5,
	TeamEmote                      = 6,
	ItemRequest                    = 7,
	RepairKit                      = 8,
	TeamParkour                    = 9,
	ECharacterInteractBehaviorType_MAX = 10,
};

enum class EInteractionPhase : uint8_t
{
	First                          = 0,
	Second                         = 1,
	EInteractionPhase_MAX          = 2,
};

enum class ETdmSpawnKit : int32_t
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

enum class EThreatType : uint8_t
{
	Damage                         = 0,
	Sight                          = 1,
	Noise                          = 2,
	EThreatType_MAX                = 3,
};

enum class ELobbyLinkState : uint8_t
{
	Disconnect                     = 0,
	WaitInitialize                 = 1,
	WaitStart                      = 2,
	Gaming                         = 3,
	Finished                       = 4,
	ELobbyLinkState_MAX            = 5,
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

enum class E*7ed08fbd61 : int32_t
{
	*288893338d                    = 0,
	*a2ba27e783                    = 1,
	*3c2c6acd7e                    = 2,
	*89217cfd49                    = 3,
	*7ed08fbd61_MAX                = 4,
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

enum class EPathDebugType : int32_t
{
	None                           = 0,
	Location                       = 1,
	SelectNpc                      = 2,
	EPathDebugType_MAX             = 3,
};

enum class E*3ee9da9e04 : uint8_t
{
	*58258f85cb                    = 0,
	*3afb9a9b6d                    = 1,
	*ffeb0f8758                    = 2,
	*c0cde47372                    = 3,
	*5e9a3c73e9                    = 4,
	*3ee9da9e04_MAX                = 5,
};

enum class E*49e1cc638b : uint8_t
{
	*37dcba9784                    = 0,
	*8ed5eb509c                    = 1,
	*31f2898bff                    = 2,
	*ad0a9f8bf7                    = 3,
	*49e1cc638b_MAX                = 4,
};

enum class E*facb46e083 : uint8_t
{
	*337085b8f4                    = 0,
	*931d7dbd92                    = 1,
	*60447bf961                    = 2,
	*5598c9d369                    = 3,
	*facb46e083_MAX                = 4,
};

enum class E*901cb1bb0b : uint8_t
{
	*dfc1c8f728                    = 0,
	*e66caf16f5                    = 1,
	*bdf3b0969a                    = 2,
	*ae6dce4f71                    = 3,
	*901cb1bb0b_MAX                = 4,
};

enum class E*9ac3c43aa6 : uint8_t
{
	*57b1d3e62b                    = 0,
	*ec622b4d0c                    = 1,
	*b9accbc395                    = 2,
	*b8a4cb450d                    = 3,
	*9ac3c43aa6_MAX                = 4,
};

enum class E*cf75fe9cd4 : uint8_t
{
	*e24678b2f8                    = 0,
	*cd035ff347                    = 1,
	*b158232be8                    = 2,
	*62a0445f44                    = 3,
	*cf75fe9cd4_MAX                = 4,
};

enum class ETargetInteractionPurpose : int32_t
{
	Move                           = 0,
	Reset                          = 1,
	ETargetInteractionPurpose_MAX  = 2,
};

enum class ESeatDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	Left                           = 2,
	Right                          = 3,
	ESeatDirection_MAX             = 4,
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

enum class E*9917098322 : uint8_t
{
	*283847208c                    = 0,
	*0c1f585f27                    = 1,
	*9713806714                    = 2,
	*81dc58c5d8                    = 3,
	*e26faef6f9                    = 4,
	*524da4eef4                    = 5,
	*d7c5c56f3c                    = 6,
	*8d45d0485e                    = 7,
	*9917098322_MAX                = 8,
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

enum class E*ea84a20050 : uint8_t
{
	*9c7856eeff                    = 0,
	*1b5bf091b0                    = 1,
	*d527ae081d                    = 2,
	*dd53a524fa                    = 3,
	*ea84a20050_MAX                = 4,
};

enum class E*a8a193544e : uint8_t
{
	*2f3f2e2140                    = 0,
	*346f99d0a2                    = 1,
	*039b2484a8                    = 2,
	*e2ec3c1e49                    = 3,
	*a8a193544e_MAX                = 4,
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

enum class E*6a6b3c5358 : uint8_t
{
	*383f466070                    = 0,
	*18820c518e                    = 1,
	*9a47181278                    = 2,
	*6a6b3c5358_MAX                = 3,
};

enum class ELastMoveTask : uint8_t
{
	MoveTo                         = 0,
	MoveDirectlyToward             = 1,
	ELastMoveTask_MAX              = 2,
};

enum class EEjectAllowed : uint8_t
{
	NotAllowed                     = 0,
	Waiting                        = 1,
	Allowed                        = 2,
	EEjectAllowed_MAX              = 3,
};

enum class ECompareTeamDist : uint8_t
{
	CurDest                        = 0,
	FinalDest                      = 1,
	SafeZone                       = 2,
	ECompareTeamDist_MAX           = 3,
};

enum class E*13ddbab4a3 : uint8_t
{
	*33395bd731                    = 0,
	*8c25eba713                    = 1,
	*ff0e24550b                    = 2,
	*13ddbab4a3_MAX                = 3,
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

enum class E*b54a2ac5fd : uint8_t
{
	*b86ce227e2                    = 0,
	*de188cf3f0                    = 1,
	*b54a2ac5fd_MAX                = 2,
};

enum class E*c7fa4c6fab : uint8_t
{
	*70e3c8d303                    = 0,
	*7065e727d7                    = 1,
	*1ed96b6079                    = 2,
	*bf36c2eb26                    = 3,
	*5ea090b2a0                    = 4,
	*ad7bf166eb                    = 5,
	*e558472faa                    = 6,
	*55c5dcd36b                    = 7,
	*ad05cb7aeb                    = 8,
	*8f84b35fe7                    = 9,
	*ef45170b28                    = 10,
	*0e716a3ea7                    = 11,
	*15f7cf705c                    = 12,
	*c7fa4c6fab_MAX                = 13,
};

enum class E*a1f4526f7d : uint8_t
{
	*3b5b3fdc35                    = 0,
	*7574c6ae7d                    = 1,
	*3ca7968342                    = 2,
	*37296f502e                    = 3,
	*a1f4526f7d_MAX                = 4,
};

enum class E*af5a08811b : uint8_t
{
	*a928783c7c                    = 0,
	*da14819349                    = 1,
	*7cecf064c8                    = 2,
	*ec867f252b                    = 3,
	*35eec93335                    = 4,
	*cba5167b1b                    = 5,
	*af5a08811b_MAX                = 6,
};

enum class EVehicleEngineState : uint8_t
{
	EEngineStateAutoOff            = 0,
	EEngineStateAutoOn             = 1,
	EEngineStateManualOff          = 2,
	EEngineStateManualOn           = 3,
	EVehicleEngineState_MAX        = 4,
};

enum class E*616201671f : uint8_t
{
	*eca06c1d1a                    = 0,
	*4e007f99c3                    = 1,
	*37a7080ee4                    = 2,
	*4c8c943dd1                    = 3,
	*8043e8ff3c                    = 4,
	*616201671f_MAX                = 5,
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

enum class EDroneOperationalState : uint8_t
{
	INVALID                        = 0,
	ENABLED_ENUM_START             = 1,
	ENABLED                        = 2,
	ENABLED_CONTROLLED             = 3,
	ENABLED_RETURNING_TO_OWNER     = 4,
	ENABLED_ENUM_END               = 5,
	DISABLED_ENUM_START            = 6,
	DISABLED                       = 7,
	DISABLED_IN_WATER              = 8,
	DISABLED_DESTROYED             = 9,
	DISABLED_ENUM_END              = 10,
	COUNT                          = 11,
	EDroneOperationalState_MAX     = 12,
};

enum class EDroneState : uint8_t
{
	INVALID                        = 0,
	STOWED                         = 1,
	STOWING                        = 2,
	PICK_UP                        = 3,
	EQUIPPING                      = 4,
	EQUIPPED                       = 5,
	DEPLOYED                       = 6,
	COUNT                          = 7,
	EDroneState_MAX                = 8,
};

enum class E*bf11981140 : uint8_t
{
	*c2daf85e86                    = 0,
	*8287385d1c                    = 1,
	*950a17cb0c                    = 2,
	*72b1924917                    = 3,
	*bf11981140_MAX                = 4,
};

enum class ELivingThingState : uint8_t
{
	Idle                           = 0,
	Alert                          = 1,
	Dead                           = 2,
	Max                            = 3,
	ELivingThingState_MAX          = 4,
};

enum class E*f5045472a0 : uint8_t
{
	*cb23b0394d                    = 0,
	*33426cd7e0                    = 1,
	*5a40ed9fc8                    = 2,
	*f5045472a0_MAX                = 3,
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

enum class E*ed597f22f4 : uint8_t
{
	*9ee1a152dc                    = 0,
	*edf13b43ca                    = 1,
	*ab191fbd88                    = 2,
	*ed597f22f4_MAX                = 3,
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

enum class EEffectSpreadState : uint8_t
{
	ESS_InitialTrace               = 0,
	ESS_InitialProcess             = 1,
	ESS_Spreading                  = 2,
	ESS_SpreadDone                 = 3,
	ESS_Ending                     = 4,
	ESS_MAX                        = 5,
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

enum class ETslBlackZoneState : uint8_t
{
	BZ_WaitingForMatchStart        = 0,
	BZ_SelectNewBlackZone          = 1,
	BZ_BeginStrike                 = 2,
	BZ_FireMisile                  = 3,
	BZ_EndBombing                  = 4,
	BZ_MAX                         = 5,
};

enum class E*ff31ccdf88 : uint8_t
{
	*64845936ba                    = 0,
	*0e98de331d                    = 1,
	*3826df5a59                    = 2,
	*0640553f44                    = 3,
	*81a7444527                    = 4,
	*ff31ccdf88_MAX                = 5,
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

enum class EMarketShopUINotifyType : uint8_t
{
	None                           = 0,
	InsufficientSpace              = 1,
	Sold                           = 2,
	Obtained                       = 3,
	MAX                            = 4,
	EMarketShopUINotifyType_MAX    = 5,
};

enum class EMarketUITuningPhase : uint8_t
{
	None                           = 0,
	init                           = 1,
	PlayingAnim                    = 2,
	Done                           = 3,
	Empty                          = 4,
	NotEnoughCoin                  = 5,
	MAX                            = 6,
	EMarketUITuningPhase_MAX       = 7,
};

enum class EMarketUIRandomPhase : uint8_t
{
	None                           = 0,
	Reset                          = 1,
	PlayingAnim                    = 2,
	Result                         = 3,
	MAX                            = 4,
	EMarketUIRandomPhase_MAX       = 5,
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

enum class EVoiceChatChannel : uint8_t
{
	All                            = 0,
	TeamOnly                       = 1,
	None                           = 2,
	MAX                            = 3,
	EVoiceChatChannel_MAX          = 4,
};

enum class EVoiceInputMode_Console : uint8_t
{
	OpenMic                        = 0,
	Disable                        = 1,
	MAX                            = 2,
	EVoiceInputMode_MAX            = 3,
};

enum class EVoiceInputMode_PC : uint8_t
{
	OpenMic                        = 0,
	PushToTalk                     = 1,
	Toggle                         = 2,
	Disable                        = 3,
	MAX                            = 4,
	EVoiceInputMode_MAX            = 5,
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

enum class ETrainingInfoType : uint8_t
{
	Latest                         = 0,
	Best                           = 1,
	ETrainingInfoType_MAX          = 2,
};

enum class ETrainingPracticeType : uint8_t
{
	None                           = 0,
	Practice_Aim                   = 1,
	Practice_Sound                 = 2,
	ETrainingPracticeType_MAX      = 3,
};

enum class ETrainingDashboardRange : uint8_t
{
	None                           = 0,
	Range10                        = 10,
	Range50                        = 50,
	Range100                       = 100,
	ETrainingDashboardRange_MAX    = 101,
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

enum class EOneOnOneStageType : uint8_t
{
	None                           = 0,
	Arena                          = 1,
	Audience                       = 2,
	EOneOnOneStageType_MAX         = 3,
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

enum class EGasPumpLogType : uint8_t
{
	StartFueling                   = 0,
	CompleteFueling                = 1,
	CancelFuelingFull              = 2,
	Explode                        = 3,
	EGasPumpLogType_MAX            = 4,
};

enum class EGasPumpState : uint8_t
{
	Inactive                       = 0,
	StartFueling                   = 1,
	StopFueling                    = 2,
	StopFuelingFull                = 3,
	EGasPumpState_MAX              = 4,
};

enum class ETslHelperInputActionType : uint8_t
{
	DPad                           = 0,
	Shoulder                       = 1,
	Face                           = 2,
	Keyboard                       = 3,
	ETslHelperInputActionType_MAX  = 4,
};

enum class E*a7d5caa6de : uint8_t
{
	*04f3667ff8                    = 0,
	*dfa0e2f20b                    = 1,
	*80c19a03d9                    = 2,
	*a7d5caa6de_MAX                = 3,
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
	SafeZone                       = 3,
	ETslIngameMissionCondition_MAX = 4,
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

enum class E*ee40732373 : uint8_t
{
	*65140a3703                    = 0,
	*672f1db7bc                    = 1,
	*a6a75249db                    = 2,
	*ee40732373_MAX                = 3,
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

enum class E*faf51f0460 : uint8_t
{
	*da536d88e6                    = 0,
	*0eaf3aef96                    = 1,
	*e6344081bd                    = 2,
	*7865f69bdb                    = 3,
	*faf51f0460_MAX                = 4,
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
	Ready                          = 0,
	NotReady                       = 1,
	ReadyToNotReady                = 2,
	NotReadyToReady                = 3,
	EmoteToReady                   = 4,
	EmoteToNotReady                = 5,
	ELobbyCharacterReadyType_MAX   = 6,
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

enum class EMovementActionType : uint8_t
{
	None                           = 0,
	Walk                           = 1,
	Run                            = 2,
	Sprint                         = 3,
	EMovementActionType_MAX        = 4,
};

enum class EMovementType : uint8_t
{
	M_StandWalk                    = 0,
	M_StandRun                     = 1,
	M_StandSprint                  = 2,
	M_CrouchWalk                   = 3,
	M_CrouchRun                    = 4,
	M_CrouchSprint                 = 5,
	M_ProneWalk                    = 6,
	M_ProneRun                     = 7,
	M_ProneSprint                  = 8,
	M_StandScope                   = 9,
	M_CrouchScope                  = 10,
	M_ProneScope                   = 11,
	M_StandAim                     = 12,
	M_CrouchAim                    = 13,
	M_ProneAim                     = 14,
	M_Swim                         = 15,
	M_UnderwaterSwim               = 16,
	M_DBNO                         = 17,
	Count                          = 18,
	EMovementType_MAX              = 19,
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

enum class ECustomDamageZoneType : uint8_t
{
	Head                           = 0,
	UpperBody                      = 1,
	LowerBody                      = 2,
	Arms                           = 3,
	Legs                           = 4,
	ECustomDamageZoneType_MAX      = 5,
};

enum class ECustomDamageWeaponClass : uint8_t
{
	Bullet                         = 0,
	Melee                          = 1,
	ECustomDamageWeaponClass_MAX   = 2,
};

enum class E*9f40daeb3b : uint8_t
{
	*0eaa7cfda0                    = 0,
	*2c4d6cf938                    = 1,
	*7737d8f393                    = 2,
	*b6998cde74                    = 3,
	*2385fc5caf                    = 4,
	*9f40daeb3b_MAX                = 5,
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

enum class E*bb792e0064 : uint8_t
{
	*f1197ec570                    = 0,
	*bfe6049434                    = 1,
	*39273009e6                    = 2,
	*bb792e0064_MAX                = 3,
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

enum class ETslReferenceObjType : uint8_t
{
	GameMode                       = 0,
	Character                      = 1,
	Preload                        = 2,
	ETslReferenceObjType_MAX       = 3,
};

enum class E*5a1c5f8a75 : uint8_t
{
	*3ec8d42a03                    = 0,
	*4b36d6c8a0                    = 1,
	*af259a09e5                    = 2,
	*5c858e6857                    = 3,
	*cbf687374a                    = 4,
	*5a1c5f8a75_MAX                = 5,
};

enum class E*bc89f49292 : uint8_t
{
	*a8f3430012                    = 0,
	*419e0adb96                    = 1,
	*9a2dec4359                    = 2,
	*84959aef39                    = 3,
	*bc89f49292_MAX                = 4,
};

enum class ESoftRoleState : uint8_t
{
	Open                           = 0,
	Closed                         = 1,
	Inspect                        = 2,
	ESoftRoleState_MAX             = 3,
};

enum class ESandStormSoundType : uint8_t
{
	None                           = 0,
	StartSound                     = 1,
	LoopSound                      = 2,
	InSound                        = 3,
	OutSound                       = 4,
	ESandStormSoundType_MAX        = 5,
};

enum class E*f122f54d3f : uint8_t
{
	*52e34bb837                    = 0,
	*8f1e841678                    = 1,
	*f004107b86                    = 2,
	*7b867df6ab                    = 3,
	*6025ce5fa5                    = 4,
	*f122f54d3f_MAX                = 5,
};

enum class E*6fb63f234e : uint8_t
{
	*0839ad302b                    = 0,
	*52c8d02411                    = 1,
	*5e5cdbd95d                    = 2,
	*639893cf86                    = 3,
	*c209a0911e                    = 4,
	*9a07d0b79a                    = 5,
	*9caba75b43                    = 6,
	*7399c54157                    = 7,
	*4cc30b653c                    = 8,
	*d5385d619b                    = 9,
	*1a3045490c                    = 10,
	*6fb63f234e_MAX                = 11,
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

enum class E*7089994665 : uint8_t
{
	*32b57927ab                    = 0,
	*4f9bcc4820                    = 1,
	*91506c0662                    = 2,
	*e2e00a22d9                    = 3,
	*7089994665_MAX                = 4,
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

enum class EControllerImageType : uint8_t
{
	XboxOne                        = 0,
	PS4                            = 1,
	None                           = 2,
	EControllerImageType_MAX       = 3,
};

enum class EBinaryStepperType : uint8_t
{
	OFF                            = 0,
	ON                             = 1,
	EBinaryStepperType_MAX         = 2,
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

enum class EEmotePlayViewType : uint8_t
{
	Disable                        = 0,
	TeamMate_Enable                = 1,
	Interaction_Enable             = 2,
	EEmotePlayViewType_MAX         = 3,
};

enum class E*8f8fb007e3 : uint8_t
{
	*45fc337f68                    = 0,
	*5fa124ca7b                    = 1,
	*9a086bc2fa                    = 2,
	*2472e806de                    = 3,
	*8f8fb007e3_MAX                = 4,
};

enum class EBluezoneState : uint8_t
{
	Wait                           = 0,
	Release                        = 1,
	NoRestrict                     = 2,
	EBluezoneState_MAX             = 3,
};

enum class EMinimapFocus : uint8_t
{
	CharacterFocus                 = 0,
	NextPlayzoneFocus              = 1,
	None                           = 2,
	EMinimapFocus_MAX              = 3,
};

enum class EStatInfoType : uint8_t
{
	Kill                           = 0,
	Damage                         = 1,
	Assist                         = 2,
	EStatInfoType_MAX              = 3,
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

enum class EConsoleHitDirections : uint8_t
{
	None                           = 0,
	Front_Right                    = 1,
	Front_Left                     = 2,
	Rear                           = 3,
	EConsoleHitDirections_MAX      = 4,
};

enum class EPresetNumSlotState : uint8_t
{
	Normal                         = 0,
	Focus                          = 1,
	Select                         = 2,
	Lock                           = 3,
	Disable                        = 4,
	FocusConsole                   = 5,
	SelectFocus                    = 6,
	SelectFocusConsole             = 7,
	EPresetNumSlotState_MAX        = 8,
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

enum class ELeaningState : uint8_t
{
	Normal                         = 0,
	LeanLeft                       = 1,
	LeanRight                      = 2,
	ELeaningState_MAX              = 3,
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

enum class E*872cdd4107 : uint8_t
{
	*81793f4b76                    = 0,
	*1457b8b897                    = 1,
	*3889a2fbc1                    = 2,
	*03f8a4fc97                    = 3,
	*7b5e6806d3                    = 4,
	*e60a3e43b8                    = 5,
	*a27c2a66f5                    = 6,
	*564748ecd2                    = 7,
	*50b5083499                    = 8,
	*d6ef1e67d1                    = 9,
	*872cdd4107_MAX                = 10,
};

enum class E*e7a1b3d4d4 : uint8_t
{
	*0d1384a018                    = 0,
	*d989ae2d4b                    = 1,
	*8c5f8457de                    = 2,
	*0b81ea6b9e                    = 3,
	*e7a1b3d4d4_MAX                = 4,
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

enum class E*f306e103c1 : uint8_t
{
	*1678eb5e72                    = 0,
	*eff568476d                    = 1,
	*3b238e7bb9                    = 2,
	*f306e103c1_MAX                = 3,
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

enum class EWeaponAbilityType : uint8_t
{
	None                           = 0,
	Digging                        = 1,
	EWeaponAbilityType_MAX         = 2,
};

enum class E*2d254d6dd6 : uint8_t
{
	*6862b696fc                    = 0,
	*3c8bf52425                    = 1,
	*bdfa65e767                    = 2,
	*2d254d6dd6_MAX                = 3,
};

enum class EInfoPointType : uint8_t
{
	InfoPoint                      = 0,
	ObjectPoint                    = 1,
	SafePoint                      = 2,
	BeachPoint                     = 4,
	EInfoPointType_MAX             = 5,
};

enum class EBlendSequenceByBoolStartType : int32_t
{
	Restart                        = 0,
	SameTime                       = 1,
	EBlendSequenceByBoolStartType_MAX = 2,
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

enum class E*d3b085a79d : uint8_t
{
	*7e30a2da52                    = 0,
	*e2fcbe0941                    = 1,
	*3423511fe4                    = 2,
	*bc33a69573                    = 3,
	*69efc4ff39                    = 4,
	*d3b085a79d_MAX                = 5,
};

enum class E*e8d13b4cf4 : uint8_t
{
	*c3a1131b69                    = 0,
	*b21601b644                    = 1,
	*7234d31805                    = 2,
	*7524a85cc4                    = 3,
	*2988560adb                    = 4,
	*bc4db797c8                    = 5,
	*0222e63f42                    = 6,
	*e8d13b4cf4_MAX                = 7,
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

enum class EMoveComponentAction : uint8_t
{
	Move                           = 0,
	Stop                           = 1,
	Return                         = 2,
	EMoveComponentAction_MAX       = 3,
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

enum class E*aa6c64042e : uint8_t
{
	*4db246f5b8                    = 0,
	*2b2485c7bb                    = 1,
	*8d0066343c                    = 2,
	*aa6c64042e_MAX                = 3,
};

enum class EAttachLocation : uint8_t
{
	KeepRelativeOffset             = 0,
	KeepWorldPosition              = 1,
	SnapToTarget                   = 2,
	SnapToTargetIncludingScale     = 3,
	EAttachLocation_MAX            = 4,
};

enum class EAttachmentRule : uint8_t
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	SnapToTarget                   = 2,
	EAttachmentRule_MAX            = 3,
};

enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4,
};

enum class E*63e51533b3 : uint8_t
{
	*25d56f1925                    = 0,
	*7d73327825                    = 1,
	*8e86900621                    = 2,
	*7686b987e2                    = 3,
	*63e51533b3_MAX                = 4,
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

enum class EActorUpdateOverlapsMethod : uint8_t
{
	UseConfigDefault               = 0,
	AlwaysUpdate                   = 1,
	OnlyUpdateMovable              = 2,
	NeverUpdate                    = 3,
	EActorUpdateOverlapsMethod_MAX = 4,
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

enum class E*7fb57db637 : uint8_t
{
	*3ae8e1aea1                    = 0,
	*74055ad1b9                    = 1,
	*cd2eb51353                    = 2,
	*7fb57db637_MAX                = 3,
};

enum class E*1b6267fff9 : uint8_t
{
	*2d41d249c3                    = 0,
	*6a80d62c4c                    = 1,
	*ffcd3358b6                    = 2,
	*883c0bbfe6                    = 3,
	*1b6267fff9_MAX                = 4,
};

enum class EAutoPossessAI : uint8_t
{
	Disabled                       = 0,
	PlacedInWorld                  = 1,
	Spawned                        = 2,
	PlacedInWorldOrSpawned         = 3,
	EAutoPossessAI_MAX             = 4,
};

enum class E*2b5bce847f : uint8_t
{
	*a6a3be2492                    = 0,
	*46417145ae                    = 1,
	*0d642239b4                    = 2,
	*aaf19e0bb3                    = 3,
	*5427264672                    = 4,
	*374607399d                    = 5,
	*2b5bce847f_MAX                = 6,
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

enum class E*91a656d6df : uint8_t
{
	*1569d1d660                    = 0,
	*8be856dd16                    = 1,
	*df7cea4654                    = 2,
	*d72c2e0660                    = 3,
	*42ddf59f8b                    = 4,
	*91a656d6df_MAX                = 5,
};

enum class EMeshBufferAccess : uint8_t
{
	Default                        = 0,
	ForceCPUAndGPU                 = 1,
	EMeshBufferAccess_MAX          = 2,
};

enum class E*8158ca561e : uint8_t
{
	*c62cd68c4e                    = 0,
	*df88e71db3                    = 1,
	*a42dff28de                    = 2,
	*8158ca561e_MAX                = 3,
};

enum class E*390a8ce4fd : uint8_t
{
	*4a4179dd19                    = 0,
	*2974cd19dd                    = 1,
	*892542ca35                    = 2,
	*0831494cf3                    = 3,
	*390a8ce4fd_MAX                = 4,
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

enum class E*e8c260e6cd : uint8_t
{
	*2154c86914                    = 0,
	*623e06f44c                    = 1,
	*5321c450a6                    = 2,
	*7acdb323d8                    = 3,
	*79462d6e39                    = 4,
	*a57ed910a1                    = 5,
	*04cd32113c                    = 6,
	*2e65b054b4                    = 7,
	*e8c260e6cd_MAX                = 8,
};

enum class E*0482f90bfa : uint8_t
{
	*0c93b6cf2d                    = 0,
	*f0b98259ab                    = 1,
	*ed184153f1                    = 2,
	*0482f90bfa_MAX                = 3,
};

enum class E*4887d5858f : uint8_t
{
	*44f48924b9                    = 0,
	*b96555ed95                    = 1,
	*7b064a7db7                    = 2,
	*f4c6625a6c                    = 3,
	*4887d5858f_MAX                = 4,
};

enum class ECollisionEnabled : uint8_t
{
	NoCollision                    = 0,
	QueryOnly                      = 1,
	PhysicsOnly                    = 2,
	QueryAndPhysics                = 3,
	ECollisionEnabled_MAX          = 4,
};

enum class E*583fdbb962 : uint8_t
{
	*465b7c862c                    = 0,
	*42de9b7b9a                    = 1,
	*3ba82aebf4                    = 2,
	*ba08e0519e                    = 3,
	*c8b37f4973                    = 4,
	*08ab982e0b                    = 5,
	*583fdbb962_MAX                = 6,
};

enum class ESleepFamily : uint8_t
{
	Normal                         = 0,
	Sensitive                      = 1,
	Custom                         = 2,
	ESleepFamily_MAX               = 3,
};

enum class E*debd350dd3 : uint8_t
{
	*d34ff6642e                    = 0,
	*6828f89ea3                    = 1,
	*5ce4733fef                    = 2,
	*debd350dd3_MAX                = 3,
};

enum class E*668458e050 : uint8_t
{
	*b54d4ee677                    = 0,
	*83bcb57e39                    = 1,
	*541f945523                    = 2,
	*03410b065e                    = 3,
	*668458e050_MAX                = 4,
};

enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3,
};

enum class E*0a5bb38aa4 : uint8_t
{
	*6e306c7d41                    = 0,
	*a48ebb32b2                    = 1,
	*868c3868e2                    = 2,
	*0a5bb38aa4_MAX                = 3,
};

enum class E*32e0b4664f : uint8_t
{
	*636a912e3c                    = 0,
	*daac714233                    = 1,
	*35060cc044                    = 2,
	*689d87abc5                    = 3,
	*32e0b4664f_MAX                = 4,
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

enum class E*f6f5ceabe6 : uint8_t
{
	*a6e387b2ae                    = 0,
	*1984049dca                    = 1,
	*24dc3d7a87                    = 2,
	*c3fb01fe07                    = 3,
	*f6f5ceabe6_MAX                = 4,
};

enum class E*2b646a1af6 : uint8_t
{
	*3c2865b9f0                    = 0,
	*2da908d268                    = 1,
	*9bc861efeb                    = 2,
	*2411872bdf                    = 3,
	*9b65273220                    = 4,
	*9d03eff30d                    = 5,
	*264ea1fbaa                    = 6,
	*2b646a1af6_MAX                = 7,
};

enum class E*b67abeccf9 : uint8_t
{
	*857f70f22f                    = 0,
	*96e9c653ba                    = 1,
	*675c82ed21                    = 2,
	*90a1ecbe30                    = 3,
	*f6c9ce28cd                    = 4,
	*b67abeccf9_MAX                = 5,
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

enum class E*95f83e21af : uint8_t
{
	*0f32c96076                    = 0,
	*cd5d6e8a58                    = 1,
	*534f185654                    = 2,
	*5ea7f7e577                    = 3,
	*95f83e21af_MAX                = 4,
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

enum class E*1d9e9a9204 : uint8_t
{
	*cc087df309                    = 0,
	*b1c554ec4f                    = 1,
	*8d621e1a4b                    = 2,
	*4c17e9247b                    = 3,
	*1d9e9a9204_MAX                = 4,
};

enum class EGBufferFormat : uint8_t
{
	Force8BitsPerChannel           = 0,
	Default                        = 1,
	HighPrecisionNormals           = 3,
	Force16BitsPerChannel          = 5,
	EGBufferFormat_MAX             = 6,
};

enum class E*c0a7139bca : uint8_t
{
	*2a2d11dcae                    = 0,
	*512bfb1e4d                    = 1,
	*cff85cb2da                    = 2,
	*e6db9a17a0                    = 3,
	*c0a7139bca_MAX                = 4,
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

enum class E*bc9150e4cf : uint8_t
{
	*7fabf5529f                    = 0,
	*89edbd5558                    = 1,
	*f8d7ee62b4                    = 2,
	*bc9150e4cf_MAX                = 3,
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

enum class E*95db0bac53 : uint8_t
{
	*8f6ffd62db                    = 0,
	*0f0c0d4911                    = 1,
	*805ffe6fcd                    = 2,
	*190ac3aed4                    = 3,
	*95db0bac53_MAX                = 4,
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

enum class E*930cbe98d0 : uint8_t
{
	*69ef97fe51                    = 0,
	*5d2611e0cc                    = 1,
	*5e9eb7fe1d                    = 2,
	*930cbe98d0_MAX                = 3,
};

enum class E*567238a567 : uint8_t
{
	*e888710e58                    = 0,
	*eb7ac3a6d2                    = 1,
	*578ca29002                    = 2,
	*5012e299a1                    = 3,
	*567238a567_MAX                = 4,
};

enum class E*be664c0e55 : uint8_t
{
	*24d535a4fb                    = 0,
	*d78a92b5e2                    = 1,
	*67448da1cc                    = 2,
	*be664c0e55_MAX                = 3,
};

enum class E*7c28295024 : uint8_t
{
	*c09edc5313                    = 0,
	*3676bc6d5b                    = 1,
	*5d75a57e44                    = 2,
	*21d4dbd4ce                    = 3,
	*7c28295024_MAX                = 4,
};

enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3,
};

enum class E*a23b9448a5 : uint8_t
{
	*eaa9f8a950                    = 0,
	*eb70a278dd                    = 1,
	*e7eda78d7c                    = 2,
	*49b85304d8                    = 3,
	*bfeaf19429                    = 4,
	*b47ec86323                    = 5,
	*af33e62642                    = 6,
	*c00a1e546c                    = 8,
	*f5afbf78cf                    = 9,
	*b62a58a2cc                    = 10,
	*3221fbf7db                    = 11,
	*2620f3eb08                    = 12,
	*bcaf986395                    = 14,
	*23f4a40f8f                    = 15,
	*0f98467017                    = 16,
	*0b8d230885                    = 18,
	*7125024075                    = 19,
	*c013acea47                    = 20,
	*81b0731a11                    = 21,
	*3937812721                    = 22,
	*24389f0abe                    = 23,
	*ed6a049186                    = 24,
	*78fffa37f5                    = 25,
	*51826c060f                    = 26,
	*8953f3b4eb                    = 27,
	*a61d13cb22                    = 28,
	*74df828620                    = 29,
	*eea4762922                    = 30,
	*aec235d6fd                    = 31,
	*01934a1fab                    = 32,
	*a0913b40b5                    = 255,
	*a23b9448a5_MAX                = 256,
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

enum class E*c440b9ee4a : uint8_t
{
	*bf92bfd3ba                    = 0,
	*54079fff35                    = 1,
	*46e7daae68                    = 2,
	*fb8b1ce40d                    = 3,
	*c440b9ee4a_MAX                = 4,
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

enum class E*629e52f6d7 : uint8_t
{
	*6879d5578e                    = 0,
	*a5eb2cea11                    = 1,
	*1213f42363                    = 2,
	*629e52f6d7_MAX                = 3,
};

enum class E*6b475a4def : uint8_t
{
	*8072ebb563                    = 0,
	*e2e5c5bafe                    = 1,
	*d0a698ad2d                    = 2,
	*09abca5596                    = 3,
	*8254f5a922                    = 4,
	*6b475a4def_MAX                = 5,
};

enum class E*f49c2808b0 : uint8_t
{
	*0135e0520c                    = 0,
	*be42558ca6                    = 1,
	*fbbfaecc75                    = 2,
	*3cadc13463                    = 3,
	*f49c2808b0_MAX                = 4,
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

enum class E*58af4c79e2 : uint8_t
{
	*57f978c7ae                    = 0,
	*696303d1bf                    = 1,
	*ebffdd713f                    = 2,
	*58af4c79e2_MAX                = 3,
};

enum class EMeshLODSelectionType : uint8_t
{
	AllLODs                        = 0,
	SpecificLOD                    = 1,
	CalculateLOD                   = 2,
	LowestDetailLOD                = 3,
	EMeshLODSelectionType_MAX      = 4,
};

enum class E*95adda6ed4 : uint8_t
{
	*69db1c510d                    = 0,
	*70ca6e51f2                    = 1,
	*dc2d0dae1b                    = 2,
	*5bfb4eba60                    = 3,
	*95adda6ed4_MAX                = 4,
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

enum class E*cf31f8fd9c : uint8_t
{
	*d3e5f8136a                    = 0,
	*87e469122e                    = 1,
	*94ae5f371c                    = 2,
	*6b2429596a                    = 3,
	*a7d2adfd80                    = 4,
	*e88c391600                    = 5,
	*3d08130efd                    = 6,
	*5dc7537864                    = 7,
	*449590915e                    = 8,
	*0cf90c39c6                    = 9,
	*e65c8798f3                    = 10,
	*cf31f8fd9c_MAX                = 11,
};

enum class EHasCustomNavigableGeometry : uint8_t
{
	No                             = 0,
	Yes                            = 1,
	EvenIfNotCollidable            = 2,
	DontExport                     = 3,
	EHasCustomNavigableGeometry_MAX = 4,
};

enum class E*51b893891a : uint8_t
{
	*df098a976a                    = 0,
	*521b42c6c2                    = 1,
	*468d3d4648                    = 2,
	*5301cd9622                    = 3,
	*51b893891a_MAX                = 4,
};

enum class EStaticMeshLODType : uint8_t
{
	Reduction                      = 0,
	Proxy                          = 1,
	EStaticMeshLODType_MAX         = 2,
};

enum class E*018fcb3de9 : uint8_t
{
	*95d80b6686                    = 0,
	*ac0137c9a1                    = 1,
	*fbf18e0050                    = 2,
	*018fcb3de9_MAX                = 3,
};

enum class E*d18d33451c : uint8_t
{
	*ac9c362941                    = 0,
	*93260eb9ba                    = 1,
	*8e34914503                    = 2,
	*a0823db0ea                    = 3,
	*847dd4430b                    = 4,
	*6c2a544fb8                    = 5,
	*0185858a9d                    = 6,
	*6c387cec87                    = 7,
	*d18d33451c_MAX                = 8,
};

enum class E*50049b83a9 : uint8_t
{
	*a2f913c60f                    = 0,
	*26e003c275                    = 1,
	*0c73adc82e                    = 2,
	*718b2060a1                    = 3,
	*80da4149c9                    = 4,
	*90acc1d913                    = 5,
	*50049b83a9_MAX                = 6,
};

enum class E*c963c0bca0 : uint8_t
{
	*c305550b62                    = 0,
	*522e861a82                    = 1,
	*e93916a6dd                    = 2,
	*c934877c64                    = 3,
	*c963c0bca0_MAX                = 4,
};

enum class E*e171abee45 : uint8_t
{
	*3258284fb6                    = 0,
	*880d64af07                    = 1,
	*8fb902732c                    = 2,
	*125d04a7dc                    = 3,
	*580687beaa                    = 4,
	*4f7ad1752a                    = 5,
	*d3d0b03efc                    = 6,
	*e171abee45_MAX                = 7,
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

enum class E*3b543cc157 : uint8_t
{
	*6693b8e87d                    = 0,
	*4c0ddfa589                    = 1,
	*7ba524bd23                    = 2,
	*f185409059                    = 3,
	*601478d98a                    = 4,
	*eb9a95835c                    = 5,
	*3b543cc157_MAX                = 6,
};

enum class E*f1f8bf6f1d : uint8_t
{
	*aefb37e366                    = 0,
	*2bd2ecbc4b                    = 1,
	*5f8bb9d96b                    = 2,
	*0095fdf0bf                    = 3,
	*bc923a9313                    = 4,
	*f1f8bf6f1d_MAX                = 5,
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

enum class E*0799e09f22 : uint8_t
{
	*9895f05491                    = 0,
	*3d76fd7a04                    = 1,
	*9abb052051                    = 2,
	*0799e09f22_MAX                = 3,
};

enum class E*2f26f79771 : uint8_t
{
	*b24bf23284                    = 0,
	*86561b3e77                    = 1,
	*c3f079b3e2                    = 2,
	*2f26f79771_MAX                = 3,
};

enum class EDynamicForceFeedbackAction : uint8_t
{
	Start                          = 0,
	Update                         = 1,
	Stop                           = 2,
	EDynamicForceFeedbackAction_MAX = 3,
};

enum class E*b00895ad18 : uint8_t
{
	*e2d628f3b0                    = 0,
	*cb20c881a1                    = 1,
	*b647efeb23                    = 2,
	*ec1e04f025                    = 3,
	*b00895ad18_MAX                = 4,
};

enum class E*36505ac068 : uint8_t
{
	*7d54ef5604                    = 0,
	*8edd08c494                    = 1,
	*f0cdfbedbf                    = 2,
	*7ab87a6b1e                    = 3,
	*36505ac068_MAX                = 4,
};

enum class E*64cd9602ca : uint8_t
{
	*1b3658d0b1                    = 0,
	*5d6ec15d27                    = 1,
	*d8e6b83942                    = 2,
	*b89272118d                    = 3,
	*522fa339b9                    = 4,
	*64cd9602ca_MAX                = 5,
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

enum class E*48f229ab47 : uint8_t
{
	*ff7d741c41                    = 0,
	*365a55f72d                    = 1,
	*84bdde3b22                    = 2,
	*235e5dfc5f                    = 3,
	*48f229ab47_MAX                = 4,
};

enum class ENavLinkDirection : uint8_t
{
	BothWays                       = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ENavLinkDirection_MAX          = 3,
};

enum class E*99dde3c599 : uint8_t
{
	*ebf54308e8                    = 0,
	*be4fb32a5d                    = 1,
	*91b6e8ef8c                    = 2,
	*27f9547c4a                    = 3,
	*99dde3c599_MAX                = 4,
};

enum class E*427a81f155 : uint8_t
{
	*1d062e27a0                    = 0,
	*4ab61b8e22                    = 1,
	*986a93d6a9                    = 2,
	*8b80ea0f3f                    = 3,
	*427a81f155_MAX                = 4,
};

enum class E*fd95dc773e : uint8_t
{
	*8bbce84c3c                    = 0,
	*d933f56d12                    = 1,
	*1cf8f91008                    = 2,
	*fd95dc773e_MAX                = 3,
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

enum class E*de03b7395a : uint8_t
{
	*919c6f8a04                    = 0,
	*01061e046f                    = 1,
	*89963abb92                    = 2,
	*cd32dcd9c1                    = 3,
	*de03b7395a_MAX                = 4,
};

enum class E*447c3f23e0 : uint8_t
{
	*58d3d3f60c                    = 0,
	*d084f4930b                    = 1,
	*b1223d2391                    = 2,
	*81832d283d                    = 3,
	*7aaf69e107                    = 4,
	*77d28ca154                    = 5,
	*863bdfb79a                    = 6,
	*ddbfccec85                    = 7,
	*9cec547123                    = 8,
	*447c3f23e0_MAX                = 9,
};

enum class E*3bdc74ee25 : uint8_t
{
	*7634c71b75                    = 0,
	*4e3a69cf24                    = 1,
	*2e28ef9b62                    = 2,
	*16a7855d59                    = 3,
	*3bdc74ee25_MAX                = 4,
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

enum class E*46af02866c : uint8_t
{
	*42ab4bfc4b                    = 0,
	*2bc7e7931d                    = 1,
	*67ea322e71                    = 2,
	*77abbf2033                    = 3,
	*a3446a35f5                    = 4,
	*46af02866c_MAX                = 5,
};

enum class E*f22a22d0fa : uint8_t
{
	*49bce131ba                    = 0,
	*4c4eb0e248                    = 1,
	*5a179dc25f                    = 2,
	*b4b2916dda                    = 3,
	*1cf942731e                    = 4,
	*f22a22d0fa_MAX                = 5,
};

enum class EAnimGroupRole : uint8_t
{
	CanBeLeader                    = 0,
	AlwaysFollower                 = 1,
	AlwaysLeader                   = 2,
	TransitionLeader               = 3,
	EAnimGroupRole_MAX             = 4,
};

enum class E*7265cfec8a : uint8_t
{
	*e4ff287daf                    = 0,
	*cc144a45e0                    = 1,
	*a6bca31cf6                    = 2,
	*a29745cf7e                    = 3,
	*7265cfec8a_MAX                = 4,
};

enum class E*9aa54a67f7 : uint8_t
{
	*06a976fb25                    = 1,
	*34c78b9d3d                    = 2,
	*90445096b2                    = 4,
	*029b9ecf75                    = 5,
	*9aa54a67f7_MAX                = 6,
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

enum class E*2b49b43211 : uint8_t
{
	*36f9d57021                    = 0,
	*126671ea99                    = 1,
	*d2f1ac35e1                    = 2,
	*53f18ca1db                    = 3,
	*2b49b43211_MAX                = 4,
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

enum class E*3d8702426b : uint8_t
{
	*ffcc265d8f                    = 0,
	*50d092d959                    = 1,
	*793b5157e3                    = 2,
	*408f8ac422                    = 3,
	*3d8702426b_MAX                = 4,
};

enum class E*1a0204e427 : uint8_t
{
	*a751ae35bf                    = 1,
	*0728a0fa1c                    = 2,
	*b0a009d64c                    = 4,
	*f7b248c8a3                    = 8,
	*f865e777d2                    = 16,
	*6164f247da                    = 32,
	*82d0aab831                    = 64,
	*410ae4c9ff                    = 65,
	*1a0204e427_MAX                = 66,
};

enum class E*c4b51edf80 : uint8_t
{
	*3a0eded761                    = 0,
	*8e625885da                    = 1,
	*13ba914876                    = 2,
	*061bef5be3                    = 3,
	*c4b51edf80_MAX                = 4,
};

enum class E*db0e675134 : uint8_t
{
	*0f21f34070                    = 0,
	*8498612ecc                    = 1,
	*845ae82fba                    = 2,
	*2071c4f45a                    = 3,
	*db0e675134_MAX                = 4,
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

enum class E*31556d656b : uint8_t
{
	*aceeefc079                    = 0,
	*6d511fcc80                    = 1,
	*18b3f73896                    = 2,
	*31556d656b_MAX                = 3,
};

enum class E*648f7bfa3a : uint8_t
{
	*dc99c8a36e                    = 0,
	*3079b523c8                    = 1,
	*368e627e3d                    = 2,
	*00ce9711ba                    = 3,
	*52e1e8a513                    = 4,
	*648f7bfa3a_MAX                = 5,
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

enum class E*14841b3c00 : uint8_t
{
	*28f7691db5                    = 0,
	*8b3a12864d                    = 1,
	*1a3045490c                    = 2,
	*14841b3c00_MAX                = 3,
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

enum class E*a6597dd6ec : uint8_t
{
	*582bc4f428                    = 0,
	*91230b9113                    = 1,
	*3516074ae5                    = 2,
	*a6597dd6ec_MAX                = 3,
};

enum class E*ec45d43d79 : uint8_t
{
	*e15df1edcc                    = 0,
	*bccb2cc7d4                    = 1,
	*0814673106                    = 2,
	*9981915f89                    = 3,
	*ec45d43d79_MAX                = 4,
};

enum class E*fcf3ded73e : uint8_t
{
	*dc73400afb                    = 0,
	*0feb2442b7                    = 1,
	*4b81891e4a                    = 2,
	*fcf3ded73e_MAX                = 3,
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

enum class E*db815ccfda : uint8_t
{
	*76f280a51f                    = 0,
	*53a13dc0ab                    = 1,
	*c77f663959                    = 2,
	*da4a7fc13e                    = 3,
	*e7fe3d2095                    = 4,
	*a9053f7dfe                    = 5,
	*54e527327c                    = 6,
	*537469d1d1                    = 7,
	*dc2fc25bc1                    = 8,
	*46bed1b48a                    = 9,
	*924e80ab69                    = 10,
	*db815ccfda_MAX                = 11,
};

enum class E*2b3bfe1611 : uint8_t
{
	*48f5a6712e                    = 0,
	*0725bcc909                    = 1,
	*dc7134b878                    = 2,
	*7404385425                    = 3,
	*2b3bfe1611_MAX                = 4,
};

enum class E*1b6b7c3cc2 : uint8_t
{
	*9360241eff                    = 0,
	*919bc2c4de                    = 1,
	*e40eaa7717                    = 2,
	*62fb20a828                    = 3,
	*1b6b7c3cc2_MAX                = 4,
};

enum class E*5ea3bb68dd : uint8_t
{
	*71c26e1c79                    = 0,
	*45fcd681e3                    = 1,
	*6542f5a1e7                    = 2,
	*fd63a017ef                    = 3,
	*7433f8b50a                    = 4,
	*d470a76d5b                    = 5,
	*5ea3bb68dd_MAX                = 6,
};

enum class E*ae5805b84a : uint8_t
{
	*ed2cef9ddd                    = 0,
	*2d2a806194                    = 1,
	*9bc6969657                    = 2,
	*d09e63c7ed                    = 3,
	*ae5805b84a_MAX                = 4,
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

enum class E*0164051214 : uint8_t
{
	*37d2b3bab5                    = 0,
	*1ad34c4c98                    = 1,
	*14c76df6e8                    = 2,
	*5642fc5779                    = 3,
	*acb371531c                    = 4,
	*0164051214_MAX                = 5,
};

enum class E*69c33600b1 : uint8_t
{
	*0a519695ba                    = 0,
	*542b98f27a                    = 1,
	*96dae3a693                    = 2,
	*af65410108                    = 3,
	*69c33600b1_MAX                = 4,
};

enum class E*57f3cdb4d1 : uint8_t
{
	*3ca41e7a57                    = 0,
	*ae2e1bd9a9                    = 1,
	*2be3418bcc                    = 2,
	*57f3cdb4d1_MAX                = 3,
};

enum class E*7186d39998 : uint8_t
{
	*b81a81bbbd                    = 0,
	*93d0f8cd15                    = 1,
	*d9e807959d                    = 2,
	*3ff6061757                    = 3,
	*7186d39998_MAX                = 4,
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

enum class E*99af7da96a : uint8_t
{
	*c345d7944c                    = 0,
	*457c1398fa                    = 1,
	*7a06d1d637                    = 2,
	*99af7da96a_MAX                = 3,
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

enum class E*a84b1d1474 : uint8_t
{
	*2f2804c823                    = 0,
	*d7bd71813d                    = 1,
	*0365f88463                    = 2,
	*3d571bf4e8                    = 3,
	*a84b1d1474_MAX                = 4,
};

enum class E*e509e9cceb : uint8_t
{
	*20d8749711                    = 0,
	*577ae8c839                    = 1,
	*40543e44b5                    = 2,
	*e509e9cceb_MAX                = 3,
};

enum class E*228e3ef740 : uint8_t
{
	*092f5d3c31                    = 0,
	*6b472a8e9d                    = 1,
	*e8b8d2ec48                    = 2,
	*228e3ef740_MAX                = 3,
};

enum class EMontagePlayReturnType : uint8_t
{
	MontageLength                  = 0,
	Duration                       = 1,
	EMontagePlayReturnType_MAX     = 2,
};

enum class E*7cc30db015 : uint8_t
{
	*b0cbd32ac8                    = 0,
	*949feeff63                    = 1,
	*01110b7b3e                    = 2,
	*031a282f62                    = 3,
	*c8ca536f6a                    = 4,
	*7cc30db015_MAX                = 5,
};

enum class EPrimaryAssetCookRule : uint8_t
{
	Unknown                        = 0,
	NeverCook                      = 1,
	DevelopmentCook                = 2,
	AlwaysCook                     = 3,
	EPrimaryAssetCookRule_MAX      = 4,
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

enum class E*d83dd6b7f0 : uint8_t
{
	*e7839e6f3d                    = 0,
	*672decb3f5                    = 1,
	*d825cbe6c8                    = 2,
	*8e8509dec8                    = 3,
	*a66b4eb7a6                    = 4,
	*6fda9d4cad                    = 5,
	*bfbe9471e7                    = 6,
	*d83dd6b7f0_MAX                = 7,
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

enum class E*6c88af7664 : uint8_t
{
	*b2af3829bf                    = 0,
	*0682457f72                    = 1,
	*17188e199b                    = 2,
	*3f5bb72c9e                    = 3,
	*6c88af7664_MAX                = 4,
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

enum class E*8b4b1219b0 : uint8_t
{
	*c5068b9f61                    = 0,
	*74231525c0                    = 1,
	*782345c07c                    = 2,
	*8b4b1219b0_MAX                = 3,
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

enum class E*2b1ba09d94 : uint8_t
{
	*68e4548191                    = 0,
	*c53ef5f198                    = 1,
	*e511c16799                    = 2,
	*2b1ba09d94_MAX                = 3,
};

enum class E*2d9b0d0cee : uint8_t
{
	*785dd598a2                    = 0,
	*32175db0c3                    = 1,
	*6c170b60f5                    = 2,
	*cfd7bf5fc6                    = 3,
	*02de8954c6                    = 4,
	*27dea6a132                    = 5,
	*2243fc62d8                    = 6,
	*1142f6f7c6                    = 7,
	*2d9b0d0cee_MAX                = 8,
};

enum class E*e174fc158e : uint8_t
{
	*10ee478bd7                    = 0,
	*e2322353f9                    = 1,
	*e75db8c5bb                    = 2,
	*809d18c36f                    = 3,
	*d8993814fe                    = 4,
	*d8bc4f0405                    = 5,
	*e174fc158e_MAX                = 6,
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

enum class E*68e78a1cb6 : uint8_t
{
	*e5ea38135d                    = 0,
	*bd3cfcdeba                    = 1,
	*87ba861313                    = 2,
	*483b2d1bc9                    = 3,
	*68e78a1cb6_MAX                = 4,
};

enum class E*eec5deb7eb : uint8_t
{
	*aaff5ed4a6                    = 0,
	*62df2ff989                    = 1,
	*0ba0fac682                    = 2,
	*7a0b317f16                    = 3,
	*eec5deb7eb_MAX                = 4,
};

enum class E*bbe57a2b84 : uint8_t
{
	*58b82f2030                    = 0,
	*24979a4ddd                    = 1,
	*48c8e41772                    = 2,
	*2c2f894e0d                    = 3,
	*993fcf8037                    = 4,
	*969ccc4473                    = 5,
	*bbe57a2b84_MAX                = 6,
};

enum class E*17556b897c : uint8_t
{
	*2a3da8bb1b                    = 0,
	*807fd4d0f8                    = 1,
	*cb7e28dafa                    = 2,
	*e748f8a314                    = 3,
	*7a310d3d6e                    = 4,
	*7925fe5e57                    = 5,
	*504e5d22b2                    = 6,
	*17556b897c_MAX                = 7,
};

enum class E*8530147baa : uint8_t
{
	*dffdb953f2                    = 0,
	*3a18d7575b                    = 1,
	*a791ee22fb                    = 2,
	*93bfcd8008                    = 3,
	*02a4e0e025                    = 4,
	*0d9839e602                    = 5,
	*8530147baa_MAX                = 6,
};

enum class E*a67cd77721 : uint8_t
{
	*0fd8bfc45b                    = 0,
	*5c4ec4fa8b                    = 1,
	*a027bf02e7                    = 2,
	*dc8152870d                    = 3,
	*a67cd77721_MAX                = 4,
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

enum class E*bb10e14ad0 : uint8_t
{
	*683cdcd00d                    = 0,
	*2a0544f975                    = 1,
	*595e221469                    = 2,
	*1ed6cf292f                    = 3,
	*bb10e14ad0_MAX                = 4,
};

enum class E*bd4015598f : uint8_t
{
	*bce8e169e1                    = 0,
	*a5b947886d                    = 1,
	*e555cb4365                    = 2,
	*bd26a6b288                    = 3,
	*bd4015598f_MAX                = 4,
};

enum class E*20638e6ada : uint8_t
{
	*04d073b4f4                    = 0,
	*b8df52b451                    = 1,
	*dc6a4e12da                    = 2,
	*1dc91f4db9                    = 3,
	*5160b6318a                    = 4,
	*52a06b3fed                    = 5,
	*3bc6aa7929                    = 6,
	*20638e6ada_MAX                = 7,
};

enum class E*702427159d : uint8_t
{
	*a9db884ed2                    = 0,
	*676ae52957                    = 1,
	*ee05ed3ea7                    = 2,
	*d79a844547                    = 3,
	*5ae9ca866f                    = 4,
	*702427159d_MAX                = 5,
};

enum class E*d44b97612f : uint8_t
{
	*9d5f9d4aaa                    = 0,
	*24b03b3f8e                    = 1,
	*daae4ba7b4                    = 2,
	*24af2a0a45                    = 3,
	*d44b97612f_MAX                = 4,
};

enum class E*c4ec4fbaa5 : uint8_t
{
	*6b68b65dc0                    = 0,
	*e16d91c680                    = 1,
	*9a8102a81c                    = 2,
	*874248a8cf                    = 3,
	*c4ec4fbaa5_MAX                = 4,
};

enum class EMaterialAttributeBlend : uint8_t
{
	Blend                          = 0,
	UseA                           = 1,
	UseB                           = 2,
	EMaterialAttributeBlend_MAX    = 3,
};

enum class E*d492497710 : uint8_t
{
	*01b1f86a31                    = 0,
	*6df6e23430                    = 1,
	*d5eee3e8a0                    = 2,
	*8bbde20f13                    = 3,
	*d492497710_MAX                = 4,
};

enum class E*0ba07c5768 : uint8_t
{
	*d506ee9608                    = 0,
	*73fdd933e6                    = 1,
	*2e1b9f83db                    = 2,
	*29e47d5bb7                    = 3,
	*72ba866dda                    = 4,
	*0ba07c5768_MAX                = 5,
};

enum class E*d6de2eead7 : uint8_t
{
	*d3901b7154                    = 0,
	*7018096a5e                    = 1,
	*5aadfd0e17                    = 2,
	*afcbf2a752                    = 3,
	*bdbcf7ff40                    = 4,
	*d6de2eead7_MAX                = 5,
};

enum class E*bc34c5798e : uint8_t
{
	*ae47cae65c                    = 0,
	*782ee4a1c7                    = 1,
	*78981e65d7                    = 2,
	*326a03bac9                    = 3,
	*2f0b1af95a                    = 4,
	*c6b209a542                    = 5,
	*6280f00825                    = 6,
	*98c4d4e2c3                    = 7,
	*62cf5d8542                    = 8,
	*1d512c7820                    = 9,
	*bc34c5798e_MAX                = 10,
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

enum class E*cf0fe89ea6 : uint8_t
{
	*fdfdc49e70                    = 0,
	*c442fcbc58                    = 1,
	*62197d76cc                    = 2,
	*cf0fe89ea6_MAX                = 3,
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

enum class E*0b7ff392d4 : uint8_t
{
	*e50ac24ac8                    = 0,
	*89447c45a0                    = 1,
	*f4113c6e92                    = 2,
	*ca8db1d2f5                    = 3,
	*0b7ff392d4_MAX                = 4,
};

enum class E*428ffe221a : uint8_t
{
	*3691154bae                    = 0,
	*9a29b0fd39                    = 1,
	*9ec8891628                    = 2,
	*428ffe221a_MAX                = 3,
};

enum class E*0353d7f15c : uint8_t
{
	*709f7ba3f5                    = 0,
	*29bffe07dd                    = 1,
	*86868b11e3                    = 2,
	*9a0dbe0b92                    = 3,
	*0ab7784573                    = 4,
	*0761cbcde1                    = 5,
	*53735536c6                    = 6,
	*9aae6447cf                    = 7,
	*0353d7f15c_MAX                = 8,
};

enum class E*0a00b4a7e3 : uint8_t
{
	*9d5ce329bb                    = 0,
	*4277dde096                    = 1,
	*31a813cb53                    = 2,
	*e9f625ce10                    = 3,
	*3989706701                    = 4,
	*82036ffa24                    = 5,
	*0a00b4a7e3_MAX                = 6,
};

enum class ETextureChannel : uint8_t
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	ETextureChannel_MAX            = 4,
};

enum class E*33742cca12 : uint8_t
{
	*db463c599a                    = 0,
	*fd5adec863                    = 1,
	*4a9ddfeef9                    = 2,
	*5e1764644a                    = 3,
	*ec80b9ae8a                    = 4,
	*33742cca12_MAX                = 5,
};

enum class E*79a8f056c3 : uint8_t
{
	*db7558bc93                    = 0,
	*c638adcf7b                    = 1,
	*e52d6c3f01                    = 2,
	*1728dcb28c                    = 3,
	*0f10da0f64                    = 4,
	*79a8f056c3_MAX                = 5,
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

enum class E*d991e96b40 : uint8_t
{
	*56789162a4                    = 0,
	*c7bb6a8dfa                    = 1,
	*cf26cdef1a                    = 2,
	*dc0f6a5c83                    = 3,
	*30b4e4c9af                    = 4,
	*8224aca0a3                    = 5,
	*d991e96b40_MAX                = 6,
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

enum class E*45ba612c51 : uint8_t
{
	*ac63f10d9b                    = 0,
	*1784ad3714                    = 1,
	*e5e0e9c478                    = 2,
	*bad355473e                    = 3,
	*26dfdb9e64                    = 4,
	*b770c5a9fd                    = 5,
	*e6ad4c585f                    = 6,
	*45ba612c51_MAX                = 7,
};

enum class E*963c6f21c5 : uint8_t
{
	*6a15404c45                    = 0,
	*c95d15b3ac                    = 1,
	*36c324f8ee                    = 2,
	*4d043b422c                    = 3,
	*270f779226                    = 4,
	*00770f3587                    = 5,
	*e24a494638                    = 6,
	*82aa2b379e                    = 7,
	*902b7b61f2                    = 8,
	*963c6f21c5_MAX                = 9,
};

enum class E*254f77280e : uint8_t
{
	*facf92b147                    = 0,
	*4862660cdb                    = 1,
	*d6bcea12d9                    = 2,
	*4d272ad046                    = 3,
	*bd770048f0                    = 4,
	*063ab5ae8d                    = 5,
	*4634608c93                    = 6,
	*8ab568d00d                    = 7,
	*1d78add18d                    = 8,
	*b5d6407e23                    = 9,
	*81de2f64cf                    = 10,
	*71f99f9295                    = 11,
	*e3e0beff83                    = 12,
	*254f77280e_MAX                = 13,
};

enum class E*649a9a37d8 : uint8_t
{
	*90f0a0f243                    = 0,
	*f369255b13                    = 1,
	*c2cbb06584                    = 2,
	*cb4ccd78b6                    = 3,
	*16347b2adc                    = 4,
	*631355dc18                    = 5,
	*649a9a37d8_MAX                = 6,
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

enum class E*afc90392e6 : uint8_t
{
	*2cfab8d319                    = 0,
	*2e9f6331e2                    = 1,
	*68c61ffaf6                    = 2,
	*afc90392e6_MAX                = 3,
};

enum class E*bd4365a6eb : uint8_t
{
	*86c19d347a                    = 0,
	*976ff10906                    = 1,
	*3f4469694f                    = 2,
	*4ecbd01f1c                    = 3,
	*74dbe5d575                    = 4,
	*59a754006a                    = 5,
	*bee743df57                    = 6,
	*06a14b8c67                    = 7,
	*bd4365a6eb_MAX                = 8,
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

enum class E*476c400f10 : uint8_t
{
	*ec1b91d68e                    = 0,
	*9d4e4a2964                    = 1,
	*5846993302                    = 2,
	*476c400f10_MAX                = 3,
};

enum class E*fecb85f513 : uint8_t
{
	*5ea7f03719                    = 0,
	*dc2b82a90a                    = 1,
	*13240f2c7f                    = 2,
	*b6d230fa26                    = 3,
	*6d26ede422                    = 4,
	*c59e4f3438                    = 5,
	*6a2f47d9f9                    = 6,
	*14232111bd                    = 7,
	*6b4ba5486b                    = 8,
	*f29946455a                    = 9,
	*fecb85f513_MAX                = 10,
};

enum class E*969e0b7de1 : uint8_t
{
	*69979b820d                    = 0,
	*315efaa524                    = 1,
	*c603290dd2                    = 2,
	*969e0b7de1_MAX                = 3,
};

enum class E*9c34cd8ca5 : uint8_t
{
	*7fb6d2c0be                    = 0,
	*815919b634                    = 1,
	*374c4a7fa3                    = 2,
	*a7fc9e34da                    = 3,
	*da3763b920                    = 4,
	*9c34cd8ca5_MAX                = 5,
};

enum class E*e3d442b7fe : uint8_t
{
	*31180af47d                    = 0,
	*9cde7a560b                    = 1,
	*a3af405662                    = 2,
	*2956288653                    = 3,
	*136aeea595                    = 4,
	*2e50ed5524                    = 5,
	*e3d442b7fe_MAX                = 6,
};

enum class E*6d8b96e97f : uint8_t
{
	*db35d0f954                    = 0,
	*8c8c52f152                    = 1,
	*286b5d09c5                    = 2,
	*6d8b96e97f_MAX                = 3,
};

enum class E*026748175a : uint8_t
{
	*44c1e57407                    = 0,
	*b1489a8dce                    = 1,
	*4a1f0e1cf1                    = 2,
	*83ab1ee76f                    = 3,
	*026748175a_MAX                = 4,
};

enum class E*bd791a59ec : uint8_t
{
	*25e5f838cb                    = 0,
	*3342b01d66                    = 1,
	*9254c993bf                    = 2,
	*62ba4a4eea                    = 3,
	*8e1a55f409                    = 4,
	*be93eedce1                    = 5,
	*c85b3277ac                    = 6,
	*bd791a59ec_MAX                = 7,
};

enum class EParticleCollisionResponse : uint8_t
{
	Bounce                         = 0,
	Stop                           = 1,
	Kill                           = 2,
	EParticleCollisionResponse_MAX = 3,
};

enum class E*efb2d6c0f2 : uint8_t
{
	*df730fdf94                    = 0,
	*6b5c2eb590                    = 1,
	*39c8d24db5                    = 2,
	*efb2d6c0f2_MAX                = 3,
};

enum class E*851a056469 : uint8_t
{
	*1869fb09bf                    = 0,
	*8dd76df4f0                    = 1,
	*827ba2c6dc                    = 2,
	*851a056469_MAX                = 3,
};

enum class E*4745551af0 : uint8_t
{
	*df7e9b0608                    = 0,
	*9bb27e5f7e                    = 1,
	*e5b0dfc574                    = 2,
	*4745551af0_MAX                = 3,
};

enum class E*b8f79e8fba : uint8_t
{
	*1cf67381f9                    = 0,
	*62b0b03760                    = 1,
	*c19e13f3d7                    = 2,
	*efeb4d6f61                    = 3,
	*b8f79e8fba_MAX                = 4,
};

enum class E*7ae11d0b76 : uint8_t
{
	*efef8ed03f                    = 0,
	*40ce60a114                    = 1,
	*31e83cc572                    = 2,
	*7ae11d0b76_MAX                = 3,
};

enum class E*fa5f14acf8 : uint8_t
{
	*437d8e0654                    = 0,
	*c4cd65ee31                    = 1,
	*e944055398                    = 2,
	*c2bbf7da71                    = 3,
	*fa5f14acf8_MAX                = 4,
};

enum class E*cc8693e679 : uint8_t
{
	*54c9a1b71c                    = 0,
	*9c6397762a                    = 1,
	*de33c99425                    = 2,
	*570213ccd5                    = 3,
	*f00ae97745                    = 4,
	*dc919679d7                    = 5,
	*f1651276de                    = 6,
	*054786d2a7                    = 7,
	*220ec9763b                    = 8,
	*95ddc051a2                    = 9,
	*02480b2d97                    = 10,
	*cc8693e679_MAX                = 11,
};

enum class E*ef908f84ea : uint8_t
{
	*dd70a05355                    = 0,
	*69f1cf5489                    = 1,
	*60113ff88f                    = 2,
	*6262781a5e                    = 3,
	*54e3e92595                    = 4,
	*06eb8d4c87                    = 5,
	*e46f1933d9                    = 6,
	*ef908f84ea_MAX                = 7,
};

enum class E*33f2a53747 : uint8_t
{
	*37e74e7573                    = 0,
	*5d5b503c4e                    = 1,
	*a318966a60                    = 2,
	*6ae12c5460                    = 3,
	*08583928e3                    = 4,
	*0688667a77                    = 5,
	*33f2a53747_MAX                = 6,
};

enum class E*9282865b8d : uint8_t
{
	*e4c269d9f3                    = 0,
	*fbcf99f4f3                    = 1,
	*5a399f152e                    = 2,
	*9282865b8d_MAX                = 3,
};

enum class E*320561d391 : uint8_t
{
	*570b5fe9d9                    = 0,
	*d6506df98f                    = 1,
	*93c3ce2949                    = 2,
	*2bc5b474f5                    = 3,
	*320561d391_MAX                = 4,
};

enum class E*9687ebf1a7 : uint8_t
{
	*32ccf6574e                    = 0,
	*8624c3fbca                    = 1,
	*b818a1fdff                    = 2,
	*6b7c0fb25b                    = 3,
	*907921b24c                    = 4,
	*5a963875e5                    = 5,
	*9687ebf1a7_MAX                = 6,
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

enum class E*2f657b4099 : uint8_t
{
	*10d32fe051                    = 0,
	*66a4f8b250                    = 1,
	*f812e5aa66                    = 2,
	*de5f0afbba                    = 3,
	*2f657b4099_MAX                = 4,
};

enum class E*7b7d53eef3 : uint8_t
{
	*e806f57a24                    = 0,
	*b94e7d4298                    = 1,
	*ac2772ab6d                    = 2,
	*e4fbb987aa                    = 3,
	*7b7d53eef3_MAX                = 4,
};

enum class E*41d94881ff : uint8_t
{
	*63b3360047                    = 0,
	*f98a5418d1                    = 1,
	*cb3bf44ff2                    = 2,
	*92e2dd1d4b                    = 3,
	*41d94881ff_MAX                = 4,
};

enum class E*f90cc43516 : uint8_t
{
	*91c4eaa337                    = 0,
	*9ffc58e04d                    = 1,
	*0693054a6b                    = 2,
	*7a1ee615e0                    = 3,
	*280538c6ff                    = 4,
	*f079df9a76                    = 5,
	*de2c74c6ff                    = 6,
	*b8fde5e0b5                    = 7,
	*6674785c25                    = 8,
	*f61c90bf59                    = 9,
	*7df96f6712                    = 10,
	*ef2a74f054                    = 11,
	*e442ab68d9                    = 12,
	*ff33d4935f                    = 13,
	*f90cc43516_MAX                = 14,
};

enum class E*cbd931ef19 : uint8_t
{
	*1df762b76d                    = 0,
	*a495734707                    = 1,
	*034e1587e4                    = 2,
	*9877b3b34c                    = 3,
	*9f54a801a2                    = 4,
	*d38a2ad593                    = 5,
	*cbd931ef19_MAX                = 6,
};

enum class E*8052600f90 : uint8_t
{
	*831c05239d                    = 0,
	*e5ce4bfdac                    = 1,
	*0679b6f726                    = 2,
	*1dc06438f8                    = 3,
	*8052600f90_MAX                = 4,
};

enum class E*9037e6495d : uint8_t
{
	*1c3bb3ac3e                    = 0,
	*22a762a6a6                    = 1,
	*f76a2eb923                    = 2,
	*120ec9b12c                    = 3,
	*9037e6495d_MAX                = 4,
};

enum class E*eac277f927 : uint8_t
{
	*085ccee63e                    = 0,
	*aa8aed98a8                    = 1,
	*a03bc96303                    = 2,
	*ccf6c2e42e                    = 3,
	*4681e1d72a                    = 4,
	*fd87e55327                    = 5,
	*f23024057d                    = 6,
	*83d65930f5                    = 7,
	*eac277f927_MAX                = 8,
};

enum class E*d324fc7f05 : uint8_t
{
	*a6cf16f730                    = 0,
	*949c097563                    = 1,
	*c06979a989                    = 2,
	*d324fc7f05_MAX                = 3,
};

enum class E*f1009ae5a6 : uint8_t
{
	*c5d2557980                    = 0,
	*eec9ba7bef                    = 1,
	*41dbea1f6f                    = 2,
	*c8b595c289                    = 3,
	*1712a0087a                    = 4,
	*f1009ae5a6_MAX                = 5,
};

enum class E*50caa6607a : uint8_t
{
	*04d8d17a97                    = 0,
	*66cd5cec37                    = 1,
	*235b156be6                    = 2,
	*50caa6607a_MAX                = 3,
};

enum class E*fa670446aa : uint8_t
{
	*df69f243e2                    = 0,
	*c4974a8af8                    = 1,
	*20a512e999                    = 2,
	*802943efee                    = 3,
	*fa670446aa_MAX                = 4,
};

enum class E*9a626ffd2c : uint8_t
{
	*5b99494e9f                    = 0,
	*35e2083957                    = 1,
	*b654f68f9d                    = 2,
	*35e76a897b                    = 3,
	*9a626ffd2c_MAX                = 4,
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

enum class E*b367fcab2e : uint8_t
{
	*41110dd406                    = 0,
	*92170dc362                    = 1,
	*d009347723                    = 2,
	*37a90dbc48                    = 3,
	*b367fcab2e_MAX                = 4,
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

enum class E*7a3e1f85eb : uint8_t
{
	*2ca1340128                    = 0,
	*c519d2b719                    = 1,
	*ddeb24a23c                    = 2,
	*2f790d4f9d                    = 3,
	*23d4811d7b                    = 4,
	*6e7752f1b3                    = 5,
	*324c674526                    = 6,
	*fe632fce77                    = 7,
	*55e449ad92                    = 8,
	*7a3e1f85eb_MAX                = 9,
};

enum class EAudioOutputTarget : uint8_t
{
	Speaker                        = 0,
	Controller                     = 1,
	ControllerFallbackToSpeaker    = 2,
	EAudioOutputTarget_MAX         = 3,
};

enum class E*af00308d86 : uint8_t
{
	*8f37c09a51                    = 0,
	*81e19118fe                    = 1,
	*7955fdb286                    = 2,
	*8168440723                    = 3,
	*af00308d86_MAX                = 4,
};

enum class E*338a37b4a6 : uint8_t
{
	*1d201ea05f                    = 0,
	*d51d0a8468                    = 1,
	*22395395b3                    = 2,
	*f926e7abd4                    = 3,
	*d2259ebdf6                    = 4,
	*338a37b4a6_MAX                = 5,
};

enum class E*7479e54654 : uint8_t
{
	*3aa2a22754                    = 0,
	*4df038f594                    = 1,
	*f202c74565                    = 2,
	*7479e54654_MAX                = 3,
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

enum class E*e744c4bb1e : uint8_t
{
	*e0bdb007a8                    = 0,
	*520ae3e8b9                    = 1,
	*cc20928734                    = 2,
	*e744c4bb1e_MAX                = 3,
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

enum class E*7868140bc6 : uint8_t
{
	*7252541800                    = 0,
	*d698b9fbfd                    = 1,
	*1b8d3068ae                    = 2,
	*ed3060b1e2                    = 3,
	*3d14e188b3                    = 4,
	*ae933eeea5                    = 5,
	*ced063245c                    = 6,
	*a32514f68c                    = 7,
	*5c70bf98e9                    = 8,
	*043f4a4d32                    = 9,
	*cf38b8d5dc                    = 10,
	*fc9280299c                    = 11,
	*7868140bc6_MAX                = 12,
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

enum class E*c0be4c6b42 : uint8_t
{
	*4c6db3cdc1                    = 0,
	*2f6438ca42                    = 1,
	*e8b840d9c5                    = 2,
	*b8cd347b7a                    = 3,
	*7e20edba0a                    = 4,
	*39297c8d00                    = 5,
	*7e6e77339b                    = 6,
	*93ee754d06                    = 7,
	*da7ef33204                    = 8,
	*0d972cf537                    = 9,
	*c0be4c6b42_MAX                = 10,
};

enum class E*f3313e7be2 : uint8_t
{
	*1dd944a622                    = 0,
	*82abb50fc2                    = 1,
	*069b4678fd                    = 2,
	*7c1f78718c                    = 3,
	*f3313e7be2_MAX                = 4,
};

enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	Source                         = 0,
	Target                         = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2,
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

enum class E*a2eb0178f3 : uint8_t
{
	*8f71846813                    = 0,
	*c3d64fbcf4                    = 1,
	*d46a823134                    = 2,
	*a2eb0178f3_MAX                = 3,
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

enum class E*d6c5a5241e : uint8_t
{
	*503b225a51                    = 0,
	*b86f2da0d6                    = 1,
	*20da4ac790                    = 2,
	*b1695e619a                    = 3,
	*d6c5a5241e_MAX                = 4,
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

enum class E*6f42d0ced0 : uint8_t
{
	*83338ff214                    = 0,
	*99d90950b3                    = 1,
	*2ea008662c                    = 2,
	*a46e1a21a9                    = 3,
	*6f42d0ced0_MAX                = 4,
};

enum class E*fec55b0785 : uint8_t
{
	*f73ebd6b0d                    = 0,
	*a0616e4221                    = 1,
	*ad9cb823b5                    = 2,
	*fec55b0785_MAX                = 3,
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

enum class E*f828ba6c94 : uint8_t
{
	*33c0520914                    = 0,
	*2758b9dd62                    = 1,
	*af4f624ab3                    = 2,
	*5607f5f81b                    = 3,
	*f828ba6c94_MAX                = 4,
};

enum class E*e5e245f044 : uint8_t
{
	*a3526fab90                    = 0,
	*25eeed1774                    = 1,
	*06589edd48                    = 2,
	*c7abee2bf6                    = 3,
	*e5e245f044_MAX                = 4,
};

enum class E*447424a3af : uint8_t
{
	*4d81c6281a                    = 0,
	*be7388d15d                    = 1,
	*4abaf34dbb                    = 2,
	*7617b315a4                    = 3,
	*447424a3af_MAX                = 4,
};

enum class E*b0342b34b4 : uint8_t
{
	*1d4c9d9766                    = 0,
	*c1c455e23e                    = 1,
	*7366a18f18                    = 2,
	*df69d6e022                    = 3,
	*b0342b34b4_MAX                = 4,
};

enum class E*46f5b36d4d : uint8_t
{
	*e110fdea0c                    = 0,
	*4d81c6281a                    = 1,
	*8fa12b7191                    = 2,
	*46f5b36d4d_MAX                = 3,
};

enum class E*0eacbd7c3e : uint8_t
{
	*5dce226277                    = 0,
	*c30041ce68                    = 1,
	*0830113764                    = 2,
	*0eacbd7c3e_MAX                = 3,
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

enum class E*77783a9eaa : uint8_t
{
	*aa1f52ecdc                    = 1,
	*6c472e09c6                    = 2,
	*0d70f10c0e                    = 4,
	*3f6a3c7060                    = 5,
	*77783a9eaa_MAX                = 6,
};

enum class E*72392efa8b : uint8_t
{
	*21a6e60778                    = 0,
	*b6f693ddf2                    = 1,
	*8724adecc9                    = 2,
	*a59afa7945                    = 3,
	*72392efa8b_MAX                = 4,
};

enum class E*3015aa5585 : uint8_t
{
	*9f6b4c6e52                    = 0,
	*115110903e                    = 1,
	*5627016be0                    = 2,
	*9c312b44ed                    = 3,
	*3015aa5585_MAX                = 4,
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

enum class E*9640d6a381 : uint8_t
{
	*812b0e7b47                    = 0,
	*2fa490f54d                    = 1,
	*df0ad2c522                    = 2,
	*5c8a9edd72                    = 3,
	*add4511290                    = 4,
	*8166fffeb3                    = 5,
	*f346f71880                    = 6,
	*7fa60f0238                    = 7,
	*22497f8839                    = 8,
	*5c89eaebbc                    = 9,
	*9640d6a381_MAX                = 10,
};

enum class E*604400c960 : uint8_t
{
	*a004e3b70c                    = 0,
	*26078e2792                    = 1,
	*d4f6e90197                    = 2,
	*604400c960_MAX                = 3,
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

enum class E*89167ee9cf : uint8_t
{
	*599058faa7                    = 0,
	*012e8986f7                    = 1,
	*38aa45c907                    = 2,
	*b478cdbc78                    = 3,
	*89167ee9cf_MAX                = 4,
};

enum class E*4318123e72 : uint8_t
{
	*0bdfa4f616                    = 0,
	*42d29aaff6                    = 1,
	*d35e9a4c98                    = 2,
	*4318123e72_MAX                = 3,
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

enum class E*399eb40b0a : uint8_t
{
	*20fc821340                    = 0,
	*ee2894fa25                    = 1,
	*a4347746b6                    = 2,
	*399eb40b0a_MAX                = 3,
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

enum class E*ec7a72d981 : uint8_t
{
	*b1f01b2a54                    = 0,
	*93e53ac0ed                    = 1,
	*69a6ddb1a6                    = 2,
	*ec7a72d981_MAX                = 3,
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

enum class E*660ca604e5 : uint8_t
{
	*cf1fccda59                    = 0,
	*e5edc28615                    = 1,
	*74aa129b2f                    = 2,
	*660ca604e5_MAX                = 3,
};

enum class EEQSNormalizationType : uint8_t
{
	Absolute                       = 0,
	RelativeToScores               = 1,
	EEQSNormalizationType_MAX      = 2,
};

enum class E*31ed353dab : uint8_t
{
	*bb1f9b4ab9                    = 0,
	*9d4aab7378                    = 1,
	*2b61994b45                    = 2,
	*cd858a0130                    = 3,
	*7ffa713a0d                    = 4,
	*31ed353dab_MAX                = 5,
};

enum class E*2c942c109d : uint8_t
{
	*1e7a265695                    = 0,
	*32da55f050                    = 1,
	*1728c26032                    = 2,
	*2c942c109d_MAX                = 3,
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

enum class E*9c4af1c18f : uint8_t
{
	*b101b8277e                    = 0,
	*eedd2a7fb9                    = 1,
	*a2f847cc4a                    = 2,
	*9c4af1c18f_MAX                = 3,
};

enum class E*8f7d487ac3 : uint8_t
{
	*abe3d5369c                    = 0,
	*c8b62f28a3                    = 1,
	*8d2f4df577                    = 2,
	*8f7d487ac3_MAX                = 3,
};

enum class E*1864cf4338 : uint8_t
{
	*51ffdaa8df                    = 0,
	*b3c5766089                    = 1,
	*bbcb728705                    = 2,
	*1864cf4338_MAX                = 3,
};

enum class E*a70b3d7432 : uint8_t
{
	*fca6cfe679                    = 0,
	*0dd433a97b                    = 1,
	*b4aee42c5b                    = 2,
	*d642658b50                    = 3,
	*ea6aea7a8d                    = 4,
	*94d3a0968e                    = 5,
	*1e8e49162f                    = 6,
	*a70b3d7432_MAX                = 7,
};

enum class E*06fc2c38f2 : uint8_t
{
	*e47c9dbbf4                    = 0,
	*2e9323682e                    = 1,
	*47a8bb9196                    = 2,
	*42e2c589b1                    = 3,
	*587d6bef65                    = 4,
	*6b0256e3bb                    = 5,
	*06fc2c38f2_MAX                = 6,
};

enum class E*87de00111f : uint8_t
{
	*ee3dd690af                    = 0,
	*c710977eee                    = 1,
	*cfa357056f                    = 2,
	*87de00111f_MAX                = 3,
};

enum class E*2ff6d58878 : uint8_t
{
	*29d5e76219                    = 0,
	*5066c1cef3                    = 1,
	*c1db4bc392                    = 2,
	*8cc23681e8                    = 3,
	*2ff6d58878_MAX                = 4,
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

enum class E*caa741f199 : uint8_t
{
	*e42d9555b0                    = 0,
	*ca86618e2d                    = 1,
	*052d4155d1                    = 2,
	*caa741f199_MAX                = 3,
};

enum class EFontLoadingPolicy : uint8_t
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3,
};

enum class E*29bd3bf3a4 : uint8_t
{
	*4cc7bd609c                    = 0,
	*ee526f978c                    = 1,
	*d0c6506e5c                    = 2,
	*ecdc7b3a4a                    = 3,
	*29bd3bf3a4_MAX                = 4,
};

enum class E*85a23d0b5c : uint8_t
{
	*adee6a3a5b                    = 0,
	*d3b61d73f5                    = 1,
	*df95074f07                    = 2,
	*85a23d0b5c_MAX                = 3,
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

enum class E*dae91bfba6 : uint8_t
{
	*52d712e14c                    = 0,
	*50d9d96a23                    = 1,
	*3858c41659                    = 2,
	*dae91bfba6_MAX                = 3,
};

enum class E*7029660bf8 : uint8_t
{
	*4042b88f70                    = 0,
	*ad22dec8a7                    = 1,
	*c793ace9c7                    = 2,
	*b37d5c585c                    = 3,
	*7029660bf8_MAX                = 4,
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

enum class E*42bb3937ec : uint8_t
{
	*fda293a872                    = 0,
	*fd9bb106c1                    = 1,
	*70545aa96e                    = 2,
	*4c6ab433b2                    = 3,
	*f6e6ef2aa5                    = 4,
	*2143166b31                    = 5,
	*989166ef80                    = 6,
	*42bb3937ec_MAX                = 7,
};

enum class E*6217d91850 : uint8_t
{
	*6485e3c8a0                    = 0,
	*733ebf9906                    = 1,
	*6e3f5b2c40                    = 2,
	*fc3facbdc7                    = 3,
	*379fadd364                    = 4,
	*6217d91850_MAX                = 5,
};

enum class E*f760f7028a : uint8_t
{
	*cb25da38d1                    = 0,
	*7c49c15ab5                    = 1,
	*1a012927b4                    = 2,
	*b2b35c2aaa                    = 3,
	*8e8dc9a276                    = 4,
	*b8d07c368e                    = 5,
	*ec21c06769                    = 6,
	*ee305d179c                    = 7,
	*a91aba22a8                    = 8,
	*2dc4a2e54c                    = 9,
	*38b30fa907                    = 10,
	*b0cc1a1c58                    = 11,
	*c38822f52e                    = 12,
	*30fedbbd86                    = 13,
	*587f538abd                    = 14,
	*7a7b6fb58a                    = 15,
	*31826463c1                    = 16,
	*23b0e08bfc                    = 17,
	*ad3f3d6929                    = 18,
	*70d780fcde                    = 19,
	*579dfb100a                    = 20,
	*e1169c9a0f                    = 21,
	*5b70b8c1f2                    = 22,
	*f760f7028a_MAX                = 23,
};

enum class E*bf9d9f221c : uint8_t
{
	*70fae2ed51                    = 0,
	*913511c513                    = 1,
	*ad118e8cc6                    = 2,
	*0a947b5070                    = 3,
	*7d2840ae76                    = 4,
	*21b224c02a                    = 5,
	*92dbf92b98                    = 6,
	*e951bf7cdd                    = 7,
	*c501695bcb                    = 8,
	*ee73dbd42f                    = 9,
	*a43af3c485                    = 10,
	*e558411081                    = 11,
	*7b4dc75447                    = 12,
	*712ef757de                    = 13,
	*d30d796f8d                    = 14,
	*aece3050d3                    = 15,
	*44070905cc                    = 16,
	*e300f9c7af                    = 17,
	*a0efeb3c55                    = 18,
	*9c9f68d204                    = 19,
	*fab203b63f                    = 20,
	*d580556354                    = 21,
	*723e5eec7b                    = 22,
	*16bfb39de5                    = 23,
	*e729bfb36b                    = 24,
	*f063567e42                    = 25,
	*eeb61d2950                    = 26,
	*df40d4ffba                    = 27,
	*58e229752e                    = 28,
	*f934090fa7                    = 29,
	*2e43c5cc17                    = 30,
	*b23621a61f                    = 31,
	*090568744d                    = 32,
	*213ad8d2dc                    = 33,
	*d5060a66da                    = 34,
	*a84c630189                    = 35,
	*297b8bdf74                    = 36,
	*724e49d8e2                    = 37,
	*89215122f6                    = 38,
	*fb93c67933                    = 39,
	*eed87265bd                    = 40,
	*e7758068e5                    = 41,
	*c1db545343                    = 42,
	*06881e1246                    = 43,
	*ac0492a442                    = 44,
	*247fded4a2                    = 45,
	*0037b82b01                    = 46,
	*3c29fef512                    = 47,
	*8519d7fc86                    = 48,
	*0197f27dd8                    = 49,
	*028eee6586                    = 50,
	*fc6f1f874e                    = 51,
	*7da457c19e                    = 52,
	*424f3e3dd1                    = 53,
	*7a9c7110ec                    = 54,
	*1081fd2bea                    = 55,
	*b47ecd9ad7                    = 56,
	*a642d596e0                    = 57,
	*4e1c7587ae                    = 58,
	*b00497fc4c                    = 59,
	*f97a471d94                    = 60,
	*d0e13f5ce8                    = 61,
	*0cf52951ee                    = 62,
	*dda0617d26                    = 63,
	*351522bc36                    = 64,
	*45e229f5c3                    = 65,
	*47afc61dc5                    = 66,
	*e7160bfd64                    = 67,
	*8411c96591                    = 68,
	*66569fca81                    = 69,
	*09bc2a8c96                    = 70,
	*66bed50942                    = 71,
	*d7884aa4fe                    = 72,
	*13ac44b9c3                    = 73,
	*3e5c7c9c7e                    = 74,
	*301d00dbd9                    = 75,
	*dca4bf9404                    = 76,
	*682c08e199                    = 77,
	*dd5d14e92a                    = 78,
	*4a6e9fa2c6                    = 79,
	*7ac269ecaa                    = 80,
	*76ee894df1                    = 81,
	*fe924e94f7                    = 82,
	*db7a5ec4b3                    = 83,
	*68da170fbc                    = 84,
	*b3fd27ed7c                    = 85,
	*8f68cf2516                    = 86,
	*4dc6800c40                    = 87,
	*068a15fa55                    = 88,
	*b5b7f146b1                    = 89,
	*8a57900d78                    = 90,
	*ae3dbaeab9                    = 91,
	*4560a51ac9                    = 92,
	*8088c57c89                    = 93,
	*12c53c5e27                    = 94,
	*c734429142                    = 95,
	*34b379ab54                    = 96,
	*d0690a6834                    = 97,
	*47548ac7bc                    = 98,
	*56cec256f2                    = 99,
	*ec5676ed9c                    = 100,
	*11a72127b0                    = 101,
	*ceb882b346                    = 102,
	*eb599200ef                    = 103,
	*0bc5897f08                    = 104,
	*2dc9d524ff                    = 105,
	*971c8a3ef1                    = 106,
	*01e270c659                    = 107,
	*b62e026d80                    = 108,
	*24061b3572                    = 109,
	*db9a3e2782                    = 110,
	*7c756f0a81                    = 111,
	*b5a297d26e                    = 112,
	*f0b312a7bb                    = 113,
	*9397884495                    = 114,
	*d92b4981ab                    = 115,
	*511a7322c9                    = 116,
	*d835d9c8c8                    = 117,
	*47e4a6b327                    = 118,
	*439e814fa8                    = 119,
	*e929627179                    = 120,
	*afc1155dcd                    = 121,
	*fcf205db4a                    = 122,
	*31c03efb44                    = 123,
	*518e679beb                    = 124,
	*3c4fde70df                    = 125,
	*bf9d9f221c_MAX                = 126,
};

enum class E*cfc77e1779 : uint8_t
{
	*7653e52f18                    = 0,
	*12111aeb8e                    = 1,
	*18bad06e95                    = 2,
	*754babedf5                    = 3,
	*e80e79774a                    = 4,
	*d0c755db8a                    = 5,
	*a17917f4e0                    = 6,
	*cfc77e1779_MAX                = 7,
};

enum class E*6673e69e6f : uint8_t
{
	*18bad06e95                    = 0,
	*754babedf5                    = 1,
	*e80e79774a                    = 2,
	*a17917f4e0                    = 3,
	*6673e69e6f_MAX                = 4,
};

enum class E*480ac42dd6 : uint8_t
{
	*7653e52f18                    = 0,
	*12111aeb8e                    = 1,
	*d0c755db8a                    = 2,
	*a17917f4e0                    = 3,
	*480ac42dd6_MAX                = 4,
};

enum class E*4698e2c00d : uint8_t
{
	*4cab101e6b                    = 0,
	*70ca6949a1                    = 1,
	*a17917f4e0                    = 2,
	*4698e2c00d_MAX                = 3,
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

enum class E*9ec5010ed5 : uint8_t
{
	*c60c5a16cc                    = 0,
	*0154f608ae                    = 1,
	*8be5e889db                    = 2,
	*22974aaf5e                    = 3,
	*9ec5010ed5_MAX                = 4,
};

enum class E*0088eddfb9 : uint8_t
{
	*ccdb51d41a                    = 0,
	*db701eb377                    = 1,
	*71fe812d35                    = 2,
	*0088eddfb9_MAX                = 3,
};

enum class E*3271018ffd : uint8_t
{
	*8c295e745e                    = 0,
	*6f352d293d                    = 1,
	*c8fd09e7a6                    = 2,
	*cce5dc1164                    = 3,
	*3271018ffd_MAX                = 4,
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

enum class E*f164e27219 : uint8_t
{
	*574ce40a6f                    = 1,
	*a5cc30efc0                    = 2,
	*736abb9f1d                    = 3,
	*8bc4a0573d                    = 4,
	*f164e27219_MAX                = 5,
};

enum class ESimulationOverlap : uint8_t
{
	CollisionOverlap               = 0,
	ShadeOverlap                   = 1,
	None                           = 2,
	ESimulationOverlap_MAX         = 3,
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

enum class EBombGameJoinType : uint8_t
{
	Normal                         = 0,
	IntrusionStart                 = 1,
	IntrusionFinish                = 2,
	EBombGameJoinType_MAX          = 3,
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

enum class ETslBombMatchWinType : uint8_t
{
	Draw                           = 0,
	ExceedRoundWin                 = 1,
	ExceedUseBombKit               = 2,
	ExceedKillCount                = 3,
	EnemyAllLogout                 = 4,
	ETslBombMatchWinType_MAX       = 5,
};

enum class E*aa1c49c4b7 : uint8_t
{
	*4db3d8cbec                    = 0,
	*bc33a69573                    = 1,
	*85eeb84905                    = 2,
	*34604fb4dc                    = 3,
	*41000196b6                    = 4,
	*aa1c49c4b7_MAX                = 5,
};

enum class ETslBombPlantedState : uint8_t
{
	NotSet                         = 0,
	Planting                       = 1,
	Planted                        = 2,
	Defused                        = 3,
	Exploded                       = 4,
	ETslBombPlantedState_MAX       = 5,
};

enum class ETslBombRoundInProgressState : uint8_t
{
	Invalid                        = 0,
	TeamDecision                   = 1,
	Preparing                      = 2,
	Playing                        = 3,
	Ending                         = 4,
	ETslBombRoundInProgressState_MAX = 5,
};

enum class EBombKeyNotifyState : uint8_t
{
	None                           = 0,
	InStartArea                    = 1,
	DefenseTeam                    = 2,
	AttackTeam                     = 3,
	HoldBombPlantingKit            = 4,
	EBombKeyNotifyState_MAX        = 5,
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

enum class ETslBombRoundResultHistoryType : uint8_t
{
	None                           = 0,
	TimeUp                         = 1,
	BombExploded                   = 2,
	BombDefused                    = 3,
	TeamElimination                = 4,
	TeamGameLogout                 = 5,
	ETslBombRoundResultHistoryType_MAX = 6,
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

enum class ETslBombKDAMType : uint8_t
{
	Kill                           = 0,
	Death                          = 1,
	Assist                         = 2,
	MissionInstallBomb             = 3,
	MissionDefuseBomb              = 4,
	ETslBombKDAMType_MAX           = 5,
};

enum class ETslBombTeamRole : uint8_t
{
	None                           = 0,
	AttackTeam                     = 1,
	DefenseTeam                    = 2,
	ROLE_MAX                       = 3,
	ETslBombTeamRole_MAX           = 4,
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

enum class EOneOnOneSideType : uint8_t
{
	None                           = 0,
	Home                           = 1,
	Away                           = 2,
	Audience                       = 3,
	EOneOnOneSideType_MAX          = 4,
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

enum class E*05a6219c17 : uint8_t
{
	*06b107a1bc                    = 0,
	*cb23b0394d                    = 1,
	*cd400287d1                    = 2,
	*9dde5af487                    = 3,
	*39c8d8ee6e                    = 4,
	*05a6219c17_MAX                = 5,
};

enum class ETDMCarePackageKitType : uint8_t
{
	CarepackageKit_Off             = 0,
	CarepackageKit_Basic           = 1,
	CarepackageKit_ARKit           = 2,
	CarepackageKit_SRKit           = 3,
	CarepackageKit_MAX             = 4,
};

enum class EInteractionErrorType : uint8_t
{
	None                           = 0,
	Success                        = 1,
	Fail_SearchingOneOnOne         = 2,
	Fail_PlayingOneOnOne           = 3,
	EInteractionErrorType_MAX      = 4,
};

enum class ETrainingButtonActiveType : uint8_t
{
	Default                        = 0,
	AimTrainingOnly                = 1,
	ETrainingButtonActiveType_MAX  = 2,
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

enum class EBombUIHUDTimerStatusType : uint8_t
{
	None                           = 0,
	RoundTime                      = 1,
	Attack                         = 2,
	Defence                        = 3,
	MAX                            = 4,
	EBombUIHUDTimerStatusType_MAX  = 5,
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

enum class ETslBombStartEffectWidgetAPI : uint8_t
{
	Type1_PlayStartEffect          = 0,
	Type2_PlayStartRoundEffect     = 1,
	ETslBombStartEffectWidgetAPI_MAX = 2,
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

enum class E*8cf6cf8ebb : uint8_t
{
	*18736ede35                    = 0,
	*3673bd60c8                    = 1,
	*e5eb4cb6c3                    = 2,
	*8cf6cf8ebb_MAX                = 3,
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

enum class E*4166097718 : uint8_t
{
	*96fb6fcbab                    = 0,
	*452c346131                    = 1,
	*0319b57c17                    = 2,
	*da39e14914                    = 3,
	*3f0c93f6e1                    = 4,
	*cc6e7e099e                    = 5,
	*17618e4b25                    = 6,
	*c44d133bc4                    = 7,
	*e11ec6c34a                    = 8,
	*4166097718_MAX                = 9,
};

enum class EAITaskState : uint8_t
{
	Idle                           = 0,
	Tasking                        = 1,
	Done                           = 2,
	InValid                        = 3,
	EAITaskState_MAX               = 4,
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

enum class ETslSLBExitActorState : uint8_t
{
	Close                          = 0,
	Open                           = 1,
	MAX                            = 2,
	ETslSLBExitActorState_MAX      = 3,
};

enum class EHungerState : uint8_t
{
	Normal                         = 0,
	Hunger                         = 1,
	Starvation                     = 2,
	Famine                         = 3,
	EHungerState_MAX               = 4,
};

enum class E*74aa8acafb : uint8_t
{
	*e9cc98b1a8                    = 0,
	*9ba86129be                    = 1,
	*74aa8acafb_MAX                = 2,
};

enum class ETrainingInfoSwitcherIndex : uint8_t
{
	Aim                            = 0,
	Sound                          = 1,
	ETrainingInfoSwitcherIndex_MAX = 2,
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

enum class E*ce355b49a4 : uint8_t
{
	*303bd1add4                    = 0,
	*ef8bf0ea7c                    = 1,
	*51afcc4329                    = 2,
	*f22ae768b0                    = 3,
	*ce355b49a4_MAX                = 4,
};

enum class E*4ad214d99e : uint8_t
{
	*9b6e7d3b01                    = 0,
	*e422a9ceab                    = 1,
	*6256dac286                    = 2,
	*58da9705e1                    = 3,
	*4ad214d99e_MAX                = 4,
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

enum class E*cb70868245 : uint8_t
{
	*1ec5141994                    = 0,
	*d575e7f922                    = 1,
	*6aacee1c22                    = 2,
	*99491c17ad                    = 3,
	*bf4b1782fc                    = 4,
	*cb70868245_MAX                = 5,
};

enum class E*14d45e59c3 : uint8_t
{
	*d84ce13c16                    = 0,
	*d1d8cd4ce0                    = 1,
	*c678c54c07                    = 2,
	*14d45e59c3_MAX                = 3,
};

enum class E*c08fb63596 : uint8_t
{
	*8239ee7f18                    = 0,
	*9bf60febb4                    = 1,
	*32431fc43e                    = 2,
	*1480b317ad                    = 3,
	*c08fb63596_MAX                = 4,
};

enum class E*af02158810 : uint8_t
{
	*b9ed392b20                    = 0,
	*18f3c61e37                    = 1,
	*c460ec7027                    = 2,
	*db937861ff                    = 3,
	*8f3e209e1f                    = 4,
	*11e24bc82c                    = 5,
	*af02158810_MAX                = 6,
};

enum class E*ffd5453fe7 : uint8_t
{
	*9fc20a8065                    = 0,
	*d40e2a90db                    = 1,
	*cd5394652e                    = 2,
	*130a75f168                    = 3,
	*ce6cdbf45b                    = 4,
	*ffd5453fe7_MAX                = 5,
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

enum class E*089b46aad8 : uint8_t
{
	*c57374f3cf                    = 0,
	*6a6f498dbc                    = 1,
	*ee7b3508f2                    = 2,
	*089b46aad8_MAX                = 3,
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

enum class E*2cb2b7a29a : uint8_t
{
	*50dbffed8e                    = 0,
	*99ca90c16e                    = 1,
	*e72bb099fe                    = 2,
	*0394e9bd7b                    = 3,
	*2cb2b7a29a_MAX                = 4,
};

enum class E*b2910942ea : uint8_t
{
	*6706679892                    = 0,
	*cbf7fbee9e                    = 1,
	*dee8d316f0                    = 2,
	*cd2656055d                    = 3,
	*b2910942ea_MAX                = 4,
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

enum class EActorSequenceObjectReferenceType : uint8_t
{
	ContextActor                   = 0,
	ExternalActor                  = 1,
	Component                      = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};

enum class ECameraFocusMethod : uint8_t
{
	None                           = 0,
	Manual                         = 1,
	Tracking                       = 2,
	ECameraFocusMethod_MAX         = 3,
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

enum class E*04bc210b8a : uint8_t
{
	*cb5e4a18f5                    = 0,
	*ff2a6f4f03                    = 1,
	*2cb8753a33                    = 2,
	*5f0a5fcc92                    = 3,
	*04bc210b8a_MAX                = 4,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};

enum class E*59c37ff8e7 : uint8_t
{
	*dd6eefad65                    = 0,
	*d8aeb17669                    = 1,
	*0de17bae7a                    = 2,
	*89ebe2ee9a                    = 3,
	*b8b7d9309a                    = 4,
	*01270bf6c3                    = 5,
	*12144970f0                    = 6,
	*59c37ff8e7_MAX                = 7,
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

enum class E*f6660691c9 : uint8_t
{
	*13bc36a458                    = 0,
	*9730b9a0de                    = 1,
	*65357fc565                    = 2,
	*e51df9cb0d                    = 3,
	*f6660691c9_MAX                = 4,
};

enum class E*ee02979c34 : uint8_t
{
	*4e762e9414                    = 0,
	*c070bf74b9                    = 1,
	*eb0c6b7921                    = 2,
	*efb5d6c46e                    = 3,
	*ee02979c34_MAX                = 4,
};

enum class E*78b4690ed1 : uint8_t
{
	*e2bcb02a1d                    = 0,
	*bd50ae6608                    = 1,
	*15e4bbea25                    = 2,
	*d126cd0860                    = 3,
	*78b4690ed1_MAX                = 4,
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

enum class E*d9320dc685 : uint8_t
{
	*4f2419f148                    = 0,
	*4f0ea19ad8                    = 1,
	*d9203ea44d                    = 2,
	*18fa3c9ccc                    = 3,
	*d9320dc685_MAX                = 4,
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

enum class E*aded7735cb : uint8_t
{
	*6058cc49dc                    = 0,
	*56f5542bbc                    = 1,
	*3cd626fa88                    = 2,
	*aded7735cb_MAX                = 3,
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

enum class E*ddfd258336 : uint8_t
{
	*52a56b90f5                    = 0,
	*4e0a76ae47                    = 1,
	*ce3a3e8909                    = 2,
	*301fcdf791                    = 3,
	*ddfd258336_MAX                = 4,
};

enum class E*8fcdb86e47 : uint8_t
{
	*3bdeca3c91                    = 0,
	*70d9a1f6c2                    = 1,
	*bf29605cfd                    = 2,
	*202f962c16                    = 3,
	*6c68db9bc0                    = 4,
	*468b694906                    = 5,
	*64312ac210                    = 6,
	*654fa01ce5                    = 7,
	*d19a786e27                    = 8,
	*4fd60880b6                    = 9,
	*3128066912                    = 10,
	*ec9329bd53                    = 11,
	*8fcdb86e47_MAX                = 12,
};

enum class E*32b4d7a8b1 : uint8_t
{
	*476be030ec                    = 0,
	*619e9bfc9d                    = 1,
	*fc76bb2ef8                    = 2,
	*acb94ea683                    = 3,
	*32b4d7a8b1_MAX                = 4,
};

enum class EPrefabVisualizerType : uint8_t
{
	WireBox                        = 0,
	WireSphere                     = 1,
	EPrefabVisualizerType_MAX      = 2,
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

enum class E*8ec2a0ffda : uint8_t
{
	*aaf69d669b                    = 0,
	*3194950d57                    = 1,
	*c4c0a5b338                    = 2,
	*8ec2a0ffda_MAX                = 3,
};

enum class ETileMapProjectionMode : uint8_t
{
	Orthogonal                     = 0,
	IsometricDiamond               = 1,
	IsometricStaggered             = 2,
	HexagonalStaggered             = 3,
	ETileMapProjectionMode_MAX     = 4,
};

enum class E*3b07d02b30 : uint8_t
{
	*481117c435                    = 0,
	*a25b37a8a3                    = 1,
	*c8af66b6ef                    = 2,
	*3b07d02b30_MAX                = 3,
};

enum class E*6fca25cd82 : uint8_t
{
	*4530b0c752                    = 0,
	*976204096c                    = 1,
	*c797c96b02                    = 2,
	*00cd775201                    = 3,
	*4907504aae                    = 4,
	*6fca25cd82_MAX                = 5,
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

enum class E*f7efcc39e6 : uint8_t
{
	*dcd3d46c59                    = 0,
	*bf1c67af18                    = 1,
	*5893e5b0ed                    = 2,
	*1b3e916a82                    = 3,
	*f7efcc39e6_MAX                = 4,
};

enum class E*df0706c887 : uint8_t
{
	*664442dabd                    = 0,
	*fca4313933                    = 1,
	*a49df12525                    = 2,
	*28115f6662                    = 3,
	*83a9790d11                    = 4,
	*df0706c887_MAX                = 5,
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

enum class E*eef96cfb6d : uint8_t
{
	*4bf41b34b5                    = 0,
	*427760541a                    = 1,
	*3848315554                    = 2,
	*5e083c49be                    = 3,
	*eef96cfb6d_MAX                = 4,
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

