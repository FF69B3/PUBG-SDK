                                                      /* Create by #FF69B4 */
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

enum class E*929ba874ff : uint8_t
{
	*5e8cf25013                    = 0,
	*8bf69bc6cf                    = 1,
	*826243fd0e                    = 2,
	*929ba874ff_MAX                = 3,
};

enum class E*b785430ea1 : uint8_t
{
	*81f279c468                    = 0,
	*8dbbb4d39e                    = 1,
	*3973101bc4                    = 2,
	*b785430ea1_MAX                = 3,
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

enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_MAX                       = 5,
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
	MAX                            = 12,
	EWeaponAttachmentSlotID_MAX    = 13,
};

enum class E*c47869c0dc : uint8_t
{
	*e6f79cceb9                    = 0,
	*176e20f129                    = 1,
	*abfc5452b8                    = 2,
	*c47869c0dc_MAX                = 3,
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

enum class E*a6d1d21821 : uint8_t
{
	*40104a0526                    = 0,
	*98219cc8fd                    = 1,
	*bf94c76b31                    = 2,
	*a6d1d21821_MAX                = 3,
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

enum class E*694075ca8d : uint8_t
{
	*a98036df3e                    = 0,
	*c0dea29d74                    = 1,
	*6fed7b7917                    = 2,
	*c59b5320cc                    = 3,
	*35d066d8da                    = 4,
	*6aab8de9a2                    = 5,
	*ea73d1d571                    = 6,
	*23c676028f                    = 7,
	*6de3c7c0c8                    = 8,
	*694075ca8d_MAX                = 9,
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

enum class E*0845d66137 : uint8_t
{
	*da0dcdf905                    = 0,
	*d3ba0c08c8                    = 1,
	*2acc4a03c8                    = 2,
	*36e50bbe3e                    = 3,
	*0845d66137_MAX                = 4,
};

enum class E*9065b5a725 : uint8_t
{
	*7e733ecde8                    = 0,
	*fb515ce1f0                    = 1,
	*43cb134aa9                    = 2,
	*0201ff35ac                    = 3,
	*aa85725c1a                    = 4,
	*d6ce4fa222                    = 5,
	*216239da54                    = 6,
	*9162cd38cf                    = 7,
	*9065b5a725_MAX                = 8,
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

enum class E*c9eb752417 : uint8_t
{
	*11ba1bb2d6                    = 0,
	*94c7aa1ae7                    = 1,
	*ed257d886a                    = 2,
	*c9eb752417_MAX                = 3,
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

enum class E*2e415c9fd6 : uint8_t
{
	*e2afea2386                    = 0,
	*90e6aff268                    = 1,
	*94f1a45639                    = 2,
	*9dfd2608c0                    = 3,
	*e6afcaa3aa                    = 4,
	*3ae4ea94f3                    = 5,
	*2e415c9fd6_MAX                = 6,
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

enum class E*f1ff4618e0 : uint8_t
{
	*3800486d0f                    = 0,
	*b00f1775b4                    = 1,
	*6f59fc0f60                    = 2,
	*f1ff4618e0_MAX                = 3,
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

enum class E*9f96d37860 : uint8_t
{
	*b67b03d280                    = 0,
	*d9465988b1                    = 1,
	*53ea19cc56                    = 2,
	*6f6538ccec                    = 3,
	*0bb8d6e7aa                    = 4,
	*9f96d37860_MAX                = 5,
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

enum class E*6d55215007 : uint8_t
{
	*708186eab3                    = 0,
	*a932e11094                    = 1,
	*6d55215007_MAX                = 2,
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

enum class E*c1281db4cb : uint8_t
{
	*dc8a5363f2                    = 0,
	*2d66dc039b                    = 1,
	*d72640ca14                    = 2,
	*c1281db4cb_MAX                = 3,
};

enum class E*16428ee937 : uint8_t
{
	*003fbe75fb                    = 0,
	*307a06905d                    = 1,
	*c83e396f58                    = 2,
	*8e34c62039                    = 3,
	*f7601182d5                    = 4,
	*b5c2ecab6c                    = 5,
	*16428ee937_MAX                = 6,
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

enum class E*94d0dbd48f : uint8_t
{
	*8c3ec2cb42                    = 0,
	*c3ca5c4836                    = 1,
	*4f5519ec97                    = 2,
	*94d0dbd48f_MAX                = 3,
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

enum class E*0c9b41616c : uint8_t
{
	*42d7d4af49                    = 0,
	*c9197ae776                    = 1,
	*45ae60414d                    = 2,
	*20b10f9e12                    = 3,
	*2ec46d8cb2                    = 4,
	*0c9b41616c_MAX                = 5,
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

enum class E*2bc6fed108 : uint8_t
{
	*37d27aa5fa                    = 0,
	*660b6b5ab4                    = 1,
	*104649268a                    = 2,
	*fdaa2fb7ae                    = 3,
	*2bc6fed108_MAX                = 4,
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

enum class E*508e1cb4e5 : uint8_t
{
	*ec39b765bd                    = 0,
	*ff0620f210                    = 1,
	*084f1a8240                    = 2,
	*179b7cf656                    = 3,
	*508e1cb4e5_MAX                = 4,
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

enum class E*4c0936029a : uint8_t
{
	*52dc4a2a1b                    = 0,
	*0358a81bd2                    = 1,
	*bd87a0edd7                    = 2,
	*3b72e19ac1                    = 3,
	*299b1406c4                    = 4,
	*4c0936029a_MAX                = 5,
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

enum class E*10601a303f : uint8_t
{
	*eb24eb09c6                    = 0,
	*a0cdf356f2                    = 1,
	*c1474e736b                    = 2,
	*674b2a1ece                    = 3,
	*53e517c956                    = 4,
	*0ce6d3d3bf                    = 5,
	*d1c3675c2d                    = 6,
	*9aec3db2f5                    = 7,
	*1f13dae4ba                    = 8,
	*10601a303f_MAX                = 9,
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

enum class E*dc002d0332 : uint8_t
{
	*ac028deab2                    = 0,
	*3cf8944faa                    = 1,
	*04aafa62b3                    = 2,
	*a814963bb6                    = 3,
	*dc002d0332_MAX                = 4,
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
	InvalidImpact_Adjusted         = 14,
	InvalidImpactZ                 = 15,
	InvalidImpactZ_Adjusted        = 16,
	InvalidImpact_Gun_C            = 17,
	InvalidImpact_Gun_C_Adjusted   = 18,
	InvalidOrigin_Gun              = 19,
	InvalidOrigin_Gun_Adjusted     = 20,
	InvalidOrigin_Melee            = 21,
	InvalidOrigin_Melee_Adjusted   = 22,
	InvalidOrigin_Punch            = 23,
	InvalidOrigin_Punch_Adjusted   = 24,
	InvalidOrigin_Throwable        = 25,
	InvalidOrigin_MeleeThrow       = 26,
	InvalidOrigin_MeleeThrow_Adjusted = 27,
	InvalidSimStep_MeleeThrow      = 28,
	InvalidRange                   = 29,
	InvalidRange2                  = 30,
	InvalidRange2_Adjusted         = 31,
	InvalidRange_MeleeThrow        = 32,
	InvalidReviving                = 33,
	InvalidKick                    = 34,
	InvalidA0                      = 35,
	InvalidB1                      = 36,
	InvalidB1                      = 37,
	InvalidH0                      = 38,
	InvalidOrigin_Gun_C            = 39,
	InvalidOrigin_Gun_C_Adjusted   = 40,
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
	InvalidInitialPenetratingAmmo  = 88,
	InvalidPenetratingAmmoId       = 89,
	InvalidMeleeAttackSpeed        = 90,
	InvalidMovementModeInContext   = 91,
	InvalidSkydiveAttack           = 92,
	CHKSUM_PUNCH                   = 93,
	CHKSUM_MELEE                   = 94,
	CHKSUM_A0                      = 95,
	CHKSUM_T0                      = 96,
	CHKSUM_S0                      = 97,
	CHKSUM_D0                      = 98,
	CHKSUM_V0                      = 99,
	CHKSUM_W0                      = 100,
	CHKSUM_T1                      = 101,
	CHKSUM_D1                      = 102,
	CHKSUM_CD                      = 103,
	CHKSUM_LC                      = 104,
	CHKSUM_P0                      = 105,
	CHKSUM_BP                      = 106,
	CHKSUM_G1                      = 107,
	CHKSUM_H2                      = 108,
	CHKSUM_H3                      = 109,
	CHKSUM_UO                      = 110,
	CHKSUM_UF                      = 111,
	VHC_RI                         = 112,
	VHC_MG_FF                      = 113,
	VHC_MG_FC                      = 114,
	VHC_MG_SW                      = 115,
	VHC_MG_OS                      = 116,
	VHC_MG_BC                      = 117,
	VHC_MG_TC                      = 118,
	VHC_MG_PL                      = 119,
	VHC_MG_HL                      = 120,
	VHC_MG_SD                      = 121,
	VHC_MG_AA                      = 122,
	VHC_MG_AV                      = 123,
	VHC_MG_AD                      = 124,
	VHC_MGB_FF                     = 125,
	VHC_MGB_FC                     = 126,
	VHC_MGB_OS                     = 127,
	VHC_MGB_BC                     = 128,
	VHC_MGB_TC                     = 129,
	VHC_MGB_PL                     = 130,
	VHC_MGB_HL                     = 131,
	VHC_MGB_AA                     = 132,
	VHC_MGB_AV                     = 133,
	VHC_MGB_AD                     = 134,
	VHC_MGF_OS                     = 135,
	VHC_MGF_TC                     = 136,
	VHC_MGF_BC                     = 137,
	VHC_MGF_SD                     = 138,
	VHC_MGF_AA                     = 139,
	VHC_MGF_AV                     = 140,
	VHC_KILL                       = 141,
	VHC_ED                         = 142,
	VHC_SERVERSIMUL                = 143,
	VHC_SIMULATION_ACTIVATE        = 144,
	VHC_SIMULATION_DEACTIVATE      = 145,
	VHC_TRY_BYPASS_SERVERSIMUL     = 146,
	VHC_BYPASSED_SERVERSIMUL       = 147,
	VHC_FORCE_SERVERSIMUL          = 148,
	CK_ACTIVATE                    = 149,
	CK_DEACTIVATE                  = 150,
	AntiCheatKick_WallHack         = 151,
	AntiCheatKick_ESP              = 152,
	AntiCheatKick_SpeedHack1       = 153,
	AntiCheatKick_SpeedHack2       = 154,
	AntiCheatKick_SpeedHack3       = 155,
	AntiCheatKick_PLFC             = 156,
	AntiCheatKick_TCFC             = 157,
	AntiCheatKick_HL               = 158,
	AntiCheatKick_OS               = 159,
	AntiCheatKick_FC               = 160,
	AntiCheatKick_SV               = 161,
	VehicleSimulation_PLFC         = 162,
	VehicleSimulation_TCFC         = 163,
	VehicleSimulation_HL           = 164,
	VehicleSimulation_OS           = 165,
	VehicleSimulation_FC           = 166,
	CC_ACTIVATE                    = 167,
	CC_DEACTIVATE                  = 168,
	CC_FORCE_ERROR_CORRECTION      = 169,
	FLC_ACTIVATE                   = 170,
	FLC_DEACTIVATE                 = 171,
	FallingCorrection              = 172,
	VaultingCorrection             = 173,
	QS_AJ                          = 174,
	QS_VZ                          = 175,
	KGB_AF                         = 176,
	ConsoleInputLog                = 177,
	FireInputLog                   = 178,
	HighLocationVehicle            = 179,
	HighLocationBoat               = 180,
	UnderLandscapeBoat             = 181,
	UnderLandscapeCharacter        = 182,
	InsideMeshCharacter            = 183,
	BC_BoatCorrection              = 184,
	HBR_InvalidDashDistance        = 185,
	DESP_SelfInfo                  = 186,
	DESP_SelfInvalidCheckSum       = 187,
	DESP_SelfInvalidCount          = 188,
	DESP_RemoteInfo                = 189,
	DESP_RemoteInvalidCheckSum     = 190,
	HitInSmoke                     = 191,
	BoneFocusedShoot               = 192,
	CenterFocusedShoot             = 193,
	Combination_Undefined          = 194,
	Combination_FlyingCar          = 195,
	Combination_InsideMeshAttack   = 196,
	AbnormalMovementPostVaultSpeed = 197,
	AbnormalMovementPostVaultDistance = 198,
	VaultOverLimitDistance         = 199,
	Vehicle_PhysXDisabled          = 200,
	Vehicle_GravityDisabled        = 201,
	MaxCheatType                   = 202,
	ECheatType_MAX                 = 203,
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

enum class E*e5470e33ef : uint8_t
{
	*deff9fab43                    = 0,
	*dc5960cbaf                    = 1,
	*7eaabc12e1                    = 2,
	*e5470e33ef_MAX                = 3,
};

enum class E*95e53fe32a : uint8_t
{
	*db1b137624                    = 0,
	*1ef6f34265                    = 1,
	*24e6eeaa12                    = 2,
	*2997cdb7d4                    = 3,
	*3a2d985724                    = 4,
	*95e53fe32a_MAX                = 5,
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

enum class E*625590d0c2 : uint8_t
{
	*2fee1a588c                    = 0,
	*a913b2434f                    = 1,
	*a71adddad6                    = 2,
	*625590d0c2_MAX                = 3,
};

enum class E*c9df6eea55 : uint8_t
{
	*d68ca49b98                    = 0,
	*cd2b37bc02                    = 1,
	*348a412c62                    = 2,
	*0d40adcff6                    = 3,
	*c9df6eea55_MAX                = 4,
};

enum class E*0c029686f9 : uint8_t
{
	*cffcb2b4a2                    = 0,
	*99cab4d20f                    = 1,
	*9060bc5790                    = 2,
	*3543748684                    = 3,
	*e8fd6295dc                    = 4,
	*7800a7e5d2                    = 5,
	*cb821f55ea                    = 6,
	*8651532adc                    = 7,
	*6c4be0bb6f                    = 8,
	*e89671cf56                    = 9,
	*76799a26c1                    = 10,
	*9e3a91d499                    = 11,
	*a6452add30                    = 12,
	*b55b298c42                    = 13,
	*d32c5e778d                    = 14,
	*16f4881f3e                    = 15,
	*b66c98b0b8                    = 16,
	*f785a8aebe                    = 17,
	*3d56a91e13                    = 18,
	*8aa510b2e6                    = 19,
	*6e9c553f87                    = 20,
	*50692c4ff4                    = 21,
	*781101e570                    = 22,
	*abcd610aca                    = 23,
	*e47c93dca4                    = 24,
	*47705f223c                    = 25,
	*9c6becb167                    = 26,
	*98c3818b11                    = 27,
	*1ae93390fa                    = 28,
	*5c26e26fd0                    = 29,
	*bbad763913                    = 30,
	*ac152aaf23                    = 31,
	*4cbc3b6dcd                    = 32,
	*bb7990fa40                    = 33,
	*73fe5dea6a                    = 34,
	*bfcef4dc95                    = 35,
	*db49560e51                    = 36,
	*cc7d2047f4                    = 37,
	*961018bcbb                    = 38,
	*c1837329e2                    = 39,
	*efcce52d37                    = 40,
	*60aa7e3807                    = 41,
	*beaac3d3f8                    = 42,
	*690b3776da                    = 43,
	*15b55c1d40                    = 44,
	*4c57a138e9                    = 45,
	*9c793533f2                    = 46,
	*1d25e4a68e                    = 47,
	*05672894c3                    = 48,
	*ab047675c4                    = 49,
	*cf7985b49b                    = 50,
	*253137b9dd                    = 51,
	*84c533b2b2                    = 52,
	*018c307556                    = 53,
	*a418dd5992                    = 54,
	*0c029686f9_MAX                = 55,
};

enum class E*8f4baf6a40 : uint8_t
{
	*aa1d9041a1                    = 0,
	*7b2601f0a7                    = 1,
	*13689937b9                    = 2,
	*038aab7db4                    = 3,
	*8f4baf6a40_MAX                = 4,
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

enum class E*d193dcaf4a : uint8_t
{
	*d47cf285f8                    = 0,
	*300cc94409                    = 1,
	*68aeda78ea                    = 2,
	*d114b4fbb1                    = 3,
	*d193dcaf4a_MAX                = 4,
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

enum class E*22d18d8cef : uint8_t
{
	*ab1886b5a7                    = 0,
	*e667f02461                    = 1,
	*2b58702d88                    = 2,
	*de10c597aa                    = 3,
	*88fda22803                    = 4,
	*228a9a166f                    = 5,
	*042c088b3e                    = 6,
	*22d18d8cef_MAX                = 7,
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

enum class E*adaafbaabc : uint8_t
{
	*41bbdbfcab                    = 0,
	*375974bf99                    = 1,
	*6f697c8d05                    = 2,
	*ff16dbc633                    = 3,
	*991a1b88eb                    = 4,
	*5f29156e9d                    = 5,
	*f75b9e231b                    = 6,
	*adaafbaabc_MAX                = 7,
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

enum class E*fd459318d7 : uint8_t
{
	*0e3d52e6bf                    = 0,
	*3b2c830fa8                    = 1,
	*62437012af                    = 2,
	*fd459318d7_MAX                = 3,
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

enum class E*30d1b12683 : uint8_t
{
	*b19ee00a6a                    = 0,
	*1640abbcd2                    = 1,
	*dd42e86243                    = 2,
	*30d1b12683_MAX                = 3,
};

enum class E*547d685912 : uint8_t
{
	*1f9281b18d                    = 0,
	*6350a70387                    = 1,
	*f1b9f061cf                    = 2,
	*fd2f7bcdf6                    = 3,
	*c2f6b81fa6                    = 4,
	*547d685912_MAX                = 5,
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

enum class E*1124f3d761 : uint8_t
{
	*d4780e248c                    = 0,
	*2c40e71cd4                    = 1,
	*36f3c1e6c9                    = 2,
	*1124f3d761_MAX                = 3,
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

enum class E*d10aff0ea3 : uint8_t
{
	*f8163728a1                    = 0,
	*9fa3893f14                    = 1,
	*8f3bd2674d                    = 2,
	*6a97df3cea                    = 3,
	*c8e2aaf1a6                    = 4,
	*a23d01a520                    = 5,
	*9c0c1acff5                    = 6,
	*d10aff0ea3_MAX                = 7,
};

enum class E*2d189bc12e : uint8_t
{
	*e69ab3723d                    = 0,
	*1352e9e2aa                    = 1,
	*c6bf42fdc9                    = 2,
	*b1987c2302                    = 3,
	*af74a0aa88                    = 4,
	*2d189bc12e_MAX                = 5,
};

enum class E*daf44b4f40 : uint8_t
{
	*359755952a                    = 0,
	*f08e3a85df                    = 1,
	*7205cdf2f9                    = 2,
	*9c2b81ddd3                    = 3,
	*daf44b4f40_MAX                = 4,
};

enum class E*ddc31ac5b1 : uint8_t
{
	*99ab9add09                    = 0,
	*aa3a3d26aa                    = 1,
	*dab1046371                    = 2,
	*5ac42c8f42                    = 3,
	*046a35b3da                    = 4,
	*76970db570                    = 5,
	*45a4501821                    = 6,
	*ddc31ac5b1_MAX                = 7,
};

enum class E*61f7bbedaf : uint8_t
{
	*eed7c1aa86                    = 0,
	*94d23b1364                    = 1,
	*66a7bc3aa6                    = 2,
	*28b35e6996                    = 3,
	*48a21160c3                    = 4,
	*61f7bbedaf_MAX                = 5,
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

enum class E*7f5dc5c975 : uint8_t
{
	*5d27bb28f1                    = 0,
	*01e46a98b5                    = 1,
	*30bd26f92f                    = 2,
	*ea13441330                    = 3,
	*17f61d91df                    = 4,
	*7c8e4439a5                    = 5,
	*1cbd4d6683                    = 6,
	*47f4877d26                    = 7,
	*7f5dc5c975_MAX                = 8,
};

enum class E*f4b9964992 : uint8_t
{
	*be97f8e43c                    = 0,
	*4419041a0c                    = 1,
	*92973ff48f                    = 2,
	*f4b9964992_MAX                = 3,
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

enum class E*ea7b27019a : uint8_t
{
	*f44034f106                    = 0,
	*36457f939a                    = 1,
	*7e4b07113a                    = 2,
	*de261cb761                    = 3,
	*2c2f8a3323                    = 4,
	*0400c091a1                    = 5,
	*75ff18c1af                    = 6,
	*ea7b27019a_MAX                = 7,
};

enum class E*ebed2e5f80 : uint8_t
{
	*49882c7ef8                    = 0,
	*d0e5bd294d                    = 1,
	*3ff8cdbd86                    = 2,
	*3aa6248109                    = 3,
	*ebed2e5f80_MAX                = 4,
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

enum class E*06c7a66c6e : uint8_t
{
	*1b7cbdc90c                    = 0,
	*d18e1682fa                    = 1,
	*4a97bf8af7                    = 2,
	*e882f3d78b                    = 3,
	*06c7a66c6e_MAX                = 4,
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

enum class EBoosterItem : uint8_t
{
	ADRENALINE                     = 0,
	PAINKILLER                     = 1,
	ENERGYDRINK                    = 2,
	EBoosterItem_MAX               = 3,
};

enum class E*07f5e9b947 : uint8_t
{
	*07891f90f5                    = 0,
	*485ed40143                    = 1,
	*3b2cab3c28                    = 2,
	*491484bbfb                    = 3,
	*57e3f1ff1a                    = 4,
	*07f5e9b947_MAX                = 5,
};

enum class E*db23be36cc : uint8_t
{
	*b3f93ee143                    = 0,
	*dee9013800                    = 1,
	*33afa9391a                    = 2,
	*2b6ff84cf4                    = 3,
	*c86ca75054                    = 4,
	*db23be36cc_MAX                = 5,
};

enum class E*3602236423 : uint8_t
{
	*46a446de97                    = 0,
	*b15ba278e8                    = 1,
	*ca0b892eb7                    = 2,
	*a90744bedc                    = 3,
	*3602236423_MAX                = 4,
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

enum class E*0fa4f04ecc : uint8_t
{
	*c64f11ebf4                    = 0,
	*2c3cb55c99                    = 1,
	*1953d283e1                    = 2,
	*882ff34707                    = 3,
	*0fa4f04ecc_MAX                = 4,
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

enum class E*4587e7771a : uint8_t
{
	*546316334e                    = 0,
	*d35d07efa0                    = 1,
	*2d1065b43a                    = 2,
	*09f6b872c7                    = 3,
	*5417e08ce8                    = 16,
	*d1e0be8bee                    = 17,
	*3fc7cd0fae                    = 18,
	*71a67a2740                    = 19,
	*1558d7fb63                    = 32,
	*81562c5ede                    = 33,
	*8c31eec665                    = 34,
	*ee2b104b2f                    = 35,
	*bebf47a8a6                    = 36,
	*4587e7771a_MAX                = 37,
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

enum class E*89f5461def : uint8_t
{
	*3ebde61808                    = 0,
	*80f975e52c                    = 1,
	*6c8674d9c7                    = 2,
	*3e34ae7585                    = 3,
	*b2718efc45                    = 4,
	*89f5461def_MAX                = 5,
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

enum class E*17fad46967 : uint8_t
{
	*1efd638c25                    = 0,
	*ea4fd603a1                    = 1,
	*422f6a30c6                    = 2,
	*17fad46967_MAX                = 3,
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

enum class E*68569f367d : uint8_t
{
	*a902443a7f                    = 0,
	*60294018ca                    = 1,
	*3721c4eadd                    = 2,
	*6e5288f597                    = 3,
	*68569f367d_MAX                = 4,
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

enum class E*c78423a581 : int32_t
{
	*1d583c4f32                    = 0,
	*ccf0a82207                    = 1,
	*97cedb7b6a                    = 2,
	*93a914b84e                    = 3,
	*c78423a581_MAX                = 4,
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

enum class E*287e3a394a : uint8_t
{
	*ab00f58509                    = 0,
	*01e5c7e7d0                    = 1,
	*b8f3a3efb4                    = 2,
	*b048b5bdd6                    = 3,
	*817a22938f                    = 4,
	*287e3a394a_MAX                = 5,
};

enum class E*6ab08aed14 : uint8_t
{
	*779e1b71df                    = 0,
	*05d59d7cdd                    = 1,
	*557e9f4f81                    = 2,
	*c74823cd9c                    = 3,
	*6ab08aed14_MAX                = 4,
};

enum class E*fa969d49dd : uint8_t
{
	*22793c2f5b                    = 0,
	*9cb0db5e4e                    = 1,
	*f521d52367                    = 2,
	*409a62dbae                    = 3,
	*fa969d49dd_MAX                = 4,
};

enum class E*7aa2847806 : uint8_t
{
	*c8823cd2bd                    = 0,
	*32a485e3f1                    = 1,
	*b8d8b120f8                    = 2,
	*5776be62e1                    = 3,
	*7aa2847806_MAX                = 4,
};

enum class E*b80fd979ef : uint8_t
{
	*8ce2237642                    = 0,
	*3c3b1f9a5e                    = 1,
	*e9a7334273                    = 2,
	*9417ffd846                    = 3,
	*b80fd979ef_MAX                = 4,
};

enum class E*d8e936cc95 : uint8_t
{
	*2e0ba37da0                    = 0,
	*4a878519f5                    = 1,
	*7de84578e4                    = 2,
	*7e3fdebaed                    = 3,
	*d8e936cc95_MAX                = 4,
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

enum class E*ada48b52ee : uint8_t
{
	*c5650879e0                    = 0,
	*3b0ec084d8                    = 1,
	*a4e8be497b                    = 2,
	*0adea85c98                    = 3,
	*bda16f1521                    = 4,
	*b06b31a427                    = 5,
	*bb443f5c3d                    = 6,
	*1dfd422659                    = 7,
	*ada48b52ee_MAX                = 8,
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

enum class E*a172fb7da3 : uint8_t
{
	*804d86ee08                    = 0,
	*40d947b811                    = 1,
	*a13a5c64c3                    = 2,
	*ba7d3b0f10                    = 3,
	*a172fb7da3_MAX                = 4,
};

enum class E*3b5d5b9b35 : uint8_t
{
	*ac836b3939                    = 0,
	*e701ca9ef4                    = 1,
	*114aca46a8                    = 2,
	*f16b721aaf                    = 3,
	*3b5d5b9b35_MAX                = 4,
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

enum class E*3efe0c539b : uint8_t
{
	*b70a1391b6                    = 0,
	*7131a7e01f                    = 1,
	*318a0a920a                    = 2,
	*3efe0c539b_MAX                = 3,
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

enum class E*5bafa136c9 : uint8_t
{
	*1a99fe0123                    = 0,
	*a6c5662541                    = 1,
	*6dfcf5d313                    = 2,
	*55eba15cb6                    = 3,
	*2c1bfcbabf                    = 4,
	*b208e17fe1                    = 5,
	*1c22efb010                    = 6,
	*6107caec66                    = 7,
	*8a25599ba7                    = 8,
	*a49ae5b270                    = 9,
	*1dbaf95b5a                    = 10,
	*bdb300b109                    = 11,
	*67bfcb5155                    = 12,
	*5bafa136c9_MAX                = 13,
};

enum class E*e3f3da9fae : uint8_t
{
	*a79def501a                    = 0,
	*2af126800b                    = 1,
	*08b067fc9e                    = 2,
	*84814362a0                    = 3,
	*e3f3da9fae_MAX                = 4,
};

enum class E*973e16ff1a : uint8_t
{
	*b3afe1b32f                    = 0,
	*2267548d5e                    = 1,
	*d8ec7f2951                    = 2,
	*95dfc96853                    = 3,
	*b87387b591                    = 4,
	*7b6e870557                    = 5,
	*973e16ff1a_MAX                = 6,
};

enum class EVehicleEngineState : uint8_t
{
	EEngineStateAutoOff            = 0,
	EEngineStateAutoOn             = 1,
	EEngineStateManualOff          = 2,
	EEngineStateManualOn           = 3,
	EVehicleEngineState_MAX        = 4,
};

enum class E*b85465cbc4 : uint8_t
{
	*f90b899f2d                    = 0,
	*4394403f84                    = 1,
	*369653c712                    = 2,
	*6ff71d831f                    = 3,
	*b9e7dcc339                    = 4,
	*b85465cbc4_MAX                = 5,
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

enum class E*6538a7333b : uint8_t
{
	*2bbfee67df                    = 0,
	*4573a986ed                    = 1,
	*b6c2622904                    = 2,
	*9855b261bb                    = 3,
	*6538a7333b_MAX                = 4,
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

enum class E*4bb141d046 : uint8_t
{
	*f7d785c62d                    = 0,
	*f1976dc382                    = 1,
	*c0dc82e665                    = 2,
	*4bb141d046_MAX                = 3,
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

enum class E*ea6c37e982 : uint8_t
{
	*7859e82734                    = 0,
	*835e9d2485                    = 1,
	*7fc48f6b09                    = 2,
	*260ccb588d                    = 3,
	*ea6c37e982_MAX                = 4,
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

enum class E*a3b5d62260 : uint8_t
{
	*f02b84ca7b                    = 0,
	*6f4afd0bbc                    = 1,
	*09e24a3583                    = 2,
	*a9388f93d6                    = 3,
	*b8c7815dd7                    = 4,
	*a3b5d62260_MAX                = 5,
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

enum class EGasPumpState : uint8_t
{
	Inactive                       = 0,
	StartFueling                   = 1,
	StopFueling                    = 2,
	StopFuelingFull                = 3,
	EGasPumpState_MAX              = 4,
};

enum class E*00547785e4 : uint8_t
{
	*1bf50e9dbb                    = 0,
	*3ff73a0c0e                    = 1,
	*f4056c5b47                    = 2,
	*00547785e4_MAX                = 3,
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

enum class E*86e34c59b8 : uint8_t
{
	*6adedb69b9                    = 0,
	*0977e74ffc                    = 1,
	*6d3f28c3ee                    = 2,
	*86e34c59b8_MAX                = 3,
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

enum class E*ef56822fc1 : uint8_t
{
	*159477616b                    = 0,
	*386ce50276                    = 1,
	*4eb100f56c                    = 2,
	*5cf189b11b                    = 3,
	*ef56822fc1_MAX                = 4,
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

enum class E*e1f6b24a69 : uint8_t
{
	*790dfc3a28                    = 0,
	*43c72856f1                    = 1,
	*63c80de21e                    = 2,
	*e36bde32dd                    = 3,
	*3316179672                    = 4,
	*e1f6b24a69_MAX                = 5,
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

enum class E*8e4ebc79e8 : uint8_t
{
	*aa8f79ad13                    = 0,
	*d2a5dd4457                    = 1,
	*771ba77396                    = 2,
	*8e4ebc79e8_MAX                = 3,
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

enum class E*761d7547ef : uint8_t
{
	*111bdec6ea                    = 0,
	*5d5b54c10b                    = 1,
	*0dc57bc846                    = 2,
	*1b88946af2                    = 3,
	*a09dcac6f1                    = 4,
	*761d7547ef_MAX                = 5,
};

enum class ESoftRoleState : uint8_t
{
	Open                           = 0,
	Closed                         = 1,
	Inspect                        = 2,
	ESoftRoleState_MAX             = 3,
};

enum class E*baa9b95e22 : uint8_t
{
	*43e1ee2e54                    = 0,
	*da40fdd1f7                    = 1,
	*914dcac08f                    = 2,
	*044b467011                    = 3,
	*a28713cfd8                    = 4,
	*baa9b95e22_MAX                = 5,
};

enum class E*b99c683839 : uint8_t
{
	*e64589fc54                    = 0,
	*e704f0af5b                    = 1,
	*61b4ddfd24                    = 2,
	*f0c0d0437b                    = 3,
	*24f630bc9c                    = 4,
	*5547764dee                    = 5,
	*bedfa605db                    = 6,
	*2441b9c7cb                    = 7,
	*333c2ea3e3                    = 8,
	*44b51bb058                    = 9,
	*97b3b02ccc                    = 10,
	*b99c683839_MAX                = 11,
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

enum class E*3e5082d8ca : uint8_t
{
	*1ce216a660                    = 0,
	*7afdb5aff5                    = 1,
	*7a848f75b0                    = 2,
	*c47eb043b4                    = 3,
	*cf70767383                    = 4,
	*16001bdd1a                    = 5,
	*8f7ff670c3                    = 6,
	*6ce1f2aa75                    = 7,
	*2b71966f96                    = 8,
	*f9e1423cbf                    = 9,
	*3e5082d8ca_MAX                = 10,
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

enum class E*00837829c3 : uint8_t
{
	*d4a4084142                    = 0,
	*0885c7a303                    = 1,
	*2609ce9f0f                    = 2,
	*00837829c3_MAX                = 3,
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

enum class E*12dc05deae : uint8_t
{
	*bc6ebc39de                    = 0,
	*9402cb9b4e                    = 1,
	*4481f89f81                    = 2,
	*12dc05deae_MAX                = 3,
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

enum class E*3f87af28eb : uint8_t
{
	*8dfce26071                    = 0,
	*65c0dd51b4                    = 1,
	*2a60734c18                    = 2,
	*820c54b089                    = 3,
	*3f87af28eb_MAX                = 4,
};

enum class EActorSequenceObjectReferenceType : uint8_t
{
	ContextActor                   = 0,
	ExternalActor                  = 1,
	Component                      = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
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

enum class E*74ee45cfa9 : uint8_t
{
	*e58b75c40d                    = 0,
	*03ada2206f                    = 1,
	*cf8b0cc9c6                    = 2,
	*fbf5e14770                    = 3,
	*18dc0d9512                    = 4,
	*74ee45cfa9_MAX                = 5,
};

enum class E*6ede81b720 : uint8_t
{
	*07385f96db                    = 0,
	*56f433d06d                    = 1,
	*e868fd7865                    = 2,
	*7ab3c90bc1                    = 3,
	*f4538333eb                    = 4,
	*8b38e0abf9                    = 5,
	*082ed92187                    = 6,
	*6ede81b720_MAX                = 7,
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

enum class E*ac5ba8723b : uint8_t
{
	*eca6eaed6f                    = 0,
	*9e80d7b842                    = 1,
	*8ca217fca0                    = 2,
	*ac5ba8723b_MAX                = 3,
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

enum class E*8574698f93 : uint8_t
{
	*43b3c31957                    = 0,
	*4696cb545e                    = 1,
	*7bbbfb7433                    = 2,
	*057e5770f3                    = 3,
	*8574698f93_MAX                = 4,
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

enum class E*5b2357419d : uint8_t
{
	*e6f4ba88f6                    = 0,
	*d55f38a796                    = 1,
	*30d8b7b499                    = 2,
	*5b2357419d_MAX                = 3,
};

enum class E*16d6d299aa : uint8_t
{
	*81c1822c91                    = 0,
	*e5ea94472d                    = 1,
	*123b0795b4                    = 2,
	*686535bba1                    = 3,
	*16d6d299aa_MAX                = 4,
};

enum class EAutoPossessAI : uint8_t
{
	Disabled                       = 0,
	PlacedInWorld                  = 1,
	Spawned                        = 2,
	PlacedInWorldOrSpawned         = 3,
	EAutoPossessAI_MAX             = 4,
};

enum class E*d7744a0ff4 : uint8_t
{
	*c5a2de16a2                    = 0,
	*f13754c313                    = 1,
	*086491da75                    = 2,
	*5fd6774c6b                    = 3,
	*949066e5ea                    = 4,
	*ebba78197a                    = 5,
	*d7744a0ff4_MAX                = 6,
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

enum class E*4f00a3229a : uint8_t
{
	*0d9bd04372                    = 0,
	*d4733df688                    = 1,
	*0543be5555                    = 2,
	*1ff982825f                    = 3,
	*ca35e718df                    = 4,
	*4f00a3229a_MAX                = 5,
};

enum class EMeshBufferAccess : uint8_t
{
	Default                        = 0,
	ForceCPUAndGPU                 = 1,
	EMeshBufferAccess_MAX          = 2,
};

enum class E*dd662b22ed : uint8_t
{
	*7eb55357a5                    = 0,
	*63322185bd                    = 1,
	*69f5ba17c8                    = 2,
	*dd662b22ed_MAX                = 3,
};

enum class E*bc1af7de07 : uint8_t
{
	*67106ca118                    = 0,
	*2cd574789c                    = 1,
	*c68748e15c                    = 2,
	*a14fcc7159                    = 3,
	*bc1af7de07_MAX                = 4,
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

enum class E*b37ae2cc29 : uint8_t
{
	*468094dbfc                    = 0,
	*a62a8e9c66                    = 1,
	*1f9ebe11e0                    = 2,
	*0efe8c3c49                    = 3,
	*e35fa8dd87                    = 4,
	*7170c3fd14                    = 5,
	*c152dcbec9                    = 6,
	*682fdc4ca7                    = 7,
	*b37ae2cc29_MAX                = 8,
};

enum class E*dcedba75cc : uint8_t
{
	*851b810cc4                    = 0,
	*0d9c722fcf                    = 1,
	*ee7671db3c                    = 2,
	*dcedba75cc_MAX                = 3,
};

enum class E*c08f9cc9c9 : uint8_t
{
	*79a6fbb8a1                    = 0,
	*86c6e3b790                    = 1,
	*d8a37eff99                    = 2,
	*23f35ee507                    = 3,
	*c08f9cc9c9_MAX                = 4,
};

enum class ECollisionEnabled : uint8_t
{
	NoCollision                    = 0,
	QueryOnly                      = 1,
	PhysicsOnly                    = 2,
	QueryAndPhysics                = 3,
	ECollisionEnabled_MAX          = 4,
};

enum class E*6603d3be79 : uint8_t
{
	*52a360b172                    = 0,
	*539f6af464                    = 1,
	*01753d5147                    = 2,
	*eb7f6c4689                    = 3,
	*773c671d92                    = 4,
	*a9f332b93f                    = 5,
	*6603d3be79_MAX                = 6,
};

enum class ESleepFamily : uint8_t
{
	Normal                         = 0,
	Sensitive                      = 1,
	Custom                         = 2,
	ESleepFamily_MAX               = 3,
};

enum class E*1f88e26b4f : uint8_t
{
	*0c5b299027                    = 0,
	*44e8759348                    = 1,
	*58bb67181a                    = 2,
	*1f88e26b4f_MAX                = 3,
};

enum class E*b1b7adf9c6 : uint8_t
{
	*c43d87e510                    = 0,
	*19a4e93df6                    = 1,
	*ba8a76d6be                    = 2,
	*9e740f0b9b                    = 3,
	*b1b7adf9c6_MAX                = 4,
};

enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3,
};

enum class E*2bf8583fcb : uint8_t
{
	*4d97abcdbf                    = 0,
	*6748c733fa                    = 1,
	*dc78bf6a4f                    = 2,
	*2bf8583fcb_MAX                = 3,
};

enum class E*59461906d5 : uint8_t
{
	*387a812e82                    = 0,
	*06ba3ad97c                    = 1,
	*e69ce4c63c                    = 2,
	*d9297e66f4                    = 3,
	*59461906d5_MAX                = 4,
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

enum class E*729014e103 : uint8_t
{
	*f41b1d109c                    = 0,
	*c4553ae0e6                    = 1,
	*5bc3b5ff35                    = 2,
	*8c775bf57e                    = 3,
	*729014e103_MAX                = 4,
};

enum class E*e5dfb28ebe : uint8_t
{
	*7186365c07                    = 0,
	*a976f0c7d4                    = 1,
	*dc0b3338c2                    = 2,
	*b7fef0f61f                    = 3,
	*f203603d21                    = 4,
	*5a782022e1                    = 5,
	*c1ae7c72a3                    = 6,
	*e5dfb28ebe_MAX                = 7,
};

enum class E*8dfa688671 : uint8_t
{
	*cbb38b8a70                    = 0,
	*2844c0a436                    = 1,
	*34e8e4e98c                    = 2,
	*295250dc8c                    = 3,
	*551b9ac079                    = 4,
	*8dfa688671_MAX                = 5,
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

enum class E*81888afa3c : uint8_t
{
	*6367c93603                    = 0,
	*cf4cdd55c1                    = 1,
	*d9126414c2                    = 2,
	*5ee3ea9ebc                    = 3,
	*81888afa3c_MAX                = 4,
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

enum class E*8bfe4f426e : uint8_t
{
	*cddf7b77e3                    = 0,
	*8113309c56                    = 1,
	*309a681d4d                    = 2,
	*168112f65b                    = 3,
	*8bfe4f426e_MAX                = 4,
};

enum class EGBufferFormat : uint8_t
{
	Force8BitsPerChannel           = 0,
	Default                        = 1,
	HighPrecisionNormals           = 3,
	Force16BitsPerChannel          = 5,
	EGBufferFormat_MAX             = 6,
};

enum class E*06c2a1fe17 : uint8_t
{
	*c69d6e8063                    = 0,
	*94d42d58a2                    = 1,
	*0c66c10805                    = 2,
	*c9a184380d                    = 3,
	*06c2a1fe17_MAX                = 4,
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

enum class E*4d0eefc7be : uint8_t
{
	*5d9b3a53d3                    = 0,
	*c3a2090120                    = 1,
	*fdaa2fb7ae                    = 2,
	*4d0eefc7be_MAX                = 3,
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

enum class E*19c910f981 : uint8_t
{
	*f3f751ae40                    = 0,
	*cb48ba8cb9                    = 1,
	*837a670c95                    = 2,
	*d99986066e                    = 3,
	*19c910f981_MAX                = 4,
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

enum class E*fb14563d44 : uint8_t
{
	*de815e852b                    = 0,
	*edcf399fcd                    = 1,
	*ea119f4c08                    = 2,
	*fb14563d44_MAX                = 3,
};

enum class E*6d16b86f96 : uint8_t
{
	*8c626b922f                    = 0,
	*fe583c8264                    = 1,
	*78cc9b436f                    = 2,
	*ed9e1b4553                    = 3,
	*6d16b86f96_MAX                = 4,
};

enum class E*42274521c9 : uint8_t
{
	*272e56a9ec                    = 0,
	*10ed0e0e31                    = 1,
	*fa4894c9d8                    = 2,
	*42274521c9_MAX                = 3,
};

enum class E*239248e1d6 : uint8_t
{
	*e9f781a648                    = 0,
	*9edb9a27a5                    = 1,
	*b3a6b83f7a                    = 2,
	*bd3d0422af                    = 3,
	*239248e1d6_MAX                = 4,
};

enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3,
};

enum class E*3f63f5158a : uint8_t
{
	*210d0f5b7d                    = 0,
	*00e9564509                    = 1,
	*1908efbfb9                    = 2,
	*2f64c05cbe                    = 3,
	*0d653249c5                    = 4,
	*9ebfdb7587                    = 5,
	*953e3e871a                    = 6,
	*2150025bea                    = 8,
	*2a9de38bde                    = 9,
	*530937777b                    = 10,
	*4851871793                    = 11,
	*77b3dd1dce                    = 12,
	*5aac3a943a                    = 14,
	*0a88ee900d                    = 15,
	*a30cd8da66                    = 16,
	*726177de40                    = 18,
	*74dfb47e39                    = 19,
	*65508a55ef                    = 20,
	*e785254d2a                    = 21,
	*2bd665f530                    = 22,
	*b461e6e322                    = 23,
	*0fa0742315                    = 24,
	*a2ca17fa6b                    = 25,
	*12bac06c35                    = 26,
	*1c1bda09ef                    = 27,
	*302e8912b1                    = 28,
	*c4fec7179a                    = 29,
	*65ef4ae1a0                    = 30,
	*6082ff39b7                    = 31,
	*7162b59ea9                    = 32,
	*c2c2aba989                    = 255,
	*3f63f5158a_MAX                = 256,
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

enum class E*124181e884 : uint8_t
{
	*9bad151ca9                    = 0,
	*8006f086aa                    = 1,
	*f521be7fd6                    = 2,
	*9100bf2772                    = 3,
	*124181e884_MAX                = 4,
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

enum class E*c0137602e9 : uint8_t
{
	*b5ca23fe80                    = 0,
	*7ec0808b52                    = 1,
	*ecfe89b7eb                    = 2,
	*c0137602e9_MAX                = 3,
};

enum class E*fbdf82a81a : uint8_t
{
	*4c2e0419e7                    = 0,
	*5f6eaf8c7b                    = 1,
	*6a468f9343                    = 2,
	*96c1af8f53                    = 3,
	*a32c6da3b6                    = 4,
	*dc938ef771                    = 5,
	*fbdf82a81a_MAX                = 6,
};

enum class E*bff1a3f6c2 : uint8_t
{
	*e5f62584c2                    = 0,
	*d7d0ad5948                    = 1,
	*7cd8dd27f2                    = 2,
	*f32a632d48                    = 3,
	*bff1a3f6c2_MAX                = 4,
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

enum class E*d83d33f79e : uint8_t
{
	*cf84d8e4e3                    = 0,
	*12b182ae07                    = 1,
	*e2c280fb71                    = 2,
	*d83d33f79e_MAX                = 3,
};

enum class EMeshLODSelectionType : uint8_t
{
	AllLODs                        = 0,
	SpecificLOD                    = 1,
	CalculateLOD                   = 2,
	LowestDetailLOD                = 3,
	EMeshLODSelectionType_MAX      = 4,
};

enum class E*1e17999c52 : uint8_t
{
	*638a034606                    = 0,
	*63878e19a5                    = 1,
	*0667322403                    = 2,
	*71792125cb                    = 3,
	*1e17999c52_MAX                = 4,
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

enum class E*3598a0a04a : uint8_t
{
	*746821b884                    = 0,
	*eadef90d0f                    = 1,
	*ef88591bdc                    = 2,
	*62ae916846                    = 3,
	*03c2a2c644                    = 4,
	*c0a3e51341                    = 5,
	*4e3b70560d                    = 6,
	*c38080b64b                    = 7,
	*07078e64f1                    = 8,
	*1ea859623f                    = 9,
	*208b38cf64                    = 10,
	*3598a0a04a_MAX                = 11,
};

enum class EHasCustomNavigableGeometry : uint8_t
{
	No                             = 0,
	Yes                            = 1,
	EvenIfNotCollidable            = 2,
	DontExport                     = 3,
	EHasCustomNavigableGeometry_MAX = 4,
};

enum class E*5cf145001d : uint8_t
{
	*f7c6a3eaa0                    = 0,
	*eea90588be                    = 1,
	*5b44a9c176                    = 2,
	*27fb662d14                    = 3,
	*5cf145001d_MAX                = 4,
};

enum class EStaticMeshLODType : uint8_t
{
	Reduction                      = 0,
	Proxy                          = 1,
	EStaticMeshLODType_MAX         = 2,
};

enum class E*7cde37b457 : uint8_t
{
	*cc22384ced                    = 0,
	*b5e39670e3                    = 1,
	*37fea97100                    = 2,
	*7cde37b457_MAX                = 3,
};

enum class E*13a5458fe4 : uint8_t
{
	*98e96f322b                    = 0,
	*e7549717bb                    = 1,
	*683ea8d97d                    = 2,
	*f816f46527                    = 3,
	*76992d4bf2                    = 4,
	*97a9a49328                    = 5,
	*9e4dfdeb04                    = 6,
	*371155c804                    = 7,
	*13a5458fe4_MAX                = 8,
};

enum class E*1168942d0c : uint8_t
{
	*ac2238529e                    = 0,
	*6007b4e66e                    = 1,
	*af17628f27                    = 2,
	*12944e9497                    = 3,
	*17cfd262e0                    = 4,
	*c73ebae63e                    = 5,
	*1168942d0c_MAX                = 6,
};

enum class E*f7c03ff34d : uint8_t
{
	*107b4bcfb7                    = 0,
	*84eeb939ee                    = 1,
	*3a30ed94b3                    = 2,
	*f65645721c                    = 3,
	*f7c03ff34d_MAX                = 4,
};

enum class E*ee6823b67b : uint8_t
{
	*daa19ad74f                    = 0,
	*d126e1bea5                    = 1,
	*4a5d134b97                    = 2,
	*8be7b2423e                    = 3,
	*3f6b60a333                    = 4,
	*0dd6ef6019                    = 5,
	*c8e0a6232b                    = 6,
	*ee6823b67b_MAX                = 7,
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

enum class E*a2a730276d : uint8_t
{
	*6e2cee8e0b                    = 0,
	*ea65a2c785                    = 1,
	*828ae48226                    = 2,
	*d62681e726                    = 3,
	*27968d8f9a                    = 4,
	*ecdbb7ebc7                    = 5,
	*a2a730276d_MAX                = 6,
};

enum class E*4021333e41 : uint8_t
{
	*278a47faf9                    = 0,
	*3e3f97a5ba                    = 1,
	*5065fe5a0f                    = 2,
	*80ad25c79e                    = 3,
	*1ac1898c31                    = 4,
	*4021333e41_MAX                = 5,
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

enum class E*88fd57aa85 : uint8_t
{
	*3a08aae825                    = 0,
	*e2b879985b                    = 1,
	*6b75f12fbc                    = 2,
	*88fd57aa85_MAX                = 3,
};

enum class E*293a24b0b2 : uint8_t
{
	*2507744271                    = 0,
	*16b4c1edae                    = 1,
	*525f3ee591                    = 2,
	*293a24b0b2_MAX                = 3,
};

enum class EDynamicForceFeedbackAction : uint8_t
{
	Start                          = 0,
	Update                         = 1,
	Stop                           = 2,
	EDynamicForceFeedbackAction_MAX = 3,
};

enum class E*63c2519c18 : uint8_t
{
	*83470e179c                    = 0,
	*9ff44c072e                    = 1,
	*856a6c1d75                    = 2,
	*18c6b9220d                    = 3,
	*63c2519c18_MAX                = 4,
};

enum class E*63ce442e71 : uint8_t
{
	*10ba7963d0                    = 0,
	*f1903689ff                    = 1,
	*d299120573                    = 2,
	*ae13c3d271                    = 3,
	*63ce442e71_MAX                = 4,
};

enum class E*704571366f : uint8_t
{
	*78ce69585d                    = 0,
	*b4ff129b22                    = 1,
	*f46e5a25bd                    = 2,
	*402f705aac                    = 3,
	*8bdb76a4ab                    = 4,
	*704571366f_MAX                = 5,
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

enum class E*480fc3f919 : uint8_t
{
	*7df6a6bf84                    = 0,
	*5ef83d890c                    = 1,
	*17ea5a423b                    = 2,
	*144589f6c6                    = 3,
	*480fc3f919_MAX                = 4,
};

enum class ENavLinkDirection : uint8_t
{
	BothWays                       = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ENavLinkDirection_MAX          = 3,
};

enum class E*211370beaf : uint8_t
{
	*a6abc32d5b                    = 0,
	*661cf795b0                    = 1,
	*53b1d48c2c                    = 2,
	*1c4495be67                    = 3,
	*211370beaf_MAX                = 4,
};

enum class E*b0557d01d4 : uint8_t
{
	*2e1e46046b                    = 0,
	*34ab8631f1                    = 1,
	*b27b966db1                    = 2,
	*1e351deb19                    = 3,
	*b0557d01d4_MAX                = 4,
};

enum class E*86e8e36742 : uint8_t
{
	*0474b75f84                    = 0,
	*6bc11d2d4d                    = 1,
	*452a0ce8b0                    = 2,
	*86e8e36742_MAX                = 3,
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

enum class E*4475418192 : uint8_t
{
	*91b1b55ad5                    = 0,
	*21e3656b9a                    = 1,
	*1b80e57faa                    = 2,
	*1fdb1504dd                    = 3,
	*4475418192_MAX                = 4,
};

enum class E*cf8158be7d : uint8_t
{
	*35f97f1373                    = 0,
	*1fd6585951                    = 1,
	*014c50dcc9                    = 2,
	*2a0108608d                    = 3,
	*b5d6147899                    = 4,
	*b87c60dc8b                    = 5,
	*f848dd57cf                    = 6,
	*3d2861a61a                    = 7,
	*178c88c2d2                    = 8,
	*cf8158be7d_MAX                = 9,
};

enum class E*ed18fe535b : uint8_t
{
	*376e5aff0d                    = 0,
	*151261e39a                    = 1,
	*bc51d815de                    = 2,
	*3686952cc7                    = 3,
	*ed18fe535b_MAX                = 4,
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

enum class E*d5b626779e : uint8_t
{
	*2c5929cbe4                    = 0,
	*4c75813e5e                    = 1,
	*2a9e1cba6e                    = 2,
	*2d0103abe7                    = 3,
	*517cbcec2f                    = 4,
	*d5b626779e_MAX                = 5,
};

enum class E*5dbfb96d27 : uint8_t
{
	*a2fb89e157                    = 0,
	*9b3b4f8469                    = 1,
	*1bb25be441                    = 2,
	*30b02bfd82                    = 3,
	*75c5ebeb75                    = 4,
	*5dbfb96d27_MAX                = 5,
};

enum class EAnimGroupRole : uint8_t
{
	CanBeLeader                    = 0,
	AlwaysFollower                 = 1,
	AlwaysLeader                   = 2,
	TransitionLeader               = 3,
	EAnimGroupRole_MAX             = 4,
};

enum class E*e85e0367ba : uint8_t
{
	*ee87f2a1db                    = 0,
	*700ed85cba                    = 1,
	*41514c2963                    = 2,
	*4a99595436                    = 3,
	*e85e0367ba_MAX                = 4,
};

enum class E*32b58b4a70 : uint8_t
{
	*b51e73aeeb                    = 1,
	*dc9fcf24d1                    = 2,
	*a8c77554d6                    = 4,
	*e98662d9a6                    = 5,
	*32b58b4a70_MAX                = 6,
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

enum class E*3112f99428 : uint8_t
{
	*f39e12dc2e                    = 0,
	*22e2025e43                    = 1,
	*d5f47d043f                    = 2,
	*b54aaa1ac6                    = 3,
	*3112f99428_MAX                = 4,
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

enum class E*3560a8f27e : uint8_t
{
	*03dc89627f                    = 0,
	*99a030aece                    = 1,
	*b8c69e6176                    = 2,
	*4288d476dc                    = 3,
	*3560a8f27e_MAX                = 4,
};

enum class E*70a93f4ef7 : uint8_t
{
	*64618cf62b                    = 1,
	*281bbd129e                    = 2,
	*bfedb68ce1                    = 4,
	*ce76eb2a21                    = 8,
	*019a62d1c4                    = 16,
	*57d1bcab21                    = 32,
	*28d9d2e2e8                    = 64,
	*46eb1cd9b4                    = 65,
	*70a93f4ef7_MAX                = 66,
};

enum class E*43180270b0 : uint8_t
{
	*3c2ac8e740                    = 0,
	*af79b06d59                    = 1,
	*e87d30fa4a                    = 2,
	*7943c92cd8                    = 3,
	*43180270b0_MAX                = 4,
};

enum class E*de4189af6e : uint8_t
{
	*7192f6c048                    = 0,
	*1a6e6d2cd7                    = 1,
	*0a6de0e7f6                    = 2,
	*b81b72c727                    = 3,
	*de4189af6e_MAX                = 4,
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

enum class E*d69149b6ab : uint8_t
{
	*29d25e5fa9                    = 0,
	*a413ff4598                    = 1,
	*1a7968f086                    = 2,
	*d69149b6ab_MAX                = 3,
};

enum class E*ca62be4841 : uint8_t
{
	*2f90319577                    = 0,
	*406d4ebb30                    = 1,
	*bb72497607                    = 2,
	*4c9d9f14ac                    = 3,
	*324a245da8                    = 4,
	*ca62be4841_MAX                = 5,
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

enum class E*3a14efd7ad : uint8_t
{
	*9d1574ea00                    = 0,
	*131a927360                    = 1,
	*97b3b02ccc                    = 2,
	*3a14efd7ad_MAX                = 3,
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

enum class E*b7ae2fe3bf : uint8_t
{
	*0c91046ab0                    = 0,
	*797e45fa30                    = 1,
	*cebdeb58a0                    = 2,
	*b7ae2fe3bf_MAX                = 3,
};

enum class E*b0e8b74240 : uint8_t
{
	*9a3c021dff                    = 0,
	*a8976a55d1                    = 1,
	*8f3c6d7b13                    = 2,
	*11da21e130                    = 3,
	*b0e8b74240_MAX                = 4,
};

enum class E*3969cbeb76 : uint8_t
{
	*804b39d7fa                    = 0,
	*d12b020e75                    = 1,
	*431f932e56                    = 2,
	*3969cbeb76_MAX                = 3,
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

enum class E*6822b426a8 : uint8_t
{
	*d67601ae43                    = 0,
	*5269909ae5                    = 1,
	*e7f79ee3b3                    = 2,
	*66b26e055f                    = 3,
	*1fbb9e4383                    = 4,
	*38247b4c3b                    = 5,
	*a7e2d36c0d                    = 6,
	*6be412dfb2                    = 7,
	*187b1d0a98                    = 8,
	*9213f6138e                    = 9,
	*8ee530e960                    = 10,
	*6822b426a8_MAX                = 11,
};

enum class E*ab05c7b551 : uint8_t
{
	*08ebfad7bb                    = 0,
	*b3cfd9ca18                    = 1,
	*264c6cad84                    = 2,
	*2270890a80                    = 3,
	*ab05c7b551_MAX                = 4,
};

enum class E*c7e83ded48 : uint8_t
{
	*a39cac469f                    = 0,
	*0f844291ab                    = 1,
	*c5d970df02                    = 2,
	*93d7b4c483                    = 3,
	*c7e83ded48_MAX                = 4,
};

enum class E*062c27d6f7 : uint8_t
{
	*f31f8a3525                    = 0,
	*63799a468c                    = 1,
	*43fdcb75f3                    = 2,
	*dae9682eac                    = 3,
	*f00dd3d060                    = 4,
	*1473b82e97                    = 5,
	*062c27d6f7_MAX                = 6,
};

enum class E*1cbb26e2c5 : uint8_t
{
	*3f5bd9fcbb                    = 0,
	*cd6ca1c9b4                    = 1,
	*9899f451a7                    = 2,
	*35e040d5d8                    = 3,
	*1cbb26e2c5_MAX                = 4,
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

enum class E*9bf85cabdc : uint8_t
{
	*f3b597ee5b                    = 0,
	*240cfad2e9                    = 1,
	*63217a1af6                    = 2,
	*be834fc17e                    = 3,
	*0393180dc1                    = 4,
	*9bf85cabdc_MAX                = 5,
};

enum class E*2489d475e5 : uint8_t
{
	*6122632242                    = 0,
	*b05a6945e5                    = 1,
	*574050cf0a                    = 2,
	*3fd250aa2e                    = 3,
	*2489d475e5_MAX                = 4,
};

enum class E*85e8061710 : uint8_t
{
	*aa2183378a                    = 0,
	*6b7329cbe1                    = 1,
	*8a5e6b6f06                    = 2,
	*85e8061710_MAX                = 3,
};

enum class E*a32876c4ef : uint8_t
{
	*3c6810ab9c                    = 0,
	*628ea51646                    = 1,
	*e3f4769601                    = 2,
	*6f7c847eb1                    = 3,
	*a32876c4ef_MAX                = 4,
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

enum class E*938152008a : uint8_t
{
	*fa10df5c1f                    = 0,
	*ebe4f2c082                    = 1,
	*0daa8972fa                    = 2,
	*938152008a_MAX                = 3,
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

enum class E*6b05b2ad32 : uint8_t
{
	*e6a356a26b                    = 0,
	*dfca051a98                    = 1,
	*1e538abdd4                    = 2,
	*8d9099ddea                    = 3,
	*6b05b2ad32_MAX                = 4,
};

enum class E*8a7592ecfd : uint8_t
{
	*89b4785a9d                    = 0,
	*60ec433bc8                    = 1,
	*756bce4639                    = 2,
	*8a7592ecfd_MAX                = 3,
};

enum class E*c9b8179e37 : uint8_t
{
	*3a12c23816                    = 0,
	*c1a83602bc                    = 1,
	*eccc751b9e                    = 2,
	*c9b8179e37_MAX                = 3,
};

enum class EMontagePlayReturnType : uint8_t
{
	MontageLength                  = 0,
	Duration                       = 1,
	EMontagePlayReturnType_MAX     = 2,
};

enum class E*ae20086ce1 : uint8_t
{
	*ca4cfce2a0                    = 0,
	*7f045c591b                    = 1,
	*7c62ed80e1                    = 2,
	*6cc42746fd                    = 3,
	*08704148d7                    = 4,
	*ae20086ce1_MAX                = 5,
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

enum class E*73c5f51654 : uint8_t
{
	*b2e5992bae                    = 0,
	*c7470ab6ab                    = 1,
	*cd10af1a48                    = 2,
	*670cc4b5b2                    = 3,
	*e714cd81b4                    = 4,
	*960725df44                    = 5,
	*775b74ac56                    = 6,
	*73c5f51654_MAX                = 7,
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

enum class E*959703a3fb : uint8_t
{
	*124ec4a62c                    = 0,
	*2dbd5a466a                    = 1,
	*055ecf6597                    = 2,
	*98936876da                    = 3,
	*959703a3fb_MAX                = 4,
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

enum class E*8158193065 : uint8_t
{
	*9710a839ef                    = 0,
	*9551ef5eb9                    = 1,
	*bb87e07a96                    = 2,
	*8158193065_MAX                = 3,
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

enum class E*815dcd88c1 : uint8_t
{
	*94e61195e4                    = 0,
	*6013cfe4fd                    = 1,
	*812da75a09                    = 2,
	*815dcd88c1_MAX                = 3,
};

enum class E*1b1ee3fc9c : uint8_t
{
	*5e730f75e6                    = 0,
	*b12160022a                    = 1,
	*31b8b44897                    = 2,
	*9d1f76e5f4                    = 3,
	*2ebc8c7edb                    = 4,
	*de5e67384e                    = 5,
	*5f62ff0b83                    = 6,
	*f5b121497d                    = 7,
	*1b1ee3fc9c_MAX                = 8,
};

enum class E*7085768454 : uint8_t
{
	*afb13d7632                    = 0,
	*5329091823                    = 1,
	*ce4cf06fea                    = 2,
	*07d6cfbeb8                    = 3,
	*71ac4e8468                    = 4,
	*fb7013a252                    = 5,
	*7085768454_MAX                = 6,
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

enum class E*2444bd73e8 : uint8_t
{
	*c50dc982c4                    = 0,
	*dfa7a4aad4                    = 1,
	*60fae71ea3                    = 2,
	*d2c94ff87d                    = 3,
	*2444bd73e8_MAX                = 4,
};

enum class E*8a29ce7157 : uint8_t
{
	*ef5634039c                    = 0,
	*16427f4cc1                    = 1,
	*0bb8ea0126                    = 2,
	*c517575912                    = 3,
	*8a29ce7157_MAX                = 4,
};

enum class E*3e8e114412 : uint8_t
{
	*633550244f                    = 0,
	*fbaeb1b054                    = 1,
	*116e8c74d5                    = 2,
	*249ae8360e                    = 3,
	*68da8e3278                    = 4,
	*83a0b6972c                    = 5,
	*3e8e114412_MAX                = 6,
};

enum class E*d2dde45fa2 : uint8_t
{
	*4a21eb503e                    = 0,
	*6e60f4c81c                    = 1,
	*5b1d099463                    = 2,
	*1cfc181332                    = 3,
	*d9bbc5869c                    = 4,
	*cc99bc5a5c                    = 5,
	*6163efc39d                    = 6,
	*d2dde45fa2_MAX                = 7,
};

enum class E*aa4d387570 : uint8_t
{
	*e94ccf3c34                    = 0,
	*cb3a5baae2                    = 1,
	*a22270f390                    = 2,
	*7181b98a3a                    = 3,
	*8597d827c9                    = 4,
	*daa489f517                    = 5,
	*aa4d387570_MAX                = 6,
};

enum class E*2ddfdb761c : uint8_t
{
	*dfd912626e                    = 0,
	*72ed0c4dd7                    = 1,
	*5276ea6d48                    = 2,
	*c513876b98                    = 3,
	*2ddfdb761c_MAX                = 4,
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

enum class E*1cdf8c0325 : uint8_t
{
	*527661b506                    = 0,
	*1fa9d4e24c                    = 1,
	*af582670d7                    = 2,
	*84266e9b3b                    = 3,
	*1cdf8c0325_MAX                = 4,
};

enum class E*404890779f : uint8_t
{
	*e0710a5b8a                    = 0,
	*ce9d741f23                    = 1,
	*250566c784                    = 2,
	*01018c0de2                    = 3,
	*404890779f_MAX                = 4,
};

enum class E*3d722458a4 : uint8_t
{
	*8e23537604                    = 0,
	*032476cfde                    = 1,
	*ed1353f8ff                    = 2,
	*6f20462a65                    = 3,
	*1b79c9f181                    = 4,
	*685b3b1b8f                    = 5,
	*5609d6f356                    = 6,
	*3d722458a4_MAX                = 7,
};

enum class E*d43fbfc19c : uint8_t
{
	*96c327be64                    = 0,
	*397fba82ab                    = 1,
	*574f550692                    = 2,
	*e2ea6f512b                    = 3,
	*ca7d85933e                    = 4,
	*d43fbfc19c_MAX                = 5,
};

enum class E*b4b3bf385e : uint8_t
{
	*44dd447f5f                    = 0,
	*65886b65b2                    = 1,
	*b3945ed389                    = 2,
	*bcb14fb402                    = 3,
	*b4b3bf385e_MAX                = 4,
};

enum class E*0378e75aba : uint8_t
{
	*071599b601                    = 0,
	*b03131aae6                    = 1,
	*156daa1295                    = 2,
	*c1918ea27c                    = 3,
	*0378e75aba_MAX                = 4,
};

enum class EMaterialAttributeBlend : uint8_t
{
	Blend                          = 0,
	UseA                           = 1,
	UseB                           = 2,
	EMaterialAttributeBlend_MAX    = 3,
};

enum class E*effb73af99 : uint8_t
{
	*7e25091378                    = 0,
	*f205ebe52e                    = 1,
	*cc664000ab                    = 2,
	*66c96e949e                    = 3,
	*effb73af99_MAX                = 4,
};

enum class E*e9b77294bf : uint8_t
{
	*21f52a52b6                    = 0,
	*e2fe565548                    = 1,
	*b0411787b8                    = 2,
	*7fe1159577                    = 3,
	*94eca59946                    = 4,
	*e9b77294bf_MAX                = 5,
};

enum class E*255c8442ab : uint8_t
{
	*ae40b1f0fa                    = 0,
	*f10eed8e4d                    = 1,
	*c8e7f20ad8                    = 2,
	*275904e29a                    = 3,
	*5cff3361a3                    = 4,
	*255c8442ab_MAX                = 5,
};

enum class E*43c58728b0 : uint8_t
{
	*03f83a38b3                    = 0,
	*0f1989995f                    = 1,
	*9d48e0ee56                    = 2,
	*aa730ec70b                    = 3,
	*effcf71ae2                    = 4,
	*190a187d0c                    = 5,
	*b0b3fb9849                    = 6,
	*330a08940e                    = 7,
	*0f5211dc30                    = 8,
	*d9fd132b61                    = 9,
	*43c58728b0_MAX                = 10,
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

enum class E*4c70f71edb : uint8_t
{
	*d403fc9e04                    = 0,
	*1f23e3c6b2                    = 1,
	*e6202569cf                    = 2,
	*4c70f71edb_MAX                = 3,
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

enum class E*8e63d213fa : uint8_t
{
	*4759ec4387                    = 0,
	*800e060b9c                    = 1,
	*7d448ca090                    = 2,
	*cd920bef60                    = 3,
	*8e63d213fa_MAX                = 4,
};

enum class E*e8cdde0466 : uint8_t
{
	*285f0fca55                    = 0,
	*15ea8358b0                    = 1,
	*1f4d6ab0f6                    = 2,
	*e8cdde0466_MAX                = 3,
};

enum class E*544e35dd59 : uint8_t
{
	*f34a370dd9                    = 0,
	*520955b366                    = 1,
	*97d6f8d34b                    = 2,
	*2596e96412                    = 3,
	*68dd29c284                    = 4,
	*343255d56f                    = 5,
	*28ae4215e2                    = 6,
	*2dc2cfbb6f                    = 7,
	*544e35dd59_MAX                = 8,
};

enum class E*e2e0854faa : uint8_t
{
	*71e4c01632                    = 0,
	*a73489a04a                    = 1,
	*8ab8413ceb                    = 2,
	*33579fbe3b                    = 3,
	*cece4c1441                    = 4,
	*c9ed6fcf5c                    = 5,
	*e2e0854faa_MAX                = 6,
};

enum class ETextureChannel : uint8_t
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	ETextureChannel_MAX            = 4,
};

enum class E*cd230801e2 : uint8_t
{
	*7367add8d0                    = 0,
	*91c03a0f70                    = 1,
	*143fb2b8d4                    = 2,
	*706351ceb8                    = 3,
	*2d682c9ed5                    = 4,
	*cd230801e2_MAX                = 5,
};

enum class E*3cc700927f : uint8_t
{
	*cf7ca01d52                    = 0,
	*02e81621cc                    = 1,
	*631cb49ab2                    = 2,
	*6eb14c28ed                    = 3,
	*0aa010c664                    = 4,
	*3cc700927f_MAX                = 5,
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

enum class E*8fa5f7c8d6 : uint8_t
{
	*f9a0118eca                    = 0,
	*6b0e38b393                    = 1,
	*be96f66453                    = 2,
	*3fcf4cf07f                    = 3,
	*7031654c19                    = 4,
	*2fc10ac9bb                    = 5,
	*8fa5f7c8d6_MAX                = 6,
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

enum class E*da2ac0b3fa : uint8_t
{
	*1555b112aa                    = 0,
	*5b53c18bfe                    = 1,
	*f8b13775d1                    = 2,
	*2feb72246e                    = 3,
	*d6a1385dcc                    = 4,
	*ab07b7ae72                    = 5,
	*a8d73f7efc                    = 6,
	*da2ac0b3fa_MAX                = 7,
};

enum class E*0d6dc652b4 : uint8_t
{
	*ea3b43fd3e                    = 0,
	*16c47a6e1e                    = 1,
	*38cc4d4c3c                    = 2,
	*7d7d352e81                    = 3,
	*1df0c1e0ab                    = 4,
	*5812b4b855                    = 5,
	*d3a726d3e1                    = 6,
	*87a668b2b5                    = 7,
	*6bdc4423e8                    = 8,
	*0d6dc652b4_MAX                = 9,
};

enum class E*d11a8238ba : uint8_t
{
	*cded4b44ec                    = 0,
	*cda5537084                    = 1,
	*0b6ec8432d                    = 2,
	*5c4a5d38d0                    = 3,
	*266edbadfd                    = 4,
	*c75b6aaf4e                    = 5,
	*1fbc2a5ae9                    = 6,
	*ec500ba329                    = 7,
	*57fc949311                    = 8,
	*d4e0724b0d                    = 9,
	*540e875a21                    = 10,
	*d64bbfba1a                    = 11,
	*eef71701a5                    = 12,
	*d11a8238ba_MAX                = 13,
};

enum class E*9420678513 : uint8_t
{
	*c16820abfb                    = 0,
	*b99da39d21                    = 1,
	*990f93cb84                    = 2,
	*ddfa97b96b                    = 3,
	*acd9e30d1b                    = 4,
	*43a2bcddbb                    = 5,
	*9420678513_MAX                = 6,
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

enum class E*9e1986fed1 : uint8_t
{
	*7c6bc3fef5                    = 0,
	*59c77c94bd                    = 1,
	*6a4b7c25da                    = 2,
	*9e1986fed1_MAX                = 3,
};

enum class E*a48beaf770 : uint8_t
{
	*f5fa5adb48                    = 0,
	*cb6f772cc4                    = 1,
	*c87f0924c0                    = 2,
	*82abbe6038                    = 3,
	*0960e91a6d                    = 4,
	*55e9b163eb                    = 5,
	*057b5a6fc0                    = 6,
	*7cf734ecc2                    = 7,
	*a48beaf770_MAX                = 8,
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

enum class E*1efab22104 : uint8_t
{
	*93da3052eb                    = 0,
	*dc8b2bc3a5                    = 1,
	*23532ed8d3                    = 2,
	*1efab22104_MAX                = 3,
};

enum class E*24e7052266 : uint8_t
{
	*cfa1f83559                    = 0,
	*3a732b4773                    = 1,
	*db4a93d7b6                    = 2,
	*738f88bf38                    = 3,
	*143f5921e6                    = 4,
	*384956cc63                    = 5,
	*aa82db6d2e                    = 6,
	*af1cc74bfe                    = 7,
	*cfbf40ffb8                    = 8,
	*11a99dfc2d                    = 9,
	*24e7052266_MAX                = 10,
};

enum class E*952383097d : uint8_t
{
	*349163c977                    = 0,
	*af1714589a                    = 1,
	*d510af8152                    = 2,
	*952383097d_MAX                = 3,
};

enum class E*76b1b47dd7 : uint8_t
{
	*89cd7b7fb1                    = 0,
	*6ee6e532e5                    = 1,
	*9d4bea0735                    = 2,
	*a7d9a93b8d                    = 3,
	*a8aa7082f4                    = 4,
	*76b1b47dd7_MAX                = 5,
};

enum class E*3f1b24a616 : uint8_t
{
	*8dbb61b89b                    = 0,
	*77dacbc236                    = 1,
	*b13c87220b                    = 2,
	*5ebcd8ab18                    = 3,
	*cd6ea275c5                    = 4,
	*fa27a95643                    = 5,
	*3f1b24a616_MAX                = 6,
};

enum class E*8a8d475c44 : uint8_t
{
	*593a188c80                    = 0,
	*5c1a321002                    = 1,
	*09afd220de                    = 2,
	*8a8d475c44_MAX                = 3,
};

enum class E*d2d1c8ce5a : uint8_t
{
	*9f443d9aea                    = 0,
	*724894396a                    = 1,
	*d46dedfbf9                    = 2,
	*907e9d8011                    = 3,
	*d2d1c8ce5a_MAX                = 4,
};

enum class E*cac5957872 : uint8_t
{
	*304898f517                    = 0,
	*b3a697cb4a                    = 1,
	*476f536dff                    = 2,
	*8f59e347b5                    = 3,
	*ff58130b27                    = 4,
	*b9be5f81cc                    = 5,
	*fd4b675cf5                    = 6,
	*cac5957872_MAX                = 7,
};

enum class EParticleCollisionResponse : uint8_t
{
	Bounce                         = 0,
	Stop                           = 1,
	Kill                           = 2,
	EParticleCollisionResponse_MAX = 3,
};

enum class E*9fc28d2a98 : uint8_t
{
	*f8208a8ece                    = 0,
	*130625deeb                    = 1,
	*54f7f28de1                    = 2,
	*9fc28d2a98_MAX                = 3,
};

enum class E*c65af2af82 : uint8_t
{
	*bc97904282                    = 0,
	*5257c191f5                    = 1,
	*e962bb07f8                    = 2,
	*c65af2af82_MAX                = 3,
};

enum class E*4e5fd6c5d5 : uint8_t
{
	*f7ce8a3c8d                    = 0,
	*a6b57a7933                    = 1,
	*1274472bda                    = 2,
	*4e5fd6c5d5_MAX                = 3,
};

enum class E*67ecd4cb06 : uint8_t
{
	*b67b52683d                    = 0,
	*a80286600a                    = 1,
	*84e2e83f72                    = 2,
	*72ef6c6511                    = 3,
	*67ecd4cb06_MAX                = 4,
};

enum class E*868d94d156 : uint8_t
{
	*5f81127a79                    = 0,
	*d0138fbd40                    = 1,
	*574e2f6bc1                    = 2,
	*868d94d156_MAX                = 3,
};

enum class E*046e74bf76 : uint8_t
{
	*6fdd89d914                    = 0,
	*5d8783ed04                    = 1,
	*9618f49a48                    = 2,
	*524284f353                    = 3,
	*046e74bf76_MAX                = 4,
};

enum class E*8a094a6d03 : uint8_t
{
	*95d88f5a08                    = 0,
	*faea9b7acb                    = 1,
	*3c4f462230                    = 2,
	*bcc9ba1779                    = 3,
	*88ebb6a4fd                    = 4,
	*6455dcbc80                    = 5,
	*0d324a0c16                    = 6,
	*da376b8621                    = 7,
	*fdb4bb0e31                    = 8,
	*4b7d3dff83                    = 9,
	*ed4b69ed3b                    = 10,
	*8a094a6d03_MAX                = 11,
};

enum class E*bb9f603adb : uint8_t
{
	*7b02a9cf23                    = 0,
	*bdbec78c48                    = 1,
	*c1119f6077                    = 2,
	*3e91e22cd4                    = 3,
	*f06f15a673                    = 4,
	*91d6a17535                    = 5,
	*bc0ed765fe                    = 6,
	*bb9f603adb_MAX                = 7,
};

enum class E*0403a4b4fb : uint8_t
{
	*564700f1e1                    = 0,
	*385199cf0f                    = 1,
	*f20530f603                    = 2,
	*d59086f387                    = 3,
	*0d97a46f9b                    = 4,
	*de8101f2c6                    = 5,
	*0403a4b4fb_MAX                = 6,
};

enum class E*1f1316c6ac : uint8_t
{
	*8318e19fd8                    = 0,
	*7105e6f8f9                    = 1,
	*e68ac6a057                    = 2,
	*1f1316c6ac_MAX                = 3,
};

enum class E*ccb24c2017 : uint8_t
{
	*1bbbadca74                    = 0,
	*74daeb5b6f                    = 1,
	*3f40530791                    = 2,
	*5f522c21e4                    = 3,
	*ccb24c2017_MAX                = 4,
};

enum class E*0a59d4e2ef : uint8_t
{
	*eebbb3c1e9                    = 0,
	*887b03c463                    = 1,
	*0481ff18d1                    = 2,
	*3e5524100a                    = 3,
	*5797ff1463                    = 4,
	*80259e15aa                    = 5,
	*0a59d4e2ef_MAX                = 6,
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

enum class E*36fd9ab660 : uint8_t
{
	*0671fc0ecb                    = 0,
	*3465cf4e07                    = 1,
	*3a8f310b03                    = 2,
	*dfbb8a4308                    = 3,
	*36fd9ab660_MAX                = 4,
};

enum class E*95003f9e7d : uint8_t
{
	*1dedb48ea1                    = 0,
	*c6b174d8b9                    = 1,
	*9ac4a77ca1                    = 2,
	*ded5768f1b                    = 3,
	*95003f9e7d_MAX                = 4,
};

enum class E*822c4eb9ab : uint8_t
{
	*1911915d03                    = 0,
	*ffd9623586                    = 1,
	*d502c53ad7                    = 2,
	*eab05112c8                    = 3,
	*822c4eb9ab_MAX                = 4,
};

enum class E*2687df828e : uint8_t
{
	*2f0f043c3d                    = 0,
	*0543007448                    = 1,
	*2645b571cb                    = 2,
	*b3b4129e8b                    = 3,
	*0c1430f61d                    = 4,
	*cd70d82a3d                    = 5,
	*6216f0224c                    = 6,
	*1d5d32d5ff                    = 7,
	*c669b269b9                    = 8,
	*693fa752c2                    = 9,
	*9d4ed20c37                    = 10,
	*78a57c467f                    = 11,
	*f4385ec10e                    = 12,
	*aec099fc67                    = 13,
	*2687df828e_MAX                = 14,
};

enum class E*ec356a7865 : uint8_t
{
	*1bb974c461                    = 0,
	*3f22eaf7a9                    = 1,
	*38e02f9ed0                    = 2,
	*d31853df6f                    = 3,
	*8ef7b048dd                    = 4,
	*db68ba87bc                    = 5,
	*ec356a7865_MAX                = 6,
};

enum class E*bba1693c64 : uint8_t
{
	*59fbc67b06                    = 0,
	*a832b656e9                    = 1,
	*2f7bddee06                    = 2,
	*e04ab64b4d                    = 3,
	*bba1693c64_MAX                = 4,
};

enum class E*c014da11ed : uint8_t
{
	*b12faf91fe                    = 0,
	*bb33709adc                    = 1,
	*3678b15ee9                    = 2,
	*e0e10d3752                    = 3,
	*c014da11ed_MAX                = 4,
};

enum class E*16f750422e : uint8_t
{
	*095321801c                    = 0,
	*8578b79257                    = 1,
	*f7dd82fadf                    = 2,
	*ed47281e71                    = 3,
	*9cfbe8fdb4                    = 4,
	*a920d196a2                    = 5,
	*b956722cc0                    = 6,
	*8a4cd52075                    = 7,
	*16f750422e_MAX                = 8,
};

enum class E*4a0c9f5822 : uint8_t
{
	*3f260ab89c                    = 0,
	*496ca20345                    = 1,
	*4677b5ce99                    = 2,
	*4a0c9f5822_MAX                = 3,
};

enum class E*e1ff10810b : uint8_t
{
	*0a6346bc2a                    = 0,
	*465bc33b31                    = 1,
	*d4e306218a                    = 2,
	*58ec311920                    = 3,
	*8eeac4cebb                    = 4,
	*e1ff10810b_MAX                = 5,
};

enum class E*ebe83be6a4 : uint8_t
{
	*a5b4255463                    = 0,
	*aee35d39cd                    = 1,
	*c0cdd5690d                    = 2,
	*ebe83be6a4_MAX                = 3,
};

enum class E*58be1e5b23 : uint8_t
{
	*8d37962e7d                    = 0,
	*fb59594eee                    = 1,
	*a3467b9ec6                    = 2,
	*e00c25a573                    = 3,
	*58be1e5b23_MAX                = 4,
};

enum class E*1600287ffd : uint8_t
{
	*348ac77ded                    = 0,
	*3bda6e8041                    = 1,
	*5972a5e679                    = 2,
	*03f47ccbe6                    = 3,
	*1600287ffd_MAX                = 4,
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

enum class E*1f90efb216 : uint8_t
{
	*d4c00bedff                    = 0,
	*039e565dbe                    = 1,
	*8a89fbe924                    = 2,
	*d00800bc2a                    = 3,
	*1f90efb216_MAX                = 4,
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

enum class E*44654c4ed9 : uint8_t
{
	*f74de861ee                    = 0,
	*5b33836845                    = 1,
	*7ff3c1a00c                    = 2,
	*41645a3c13                    = 3,
	*1e66013e23                    = 4,
	*0a860fa2ad                    = 5,
	*76464b1368                    = 6,
	*f6f5c6bc14                    = 7,
	*323b1862c4                    = 8,
	*44654c4ed9_MAX                = 9,
};

enum class EAudioOutputTarget : uint8_t
{
	Speaker                        = 0,
	Controller                     = 1,
	ControllerFallbackToSpeaker    = 2,
	EAudioOutputTarget_MAX         = 3,
};

enum class E*e851faf034 : uint8_t
{
	*f8d3b62515                    = 0,
	*80abffabb6                    = 1,
	*27df0cc737                    = 2,
	*67cf0b4b85                    = 3,
	*e851faf034_MAX                = 4,
};

enum class E*b02e669ab5 : uint8_t
{
	*b2637fa2ce                    = 0,
	*d100cb6a20                    = 1,
	*5b294c9792                    = 2,
	*8f7e724af4                    = 3,
	*9d74ffd057                    = 4,
	*b02e669ab5_MAX                = 5,
};

enum class E*d297bc4932 : uint8_t
{
	*fec60cfd6d                    = 0,
	*bfdd9a08d4                    = 1,
	*2cea7e4949                    = 2,
	*d297bc4932_MAX                = 3,
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

enum class E*3545c9f579 : uint8_t
{
	*8b03ff9826                    = 0,
	*c529b5ee11                    = 1,
	*0d90f8e9de                    = 2,
	*3545c9f579_MAX                = 3,
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

enum class E*2f6e3c4329 : uint8_t
{
	*f9fa633d65                    = 0,
	*0a8ec0cace                    = 1,
	*ba75e98966                    = 2,
	*e060c8e0dc                    = 3,
	*2f6e3c4329_MAX                = 4,
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

enum class E*0c8da376b8 : uint8_t
{
	*bf2c23c99a                    = 0,
	*4b59e945ed                    = 1,
	*abdf28f810                    = 2,
	*0c8da376b8_MAX                = 3,
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

enum class E*a8e82b7a2a : uint8_t
{
	*b13688e869                    = 0,
	*02bf93d004                    = 1,
	*ae8ec25481                    = 2,
	*645860fc7f                    = 3,
	*a8e82b7a2a_MAX                = 4,
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

enum class E*5689b7faa2 : uint8_t
{
	*bd28c62bd9                    = 0,
	*e70e52aa32                    = 1,
	*9abb73a03f                    = 2,
	*a33f183cc3                    = 3,
	*5689b7faa2_MAX                = 4,
};

enum class E*901c242523 : uint8_t
{
	*86b20f390f                    = 0,
	*2f0c7568b8                    = 1,
	*680a81c2e5                    = 2,
	*901c242523_MAX                = 3,
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

enum class E*bc5e4843c3 : uint8_t
{
	*fb0c0c9a3d                    = 0,
	*205ffd9f02                    = 1,
	*345a5573cd                    = 2,
	*1f0c2da3b4                    = 3,
	*bc5e4843c3_MAX                = 4,
};

enum class E*ae702981cb : uint8_t
{
	*0db76d190e                    = 0,
	*fa6a9628f6                    = 1,
	*c0ec393008                    = 2,
	*6f94218198                    = 3,
	*ae702981cb_MAX                = 4,
};

enum class E*84ff4f4303 : uint8_t
{
	*3dea4d7d63                    = 0,
	*7366d4ec4f                    = 1,
	*2c53ed5d34                    = 2,
	*387d2f725c                    = 3,
	*84ff4f4303_MAX                = 4,
};

enum class E*b4e2cbb74f : uint8_t
{
	*28641ea8e4                    = 0,
	*0412ab9c2e                    = 1,
	*6403600954                    = 2,
	*233d8a7493                    = 3,
	*b4e2cbb74f_MAX                = 4,
};

enum class E*7790f0a722 : uint8_t
{
	*4429c146da                    = 0,
	*3dea4d7d63                    = 1,
	*794a28f500                    = 2,
	*7790f0a722_MAX                = 3,
};

enum class E*1a8c2c08a4 : uint8_t
{
	*6ff13245e4                    = 0,
	*4f29a55f36                    = 1,
	*7aedceefb3                    = 2,
	*1a8c2c08a4_MAX                = 3,
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

enum class E*972188d42d : uint8_t
{
	*d115e5ef75                    = 1,
	*586d5b7175                    = 2,
	*92946b644e                    = 4,
	*d36fd24f50                    = 5,
	*972188d42d_MAX                = 6,
};

enum class E*eb3492e91a : uint8_t
{
	*7d38bc3aed                    = 0,
	*9c9390798a                    = 1,
	*04952a3eef                    = 2,
	*d30aa6aa4c                    = 3,
	*eb3492e91a_MAX                = 4,
};

enum class E*d8f270e46f : uint8_t
{
	*6f38cfa47f                    = 0,
	*7bdb298f52                    = 1,
	*cd232854ea                    = 2,
	*8b6603bd06                    = 3,
	*d8f270e46f_MAX                = 4,
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

enum class E*83917a338a : uint8_t
{
	*37a5287836                    = 0,
	*7922154fcb                    = 1,
	*38657ea36b                    = 2,
	*99807e0b51                    = 3,
	*8e4e1d7e1a                    = 4,
	*2ceb0c6816                    = 5,
	*125f990d6a                    = 6,
	*714561b0b1                    = 7,
	*778f4a3fa4                    = 8,
	*cbc7e17e24                    = 9,
	*83917a338a_MAX                = 10,
};

enum class E*b6958efa71 : uint8_t
{
	*556cab39ea                    = 0,
	*ea25356880                    = 1,
	*954104407d                    = 2,
	*b6958efa71_MAX                = 3,
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

enum class E*445f93e781 : uint8_t
{
	*3c080741d6                    = 0,
	*2b62afff3e                    = 1,
	*2319c3d549                    = 2,
	*5115d325c0                    = 3,
	*445f93e781_MAX                = 4,
};

enum class E*606ecaea15 : uint8_t
{
	*63aead8ef9                    = 0,
	*789fed4f71                    = 1,
	*bfdd6bd6d3                    = 2,
	*606ecaea15_MAX                = 3,
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

enum class E*d3dcd55774 : uint8_t
{
	*1623fd0680                    = 0,
	*76a56d7287                    = 1,
	*9f6fefcdbf                    = 2,
	*d3dcd55774_MAX                = 3,
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

enum class E*341795cde4 : uint8_t
{
	*27613bc976                    = 0,
	*78db066f2c                    = 1,
	*364a76cb5d                    = 2,
	*341795cde4_MAX                = 3,
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

enum class E*c02630452d : uint8_t
{
	*ec395d7e99                    = 0,
	*8497362115                    = 1,
	*92630d57f6                    = 2,
	*c02630452d_MAX                = 3,
};

enum class EEQSNormalizationType : uint8_t
{
	Absolute                       = 0,
	RelativeToScores               = 1,
	EEQSNormalizationType_MAX      = 2,
};

enum class E*251eb85228 : uint8_t
{
	*b88640d073                    = 0,
	*51d8b831e6                    = 1,
	*cae9761096                    = 2,
	*8652a2ad8d                    = 3,
	*68eb731a00                    = 4,
	*251eb85228_MAX                = 5,
};

enum class E*934a0ef95e : uint8_t
{
	*ff967ae196                    = 0,
	*a0ac7c5d61                    = 1,
	*0b5ef7034b                    = 2,
	*934a0ef95e_MAX                = 3,
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

enum class E*acf29d8c3d : uint8_t
{
	*8da765452e                    = 0,
	*29133ccf1f                    = 1,
	*eac6b686e3                    = 2,
	*acf29d8c3d_MAX                = 3,
};

enum class E*7d1cd67e02 : uint8_t
{
	*51592532e3                    = 0,
	*9ae4ed1277                    = 1,
	*f2dbe356df                    = 2,
	*7d1cd67e02_MAX                = 3,
};

enum class E*372967e4bb : uint8_t
{
	*4a3efd5fb2                    = 0,
	*d638432742                    = 1,
	*affa2d09e1                    = 2,
	*372967e4bb_MAX                = 3,
};

enum class E*b94dc416fa : uint8_t
{
	*1baa358274                    = 0,
	*f6ce733b39                    = 1,
	*785cbb791b                    = 2,
	*e879f9bd46                    = 3,
	*c909405aef                    = 4,
	*dfae2ac0e9                    = 5,
	*f790f2a918                    = 6,
	*b94dc416fa_MAX                = 7,
};

enum class E*25bd2deb85 : uint8_t
{
	*e0f8276957                    = 0,
	*a192439ab1                    = 1,
	*b78f9df2b4                    = 2,
	*25646af2b9                    = 3,
	*25bd2deb85_MAX                = 4,
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

enum class EFollowMethod : uint8_t
{
	LookAtLocation                 = 0,
	FollowCamera                   = 1,
	FollowPawn                     = 2,
	Stationary                     = 3,
	EFollowMethod_MAX              = 4,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};

enum class E*032b5def33 : uint8_t
{
	*2d4028d149                    = 0,
	*f398552271                    = 1,
	*99e46a8294                    = 2,
	*cd0b812abf                    = 3,
	*2f934301b4                    = 4,
	*87752166f8                    = 5,
	*81a2f59007                    = 6,
	*032b5def33_MAX                = 7,
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

enum class E*d08219d1c1 : uint8_t
{
	*980552d605                    = 0,
	*f5af0ea4ab                    = 1,
	*f213bb85ec                    = 2,
	*06e8f3e967                    = 3,
	*d08219d1c1_MAX                = 4,
};

enum class E*6d9d49b670 : uint8_t
{
	*c79331ab7d                    = 0,
	*28297f7654                    = 1,
	*0a4734f3a9                    = 2,
	*31116d9eac                    = 3,
	*6d9d49b670_MAX                = 4,
};

enum class E*49c7edc1d0 : uint8_t
{
	*6a6887de5d                    = 0,
	*be64373d6a                    = 1,
	*71af6a4cfd                    = 2,
	*7061e60281                    = 3,
	*49c7edc1d0_MAX                = 4,
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

enum class E*9ae0f787d0 : uint8_t
{
	*5a1bd24036                    = 0,
	*14eb060440                    = 1,
	*cff765de8a                    = 2,
	*261b96ae82                    = 3,
	*9ae0f787d0_MAX                = 4,
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

enum class E*89fedabe22 : uint8_t
{
	*bb9acd3356                    = 0,
	*eab9432a2d                    = 1,
	*a4969138a1                    = 2,
	*89fedabe22_MAX                = 3,
};

enum class EFontLoadingPolicy : uint8_t
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3,
};

enum class E*8d834388c5 : uint8_t
{
	*ecd91f4213                    = 0,
	*440987dd1b                    = 1,
	*da2dd13914                    = 2,
	*f42c05f2da                    = 3,
	*8d834388c5_MAX                = 4,
};

enum class E*289f46e751 : uint8_t
{
	*ec8bfaa53f                    = 0,
	*1a04517dae                    = 1,
	*3278714b0c                    = 2,
	*289f46e751_MAX                = 3,
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

enum class E*04e8c7d25a : uint8_t
{
	*d993201247                    = 0,
	*8bae95ee13                    = 1,
	*e3655b3eb5                    = 2,
	*04e8c7d25a_MAX                = 3,
};

enum class E*5a8d5c3410 : uint8_t
{
	*46d1977c42                    = 0,
	*debd2983ff                    = 1,
	*96a7a3a8d3                    = 2,
	*20e4a7b364                    = 3,
	*5a8d5c3410_MAX                = 4,
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

enum class E*21727e07ae : uint8_t
{
	*f03c019bac                    = 0,
	*892f62d2cb                    = 1,
	*85a5efc069                    = 2,
	*f7b7f39a75                    = 3,
	*4f8f9955ab                    = 4,
	*b97465ca63                    = 5,
	*ba2235f0ce                    = 6,
	*21727e07ae_MAX                = 7,
};

enum class E*ec921ab7b9 : uint8_t
{
	*96e16671ed                    = 0,
	*1a5ab39300                    = 1,
	*d0256b79e3                    = 2,
	*a72f5425dc                    = 3,
	*7c1a9ba848                    = 4,
	*ec921ab7b9_MAX                = 5,
};

enum class E*2b34388312 : uint8_t
{
	*959f159c32                    = 0,
	*70c8bbcee6                    = 1,
	*bf0397783b                    = 2,
	*d9f5e2d9b6                    = 3,
	*d32d756986                    = 4,
	*f4bdcc2926                    = 5,
	*f34e690d5a                    = 6,
	*6abd9dfab0                    = 7,
	*b2f1324ffd                    = 8,
	*cec9ed9b2c                    = 9,
	*a002f15027                    = 10,
	*9e0f8b1582                    = 11,
	*52e328cc48                    = 12,
	*f71a4f169c                    = 13,
	*500921d4bc                    = 14,
	*1c079e54cc                    = 15,
	*420d841393                    = 16,
	*b100585c33                    = 17,
	*58eb57d8de                    = 18,
	*09d8651b98                    = 19,
	*ad2957bdc1                    = 20,
	*290ee8d4f0                    = 21,
	*49bba536b3                    = 22,
	*2b34388312_MAX                = 23,
};

enum class E*aa5f1a1964 : uint8_t
{
	*7a9d49e337                    = 0,
	*c287fbfa6a                    = 1,
	*b57afef567                    = 2,
	*4e3cd67ea1                    = 3,
	*ce4c6eed1e                    = 4,
	*83c2edd61d                    = 5,
	*e6c38b9d5a                    = 6,
	*542b610ecf                    = 7,
	*fa272122da                    = 8,
	*78d6119870                    = 9,
	*3a6ecec39e                    = 10,
	*3bbf16df14                    = 11,
	*29096a8ea3                    = 12,
	*8eb1ce8dcd                    = 13,
	*b32c2ab881                    = 14,
	*0cc9090961                    = 15,
	*3b91c39465                    = 16,
	*7fa1fa62f0                    = 17,
	*4fa20375f2                    = 18,
	*d5267e48e6                    = 19,
	*3dd2b6816f                    = 20,
	*c81b95fa47                    = 21,
	*17cd133a00                    = 22,
	*01f172b639                    = 23,
	*0c336b6dfd                    = 24,
	*5ba83f5f5f                    = 25,
	*b9517abd09                    = 26,
	*b53578a29d                    = 27,
	*4ce73672a1                    = 28,
	*c4856b62c7                    = 29,
	*882e073c81                    = 30,
	*b67958775b                    = 31,
	*9883e2d3c1                    = 32,
	*a33c358e56                    = 33,
	*557ac7c6f9                    = 34,
	*27a43e379e                    = 35,
	*fd76d7a327                    = 36,
	*350df3bd89                    = 37,
	*ce95b18938                    = 38,
	*6a0d89fed2                    = 39,
	*ca82b0a46d                    = 40,
	*be3839cc89                    = 41,
	*e91898042d                    = 42,
	*a3bad93e80                    = 43,
	*d67881bdee                    = 44,
	*24c0ba4e8f                    = 45,
	*b092e5905d                    = 46,
	*a143659aa1                    = 47,
	*9d12d2e029                    = 48,
	*28075181b7                    = 49,
	*7180cf374a                    = 50,
	*8914fb99ce                    = 51,
	*682cf5bf76                    = 52,
	*057e21fa42                    = 53,
	*1f14e4bf41                    = 54,
	*efeb2fe803                    = 55,
	*efb282e651                    = 56,
	*2f6ece47bb                    = 57,
	*e6f115b263                    = 58,
	*bb8b8bd6f4                    = 59,
	*520994269b                    = 60,
	*931825449d                    = 61,
	*469c596084                    = 62,
	*263473f735                    = 63,
	*730dfbe9fc                    = 64,
	*8dffe8c409                    = 65,
	*780d7c0a4e                    = 66,
	*d1d350c768                    = 67,
	*c9eeb764a4                    = 68,
	*f4c4c7ca30                    = 69,
	*7a81cfe18c                    = 70,
	*6d2c9ef977                    = 71,
	*dfea2b137d                    = 72,
	*4bcd570a3e                    = 73,
	*7d19a823ad                    = 74,
	*a70c058029                    = 75,
	*90cbae3919                    = 76,
	*02b43e57f2                    = 77,
	*4237fbf303                    = 78,
	*5bd6ee9d51                    = 79,
	*8d156b1245                    = 80,
	*21a2cd26c0                    = 81,
	*17ca041fb9                    = 82,
	*c42a07b57d                    = 83,
	*7382c6a072                    = 84,
	*13c65732b2                    = 85,
	*2f779f913b                    = 86,
	*4b814efc25                    = 87,
	*3cda54c8c5                    = 88,
	*bc78397bdb                    = 89,
	*63c61d01a9                    = 90,
	*24b48fcafb                    = 91,
	*5a04f93ce4                    = 92,
	*8a09e07aae                    = 93,
	*e254aa0cd7                    = 94,
	*aa181ed6e4                    = 95,
	*46faea1dda                    = 96,
	*dc61a9c597                    = 97,
	*05808085f0                    = 98,
	*0d6d21d7a4                    = 99,
	*7511cb94e6                    = 100,
	*269aafcc9e                    = 101,
	*ce4dd239af                    = 102,
	*919b42be9a                    = 103,
	*90336aa3ac                    = 104,
	*966cdf64af                    = 105,
	*873cd39e5e                    = 106,
	*cc0faf3f65                    = 107,
	*8c4e182cf6                    = 108,
	*fc49f33350                    = 109,
	*d215e6377c                    = 110,
	*7df7116082                    = 111,
	*be7a166d1f                    = 112,
	*1cee407263                    = 113,
	*e023606812                    = 114,
	*2a450d5799                    = 115,
	*76a5c615e3                    = 116,
	*81548375a8                    = 117,
	*8bc531770e                    = 118,
	*530b6e8a3a                    = 119,
	*fd6e6330c2                    = 120,
	*7f27583fb1                    = 121,
	*3ed8923a32                    = 122,
	*630747eb63                    = 123,
	*d1cb414a82                    = 124,
	*ae963d837b                    = 125,
	*aa5f1a1964_MAX                = 126,
};

enum class E*6943444cab : uint8_t
{
	*bbcfac7934                    = 0,
	*0df9005925                    = 1,
	*efa26a485e                    = 2,
	*7df8b9c404                    = 3,
	*453cd0a114                    = 4,
	*c3aa0135b9                    = 5,
	*25f98da28a                    = 6,
	*6943444cab_MAX                = 7,
};

enum class E*3e81c6c74e : uint8_t
{
	*efa26a485e                    = 0,
	*7df8b9c404                    = 1,
	*453cd0a114                    = 2,
	*25f98da28a                    = 3,
	*3e81c6c74e_MAX                = 4,
};

enum class E*e6cb179b1b : uint8_t
{
	*bbcfac7934                    = 0,
	*0df9005925                    = 1,
	*c3aa0135b9                    = 2,
	*25f98da28a                    = 3,
	*e6cb179b1b_MAX                = 4,
};

enum class E*4690bf02bb : uint8_t
{
	*99b69ae47b                    = 0,
	*dabc6b0f0c                    = 1,
	*25f98da28a                    = 2,
	*4690bf02bb_MAX                = 3,
};

enum class E*a10400268d : uint8_t
{
	*58dcdb80c3                    = 0,
	*abd863d0ad                    = 1,
	*935edfe31d                    = 2,
	*b44cf3459c                    = 3,
	*d50fa97e0f                    = 4,
	*83d076430e                    = 5,
	*8d03e8560d                    = 6,
	*c38c386e2b                    = 7,
	*a1a8e8498c                    = 8,
	*82ffbc149a                    = 9,
	*22c12c3d7c                    = 10,
	*fd060f4099                    = 11,
	*a10400268d_MAX                = 12,
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

enum class E*e237bad629 : uint8_t
{
	*0c094f6449                    = 0,
	*775a5f3ccf                    = 1,
	*691e307b28                    = 2,
	*8443c67b2f                    = 3,
	*5cecd340b0                    = 4,
	*59276583dd                    = 5,
	*1acc026e32                    = 6,
	*b98e49baca                    = 7,
	*8133f370d0                    = 8,
	*0a40f3c225                    = 9,
	*e237bad629_MAX                = 10,
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

enum class E*539102a36d : uint8_t
{
	*bc03615de2                    = 0,
	*15296423fe                    = 1,
	*66863447a1                    = 2,
	*a5f34f477b                    = 3,
	*539102a36d_MAX                = 4,
};

enum class E*7d51bca647 : uint8_t
{
	*cabd805d62                    = 0,
	*caf266d94b                    = 1,
	*36e04ebc12                    = 2,
	*7d51bca647_MAX                = 3,
};

enum class E*7a46ff5c1b : uint8_t
{
	*dce2cda12c                    = 0,
	*3826c4e92d                    = 1,
	*28220b2a70                    = 2,
	*a22231ff66                    = 3,
	*7a46ff5c1b_MAX                = 4,
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

enum class E*ba2e960d7d : uint8_t
{
	*644dd98fdf                    = 1,
	*dc50832be3                    = 2,
	*0114f872cf                    = 3,
	*d8b8d0389f                    = 4,
	*ba2e960d7d_MAX                = 5,
};

enum class ESimulationOverlap : uint8_t
{
	CollisionOverlap               = 0,
	ShadeOverlap                   = 1,
	None                           = 2,
	ESimulationOverlap_MAX         = 3,
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

enum class E*74f22b7e10 : uint8_t
{
	*4b026c6b75                    = 0,
	*48071ae2be                    = 1,
	*26469ae0ab                    = 2,
	*74f22b7e10_MAX                = 3,
};

enum class ETileMapProjectionMode : uint8_t
{
	Orthogonal                     = 0,
	IsometricDiamond               = 1,
	IsometricStaggered             = 2,
	HexagonalStaggered             = 3,
	ETileMapProjectionMode_MAX     = 4,
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

enum class E*a0f71a4aeb : uint8_t
{
	*b749573dcc                    = 0,
	*fbf5e14770                    = 1,
	*b190d31222                    = 2,
	*0dc4916321                    = 3,
	*6fafa168bc                    = 4,
	*a0f71a4aeb_MAX                = 5,
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

enum class ETslBombTeamRole : uint8_t
{
	None                           = 0,
	AttackTeam                     = 1,
	DefenseTeam                    = 2,
	ROLE_MAX                       = 3,
	ETslBombTeamRole_MAX           = 4,
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

enum class ETslSLBGeneratorState : uint8_t
{
	Breakdown                      = 0,
	NeedFuel                       = 1,
	BeforeActivate                 = 2,
	Activate                       = 3,
	MAX                            = 4,
	ETslSLBGeneratorState_MAX      = 5,
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

enum class ETslBombObserverHudMapMode : uint8_t
{
	MiniMap                        = 0,
	WorldMap                       = 1,
	ETslBombObserverHudMapMode_MAX = 2,
};

enum class ETslBombObserverStatusBoardRoundStateUIType : uint8_t
{
	WaitingRound                   = 0,
	LeftTeamWin                    = 1,
	RightTeamWin                   = 2,
	CurrentRound                   = 3,
	ETslBombObserverStatusBoardRoundStateUIType_MAX = 4,
};

enum class ETslBombObserverTeamInfoPlayerStateUIType : uint8_t
{
	None                           = 0,
	Live                           = 1,
	Dbno                           = 2,
	Dead                           = 3,
	ETslBombObserverTeamInfoPlayerStateUIType_MAX = 4,
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

enum class E*55908038b8 : uint8_t
{
	*4d3d4ae227                    = 0,
	*b68d04621f                    = 1,
	*e2692313d0                    = 2,
	*55908038b8_MAX                = 3,
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

enum class E*eabfafdb87 : uint8_t
{
	*116e951e55                    = 0,
	*cb93af5d34                    = 1,
	*7d86908f52                    = 2,
	*f0450acaab                    = 3,
	*8f963cbfad                    = 4,
	*391a5614c3                    = 5,
	*fe50223a00                    = 6,
	*f5fabb4432                    = 7,
	*d8115972b3                    = 8,
	*eabfafdb87_MAX                = 9,
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

enum class E*2d7ead8360 : uint8_t
{
	*bc8bcdc756                    = 0,
	*00dee7a3f7                    = 1,
	*5a2032716f                    = 2,
	*2d7ead8360_MAX                = 3,
};

enum class E*7abd727b29 : uint8_t
{
	*450a9f079d                    = 0,
	*a1562b0d91                    = 1,
	*9355e0a968                    = 2,
	*05113887b0                    = 3,
	*24f774703a                    = 4,
	*7abd727b29_MAX                = 5,
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

enum class EMobileCSMQuality : uint8_t
{
	NoFiltering                    = 0,
	PCF_1x1                        = 1,
	PCF_2x2                        = 2,
	EMobileCSMQuality_MAX          = 3,
};

enum class E*2390cef6a1 : uint8_t
{
	*f9852cc701                    = 0,
	*e81d59ee2e                    = 1,
	*0aed88f5d3                    = 2,
	*bfa728d34b                    = 3,
	*2390cef6a1_MAX                = 4,
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

enum class E*31611e7a87 : uint8_t
{
	*cff8ce5fed                    = 0,
	*47e4c50641                    = 1,
	*9965d68373                    = 2,
	*3dc2581e8e                    = 3,
	*251db7744a                    = 4,
	*31611e7a87_MAX                = 5,
};

enum class E*f31cbb0823 : uint8_t
{
	*b12cf5ee37                    = 0,
	*3a9825d7c9                    = 1,
	*a981dc7630                    = 2,
	*f31cbb0823_MAX                = 3,
};

enum class E*893957b829 : uint8_t
{
	*ed8e5a65e1                    = 0,
	*e6995a39a6                    = 1,
	*9644d5af0d                    = 2,
	*49441caaad                    = 3,
	*893957b829_MAX                = 4,
};

enum class E*836b3b971f : uint8_t
{
	*45747d246d                    = 0,
	*9222b19686                    = 1,
	*167f13c2b8                    = 2,
	*1fac0fc82c                    = 3,
	*5392ab10fe                    = 4,
	*40d2c0013d                    = 5,
	*836b3b971f_MAX                = 6,
};

enum class E*19a0ee56d4 : uint8_t
{
	*cd11e17bba                    = 0,
	*eeb6d63c95                    = 1,
	*dd02874f7a                    = 2,
	*36a0714988                    = 3,
	*799644a235                    = 4,
	*19a0ee56d4_MAX                = 5,
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

enum class E*0ba7b71fac : uint8_t
{
	*c95a49e2cb                    = 0,
	*ed9e9a3a44                    = 1,
	*f64e175e2e                    = 2,
	*0ba7b71fac_MAX                = 3,
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

enum class E*25bbb1209d : uint8_t
{
	*c7f536f996                    = 0,
	*449ccd32a4                    = 1,
	*b762bdb263                    = 2,
	*25bbb1209d_MAX                = 3,
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

enum class E*9079aa96dc : uint8_t
{
	*a832d2fe22                    = 0,
	*f6973b42c5                    = 1,
	*c5feecacc2                    = 2,
	*1e09607d14                    = 3,
	*9079aa96dc_MAX                = 4,
};

enum class E*15d681392c : uint8_t
{
	*f194430b3e                    = 0,
	*a27b907be9                    = 1,
	*00ed888f95                    = 2,
	*47198bdf3e                    = 3,
	*15d681392c_MAX                = 4,
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

enum class E*6ea2020579 : uint8_t
{
	*69bc26f714                    = 0,
	*5c2a6f3506                    = 1,
	*a7083cf8ed                    = 2,
	*f8f1ae323d                    = 3,
	*6ea2020579_MAX                = 4,
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

enum class E*a06b604d2e : uint8_t
{
	*e6fed4c99d                    = 0,
	*bcc3d3fd88                    = 1,
	*ff63052a27                    = 2,
	*8b30595050                    = 3,
	*a06b604d2e_MAX                = 4,
};

enum class E*9189b89f96 : uint8_t
{
	*2e79aeda81                    = 0,
	*ee7ce29bf5                    = 1,
	*8b74f01c20                    = 2,
	*f9fae25692                    = 3,
	*4c71c1ced0                    = 4,
	*1c5202b47c                    = 5,
	*e4559c1ed2                    = 6,
	*c4bf564150                    = 7,
	*34a4dca35d                    = 8,
	*aa9673a32d                    = 9,
	*2aa5986afc                    = 10,
	*8b2e0f5bc9                    = 11,
	*9189b89f96_MAX                = 12,
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

enum class E*b5cc355a7a : uint8_t
{
	*8e1dade459                    = 0,
	*507a767985                    = 1,
	*67411675d2                    = 2,
	*184779be89                    = 3,
	*b5cc355a7a_MAX                = 4,
};

enum class EPrefabVisualizerType : uint8_t
{
	WireBox                        = 0,
	WireSphere                     = 1,
	EPrefabVisualizerType_MAX      = 2,
};

enum class E*8ec5394121 : uint8_t
{
	*7a7db0878c                    = 0,
	*ca44f23b92                    = 1,
	*bf33e21735                    = 2,
	*0bb99577b5                    = 3,
	*28f3375a4d                    = 4,
	*0c62b22eea                    = 5,
	*8ec5394121_MAX                = 6,
};

enum class E*26dcb2cea5 : uint8_t
{
	*47390f3d22                    = 0,
	*cb2b2c5f7d                    = 1,
	*f971361c90                    = 2,
	*26dcb2cea5_MAX                = 3,
};

enum class E*8951e0ed26 : uint8_t
{
	*76f5ec2505                    = 0,
	*9e3e962172                    = 1,
	*14e66174b9                    = 2,
	*18b5f9e687                    = 3,
	*8951e0ed26_MAX                = 4,
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

enum class E*682adf7fbd : uint8_t
{
	*749df54c2d                    = 0,
	*efe24121a1                    = 1,
	*7e66e6db0e                    = 2,
	*4acdc5d5f1                    = 3,
	*682adf7fbd_MAX                = 4,
};

enum class E*fbfb50d9d3 : uint8_t
{
	*bfd5136c87                    = 0,
	*71bb67fce4                    = 1,
	*3b194259af                    = 2,
	*20ec379797                    = 3,
	*dd10da8f82                    = 4,
	*fbfb50d9d3_MAX                = 5,
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

enum class E*8ca8689902 : uint8_t
{
	*860f3d0341                    = 0,
	*8c768d9c3d                    = 1,
	*28e57331d9                    = 2,
	*ea330b77bf                    = 3,
	*8ca8689902_MAX                = 4,
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

