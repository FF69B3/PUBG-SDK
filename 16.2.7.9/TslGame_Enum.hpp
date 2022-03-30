                                                      /* Create by #FF69B4 */
// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6
};


// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
	Exclusive                      = 0,
	Inclusive                      = 1,
	Open                           = 2,
	ERangeBoundTypes_MAX           = 3
};


// Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
	Info                           = 0,
	Warning                        = 1,
	Error                          = 2,
	EAutomationEventType_MAX       = 3
};


// Enum CoreUObject.EMouseCursor
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
	EMouseCursor_MAX               = 14
};


// Enum CoreUObject.EUnit
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
	EUnit_MAX                      = 49
};


// Enum CoreUObject.EPixelFormat
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
	PF_MAX                         = 61
};


// Enum CoreUObject.EAxis
enum class EAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	EAxis_MAX                      = 4
};


// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
	None                           = 0,
	UTC                            = 1,
	SinceGStartTime                = 2,
	ELogTimes_MAX                  = 3
};


// Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
	FromStart                      = 0,
	FromEnd                        = 1,
	ESearchDir_MAX                 = 2
};


// Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
	CaseSensitive                  = 0,
	IgnoreCase                     = 1,
	ESearchCase_MAX                = 2
};


// Enum CoreUObject.ELifetimeCondition
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
	COND_Max                       = 16
};



// Enum Engine.ETextGender
enum class ETextGender : uint8_t
{
	Masculine                      = 0,
	Feminine                       = 1,
	Neuter                         = 2,
	ETextGender_MAX                = 3
};


// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
	Int                            = 0,
	UInt                           = 1,
	Float                          = 2,
	Double                         = 3,
	Text                           = 4,
	Gender                         = 5,
	EFormatArgumentType_MAX        = 6
};


// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
	Destroyed                      = 0,
	LevelTransition                = 1,
	EndPlayInEditor                = 2,
	RemovedFromWorld               = 3,
	Quit                           = 4,
	EEndPlayReason_MAX             = 5
};


// Enum Engine.ENavPathEvent
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
	ENavPathEvent_MAX              = 8
};


// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4
};


// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4
};


// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4
};


// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6
};


// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	Proportional                   = 2,
	EAnimLinkMethod_MAX            = 3
};


// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
	NoFiltering                    = 0,
	LOD                            = 1,
	ENotifyFilterType_MAX          = 2
};


// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
	Queued                         = 0,
	BranchingPoint                 = 1,
	EMontageNotifyTickType_MAX     = 2
};


// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
	Begin                          = 0,
	End                            = 1,
	EAnimNotifyEventType_MAX       = 2
};


// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
	RefPose                        = 0,
	AnimFirstFrame                 = 1,
	Zero                           = 2,
	ERootMotionRootLock_MAX        = 3
};


// Enum Engine.EAlphaBlendOption
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
	EAlphaBlendOption_MAX          = 15
};


// Enum Engine.ETickingGroup
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
	TG_MAX                         = 8
};


// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
	Native                         = 0,
	SimpleConstructionScript       = 1,
	UserConstructionScript         = 2,
	Instance                       = 3,
	EComponentCreationMethod_MAX   = 4
};


// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
	Custom                         = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	UseGlobalPhysicsSetting        = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};


// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
	OneShot                        = 0,
	OneShot_Reverse                = 1,
	Loop_Reset                     = 2,
	PingPong                       = 3,
	EInterpToBehaviourType_MAX     = 4
};


// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6
};


// Enum Engine.ENetworkFailure
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
	ENetworkFailure_MAX            = 11
};


// Enum Engine.ETravelFailure
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
	ETravelFailure_MAX             = 12
};


// Enum Engine.EMovementMode
enum class EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7
};


// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
	Unknown                        = 0,
	Portrait                       = 1,
	PortraitUpsideDown             = 2,
	LandscapeLeft                  = 3,
	LandscapeRight                 = 4,
	FaceUp                         = 5,
	FaceDown                       = 6,
	EScreenOrientation_MAX         = 7
};


// Enum Engine.EObjectTypeQuery
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
	EObjectTypeQuery_MAX           = 33
};


// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	None                           = 0,
	ForOneFrame                    = 1,
	ForDuration                    = 2,
	Persistent                     = 3,
	EDrawDebugTrace_MAX            = 4
};


// Enum Engine.ETraceTypeQuery
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
	ETraceTypeQuery_MAX            = 33
};


// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
	Move                           = 0,
	Stop                           = 1,
	Return                         = 2,
	EMoveComponentAction_MAX       = 3
};


// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
	Quit                           = 0,
	Background                     = 1,
	EQuitPreference_MAX            = 2
};


// Enum Engine.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5
};


// Enum Engine.EStanceMode
enum class EStanceMode : uint8_t
{
	STANCE_None                    = 0,
	STANCE_Stand                   = 1,
	STANCE_Crouch                  = 2,
	STANCE_Prone                   = 3,
	STANCE_Carry                   = 4,
	STANCE_Carried                 = 5,
	STANCE_MAX                     = 6
};


// Enum Engine.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4
};


// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
	KeepRelativeOffset             = 0,
	KeepWorldPosition              = 1,
	SnapToTarget                   = 2,
	SnapToTargetIncludingScale     = 3,
	EAttachLocation_MAX            = 4
};


// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	SnapToTarget                   = 2,
	EAttachmentRule_MAX            = 3
};


// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	EDetachmentRule_MAX            = 2
};


// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	Undefined                      = 0,
	AlwaysSpawn                    = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding           = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};


// Enum Engine.EInputConsumeOptions
enum class EInputConsumeOptions : uint8_t
{
	ICO_ConsumeAll                 = 0,
	ICO_ConsumeBoundKeys           = 1,
	ICO_ConsumeNone                = 2,
	ICO_MAX                        = 3
};


// Enum Engine.EAutoReceiveInput
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
	EAutoReceiveInput_MAX          = 9
};


// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
	UseConfigDefault               = 0,
	AlwaysUpdate                   = 1,
	OnlyUpdateMovable              = 2,
	NeverUpdate                    = 3,
	EActorUpdateOverlapsMethod_MAX = 4
};


// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
	ByteComponents                 = 0,
	ShortComponents                = 1,
	ERotatorQuantization_MAX       = 2
};


// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
	RoundWholeNumber               = 0,
	RoundOneDecimal                = 1,
	RoundTwoDecimals               = 2,
	EVectorQuantization_MAX        = 3
};


// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
	Disabled                       = 0,
	PlacedInWorld                  = 1,
	Spawned                        = 2,
	PlacedInWorldOrSpawned         = 3,
	EAutoPossessAI_MAX             = 4
};


// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5
};


// Enum Engine.EDecalChannel
enum class EDecalChannel : uint8_t
{
	Channel0                       = 0,
	Channel1                       = 1,
	Channel2                       = 2,
	Channel3                       = 3,
	Num                            = 4,
	EDecalChannel_MAX              = 5
};


// Enum Engine.EIndoorOutdoorMask
enum class EIndoorOutdoorMask : uint8_t
{
	IOM_NONE                       = 0,
	IOM_INDOOR                     = 1,
	IOM_OUTDOOR                    = 2,
	IOM_BOTH                       = 3,
	IOM_MAX                        = 4
};


// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
	Default                        = 0,
	ForceCPUAndGPU                 = 1,
	EMeshBufferAccess_MAX          = 2
};


// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
	Frame1                         = 0,
	Frame2                         = 1,
	EConstraintFrame_MAX           = 2
};


// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3
};


// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
	Invalid                        = 0,
	Bone                           = 1,
	Socket                         = 2,
	EComponentSocketType_MAX       = 3
};


// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
	Static                         = 0,
	Stationary                     = 1,
	Movable                        = 2,
	EComponentMobility_MAX         = 3
};


// Enum Engine.EPhysicalSurface
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
	EPhysicalSurface_MAX           = 64
};


// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4
};


// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORN_MAX                       = 5,
	ENetDormancy_MAX               = 6
};


// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
	ShiftBucket0                   = 0,
	ShiftBucket1                   = 1,
	ShiftBucket2                   = 2,
	ShiftBucket3                   = 3,
	ShiftBucket4                   = 4,
	ShiftBucket5                   = 5,
	ShiftBucketMax                 = 6,
	EUpdateRateShiftBucket_MAX     = 7
};


// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2
};


// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3
};


// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
	NoCollision                    = 0,
	QueryOnly                      = 1,
	PhysicsOnly                    = 2,
	QueryAndPhysics                = 3,
	ECollisionEnabled_MAX          = 4
};


// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5
};


// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8_t
{
	Normal                         = 0,
	Sensitive                      = 1,
	Custom                         = 2,
	ESleepFamily_MAX               = 3
};


// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2
};


// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_MAX                       = 3
};


// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3
};


// Enum Engine.EPhysicsSceneType
enum class EPhysicsSceneType : uint8_t
{
	PST_Sync                       = 0,
	PST_Cloth                      = 1,
	PST_Async                      = 2,
	PST_MAX                        = 3
};


// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3
};


// Enum Engine.ECollisionChannel
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
	ECC_MAX                        = 33
};


// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
	Disabled                       = 0,
	Linear                         = 1,
	Exponential                    = 2,
	Replay                         = 3,
	RotationOnly                   = 4,
	ENetworkSmoothingMode_MAX      = 5
};


// Enum Engine.ETriangleSortAxis
enum class ETriangleSortAxis : uint8_t
{
	TSA_X_Axis                     = 0,
	TSA_Y_Axis                     = 1,
	TSA_Z_Axis                     = 2,
	TSA_MAX                        = 3
};


// Enum Engine.ETriangleSortOption
enum class ETriangleSortOption : uint8_t
{
	TRISORT_None                   = 0,
	TRISORT_CenterRadialDistance   = 1,
	TRISORT_Random                 = 2,
	TRISORT_MergeContiguous        = 3,
	TRISORT_Custom                 = 4,
	TRISORT_CustomLeftRight        = 5,
	TRISORT_MAX                    = 6
};


// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4
};


// Enum Engine.EMaterialSamplerType
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
	SAMPLERTYPE_MAX                = 8
};


// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3
};


// Enum Engine.EMaterialShadingModel
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
	MSM_MAX                        = 10
};


// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
	SceneDepth                     = 0,
	DistanceField                  = 1,
	HeightBuffer                   = 2,
	EParticleCollisionMode_MAX     = 3
};


// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3
};


// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
	Force8BitsPerChannel           = 0,
	Default                        = 1,
	HighPrecisionNormals           = 2,
	Force16BitsPerChannel          = 3,
	EGBufferFormat_MAX             = 4
};


// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite                 = 0,
	SCCM_Additive                  = 1,
	SCCM_Composite                 = 2,
	SCCM_MAX                       = 3
};


// Enum Engine.ESceneCaptureSource
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
	SCS_MAX                        = 11
};


// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
	SortByDistance                 = 0,
	SortByProjectedZ               = 1,
	SortAlongAxis                  = 2,
	ETranslucentSortPolicy_MAX     = 3
};


// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
	RM_IndexOfRefraction           = 0,
	RM_PixelNormalOffset           = 1,
	RM_MAX                         = 2
};


// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_MAX                        = 6
};


// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3
};


// Enum Engine.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_MAX                      = 6
};


// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
	OCM_Minimum                    = 0,
	OCM_Multiply                   = 1,
	OCM_MAX                        = 2
};


// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3
};


// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2
};


// Enum Engine.EActorMetricsType
enum class EActorMetricsType : uint8_t
{
	METRICS_VERTS                  = 0,
	METRICS_TRIS                   = 1,
	METRICS_SECTIONS               = 2,
	METRICS_MAX                    = 3
};


// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3
};


// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 7,
	VMI_LightmapDensity            = 8,
	VMI_LitLightmapDensity         = 9,
	VMI_ReflectionOverride         = 10,
	VMI_VisualizeBuffer            = 11,
	VMI_StationaryLightOverlap     = 12,
	VMI_CollisionPawn              = 13,
	VMI_CollisionVisibility        = 14,
	VMI_LODColoration              = 15,
	VMI_QuadOverdraw               = 16,
	VMI_PrimitiveDistanceAccuracy  = 17,
	VMI_MeshUVDensityAccuracy      = 18,
	VMI_ShaderComplexityWithQuadOverdraw = 19,
	VMI_HLODColoration             = 20,
	VMI_GroupLODColoration         = 21,
	VMI_MaterialTextureScaleAccuracy = 22,
	VMI_RequiredTextureResolution  = 23,
	VMI_Max                        = 24,
	VMI_Unknown                    = 25
};


// Enum Engine.EDemoFailure
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
	EDemoFailure_MAX               = 54
};


// Enum Engine.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3
};


// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
	NotLagging                     = 0,
	Lagging                        = 1,
	ENetworkLagState_MAX           = 2
};


// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
	DoNotLock                      = 0,
	LockOnCapture                  = 1,
	LockAlways                     = 2,
	EMouseLockMode_MAX             = 3
};


// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
	NoCapture                      = 0,
	CapturePermanently             = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown         = 3,
	CaptureDuringRightMouseDown    = 4,
	EMouseCaptureMode_MAX          = 5
};


// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	DevelopmentOnly                = 2,
	ENodeEnabledState_MAX          = 3
};


// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
	NoPins                         = 0,
	Shown                          = 1,
	Hidden                         = 2,
	ENodeAdvancedPins_MAX          = 3
};


// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
	FullTitle                      = 0,
	ListView                       = 1,
	EditableTitle                  = 2,
	MenuTitle                      = 3,
	MAX_TitleTypes                 = 4,
	ENodeTitleType_MAX             = 5
};


// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2
};


// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2
};


// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_ParentBoneSpace            = 3,
	RTS_MAX                        = 4
};


// Enum Engine.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3
};


// Enum Engine.ESimplygonMaterialChannel
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
	SG_MATERIAL_CHANNEL_MAX        = 13
};


// Enum Engine.ESimplygonTextureResolution
enum class ESimplygonTextureResolution : uint8_t
{
	TextureResolution              = 0,
	TextureResolution01            = 1,
	TextureResolution02            = 2,
	TextureResolution03            = 3,
	TextureResolution04            = 4,
	TextureResolution05            = 5,
	TextureResolution06            = 6,
	TextureResolution07            = 7,
	TextureResolution_MAX          = 8
};


// Enum Engine.ESimplygonColorChannels
enum class ESimplygonColorChannels : uint8_t
{
	RGBA                           = 0,
	RGB                            = 1,
	L                              = 2,
	ESimplygonColorChannels_MAX    = 3
};


// Enum Engine.ESimplygonTextureSamplingQuality
enum class ESimplygonTextureSamplingQuality : uint8_t
{
	Poor                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	ESimplygonTextureSamplingQuality_MAX = 4
};


// Enum Engine.ESimplygonCasterType
enum class ESimplygonCasterType : uint8_t
{
	None                           = 0,
	Color                          = 1,
	Normals                        = 2,
	Opacity                        = 3,
	ESimplygonCasterType_MAX       = 4
};


// Enum Engine.ESimplygonTextureStrech
enum class ESimplygonTextureStrech : uint8_t
{
	None                           = 0,
	VerySmall                      = 1,
	Small                          = 2,
	Medium                         = 3,
	Large                          = 4,
	VeryLarge                      = 5,
	ESimplygonTextureStrech_MAX    = 6
};


// Enum Engine.EMaterialLODType
enum class EMaterialLODType : uint8_t
{
	Off                            = 0,
	BakeTexture                    = 1,
	BakeVertexColor                = 2,
	Replace                        = 3,
	EMaterialLODType_MAX           = 4
};


// Enum Engine.ESimplygonLODType
enum class ESimplygonLODType : uint8_t
{
	Reduction                      = 0,
	Remeshing                      = 1,
	ESimplygonLODType_MAX          = 2
};


// Enum Engine.EOptimizationMetric
enum class EOptimizationMetric : uint8_t
{
	TrianglePercentage             = 0,
	OnScreenSize                   = 1,
	MaxDeviation                   = 2,
	EOptimizationMetric_MAX        = 3
};


// Enum Engine.EMaterialProxySmaplingQuality
enum class EMaterialProxySmaplingQuality : uint8_t
{
	Poor                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EMaterialProxySmaplingQuality_MAX = 4
};


// Enum Engine.EUVStrech
enum class EUVStrech : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	VeryLarge                      = 3,
	EUVStrech_MAX                  = 4
};


// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2
};


// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX          = 4
};


// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
	MeshMergeType_Default          = 0,
	MeshMergeType_MergeActor       = 1,
	MeshMergeType_MAX              = 2
};


// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
	AllLODs                        = 0,
	SpecificLOD                    = 1,
	CalculateLOD                   = 2,
	LowestDetailLOD                = 3,
	EMeshLODSelectionType_MAX      = 4
};


// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
	AngleWeighted                  = 0,
	AreaWeighted                   = 1,
	EqualWeighted                  = 2,
	EProxyNormalComputationMethod_MAX = 3
};


// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
	High                           = 0,
	Medium                         = 1,
	Low                            = 2,
	ELandscapeCullingPrecision_MAX = 3
};


// Enum Engine.EPhysXAggregationMode
enum class EPhysXAggregationMode : uint8_t
{
	NoCollision                    = 0,
	BlockAllWithComplexAsSimple    = 1,
	EPhysXAggregationMode_MAX      = 2
};


// Enum Engine.EChartAggregationMode
enum class EChartAggregationMode : uint8_t
{
	TextureSize                    = 0,
	SurfaceArea                    = 1,
	PixelDensity                   = 2,
	UVSize                         = 3,
	EChartAggregationMode_MAX      = 4
};


// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	Triangles                      = 0,
	Vertices                       = 1,
	Any                            = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3
};


// Enum Engine.EImposterCaptureType
enum class EImposterCaptureType : uint8_t
{
	No                             = 0,
	Quarter                        = 1,
	Half                           = 2,
	Full                           = 3,
	EImposterCaptureType_MAX       = 4
};


// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
	Off                            = 0,
	Lowest                         = 1,
	Low                            = 2,
	Normal                         = 3,
	High                           = 4,
	Highest                        = 5,
	EMeshFeatureImportance_MAX     = 6
};


// Enum Engine.EBrushType
enum class EBrushType : uint8_t
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3
};


// Enum Engine.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6
};


// Enum Engine.ReverbPreset
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
	REVERB_MAX                     = 23
};


// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5
};


// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
	Invalid                        = 0,
	Error                          = 1,
	Fail                           = 2,
	Success                        = 3,
	ENavigationQueryResult_MAX     = 4
};


// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
	Invalid                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringModeConfig_MAX = 3
};


// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
	Default                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringMode_MAX      = 3
};


// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3,
	ENavigationOptionFlag_MAX      = 4
};


// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_MAX                         = 4
};


// Enum Engine.EHBAOBlurRadius
enum class EHBAOBlurRadius : uint8_t
{
	AOBR_BlurRadius0               = 0,
	AOBR_BlurRadius2               = 1,
	AOBR_BlurRadius4               = 2,
	AOBR_MAX                       = 3
};


// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
	BM_SOG                         = 0,
	BM_FFT                         = 1,
	BM_MAX                         = 2
};


// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_MAX                        = 2
};


// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MSAA                       = 3,
	AAM_MAX                        = 4
};


// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3
};


// Enum Engine.EMaterialProperty
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
	MP_MaterialAttributes          = 28,
	MP_CustomOutput                = 29,
	MP_MAX                         = 30
};


// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t
{
	CameraLocal                    = 0,
	World                          = 1,
	UserDefined                    = 2,
	ECameraAnimPlaySpace_MAX       = 3
};


// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ECameraProjectionMode_MAX      = 2
};


// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2
};


// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
	CAS_LeftStick                  = 0,
	CAS_RightStick                 = 1,
	CAS_MAX                        = 2
};


// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	Start                          = 0,
	Update                         = 1,
	Stop                           = 2,
	EDynamicForceFeedbackAction_MAX = 3
};


// Enum Engine.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3
};


// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3
};


// Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{
	Default                        = 0,
	SixDOF                         = 1,
	YZPlane                        = 2,
	XZPlane                        = 3,
	XYPlane                        = 4,
	CustomPlane                    = 5,
	None                           = 6,
	EDOFMode_MAX                   = 7
};


// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
	ERSM_Default                   = 0,
	ERSM                           = 1,
	ERSM01                         = 2,
	ERSM02                         = 3,
	ERSM03                         = 4,
	ERSM04                         = 5,
	ERSM05                         = 6,
	ERSM06                         = 7,
	ERSM07                         = 8,
	ERSM08                         = 9,
	ERSM_MAX                       = 10
};


// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
	No                             = 0,
	Yes                            = 1,
	EvenIfNotCollidable            = 2,
	DontExport                     = 3,
	EHasCustomNavigableGeometry_MAX = 4
};


// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3
};


// Enum Engine.EMaterialClipVolumeImportance
enum class EMaterialClipVolumeImportance : uint8_t
{
	MCVI_Low                       = 0,
	MCVI_Medium                    = 1,
	MCVI_High                      = 2,
	MCVI_Critical                  = 3,
	MCVI_MAX                       = 4
};


// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_MAX                         = 6
};


// Enum Engine.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
	Static                         = 0,
	DynamicModifiersOnly           = 1,
	Dynamic                        = 2,
	LegacyGeneration               = 3,
	ERuntimeGenerationType_MAX     = 4
};


// Enum Engine.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
	Monotone                       = 0,
	Watershed                      = 1,
	ChunkyMonotone                 = 2,
	ERecastPartitioning_MAX        = 3
};


// Enum Engine.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
	TotalCost                      = 0,
	HeuristicOnly                  = 1,
	RealCostOnly                   = 2,
	ENavCostDisplay_MAX            = 3
};


// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	BothWays                       = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ENavLinkDirection_MAX          = 3
};


// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3
};


// Enum Engine.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3
};


// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2
};


// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6
};


// Enum Engine.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3
};


// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_MAX                       = 8
};


// Enum Engine.EAxisOption
enum class EAxisOption : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	X_Neg                          = 3,
	Y_Neg                          = 4,
	Z_Neg                          = 5,
	Custom                         = 6,
	EAxisOption_MAX                = 7
};


// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
	Linear                         = 0,
	Step                           = 1,
	EAnimInterpolationType_MAX     = 2
};


// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
	MaxWeight                      = 0,
	NormalizeByWeight              = 1,
	BlendByWeight                  = 2,
	ECurveBlendOption_MAX          = 3
};


// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3
};


// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3
};


// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4
};


// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3
};


// Enum Engine.ESkeletalMeshLODType
enum class ESkeletalMeshLODType : uint8_t
{
	Reduction                      = 0,
	Proxy                          = 1,
	ESkeletalMeshLODType_MAX       = 2
};


// Enum Engine.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_ScreenSize                = 2,
	SMOT_MAX                       = 3
};


// Enum Engine.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6
};


// Enum Engine.SkeletalMeshTerminationCriterion
enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles            = 0,
	SMTC_NumOfVerts                = 1,
	SMTC_TriangleOrVert            = 2,
	SMTC_AbsNumOfTriangles         = 3,
	SMTC_AbsNumOfVerts             = 4,
	SMTC_AbsTriangleOrVert         = 5,
	SMTC_MAX                       = 6
};


// Enum Engine.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7
};


// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_MAX                       = 4
};


// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	NoRootMotionExtraction         = 0,
	IgnoreRootMotion               = 1,
	RootMotionFromEverything       = 2,
	RootMotionFromMontagesOnly     = 3,
	ERootMotionMode_MAX            = 4
};


// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
	CanBeLeader                    = 0,
	AlwaysFollower                 = 1,
	AlwaysLeader                   = 2,
	TransitionLeader               = 3,
	EAnimGroupRole_MAX             = 4
};


// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
	MaintainLastRootMotionVelocity = 0,
	SetVelocity                    = 1,
	ClampVelocity                  = 2,
	ERootMotionFinishVelocityMode_MAX = 3
};


// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
	UseSensitiveLiftoffCheck       = 0,
	DisablePartialEndTick          = 1,
	IgnoreZAccumulate              = 2,
	ERootMotionSourceSettingsFlags_MAX = 3
};


// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
	Prepared                       = 0,
	Finished                       = 1,
	MarkedForRemoval               = 2,
	ERootMotionSourceStatusFlags_MAX = 3
};


// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
	Override                       = 0,
	Additive                       = 1,
	ERootMotionAccumulateMode_MAX  = 2
};


// Enum Engine.EStaticMeshLODType
enum class EStaticMeshLODType : uint8_t
{
	Reduction                      = 0,
	Proxy                          = 1,
	EStaticMeshLODType_MAX         = 2
};


// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2
};


// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7
};


// Enum Engine.ENormalMode
enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5
};


// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
	Animation                      = 0,
	Skeleton                       = 1,
	AnimationScaled                = 2,
	AnimationRelative              = 3,
	EBoneTranslationRetargetingMode_MAX = 4
};


// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
	RCT_Float                      = 0,
	RCT_Vector                     = 1,
	RCT_Transform                  = 2,
	RCT_MAX                        = 3
};


// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
	AACF_DriveMorphTarget_DEPRECATED = 0,
	AACF_DriveAttribute_DEPRECATED = 1,
	AACF_Editable                  = 2,
	AACF_DriveMaterial_DEPRECATED  = 3,
	AACF_Metadata                  = 4,
	AACF_DriveTrack                = 5,
	AACF_Disabled                  = 6,
	AACF_MAX                       = 7
};


// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3
};


// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3
};


// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
	SLERP                          = 0,
	TwistAndSwing                  = 1,
	EAngularDriveMode_MAX          = 2
};


// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
	Sphere                         = 0,
	Capsule                        = 1,
	Box                            = 2,
	Cone                           = 3,
	EAttenuationShape_MAX          = 4
};


// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
	Linear                         = 0,
	Logarithmic                    = 1,
	Inverse                        = 2,
	LogReverse                     = 3,
	NaturalSound                   = 4,
	Custom                         = 5,
	EAttenuationDistanceModel_MAX  = 6
};


// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2
};


// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4
};


// Enum Engine.EPreviewIndexType
enum class EPreviewIndexType : uint8_t
{
	RandomSeed                     = 0,
	VariantIndex                   = 1,
	PermutationIndex               = 2,
	EPreviewIndexType_MAX          = 3
};


// Enum Engine.ESpawnPointRollType
enum class ESpawnPointRollType : uint8_t
{
	Probability                    = 0,
	LocalRatio                     = 1,
	GlobalRatio                    = 2,
	ESpawnPointRollType_MAX        = 3
};


// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2
};


// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
	WorldSpace                     = 0,
	ComponentSpace                 = 1,
	EBoneSpaces_MAX                = 2
};


// Enum Engine.EMeshComponentUpdateFlag
enum class EMeshComponentUpdateFlag : uint8_t
{
	AlwaysTickPoseAndRefreshBones  = 0,
	AlwaysTickPose                 = 1,
	OnlyTickPoseWhenRendered       = 2,
	EMeshComponentUpdateFlag_MAX   = 3
};


// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_MAX                        = 2
};


// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3
};


// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic  = 1,
	EPhysicsTransformUpdateMode_MAX = 2
};


// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
	AnimationBlueprint             = 0,
	AnimationSingleNode            = 1,
	AnimationCustomMode            = 2,
	EAnimationMode_MAX             = 3
};


// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	SkipSimulatingBones            = 0,
	SkipAllBones                   = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};


// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESplineMeshAxis_MAX            = 3
};


// Enum Engine.ETextureDownscaleOptions
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
	ETextureDownscaleOptions_MAX   = 14
};


// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
	Point                          = 0,
	Bilinear                       = 1,
	Trilinear                      = 2,
	AnisotropicPoint               = 3,
	AnisotropicLinear              = 4,
	ETextureSamplerFilter_MAX      = 5
};


// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
	None                           = 0,
	PadToPowerOfTwo                = 1,
	PadToSquarePowerOfTwo          = 2,
	ETexturePowerOfTwoSetting_MAX  = 3
};


// Enum Engine.TextureMipGenSettings
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
	TMGS_MAX                       = 20
};


// Enum Engine.TextureGroup
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
	TEXTUREGROUP_MAX               = 33
};


// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_RG8                        = 2,
	TSF_R16                        = 3,
	TSF_BGRA8                      = 4,
	TSF_BGRE8                      = 5,
	TSF_RGBA16                     = 6,
	TSF_RGBA16F                    = 7,
	TSF_RGBA8                      = 8,
	TSF_RGBE8                      = 9,
	TSF_MAX                        = 10
};


// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3
};


// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3
};


// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5
};


// Enum Engine.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3
};


// Enum Engine.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4
};


// Enum Engine.TextureCompressionSettings
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
	TC_MAX                         = 12
};


// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
	Local                          = 0,
	World                          = 1,
	ESplineCoordinateSpace_MAX     = 2
};


// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
	Linear                         = 0,
	Curve                          = 1,
	Constant                       = 2,
	CurveClamped                   = 3,
	CurveCustomTangent             = 4,
	ESplinePointType_MAX           = 5
};


// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4
};


// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3
};


// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
	CapturedScene                  = 0,
	SpecifiedCubemap               = 1,
	EReflectionSourceType_MAX      = 2
};


// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer                 = 0,
	SLSH_CylinderLayer             = 1,
	SLSH_CubemapLayer              = 2,
	SLSH_MAX                       = 3
};


// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3
};


// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
	Directional                    = 0,
	Point                          = 1,
	EWindSourceType_MAX            = 2
};


// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	ETimelineDirection_MAX         = 2
};


// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2
};


// Enum Engine.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3
};


// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
	AllAnimations                  = 0,
	HighestWeightedAnimation       = 1,
	None                           = 2,
	ENotifyTriggerMode_MAX         = 3
};


// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_Max                        = 3
};


// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
	TLT_StandardBlend              = 0,
	TLT_Custom                     = 1,
	TLT_MAX                        = 2
};


// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
	TBM_Linear                     = 0,
	TBM_Cubic                      = 1,
	TBM_MAX                        = 2
};


// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
	MontageLength                  = 0,
	Duration                       = 1,
	EMontagePlayReturnType_MAX     = 2
};


// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
	AttributeCurve                 = 0,
	MaterialCurve                  = 1,
	MorphTargetCurve               = 2,
	MaxAnimCurveType               = 3,
	EAnimCurveType_MAX             = 4
};


// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
	Unknown                        = 0,
	NeverCook                      = 1,
	DevelopmentCook                = 2,
	AlwaysCook                     = 3,
	EPrimaryAssetCookRule_MAX      = 4
};


// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
	Disabled                       = 0,
	Dependency                     = 1,
	ExplicitlyEnabled              = 2,
	EBlueprintNativizationFlag_MAX = 3
};


// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
	Default                        = 0,
	Development                    = 1,
	FinalRelease                   = 2,
	EBlueprintCompileMode_MAX      = 3
};


// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6
};


// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6
};


// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
	RowFound                       = 0,
	RowNotFound                    = 1,
	EEvaluateCurveTableResult_MAX  = 2
};


// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
	Singular                       = 0,
	Plural                         = 1,
	EGrammaticalNumber_MAX         = 2
};


// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
	Neuter                         = 0,
	Masculine                      = 1,
	Feminine                       = 2,
	Mixed                          = 3,
	EGrammaticalGender_MAX         = 4
};


// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	DoNotTrace                     = 0,
	TraceFullPath                  = 1,
	OnlyTraceWhileAscending        = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};


// Enum Engine.EHMDWornState
enum class EHMDWornState : uint8_t
{
	Unknown                        = 0,
	Worn                           = 1,
	NotWorn                        = 2,
	EHMDWornState_MAX              = 3
};


// Enum Engine.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
	Floor                          = 0,
	Eye                            = 1,
	EHMDTrackingOrigin_MAX         = 2
};


// Enum Engine.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	Orientation                    = 0,
	Position                       = 1,
	OrientationAndPosition         = 2,
	EOrientPositionSelector_MAX    = 3
};


// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
	QuatInterp                     = 0,
	EulerInterp                    = 1,
	DualQuatInterp                 = 2,
	ELerpInterpolationMode_MAX     = 3
};


// Enum Engine.EEasingFunc
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
	EEasingFunc_MAX                = 14
};


// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7
};


// Enum Engine.FNavigationSystemRunMode
enum class EFNavigationSystemRunMode : uint8_t
{
	InvalidMode                    = 0,
	GameMode                       = 1,
	EditorMode                     = 2,
	SimulationMode                 = 3,
	PIEMode                        = 4,
	FNavigationSystemRunMode_MAX   = 5
};


// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
	BodyCollision_Enabled          = 0,
	BodyCollision_Disabled         = 1,
	BodyCollision_MAX              = 2
};


// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3
};


// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAndComplex        = 1,
	CTF_UseSimpleAsComplex         = 2,
	CTF_UseComplexAsSimple         = 3,
	CTF_MAX                        = 4
};


// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
	Average                        = 0,
	Min                            = 1,
	Multiply                       = 2,
	Max                            = 3,
	EFrictionCombineMode_MAX       = 4
};


// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	Invalid                        = 4,
	ESettingsLockedAxis_MAX        = 5
};


// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
	Full3D                         = 0,
	YZPlane                        = 1,
	XZPlane                        = 2,
	XYPlane                        = 3,
	ESettingsDOF_MAX               = 4
};


// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_MAX                        = 2
};


// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
	None                           = 0,
	OpaqueOnly                     = 1,
	OpaqueAndMasked                = 2,
	Auto                           = 3,
	EEarlyZPass_MAX                = 4
};


// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledOnDemand                = 2,
	EnabledWithStencil             = 3,
	ECustomDepthStencil_MAX        = 4
};


// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8_t
{
	One                            = 0,
	Two                            = 1,
	Four                           = 2,
	Eight                          = 3,
	EMobileMSAASampleCount_MAX     = 4
};


// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
	One                            = 0,
	Two                            = 1,
	Four                           = 2,
	Eight                          = 3,
	ECompositingSampleCount_MAX    = 4
};


// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
	NoClear                        = 0,
	HardwareClear                  = 1,
	QuadAtMaxZ                     = 2,
	EClearSceneOptions_MAX         = 3
};


// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
	ShortestSide                   = 0,
	LongestSide                    = 1,
	Horizontal                     = 2,
	Vertical                       = 3,
	Custom                         = 4,
	EUIScalingRule_MAX             = 5
};


// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
	Always                         = 0,
	NonPointer                     = 1,
	NavigationOnly                 = 2,
	Never                          = 3,
	ERenderFocusRule_MAX           = 4
};


// Enum Engine.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3
};


// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3
};


// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5
};


// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX           = 6
};


// Enum Engine.EGraphType
enum class EGraphType : uint8_t
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5
};


// Enum Engine.EBackgroundTask
enum class EBackgroundTask : uint8_t
{
	BT_ShaderCompile               = 0,
	BT_RenderGrassMap              = 1,
	BT_BuildLighting               = 2,
	BT_MAX                         = 3
};


// Enum Engine.EConsoleType
enum class EConsoleType : uint8_t
{
	CONSOLE_Any                    = 0,
	CONSOLE_Mobile                 = 1,
	CONSOLE_MAX                    = 2
};


// Enum Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	TT_None                        = 0,
	TT_Paused                      = 1,
	TT_Loading                     = 2,
	TT_Saving                      = 3,
	TT_Connecting                  = 4,
	TT_Precaching                  = 5,
	TT_WaitingToConnect            = 6,
	TT_MAX                         = 7
};


// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5
};


// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3
};


// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
	Offline                        = 0,
	Runtime                        = 1,
	EFontCacheType_MAX             = 2
};


// Enum Engine.EGraphicsAPIType
enum class EGraphicsAPIType : uint8_t
{
	DX11                           = 0,
	DX11_Enhanced                  = 1,
	DX12                           = 2,
	EGraphicsAPIType_MAX           = 3
};


// Enum Engine.EWindowMode
enum class EWindowMode : uint8_t
{
	Fullscreen                     = 0,
	WindowedFullscreen             = 1,
	Windowed                       = 2,
	EWindowMode_MAX                = 3
};


// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3
};


// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3
};


// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6
};


// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4
};


// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3
};


// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3
};


// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
	Blend                          = 0,
	UseA                           = 1,
	UseB                           = 2,
	EMaterialAttributeBlend_MAX    = 3
};


// Enum Engine.EClampMode
enum class EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3
};


// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4
};


// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_CircleOfConfusionRadius   = 3,
	TDOF_MAX                       = 4
};


// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_Texture2DArray   = 6,
	FunctionInput_StaticBool       = 7,
	FunctionInput_MaterialAttributes = 8,
	FunctionInput_MAX              = 9
};


// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6
};


// Enum Engine.EObjectPositionIncludedOffsets
enum class EObjectPositionIncludedOffsets : uint8_t
{
	OPT_Default                    = 0,
	OPT_Full                       = 1,
	OPT_MAX                        = 2
};


// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	Coordinates                    = 0,
	OffsetFraction                 = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};


// Enum Engine.ESceneTextureId
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
	PPI_MAX                        = 30
};


// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2
};


// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7
};


// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5
};


// Enum Engine.ETextureChannel
enum class ETextureChannel : uint8_t
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	ETextureChannel_MAX            = 4
};


// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4
};


// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4
};


// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2
};


// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_MAX                  = 6
};


// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_MAX            = 6
};


// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_MAX         = 6
};


// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU               = 0,
	VNF_VectorALU                  = 1,
	VNF_GradientALU                = 2,
	VNF_CurlALU                    = 3,
	VNF_VoronoiALU                 = 4,
	VNF_MAX                        = 5
};


// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_ViewportOffset            = 6,
	MEVP_MAX                       = 7
};


// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	WPT_Full                       = 1,
	WPT_ExcludeAllShaderOffsets    = 2,
	WPT_FullNoOffsets              = 3,
	WPT_CameraRelative             = 4,
	WPT_CameraRelativeNoOffsets    = 5,
	WPT_MAX                        = 6
};


// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8
};


// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_Volumetric_DistanceFunction = 11,
	DBM_MAX                        = 12
};


// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5
};


// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5
};


// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2
};


// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_FacingCameraDistanceBlend  = 6,
	PSA_MAX                        = 7
};


// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
	Auto                           = 0,
	Complete                       = 1,
	DisableTick                    = 2,
	DisableTickAndKill             = 3,
	Num                            = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};


// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Critical                       = 3,
	Num                            = 4,
	EParticleSignificanceLevel_MAX = 5
};


// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2
};


// Enum Engine.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_SubUV                     = 8,
	EPMT_MAX                       = 9
};


// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2
};


// Enum Engine.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4
};


// Enum Engine.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5
};


// Enum Engine.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2
};


// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3
};


// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6
};


// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	Bounce                         = 0,
	Stop                           = 1,
	Kill                           = 2,
	EParticleCollisionResponse_MAX = 3
};


// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2
};


// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2
};


// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2
};


// Enum Engine.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3
};


// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2
};


// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3
};


// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10
};


// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_AutoSet                   = 1,
	EDPV_VelocityX                 = 2,
	EDPV_VelocityY                 = 3,
	EDPV_VelocityZ                 = 4,
	EDPV_VelocityMag               = 5,
	EDPV_MAX                       = 6
};


// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5
};


// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2
};


// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3
};


// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5
};


// Enum Engine.EParticleUVFlipMode
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
	EParticleUVFlipMode_MAX        = 8
};


// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3
};


// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3
};


// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3
};


// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13
};


// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5
};


// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3
};


// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3
};


// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7
};


// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2
};


// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4
};


// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2
};


// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3
};


// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3
};


// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
	Line                           = 0,
	Dash                           = 1,
	EReporterLineStyle_MAX         = 2
};


// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
	Outside                        = 0,
	Inside                         = 1,
	ELegendPosition_MAX            = 2
};


// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
	Lines                          = 0,
	Filled                         = 1,
	EGraphDataStyle_MAX            = 2
};


// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
	Lines                          = 0,
	Notches                        = 1,
	Grid                           = 2,
	EGraphAxisStyle_MAX            = 3
};


// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	EConstraintTransform_MAX       = 2
};


// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
	Orientation                    = 0,
	Translation                    = 1,
	Max                            = 2,
	EControlConstraint_MAX         = 3
};


// Enum Engine.EImpactDamageOverride
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3
};


// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
	PreventNew                     = 0,
	StopOldest                     = 1,
	StopFarthestThenPreventNew     = 2,
	StopFarthestThenOldest         = 3,
	StopLowestPriority             = 4,
	StopQuietest                   = 5,
	StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule_MAX = 7
};


// Enum Engine.ESoundGroup
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
	SOUNDGROUP_MAX                 = 25
};


// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8
};


// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	Speaker                        = 0,
	Controller                     = 1,
	ControllerFallbackToSpeaker    = 2,
	EAudioOutputTarget_MAX         = 3
};


// Enum Engine.ModulationParamMode
enum class EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3
};


// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4
};


// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2
};


// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
	None                           = 0,
	LogicalNegateBool              = 1,
	Dereference                    = 2,
	EPostCopyOperation_MAX         = 3
};


// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
	NeverAsPin                     = 0,
	PinHiddenByDefault             = 1,
	PinShownByDefault              = 2,
	AlwaysAsPin                    = 3,
	EPinHidingMode_MAX             = 4
};


// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
	Float                          = 0,
	Bool                           = 1,
	Curve                          = 2,
	EAnimAlphaInputType_MAX        = 3
};


// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
	EM_Standard                    = 0,
	EM_Freeze                      = 1,
	EM_DelayedFreeze               = 2,
	EM_MAX                         = 3
};


// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
	EDS_SourcePose                 = 0,
	EDS_DestinationPose            = 1,
	EDS_MAX                        = 2
};


// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
	CABM_Linear                    = 0,
	CABM_Cubic                     = 1,
	CABM_MAX                       = 2
};


// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EVertexPaintAxis_MAX           = 3
};


// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
	DirectionalArrow               = 0,
	Sphere                         = 1,
	Line                           = 2,
	OnScreenMessage                = 3,
	CoordinateSystem               = 4,
	EDrawDebugItemType_MAX         = 5
};


// Enum Engine.AnimPhysCollisionType
enum class EAnimPhysCollisionType : uint8_t
{
	CoM                            = 0,
	CustomSphere                   = 1,
	InnerSphere                    = 2,
	OuterSphere                    = 3,
	AnimPhysCollisionType_MAX      = 4
};


// Enum Engine.AnimPhysTwistAxis
enum class EAnimPhysTwistAxis : uint8_t
{
	AxisX                          = 0,
	AxisY                          = 1,
	AxisZ                          = 2,
	AnimPhysTwistAxis_MAX          = 3
};


// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
	Overlay                        = 0,
	VerticalBox                    = 1,
	EWindowTitleBarMode_MAX        = 2
};



// Enum TslGame.EPopupButtonID
enum class EPopupButtonID : uint8_t
{
	Cancel_Or_No                   = 0,
	Yes_Or_OK                      = 1,
	EPopupButtonID_MAX             = 2
};


// Enum TslGame.ECastCancelReason
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
	EmergencyPickupAircraft        = 36,
	CasterAttackByZombieAI         = 37,
	BodyCarry                      = 38,
	CasterStunned                  = 39,
	ECastCancelReason_MAX          = 40
};


// Enum TslGame.EWeaponAttachmentSlotID
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
	EWeaponAttachmentSlotID_MAX    = 11
};


// Enum TslGame.ESystemMessageType
enum class ESystemMessageType : uint8_t
{
	Debug                          = 0,
	Notify                         = 1,
	Warning                        = 2,
	Error                          = 3,
	Important                      = 4,
	NotifyCommand                  = 5,
	ESystemMessageType_MAX         = 6
};


// Enum TslGame.EOutGamePlatformProvider
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
	ConsoleClgn                    = 11,
	AI                             = 12,
	Max                            = 13,
	EOutGamePlatformProvider_MAX   = 14
};


// Enum TslGame.EDamageReason
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
	EDamageReason_MAX              = 8
};


// Enum TslGame.EDamageTypeCategory
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
	Damage_Instant_Fall            = 15,
	Damage_Drown                   = 16,
	Damage_BleedOut                = 17,
	Damage_Explosion_JerryCan      = 18,
	Damage_ZombieBuff              = 19,
	Damage_CPPWinExit              = 20,
	Damage_MeleeThrow              = 21,
	Damage_Explosion_C4            = 22,
	Damage_Explosion_StickyBomb    = 23,
	Damage_Explosion_Breach        = 24,
	Damage_Explosion_PanzerFaustWarhead = 25,
	Damage_Explosion_PanzerFaustWarheadVehicleArmorPenetration = 26,
	Damage_Explosion_PanzerFaustBackBlast = 27,
	Damage_Explosion_Mortar        = 28,
	Damage_Explosion_BlackZone     = 29,
	Damage_Explosion_Meteor        = 30,
	Damage_TrainHit                = 31,
	Damage_Explosion_PropaneTank   = 32,
	Damage_LootTruckHit            = 33,
	Damage_Explosion_LootTruck     = 34,
	Damage_ShipHit                 = 35,
	Damage_Lava                    = 36,
	Damage_KillTruckHit            = 37,
	Damage_KillTruckTurret         = 38,
	Damage_HelicopterHit           = 39,
	Damage_Explosion_Aircraft      = 40,
	Damage_BlueZoneGrenade         = 41,
	Damage_FBRMolotov              = 42,
	Damage_DronePackage            = 43,
	Damage_Chicken                 = 44,
	Damage_Ability                 = 45,
	Damage_Ability_ChickAttack     = 46,
	Damage_Ability_ChickAttack_Wave = 47,
	Damage_Ability_Jump_Wave       = 48,
	Damage_Ability_FireBreath      = 49,
	Damage_Ability_FeathZone       = 50,
	Damage_MAX                     = 51
};


// Enum TslGame.EMatchResultFlowType
enum class EMatchResultFlowType : uint8_t
{
	CelebrationResult              = 0,
	EndResult                      = 1,
	EMatchResultFlowType_MAX       = 2
};


// Enum TslGame.ESkydiveState
enum class ESkydiveState : uint8_t
{
	Skydive_None                   = 0,
	Skydive_Freefall               = 1,
	Skydive_ParachuteDeploying     = 2,
	Skydive_ParachuteDeployed      = 3,
	Skydive_ParachuteCollapsing    = 4,
	Skydive_MAX                    = 5
};


// Enum TslGame.EMarkerType
enum class EMarkerType : uint8_t
{
	Normal                         = 0,
	Attack                         = 1,
	Danger                         = 2,
	Defend                         = 3,
	Loot                           = 4,
	Regroup                        = 5,
	Vehicle                        = 6,
	EMarkerType_MAX                = 7
};


// Enum TslGame.EPlatoonSupportRequestEventType
enum class EPlatoonSupportRequestEventType : uint8_t
{
	Start                          = 0,
	Interactible                   = 1,
	Finish                         = 2,
	EPlatoonSupportRequestEventType_MAX = 3
};


// Enum TslGame.EPlatoonCarePackageType
enum class EPlatoonCarePackageType : uint8_t
{
	NotDesignated                  = 0,
	WeaponPackage                  = 1,
	HealingPackage                 = 2,
	EPlatoonCarePackageType_MAX    = 3
};


// Enum TslGame.EEquipSlotID
enum class EEquipSlotID : uint8_t
{
	Head                           = 0,
	Hat                            = 1,
	Eyes                           = 2,
	Mask                           = 3,
	Torso                          = 4,
	TorsoArmor                     = 5,
	Outer                          = 6,
	Backpack                       = 7,
	Hands                          = 8,
	Legs                           = 9,
	Feet                           = 10,
	Belt                           = 11,
	WeaponPrimary                  = 12,
	WeaponSecondary                = 13,
	WeaponMelee                    = 14,
	WeaponThrowable                = 15,
	MaxOrNone                      = 16,
	EEquipSlotID_MAX               = 17
};


// Enum TslGame.EBreathType
enum class EBreathType : uint8_t
{
	Apnea                          = 0,
	ADS                            = 1,
	EBreathType_MAX                = 2
};


// Enum TslGame.ERequestPartyState
enum class ERequestPartyState : uint8_t
{
	Wait                           = 0,
	Accept                         = 1,
	Decline                        = 2,
	ERequestPartyState_MAX         = 3
};


// Enum TslGame.EBlueBlockerState
enum class EBlueBlockerState : uint8_t
{
	Show                           = 0,
	Looping                        = 1,
	Hide                           = 2,
	Hidden                         = 3,
	EBlueBlockerState_MAX          = 4
};


// Enum TslGame.ETargetingType
enum class ETargetingType : uint8_t
{
	Targeting_None                 = 0,
	Targeting_Aiming               = 1,
	Targeting_Scoping              = 2,
	Targeting_MAX                  = 3
};


// Enum TslGame.ETirePunctureReason
enum class ETirePunctureReason : uint8_t
{
	Shot                           = 0,
	Environment                    = 1,
	Explosion                      = 2,
	PanzerFaustExplosion           = 3,
	Other                          = 4,
	ETirePunctureReason_MAX        = 5
};


// Enum TslGame.ERadioMessageEmPickupStage
enum class ERadioMessageEmPickupStage : uint8_t
{
	Deployed                       = 0,
	PlaneEnroute                   = 1,
	ArrivalIn30s                   = 2,
	ArrivalIn10s                   = 3,
	ArrivalIn5s                    = 4,
	CollisionWarning               = 5,
	PlaneNotAvailable              = 6,
	ERadioMessageEmPickupStage_MAX = 7
};


// Enum TslGame.ETslOvercastAction
enum class ETslOvercastAction : uint8_t
{
	Initialized                    = 0,
	Prolonged                      = 1,
	CreateThunder                  = 2,
	ETslOvercastAction_MAX         = 3
};


// Enum TslGame.EBeginningState
enum class EBeginningState : uint8_t
{
	Invalid                        = 0,
	Normal                         = 1,
	StartIsland                    = 2,
	Airplane                       = 3,
	Skydiving                      = 4,
	Parachuting                    = 5,
	EBeginningState_MAX            = 6
};


// Enum TslGame.EServerStatType
enum class EServerStatType : uint8_t
{
	UE                             = 0,
	NET                            = 1,
	FRAMEPRO                       = 2,
	EServerStatType_MAX            = 3
};


// Enum TslGame.EPartnerLevel
enum class EPartnerLevel : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Lead                           = 2,
	EPartnerLevel_MAX              = 3
};


// Enum TslGame.EQualityType
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
	EQualityType_MAX               = 8
};


// Enum TslGame.EReadyToPlayState
enum class EReadyToPlayState : uint8_t
{
	AllFinished                    = 0,
	OnPreLoadMap                   = 1,
	OnPostLoadMap                  = 2,
	CheckMapLoadFinished           = 3,
	NotMapFullyLoaded              = 4,
	CheckPreloadingMap             = 5,
	EReadyToPlayState_MAX          = 6
};


// Enum TslGame.EDistanceBasedEvent
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
	EDistanceBasedEvent_MAX        = 12
};


// Enum TslGame.EAIStateType
enum class EAIStateType : uint8_t
{
	AI_None                        = 0,
	AI_Idle                        = 1,
	AI_Patrol                      = 2,
	AI_Alert                       = 3,
	AI_Fight                       = 4,
	AI_Death                       = 5,
	AI_MAX                         = 6
};


// Enum TslGame.EArenaState
enum class EArenaState : uint8_t
{
	Idle                           = 0,
	Active                         = 1,
	Finished                       = 2,
	EArenaState_MAX                = 3
};


// Enum TslGame.ERankType
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
	ERankType_MAX                  = 11
};


// Enum TslGame.EThrownWeaponType
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
	Thrown_Toolbox                 = 12,
	Thrown_CanBomb                 = 13,
	Thrown_Other                   = 14,
	Thrown_MAX                     = 15
};


// Enum TslGame.EPickupAnimType
enum class EPickupAnimType : uint8_t
{
	None                           = 0,
	EPickupAnimType_MAX            = 1
};


// Enum TslGame.EHitDirection
enum class EHitDirection : uint8_t
{
	Hit_Front                      = 0,
	Hit_Back                       = 1,
	Hit_Left                       = 2,
	Hit_Right                      = 3,
	Hit_MAX                        = 4
};


// Enum TslGame.EPowerUpType
enum class EPowerUpType : uint8_t
{
	PowerUp_None                   = 0,
	Powerup_Bandage                = 1,
	PowerUp_FirstAid               = 2,
	Powerup_Medkit                 = 3,
	PowerUp_EnergyDrink            = 4,
	Powerup_Painkillers            = 5,
	PowerUp_Adrenaline             = 6,
	PowerUp_MAX                    = 7,
	EPowerUpType_MAX               = 8
};


// Enum TslGame.ECastAnim
enum class ECastAnim : uint8_t
{
	None                           = 0,
	Bandage                        = 1,
	FirstAid                       = 2,
	Medkit                         = 3,
	EnergyDrink                    = 4,
	Painkiller                     = 5,
	Adrenaline                     = 6,
	Door                           = 7,
	Battery                        = 8,
	Crafting                       = 9,
	SuperDrink                     = 10,
	Key                            = 11,
	EmergencyPickup                = 12,
	SelfRevive                     = 13,
	MortarInstall                  = 14,
	BicycleDeploy                  = 15,
	Custom                         = 16,
	ECastAnim_MAX                  = 17
};


// Enum TslGame.ECharacterNegativeEffects
enum class ECharacterNegativeEffects : uint8_t
{
	Blind                          = 0,
	Burning                        = 1,
	Stun                           = 2,
	Total                          = 3,
	ECharacterNegativeEffects_MAX  = 4
};


// Enum TslGame.ETslAIPlayerType
enum class ETslAIPlayerType : uint8_t
{
	HumanPlayer                    = 0,
	AITypeNone                     = 1,
	CommonAI                       = 2,
	PillarAI                       = 3,
	DummyAI                        = 4,
	ZombieAI                       = 5,
	MonsterAI                      = 6,
	ETslAIPlayerType_MAX           = 7
};


// Enum TslGame.ESubjectToReport
enum class ESubjectToReport : uint8_t
{
	None                           = 0,
	Killer                         = 1,
	Spectating_Player              = 2,
	Replay_Player                  = 3,
	Team_Member                    = 4,
	OtherTeam_Members              = 5,
	ESubjectToReport_MAX           = 6
};


// Enum TslGame.EWelcomeState
enum class EWelcomeState : uint8_t
{
	CopyrightAndWarning            = 0,
	PressAKey                      = 1,
	NowLoading                     = 2,
	EWelcomeState_MAX              = 3
};


// Enum TslGame.EAuxilaryIconType
enum class EAuxilaryIconType : uint8_t
{
	Invalid                        = 0,
	Drone                          = 1,
	Drone_Destroyed                = 2,
	EAuxilaryIconType_MAX          = 3
};


// Enum TslGame.EScopeType
enum class EScopeType : uint8_t
{
	Main                           = 0,
	Right                          = 1,
	Total                          = 2,
	None                           = 3,
	EScopeType_MAX                 = 4
};


// Enum TslGame.EInteractionMessageType
enum class EInteractionMessageType : uint8_t
{
	IMT_Reload                     = 0,
	IMT_Carry_Drop                 = 1,
	IMT_Carry_Pickup               = 2,
	IMT_Revive                     = 3,
	IMT_Total                      = 4,
	IMT_NONE                       = 5,
	IMT_MAX                        = 6
};


// Enum TslGame.ECharacterActionEventType
enum class ECharacterActionEventType : uint8_t
{
	None                           = 0,
	WeaponChange                   = 1,
	ItemUseCast                    = 2,
	TakeDamage                     = 3,
	PostDealDamage                 = 4,
	TryToUnarmedAttack             = 5,
	TryToMeleeAttack               = 6,
	ECharacterActionEventType_MAX  = 7
};


// Enum TslGame.EBodyCarryRequest
enum class EBodyCarryRequest : uint8_t
{
	BCR_NONE                       = 0,
	BCR_Pickup                     = 1,
	BCR_PickUp_Carrier             = 2,
	BCR_PickUp_Carried             = 3,
	BCR_Drop                       = 4,
	BCR_Drop_Carrier               = 5,
	BCR_Drop_Carried               = 6,
	BCR_MAX_VALUE                  = 7,
	BCR_MAX                        = 8
};


// Enum TslGame.EKickProcess
enum class EKickProcess : uint8_t
{
	Disconnect                     = 0,
	Shutdown                       = 1,
	ShutdownIn10Sec                = 2,
	EKickProcess_MAX               = 3
};


// Enum TslGame.EDirectMessageType
enum class EDirectMessageType : uint8_t
{
	Radio                          = 0,
	Direct                         = 1,
	DirectReply                    = 2,
	FriendLogin                    = 3,
	Warning                        = 4,
	System                         = 5,
	EDirectMessageType_MAX         = 6
};


// Enum TslGame.EFutsalGamePhase
enum class EFutsalGamePhase : uint8_t
{
	Waiting                        = 0,
	FirstHalf                      = 1,
	SecondHalf                     = 2,
	AddedTime                      = 3,
	End                            = 4,
	EFutsalGamePhase_MAX           = 5
};


// Enum TslGame.EUnarmedAnimType
enum class EUnarmedAnimType : uint8_t
{
	Default                        = 0,
	Spray                          = 1,
	EUnarmedAnimType_MAX           = 2
};


// Enum TslGame.EInventorySlotStatePad
enum class EInventorySlotStatePad : uint8_t
{
	Normal                         = 0,
	Focus                          = 1,
	Link                           = 2,
	Selfput                        = 3,
	Disabled                       = 4,
	EInventorySlotStatePad_MAX     = 5
};


// Enum TslGame.EDualMatchingState
enum class EDualMatchingState : uint8_t
{
	NotMatchingState               = 0,
	Matching                       = 1,
	GamePrepared                   = 2,
	EDualMatchingState_MAX         = 3
};


// Enum TslGame.ELastTeamIconState
enum class ELastTeamIconState : uint8_t
{
	Normal                         = 0,
	Groggy                         = 1,
	Die                            = 2,
	ELastTeamIconState_MAX         = 3
};


// Enum TslGame.ESeatState
enum class ESeatState : uint8_t
{
	Empty                          = 0,
	Player                         = 1,
	Teammate                       = 2,
	Enemy                          = 3,
	ESeatState_MAX                 = 4
};


// Enum TslGame.ETslInputDeviceTypeBranch_BPOnly
enum class ETslInputDeviceTypeBranch_BPOnly : uint8_t
{
	KeyboardMouse                  = 0,
	XboxGamepad                    = 1,
	PS4Gamepad                     = 2,
	SwitchGamepad                  = 3,
	QuailGamepad                   = 4,
	ETslInputDeviceTypeBranch_MAX  = 5
};


// Enum TslGame.ETslInputDeviceGroupBranch_BPOnly
enum class ETslInputDeviceGroupBranch_BPOnly : uint8_t
{
	KeyboardMouse                  = 0,
	Gamepad                        = 1,
	ETslInputDeviceGroupBranch_MAX = 2
};


// Enum TslGame.ETslPlatformTypeBranch_BPOnly
enum class ETslPlatformTypeBranch_BPOnly : uint8_t
{
	PC                             = 0,
	Xbox                           = 1,
	PS4                            = 2,
	Quail                          = 3,
	Invalid                        = 4,
	ETslPlatformTypeBranch_MAX     = 5
};


// Enum TslGame.ETslPlatformGroupBranch_BPOnly
enum class ETslPlatformGroupBranch_BPOnly : uint8_t
{
	PC                             = 0,
	Console                        = 1,
	ETslPlatformGroupBranch_MAX    = 2
};


// Enum TslGame.EBuffPropertyType
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
	EBuffPropertyType_MAX          = 16
};


// Enum TslGame.EAutoSpectatePriority
enum class EAutoSpectatePriority : uint8_t
{
	None                           = 0,
	Vehicle                        = 1,
	Distance                       = 2,
	Combat                         = 3,
	EAutoSpectatePriority_MAX      = 4
};


// Enum TslGame.EFBRClass
enum class EFBRClass : uint8_t
{
	WARRIOR                        = 0,
	RANGER                         = 1,
	WIZARD                         = 2,
	PALADIN                        = 3,
	EFBRClass_MAX                  = 4
};


// Enum TslGame.ELeagueMatchStatistic
enum class ELeagueMatchStatistic : uint8_t
{
	Kill                           = 0,
	Damage                         = 1,
	Assist                         = 2,
	ELeagueMatchStatistic_MAX      = 3
};


// Enum TslGame.ELeagueMatchResultState
enum class ELeagueMatchResultState : uint8_t
{
	None                           = 0,
	WinnerWinnerChickenDinner      = 1,
	Statistic                      = 2,
	Ranking                        = 3,
	ELeagueMatchResultState_MAX    = 4
};


// Enum TslGame.EObserverHudAnimType
enum class EObserverHudAnimType : uint8_t
{
	TeamWipeOutAnim                = 0,
	PersonalKillingSpreeAnim       = 1,
	TeamTotalKillingSpreeAnim      = 2,
	EObserverHudAnimType_MAX       = 3
};


// Enum TslGame.EPreviewPlatformIconType
enum class EPreviewPlatformIconType : uint8_t
{
	XboxOne                        = 0,
	PS4                            = 1,
	Switch                         = 2,
	Quail                          = 3,
	None                           = 4,
	EPreviewPlatformIconType_MAX   = 5
};


// Enum TslGame.EMovementBaseType
enum class EMovementBaseType : uint8_t
{
	None                           = 0,
	Train                          = 1,
	Ship                           = 2,
	COUNT                          = 3,
	EMovementBaseType_MAX          = 4
};


// Enum TslGame.EGuardRank
enum class EGuardRank : uint8_t
{
	Grunt                          = 0,
	Boss                           = 1,
	EGuardRank_MAX                 = 2
};


// Enum TslGame.EBlueZoneShape
enum class EBlueZoneShape : uint8_t
{
	None                           = 0,
	Circle                         = 1,
	Rectangle                      = 2,
	EBlueZoneShape_MAX             = 3
};


// Enum TslGame.EGameZoneType
enum class EGameZoneType : uint8_t
{
	SafeZone                       = 0,
	PlayZone                       = 1,
	BlueZone                       = 2,
	RedZone                        = 3,
	BlackZone                      = 4,
	EGameZoneType_MAX              = 5
};


// Enum TslGame.ERespawnType
enum class ERespawnType : uint8_t
{
	Airborne                       = 0,
	DeadPoint                      = 1,
	StartPoint                     = 2,
	Selectable                     = 3,
	RandomPoint                    = 4,
	CheckPoint                     = 5,
	ERespawnType_MAX               = 6
};


// Enum TslGame.EPlatoonTeam
enum class EPlatoonTeam : uint8_t
{
	None                           = 0,
	Blue                           = 1,
	Red                            = 2,
	EPlatoonTeam_MAX               = 3
};


// Enum TslGame.EAutoRecoveryType
enum class EAutoRecoveryType : uint8_t
{
	None                           = 0,
	Human                          = 1,
	Zombie                         = 2,
	HumanAndZombie                 = 3,
	EAutoRecoveryType_MAX          = 4
};


// Enum TslGame.EZombieVirusType
enum class EZombieVirusType : uint8_t
{
	None                           = 0,
	Attacked                       = 1,
	All                            = 2,
	EZombieVirusType_MAX           = 3
};


// Enum TslGame.EPrivateTrainingRoomType
enum class EPrivateTrainingRoomType : uint8_t
{
	IndoorRange                    = 0,
	PracticalTrainingRoom          = 1,
	EPrivateTrainingRoomType_MAX   = 2
};


// Enum TslGame.ETeamMateEmoteErrorType
enum class ETeamMateEmoteErrorType : uint8_t
{
	Normal                         = 0,
	ExcessFollower                 = 1,
	ExcessLimitDistance            = 2,
	ETeamMateEmoteErrorType_MAX    = 3
};


// Enum TslGame.ERadioMessageInteractionType
enum class ERadioMessageInteractionType : uint8_t
{
	DroppedItem                    = 0,
	Vehicle                        = 1,
	CarepackageOrDeadbox           = 2,
	VendingMachine                 = 3,
	None                           = 4,
	ERadioMessageInteractionType_MAX = 5
};


// Enum TslGame.ERadioMessageCategory
enum class ERadioMessageCategory : uint8_t
{
	Affirmative                    = 0,
	ThankYou                       = 1,
	NeedMed                        = 2,
	Negative                       = 3,
	Sorry                          = 4,
	NeedAmmo                       = 5,
	EnemySpotted                   = 6,
	ItemSpotted                    = 7,
	Ping                           = 8,
	HelpMe                         = 9,
	WayPoint                       = 10,
	EmergencyPickup                = 11,
	TeamMateEmote                  = 12,
	Max                            = 13,
	ERadioMessageCategory_MAX      = 14
};


// Enum TslGame.EEquippedWeaponRTPC
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
	EEquippedWeaponRTPC_MAX        = 9
};


// Enum TslGame.EForceRefreshDummy
enum class EForceRefreshDummy : uint8_t
{
	Refresh1                       = 0,
	Refresh2                       = 1,
	EForceRefreshDummy_MAX         = 2
};


// Enum TslGame.EViewModeActorCenterPosition
enum class EViewModeActorCenterPosition : uint8_t
{
	None                           = 0,
	Center                         = 1,
	Bottom                         = 2,
	EViewModeActorCenterPosition_MAX = 3
};


// Enum TslGame.EViewModeCategory
enum class EViewModeCategory : uint8_t
{
	None                           = 0,
	Weapon                         = 1,
	Parachute                      = 2,
	Character                      = 3,
	Vehicle                        = 4,
	FloatingVehicle                = 5,
	LootCrate                      = 6,
	EViewModeCategory_MAX          = 7
};


// Enum TslGame.ESystemMenuButtonType
enum class ESystemMenuButtonType : uint8_t
{
	RESUME                         = 0,
	SETTINGS                       = 1,
	TEAM_MANAGEMENT                = 2,
	KEY_GUIDE                      = 3,
	RESTART_LOBBY                  = 4,
	LEAVE_MATCH                    = 5,
	EXIT_TO_DESKTOP                = 6,
	GM_COMMAND_INGAME_HELPER       = 7,
	MATCH_LOG                      = 8,
	ESystemMenuButtonType_MAX      = 9
};


// Enum TslGame.ERankGuideType
enum class ERankGuideType : uint8_t
{
	ForElementaryRank              = 0,
	ForExpertRank                  = 1,
	ERankGuideType_MAX             = 2
};


// Enum TslGame.EUserRank
enum class EUserRank : uint8_t
{
	ElementaryRank                 = 0,
	IntermediateRank               = 1,
	HighRank                       = 2,
	ExpertRank                     = 3,
	EUserRank_MAX                  = 4
};


// Enum TslGame.EProjectileParticleClass
enum class EProjectileParticleClass : uint8_t
{
	PPC_None                       = 0,
	PPC_Frag                       = 1,
	PPC_Flash                      = 2,
	PPC_Smoke                      = 3,
	PPC_Molotov                    = 4,
	PPC_Other                      = 5,
	PPC_MAX                        = 6
};


// Enum TslGame.EReticleType
enum class EReticleType : uint8_t
{
	RedDot                         = 0,
	HoloSight                      = 1,
	Scope2x                        = 2,
	Scope3x                        = 3,
	Scope4x                        = 4,
	Scope6x                        = 5,
	Scope8x                        = 6,
	EReticleType_MAX               = 7
};


// Enum TslGame.EKeyHintType
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
	ArenaModeHelpBox               = 28,
	Other                          = 29,
	EKeyHintType_MAX               = 30
};


// Enum TslGame.EInteractionPlatformType
enum class EInteractionPlatformType : uint8_t
{
	PC_FKey                        = 0,
	Console_X                      = 1,
	Console_B                      = 2,
	Console_XHold                  = 3,
	Console_BHold                  = 4,
	Console_XDoubleTap             = 5,
	Console_BDoubleTap             = 6,
	EInteractionPlatformType_MAX   = 7
};


// Enum TslGame.EWeatherChange
enum class EWeatherChange : uint8_t
{
	NoChange                       = 0,
	Rainy                          = 1,
	Foggy                          = 2,
	EWeatherChange_MAX             = 3
};


// Enum TslGame.EMinimapCaptureType
enum class EMinimapCaptureType : uint8_t
{
	Size_8km                       = 0,
	Size_4km                       = 1,
	Size_6km                       = 2,
	Size_2km                       = 3,
	UseLevelAttribute              = 4,
	EMinimapCaptureType_MAX        = 5
};


// Enum TslGame.EMinimapColorType
enum class EMinimapColorType : uint8_t
{
	DESATURATED                    = 0,
	SATURATED                      = 1,
	EMinimapColorType_MAX          = 2
};


// Enum TslGame.EDamageZoneType
enum class EDamageZoneType : uint8_t
{
	Head                           = 0,
	Torso                          = 1,
	Arm                            = 2,
	Pelvis                         = 3,
	Leg                            = 4,
	EDamageZoneType_MAX            = 5
};


// Enum TslGame.ETslWidgetCreationMethod
enum class ETslWidgetCreationMethod : uint8_t
{
	CreateOnInit                   = 0,
	OnDemand                       = 1,
	OnDemandOnOnlyPC               = 2,
	OnDemandOnOnlyConsole          = 3,
	ETslWidgetCreationMethod_MAX   = 4
};


// Enum TslGame.ERedZoneGenerateType
enum class ERedZoneGenerateType : uint8_t
{
	None                           = 0,
	Uniform_Distribution           = 1,
	Ringtaw                        = 2,
	Outsider                       = 3,
	RingtawOrOutsider              = 4,
	ERedZoneGenerateType_MAX       = 5
};


// Enum TslGame.ETslHudType
enum class ETslHudType : uint8_t
{
	None                           = 0,
	CharacterHud                   = 1,
	SpectatorHud                   = 2,
	ObserverHud                    = 3,
	ReplayHud                      = 4,
	LeagueReplayHud                = 5,
	ETslHudType_MAX                = 6
};


// Enum TslGame.ETargetAnimDynamicsType
enum class ETargetAnimDynamicsType : uint8_t
{
	None                           = 0,
	Hair                           = 1,
	Coat                           = 2,
	ETargetAnimDynamicsType_MAX    = 3
};


// Enum TslGame.EAnimatableCustomizableTypes
enum class EAnimatableCustomizableTypes : uint8_t
{
	Hair                           = 0,
	Outer                          = 1,
	Legs                           = 2,
	Torso                          = 3,
	Head                           = 4,
	Mask                           = 5,
	Backpack                       = 6,
	Eyes                           = 7,
	TorsoArmor                     = 8,
	Hands                          = 9,
	Feet                           = 10,
	Belt                           = 11,
	Face                           = 12,
	EAnimatableCustomizableTypes_MAX = 13
};


// Enum TslGame.EGameEndState
enum class EGameEndState : uint8_t
{
	None                           = 0,
	CereMony                       = 1,
	Cinematic                      = 2,
	MatchFinish                    = 3,
	EGameEndState_MAX              = 4
};


// Enum TslGame.ELobbyBlurChangingStates
enum class ELobbyBlurChangingStates : uint8_t
{
	AlwaysOff                      = 0,
	AlwaysOn                       = 1,
	ELobbyBlurChangingStates_MAX   = 2
};


// Enum TslGame.ELobbyCameraStates
enum class ELobbyCameraStates : uint8_t
{
	XBox_Home                      = 0,
	Main                           = 1,
	Main01                         = 2,
	Menu                           = 3,
	Custom                         = 4,
	Custom01                       = 5,
	EventPass_Milestone            = 6,
	EventPass_Milestone01          = 7,
	EventPass_Missions             = 8,
	ViewMode_Character             = 9,
	ViewMode_Weapon                = 10,
	ViewMode_Parachute             = 11,
	EventPass_Milestone_0_Particle = 12,
	None                           = 13,
	ELobbyCameraStates_MAX         = 14
};


// Enum TslGame.EUiShowType
enum class EUiShowType : uint8_t
{
	AlwaysShow                     = 0,
	TpsOnlyShow                    = 1,
	FpsOnlyShow                    = 2,
	AlwaysHide                     = 3,
	EUiShowType_MAX                = 4
};


// Enum TslGame.EMatchLogTab
enum class EMatchLogTab : uint8_t
{
	All                            = 0,
	Squad                          = 1,
	You                            = 2,
	EMatchLogTab_MAX               = 3
};


// Enum TslGame.EMatchLogRelative
enum class EMatchLogRelative : uint8_t
{
	None                           = 0,
	You                            = 1,
	Squad                          = 2,
	Other                          = 3,
	EMatchLogRelative_MAX          = 4
};


// Enum TslGame.EMatchLogType
enum class EMatchLogType : uint8_t
{
	None                           = 0,
	KillMessage                    = 1,
	SystemMessage                  = 2,
	EMatchLogType_MAX              = 3
};


// Enum TslGame.ETslXpRewardLogicType
enum class ETslXpRewardLogicType : uint8_t
{
	None                           = 0,
	Public                         = 1,
	ETslXpRewardLogicType_MAX      = 2
};


// Enum TslGame.ETslBpRewardLogicType
enum class ETslBpRewardLogicType : uint8_t
{
	None                           = 0,
	Public                         = 1,
	ScoreBased                     = 2,
	ETslBpRewardLogicType_MAX      = 3
};


// Enum TslGame.EGamepadInputResponseForTapIconWidget
enum class EGamepadInputResponseForTapIconWidget : uint8_t
{
	None                           = 0,
	Hold                           = 1,
	DoubleTap                      = 2,
	EGamepadInputResponseForTapIconWidget_MAX = 3
};


// Enum TslGame.EActionType
enum class EActionType : uint8_t
{
	Action                         = 0,
	Axis                           = 1,
	Action_Combo                   = 2,
	EActionType_MAX                = 3
};


// Enum TslGame.EEmergencyPickupState
enum class EEmergencyPickupState : uint8_t
{
	None                           = 0,
	Prepare                        = 1,
	Aircraft                       = 2,
	EEmergencyPickupState_MAX      = 3
};


// Enum TslGame.EParachuteCutoffState
enum class EParachuteCutoffState : uint8_t
{
	Cutoff_None                    = 0,
	Cutoff_Manual                  = 1,
	Cutoff_Automatic               = 2,
	Cutoff_Ready                   = 3,
	Cutoff_MAX                     = 4
};


// Enum TslGame.EGamepadInputResponseTypes
enum class EGamepadInputResponseTypes : uint8_t
{
	Pressed                        = 0,
	Released                       = 1,
	Tap                            = 2,
	Hold                           = 3,
	DoubleTap                      = 4,
	EGamepadInputResponseTypes_MAX = 5
};


// Enum TslGame.ERadioMessagePresets
enum class ERadioMessagePresets : uint8_t
{
	Preset1                        = 0,
	Preset2                        = 1,
	ERadioMessagePresets_MAX       = 2
};


// Enum TslGame.EGamepadPresets
enum class EGamepadPresets : uint8_t
{
	ControllerTypeA                = 0,
	ControllerTypeB                = 1,
	ControllerTypeC                = 2,
	CustomType                     = 3,
	Max                            = 4,
	EGamepadPresets_MAX            = 5
};


// Enum TslGame.EKeyGuideShowCases
enum class EKeyGuideShowCases : uint8_t
{
	Reload                         = 0,
	ExitVehicle                    = 1,
	EKeyGuideShowCases_MAX         = 2
};


// Enum TslGame.ETslInputModes
enum class ETslInputModes : uint8_t
{
	Toggle                         = 0,
	Hold                           = 1,
	DoubleTap                      = 2,
	ETslInputModes_MAX             = 3
};


// Enum TslGame.EGameplayClientReplay
enum class EGameplayClientReplay : uint8_t
{
	Replay                         = 0,
	Killcam                        = 1,
	KeyGuide                       = 2,
	EGameplayClientReplay_MAX      = 3
};


// Enum TslGame.EGameplayFunctionalities
enum class EGameplayFunctionalities : uint8_t
{
	FreeLookInterp                 = 0,
	EGameplayFunctionalities_MAX   = 1
};


// Enum TslGame.EInputModeSettingActions
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
	EInputModeSettingActions_MAX   = 11
};


// Enum TslGame.EKeyBindingSlot
enum class EKeyBindingSlot : uint8_t
{
	FirstKey                       = 0,
	SecondKey                      = 1,
	EKeyBindingSlot_MAX            = 2
};


// Enum TslGame.EReportDetailCauseType
enum class EReportDetailCauseType : uint8_t
{
	AutoAim                        = 0,
	NoRecoil                       = 1,
	EspOrPenetration               = 2,
	Speedhack                      = 3,
	EReportDetailCauseType_MAX     = 4
};


// Enum TslGame.EReportedSessionType
enum class EReportedSessionType : uint8_t
{
	PublicOrCustomGame             = 0,
	Killcam                        = 1,
	Replay                         = 2,
	EReportedSessionType_MAX       = 3
};


// Enum TslGame.EReportCause
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
	EReportCause_MAX               = 8
};


// Enum TslGame.ItemPackageType
enum class EItemPackageType : uint8_t
{
	RootBox                        = 0,
	CarePackage                    = 1,
	DroppedPackage                 = 2,
	DroppedEventPackage            = 3,
	VehicleTrunk                   = 4,
	ItemPackageType_MAX            = 5
};


// Enum TslGame.ECarePackageIconType
enum class ECarePackageIconType : uint8_t
{
	Normal                         = 0,
	Flying                         = 1,
	Opened                         = 2,
	ECarePackageIconType_MAX       = 3
};


// Enum TslGame.EVehicleRideType
enum class EVehicleRideType : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Aircraft                       = 2,
	Mortar                         = 3,
	EVehicleRideType_MAX           = 4
};


// Enum TslGame.ECharacterIconType
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
	ECharacterIconType_MAX         = 9
};


// Enum TslGame.EReportUiType
enum class EReportUiType : uint8_t
{
	Normal                         = 0,
	Respawn                        = 1,
	EReportUiType_MAX              = 2
};


// Enum TslGame.EZombieRuleType
enum class EZombieRuleType : uint8_t
{
	None                           = 0,
	BattleRoyale                   = 1,
	Survival                       = 2,
	Elimination                    = 3,
	EZombieRuleType_MAX            = 4
};


// Enum TslGame.EZombieModePlayerState
enum class EZombieModePlayerState : uint8_t
{
	None                           = 0,
	Human                          = 1,
	ReadyToRevive                  = 2,
	Zombie                         = 3,
	EZombieModePlayerState_MAX     = 4
};


// Enum TslGame.ETeamChangeZombieMode
enum class ETeamChangeZombieMode : uint8_t
{
	None                           = 0,
	LeaveTeam                      = 1,
	JoinTeam                       = 2,
	ETeamChangeZombieMode_MAX      = 3
};


// Enum TslGame.EFollowCameraMode
enum class EFollowCameraMode : uint8_t
{
	CharacterCamera                = 0,
	VehicleCamera                  = 1,
	AircraftCamera                 = 2,
	ParachutingCamera              = 3,
	FallingWithParachuteCamera     = 4,
	EFollowCameraMode_MAX          = 5
};


// Enum TslGame.EObserverCameraMode
enum class EObserverCameraMode : uint8_t
{
	FixedCamera                    = 0,
	FreeCamera                     = 1,
	PlayerCamera                   = 2,
	FollowCamera                   = 3,
	EObserverCameraMode_MAX        = 4
};


// Enum TslGame.EObserverAuthorityType
enum class EObserverAuthorityType : uint8_t
{
	None                           = 0,
	FromBeginning                  = 1,
	AfterDeath                     = 2,
	AfterExtermination             = 3,
	EagleEye                       = 4,
	EObserverAuthorityType_MAX     = 5
};


// Enum TslGame.EGameEndType
enum class EGameEndType : uint8_t
{
	RoundEnd                       = 0,
	MatchEnd                       = 1,
	EGameEndType_MAX               = 2
};


// Enum TslGame.EGameModeType
enum class EGameModeType : uint8_t
{
	BattleRoyale                   = 0,
	War                            = 1,
	TDM                            = 2,
	Zombie                         = 3,
	ZombieDefense                  = 4,
	Conquest                       = 5,
	Training                       = 6,
	ESports                        = 7,
	Arena                          = 8,
	Challenger                     = 9,
	ZoneTag                        = 10,
	OneShot                        = 11,
	Racing                         = 12,
	Futsal                         = 13,
	AtoZTutorial                   = 14,
	ChickenRoyale                  = 15,
	None                           = 16,
	EGameModeType_MAX              = 17
};


// Enum TslGame.EValueType
enum class EValueType : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	String                         = 2,
	Bool                           = 3,
	EValueType_MAX                 = 4
};


// Enum TslGame.EPlatoonSupportRequestType
enum class EPlatoonSupportRequestType : uint8_t
{
	NoRequest                      = 0,
	FireSupportRequest             = 1,
	WeaponPackageRequest           = 2,
	HealingPackageRequest          = 3,
	EPlatoonSupportRequestType_MAX = 4
};


// Enum TslGame.ETeamVehicleType
enum class ETeamVehicleType : uint8_t
{
	Team_None                      = 0,
	Team_Vehicle                   = 1,
	Team_MAX                       = 2
};


// Enum TslGame.ENearClippingLevel
enum class ENearClippingLevel : uint8_t
{
	Default                        = 0,
	Low                            = 1,
	Middle                         = 2,
	High                           = 3,
	ENearClippingLevel_MAX         = 4
};


// Enum TslGame.EThingSpotGroupType
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
	EThingSpotGroupType_MAX        = 14
};


// Enum TslGame.EPhysMaterialType
enum class EPhysMaterialType : uint8_t
{
	Unknown                        = 0,
	Asphalt                        = 1,
	Dirt                           = 2,
	Water                          = 3,
	Wood                           = 4,
	Stone                          = 5,
	Metal                          = 6,
	EPhysMaterialType_MAX          = 7
};


// Enum TslGame.EUIAkEvent
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
	EUIAkEvent_MAX                 = 8
};


// Enum TslGame.EEquipableItemSoundType
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
	EEquipableItemSoundType_MAX    = 8
};


// Enum TslGame.EEquipableItemSoundGroup
enum class EEquipableItemSoundGroup : uint8_t
{
	Default                        = 0,
	Shoes                          = 1,
	EEquipableItemSoundGroup_MAX   = 2
};


// Enum TslGame.EColorBlindType
enum class EColorBlindType : uint8_t
{
	Normal                         = 0,
	Deuteranopia                   = 1,
	Protanopia                     = 2,
	Tritanopia                     = 3,
	EColorBlindType_MAX            = 4
};


// Enum TslGame.EFrameRateLimitType
enum class EFrameRateLimitType : uint8_t
{
	Unlimited                      = 0,
	Fixed                          = 1,
	Fixed01                        = 2,
	Customizable                   = 3,
	DisplayBased                   = 4,
	EFrameRateLimitType_MAX        = 5
};


// Enum TslGame.ETslOutGameCloudRequestErrorType
enum class ETslOutGameCloudRequestErrorType : uint8_t
{
	Unknown                        = 0,
	InternalError                  = 1,
	ServerError                    = 2,
	RequestTimedOut                = 3,
	DataCorrupted                  = 4,
	CompressionFailed              = 5,
	DecompressionFailed            = 6,
	ETslOutGameCloudRequestErrorType_MAX = 7
};


// Enum TslGame.ETslOutGameCloudRequestType
enum class ETslOutGameCloudRequestType : uint8_t
{
	Invalid                        = 0,
	SaveToCloud                    = 1,
	LoadFromCloud                  = 2,
	ETslOutGameCloudRequestType_MAX = 3
};


// Enum TslGame.ETslPhysMaterialType
enum class ETslPhysMaterialType : uint8_t
{
	Unknown                        = 0,
	Concrete                       = 1,
	Dirt                           = 2,
	Water                          = 3,
	Metal                          = 4,
	Wood                           = 5,
	Grass                          = 6,
	Glass                          = 7,
	Flesh                          = 8,
	ETslPhysMaterialType_MAX       = 9
};


// Enum TslGame.ETppAimCameraPosition
enum class ETppAimCameraPosition : uint8_t
{
	LatestAimPosition              = 0,
	LastPeekingPosition            = 1,
	ResetToRightShoulderPosition   = 2,
	ResetToLeftShoulderPosition    = 3,
	ETppAimCameraPosition_MAX      = 4
};


// Enum TslGame.EAccessorySlot
enum class EAccessorySlot : uint8_t
{
	Slot_Primary                   = 0,
	Slot_Secondary                 = 1,
	Slot_SideArm                   = 2,
	Slot_Melee                     = 3,
	Slot_Thrown                    = 4,
	Slot_Belt                      = 5,
	Slot_None                      = 6,
	Slot_MAX                       = 7
};


// Enum TslGame.EInventoryListPackageType
enum class EInventoryListPackageType : uint8_t
{
	CarePackage                    = 0,
	InventoryOrDeathDropPackage    = 1,
	TrunkPackage                   = 2,
	ItemPackage                    = 3,
	Ground                         = 4,
	TacPack                        = 5,
	Max                            = 6,
	EInventoryListPackageType_MAX  = 7
};


// Enum TslGame.EInventorySlotType
enum class EInventorySlotType : uint8_t
{
	Vicinity                       = 0,
	Inventory                      = 1,
	Crafting                       = 2,
	Equipment                      = 3,
	Weapon                         = 4,
	Max                            = 5,
	EInventorySlotType_MAX         = 6
};


// Enum TslGame.ELobbyCharacterCameraType
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
	ELobbyCharacterCameraType_MAX  = 8
};


// Enum TslGame.EAnimWeaponSpecificClass
enum class EAnimWeaponSpecificClass : uint8_t
{
	None                           = 0,
	EAnimWeaponSpecificClass_MAX   = 1
};


// Enum TslGame.EContinuousHealItem
enum class EContinuousHealItem : uint8_t
{
	Continuous_On                  = 0,
	Bandaged_Only                  = 1,
	Continuous_Off                 = 2,
	EContinuousHealItem_MAX        = 3
};


// Enum TslGame.EWeaponClass
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
	EWeaponClass_MAX               = 16
};


// Enum TslGame.EAllowedThrowMode
enum class EAllowedThrowMode : uint8_t
{
	Any                            = 0,
	ThrowHigh                      = 1,
	ThrowLow                       = 2,
	EAllowedThrowMode_MAX          = 3
};


// Enum TslGame.ECharThrowMode
enum class ECharThrowMode : uint8_t
{
	ThrowHigh                      = 0,
	ThrowLow                       = 1,
	ECharThrowMode_MAX             = 2
};


// Enum TslGame.EAttachmentCalculateType
enum class EAttachmentCalculateType : uint8_t
{
	Addition                       = 0,
	Multiply                       = 1,
	EAttachmentCalculateType_MAX   = 2
};


// Enum TslGame.EAutoEquipAttachmentForScopeMode
enum class EAutoEquipAttachmentForScopeMode : uint8_t
{
	Off                            = 0,
	Sight_Only                     = 1,
	ALL                            = 2,
	EAutoEquipAttachmentForScopeMode_MAX = 3
};


// Enum TslGame.EItemCategory
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
	EItemCategory_MAX              = 8
};


// Enum TslGame.EFiringMode
enum class EFiringMode : uint8_t
{
	Normal                         = 0,
	Burst                          = 1,
	FullAuto                       = 2,
	FullAutoFast                   = 3,
	EFiringMode_MAX                = 4
};


// Enum TslGame.ECharacterGait
enum class ECharacterGait : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	ECharacterGait_MAX             = 3
};


// Enum TslGame.EWeaponHand
enum class EWeaponHand : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Total                          = 2,
	EWeaponHand_MAX                = 3
};


// Enum TslGame.EWeaponArmState
enum class EWeaponArmState : uint8_t
{
	None                           = 0,
	NotArmed                       = 1,
	Arming                         = 2,
	Armed                          = 3,
	UnArming                       = 4,
	EWeaponArmState_MAX            = 5
};


// Enum TslGame.EPlatoonType
enum class EPlatoonType : uint8_t
{
	PlatoonA                       = 0,
	PlatoonB                       = 1,
	EPlatoonType_MAX               = 2
};


// Enum TslGame.EAnimVehicleSeatType
enum class EAnimVehicleSeatType : uint8_t
{
	Rider                          = 0,
	Pillion                        = 1,
	VehicleDriver                  = 2,
	VehiclePassenger               = 3,
	Pilot                          = 4,
	AircraftPassenger              = 5,
	GliderPassenger                = 6,
	EAnimVehicleSeatType_MAX       = 7
};


// Enum TslGame.ETurningDirection
enum class ETurningDirection : uint8_t
{
	None                           = 0,
	Right                          = 1,
	Right01                        = 2,
	Right02                        = 3,
	Right03                        = 4,
	Left                           = 5,
	Left01                         = 6,
	Left02                         = 7,
	Left03                         = 8,
	ETurningDirection_MAX          = 9
};


// Enum TslGame.EMovementDirection
enum class EMovementDirection : uint8_t
{
	F_Direction                    = 0,
	L_Direction                    = 1,
	R_Direction                    = 2,
	B_Direction                    = 3,
	FL_Direction                   = 4,
	FR_Direction                   = 5,
	BL_Direction                   = 6,
	BR_Direction                   = 7,
	EMovementDirection_MAX         = 8
};


// Enum TslGame.EAnimStance
enum class EAnimStance : uint8_t
{
	Stand                          = 0,
	Crouch                         = 1,
	Prone                          = 2,
	Groggy                         = 3,
	EAnimStance_MAX                = 4
};


// Enum TslGame.EAnimWeaponType
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
	EAnimWeaponType_MAX            = 10
};


// Enum TslGame.EExhaustPopType
enum class EExhaustPopType : uint8_t
{
	ExPop_ThrottleDecrease         = 0,
	ExPop_RevLimiterHit            = 1,
	ExPop_MAX                      = 2
};


// Enum TslGame.ECameraViewBehaviour
enum class ECameraViewBehaviour : uint8_t
{
	FpsAndTps                      = 0,
	FpsOnly                        = 1,
	TpsOnly                        = 2,
	ECameraViewBehaviour_MAX       = 3
};


// Enum TslGame.EPlayerStartType
enum class EPlayerStartType : uint8_t
{
	OnePlace                       = 0,
	SeveralPlace                   = 1,
	EPlayerStartType_MAX           = 2
};


// Enum TslGame.EMatchStartType
enum class EMatchStartType : uint8_t
{
	Normal                         = 0,
	Airborne                       = 1,
	EMatchStartType_MAX            = 2
};


// Enum TslGame.EGender
enum class EGender : uint8_t
{
	Male                           = 0,
	Female                         = 1,
	EGender_MAX                    = 2
};


// Enum TslGame.ESpecialEquipmentType
enum class ESpecialEquipmentType : uint8_t
{
	Default                        = 0,
	BluezoneBlocker                = 1,
	EmergencyParachute             = 2,
	Toolbox                        = 3,
	TacPack                        = 4,
	TraumaBag                      = 5,
	ESpecialEquipmentType_MAX      = 6
};


// Enum TslGame.EEquipableItemLevelType
enum class EEquipableItemLevelType : uint8_t
{
	None                           = 0,
	Level1                         = 1,
	Level2                         = 2,
	Level3                         = 3,
	Level4                         = 4,
	EEquipableItemLevelType_MAX    = 5
};


// Enum TslGame.EConstraintSlotType
enum class EConstraintSlotType : uint8_t
{
	Block                          = 0,
	Hide                           = 1,
	Max                            = 2,
	EConstraintSlotType_MAX        = 3
};


// Enum TslGame.EDurabilityConsumeType
enum class EDurabilityConsumeType : uint8_t
{
	TotalDamage                    = 0,
	AbsorbDamage                   = 1,
	EDurabilityConsumeType_MAX     = 2
};


// Enum TslGame.ESlotOffsetType
enum class ESlotOffsetType : uint8_t
{
	NoOffset                       = 0,
	BagLevel1                      = 1,
	BagLevel2                      = 2,
	BagLevel3                      = 3,
	ESlotOffsetType_MAX            = 4
};


// Enum TslGame.EItemSpotGroupType
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
	EItemSpotGroupType_MAX         = 27
};


// Enum TslGame.EItemSpotType
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
	EItemSpotType_MAX              = 27
};


// Enum TslGame.EItemOverrideType
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
	EItemOverrideType_MAX          = 15
};


// Enum TslGame.ECastableItemType
enum class ECastableItemType : uint8_t
{
	None                           = 0,
	Bandage                        = 1,
	FirstAid                       = 2,
	Medkit                         = 3,
	EnergyDrink                    = 4,
	Painkiller                     = 5,
	Adrenaline                     = 6,
	GasCan                         = 7,
	Battery                        = 8,
	Key                            = 9,
	EmergencyPickup                = 10,
	SelfRevive                     = 11,
	ECastableItemType_MAX          = 12
};


// Enum TslGame.ECastLevel
enum class ECastLevel : uint8_t
{
	None                           = 0,
	NoRestriction                  = 1,
	Restriction                    = 2,
	ECastLevel_MAX                 = 3
};


// Enum TslGame.ECastPriority
enum class ECastPriority : uint8_t
{
	None                           = 0,
	Low                            = 1,
	Normal                         = 2,
	High                           = 3,
	Max                            = 4,
	ECastPriority_MAX              = 5
};


// Enum TslGame.ELobbyItemPointSellingType
enum class ELobbyItemPointSellingType : uint8_t
{
	Normal                         = 0,
	WeeklyDouble                   = 1,
	ELobbyItemPointSellingType_MAX = 2
};


// Enum TslGame.ELobbyItemPlatform
enum class ELobbyItemPlatform : uint8_t
{
	PC_Steam                       = 0,
	PC_NonSteam                    = 1,
	Xbox                           = 2,
	ELobbyItemPlatform_MAX         = 3
};


// Enum TslGame.ELobbyItemTier
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
	ELobbyItemTier_MAX             = 10
};


// Enum TslGame.ELobbyItemCategory
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
	ELobbyItemCategory_MAX         = 18
};


// Enum TslGame.EDamageVictimActorType
enum class EDamageVictimActorType : uint8_t
{
	Character                      = 0,
	Vehicle                        = 1,
	Wheel                          = 2,
	DestructibleActor              = 3,
	ExplosiveItem                  = 4,
	DummyAI                        = 5,
	EDamageVictimActorType_MAX     = 6
};


// Enum TslGame.EStatTrakState
enum class EStatTrakState : uint8_t
{
	Run                            = 0,
	Locked                         = 1,
	Error                          = 2,
	EStatTrakState_MAX             = 3
};


// Enum TslGame.ESkinApplicationType
enum class ESkinApplicationType : uint8_t
{
	Application_InOrder            = 0,
	Application_Slot               = 1,
	Application_Index              = 2,
	Application_MAX                = 3
};


// Enum TslGame.ESkinMeshType
enum class ESkinMeshType : uint8_t
{
	SkeletalMesh                   = 0,
	AsyncStaticMesh                = 1,
	StaticMesh                     = 2,
	ESkinMeshType_MAX              = 3
};


// Enum TslGame.ESkinCategory
enum class ESkinCategory : uint8_t
{
	Skin_None                      = 0,
	Skin_Equipment                 = 1,
	Skin_Parachute                 = 2,
	Skin_Weapon                    = 3,
	Skin_MeleeWeapon               = 4,
	Skin_Vehicle                   = 5,
	Skin_MAX                       = 6
};


// Enum TslGame.EBuffOverlapSolveMethod
enum class EBuffOverlapSolveMethod : uint8_t
{
	IgnoreLater                    = 0,
	Overwrite                      = 1,
	RestartTimer                   = 2,
	Stack                          = 3,
	EBuffOverlapSolveMethod_MAX    = 4
};


// Enum TslGame.EVaultRequirementType
enum class EVaultRequirementType : uint8_t
{
	VaultReqType_False             = 0,
	VaultReqType_True              = 1,
	VaultReqType_Any               = 2,
	VaultReqType_MAX               = 3
};


// Enum TslGame.EVaultAnimType
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
	EVaultAnimType_MAX             = 67
};


// Enum TslGame.EParachuteLandingSurfaceType
enum class EParachuteLandingSurfaceType : uint8_t
{
	Surface_None                   = 0,
	Surface_Vertical               = 1,
	Surface_Horizontal             = 2,
	Surface_MAX                    = 3
};


// Enum TslGame.EPreoccupiedTeamType
enum class EPreoccupiedTeamType : uint8_t
{
	NEUTRAL                        = 0,
	RED                            = 1,
	BLUE                           = 2,
	EPreoccupiedTeamType_MAX       = 3
};


// Enum TslGame.ECaptureState
enum class ECaptureState : uint8_t
{
	ENeutural                      = 0,
	EConfusion                     = 1,
	ECaptured                      = 2,
	ECaptureState_MAX              = 3
};


// Enum TslGame.ECollisionProfileType
enum class ECollisionProfileType : uint8_t
{
	Profiles                       = 0,
	DefaultChannelResponses        = 1,
	EditProfiles                   = 2,
	ProfileRedirects               = 3,
	CollisionChannelRedirects      = 4,
	ECollisionProfileType_MAX      = 5
};


// Enum TslGame.EMovingState
enum class EMovingState : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	EMovingState_MAX               = 3
};


// Enum TslGame.EPlayerInputType
enum class EPlayerInputType : uint8_t
{
	KeyboardMouse                  = 0,
	Gamepad                        = 1,
	Mixed                          = 2,
	EPlayerInputType_MAX           = 3
};


// Enum TslGame.EAntiCheatKickType
enum class EAntiCheatKickType : uint8_t
{
	Default                        = 0,
	HWID                           = 1,
	MouseMacro                     = 2,
	InGame                         = 3,
	BattleEye                      = 4,
	EAntiCheatKickType_MAX         = 5
};


// Enum TslGame.ECheatType
enum class ECheatType : uint8_t
{
	SpeedHack                      = 0,
	SpeedHack_UE                   = 1,
	IgnoreWall_Hit                 = 2,
	IgnoreWall_Sight               = 3,
	IgnoreVelocity_Hit             = 4,
	IgnoreVelocity                 = 5,
	IgnoreVelocity2                = 6,
	ItemPackage                    = 7,
	CarePackageMount               = 8,
	HitLag                         = 9,
	Aimbot                         = 10,
	InvalidImpact                  = 11,
	InvalidImpactZ                 = 12,
	InvalidImpact_Gun_C            = 13,
	InvalidOrigin_Gun              = 14,
	InvalidOrigin_Melee            = 15,
	InvalidOrigin_Punch            = 16,
	InvalidOrigin_Throwable        = 17,
	InvalidOrigin_MeleeThrow       = 18,
	InvalidSimStep_MeleeThrow      = 19,
	InvalidRange                   = 20,
	InvalidRange2                  = 21,
	InvalidSequence                = 22,
	InvalidAmmo                    = 23,
	InvalidReviving                = 24,
	InvalidCarry                   = 25,
	InvalidKick                    = 26,
	InvalidA0                      = 27,
	InvalidB0                      = 28,
	InvalidB1                      = 29,
	InvalidB101                    = 30,
	InvalidH0                      = 31,
	InvalidOrigin_Gun_C            = 32,
	InvalidD0                      = 33,
	InvalidD1                      = 34,
	InvalidS0                      = 35,
	InvalidS1                      = 36,
	InvalidH1                      = 37,
	InvalidH2                      = 38,
	InvalidH3                      = 39,
	InvalidC0                      = 40,
	InvalidC1                      = 41,
	InvalidC2                      = 42,
	InvalidC3                      = 43,
	InvalidC4                      = 44,
	InvalidC5                      = 45,
	InvalidC6                      = 46,
	InvalidC7                      = 47,
	InvalidT0                      = 48,
	InvalidT1                      = 49,
	InvalidT2                      = 50,
	InvalidAimDir                  = 51,
	InvalidPelletDir               = 52,
	InvalidAmmoSpeed               = 53,
	InvalidAmmoDir                 = 54,
	InvalidCharacterFlag           = 55,
	InvalidPropertyCrc             = 56,
	InvalidWeaponCrc               = 57,
	InvalidWeaponRecoil            = 58,
	InvalidSwayBuffer              = 59,
	InvalidCameraYaw               = 60,
	InvalidWeaponPackageCrc        = 61,
	InvalidWeaponFlag              = 62,
	InvalidHitComponent            = 63,
	InvalidCollisionProfileCrc     = 64,
	InvalidPakListCrc              = 65,
	InvalidPOV                     = 66,
	InvalidCharacterCrc            = 67,
	InvalidHitLocation             = 68,
	InvalidSight                   = 69,
	InvalidMovementCurveCrc        = 70,
	VerifyAim                      = 71,
	CHKSUM_GUN                     = 72,
	CHKSUM_PUNCH                   = 73,
	CHKSUM_MELEE                   = 74,
	CHKSUM_VEHICLE                 = 75,
	CHKSUM_A0                      = 76,
	CHKSUM_T0                      = 77,
	CHKSUM_S0                      = 78,
	CHKSUM_D0                      = 79,
	CHKSUM_V0                      = 80,
	CHKSUM_W0                      = 81,
	CHKSUM_T1                      = 82,
	CHKSUM_D1                      = 83,
	CHKSUM_CD                      = 84,
	CHKSUM_LC                      = 85,
	CHKSUM_V1                      = 86,
	CHKSUM_P0                      = 87,
	CHKSUM_BP                      = 88,
	CHKSUM_G0                      = 89,
	CHKSUM_G1                      = 90,
	CHKSUM_H2                      = 91,
	CHKSUM_H3                      = 92,
	CHKSUM_UO                      = 93,
	CHKSUM_UF                      = 94,
	VHC_RI                         = 95,
	VHC_SC                         = 96,
	VHC_MG                         = 97,
	VHC_MG_FF                      = 98,
	VHC_MG_FC                      = 99,
	VHC_MG_SW                      = 100,
	VHC_MG_OS                      = 101,
	VHC_MG_BC                      = 102,
	VHC_MG_TC                      = 103,
	VHC_MG_PL                      = 104,
	VHC_MG_HL                      = 105,
	VHC_MG_SD                      = 106,
	VHC_MGB                        = 107,
	VHC_MGB_FF                     = 108,
	VHC_MGB_FC                     = 109,
	VHC_MGB_OS                     = 110,
	VHC_MGB_BC                     = 111,
	VHC_MGB_TC                     = 112,
	VHC_MGB_PL                     = 113,
	VHC_MGB_HL                     = 114,
	VHC_MGF_OS                     = 115,
	VHC_MGF_TC                     = 116,
	VHC_MGF_BC                     = 117,
	VHC_MGF_SD                     = 118,
	VHC_KILL                       = 119,
	VHC_ED                         = 120,
	VHC_SERVERSIMUL                = 121,
	VHC_SIMULATION_ACTIVATE        = 122,
	VHC_SIMULATION_DEACTIVATE      = 123,
	VHC_TRY_BYPASS_SERVERSIMUL     = 124,
	VHC_BYPASSED_SERVERSIMUL       = 125,
	VHC_FORCE_SERVERSIMUL          = 126,
	VHC_FORCE_SERVERSIMUL_ACTIVATE = 127,
	VHC_FORCE_SERVERSIMUL_DEACTIVATE = 128,
	CK_ACTIVATE                    = 129,
	CK_DEACTIVATE                  = 130,
	AntiCheatKick_WallHack         = 131,
	AntiCheatKick_ESP              = 132,
	AntiCheatKick_SpeedHack1       = 133,
	AntiCheatKick_SpeedHack2       = 134,
	AntiCheatKick_SpeedHack3       = 135,
	AntiCheatKick_PLFC             = 136,
	AntiCheatKick_TCFC             = 137,
	AntiCheatKick_HL               = 138,
	AntiCheatKick_OS               = 139,
	AntiCheatKick_FC               = 140,
	VehicleSimulation_PLFC         = 141,
	VehicleSimulation_TCFC         = 142,
	VehicleSimulation_HL           = 143,
	VehicleSimulation_OS           = 144,
	VehicleSimulation_FC           = 145,
	CC_ACTIVATE                    = 146,
	CC_DEACTIVATE                  = 147,
	CC_FORCE_ERROR_CORRECTION      = 148,
	QS_AJ                          = 149,
	QS_STAND                       = 150,
	QS_CROUCH                      = 151,
	QS_PRONE                       = 152,
	QS_DBNO                        = 153,
	QS_CEH                         = 154,
	QS_VZ                          = 155,
	CP_RZ                          = 156,
	CP_RZD                         = 157,
	KGB_AF                         = 158,
	ESP1                           = 159,
	ESP2                           = 160,
	ESP3                           = 161,
	SimilarHit                     = 162,
	DoubleKill                     = 163,
	B0Log                          = 164,
	InputLog                       = 165,
	FireInputLog                   = 166,
	ESPLog                         = 167,
	ESPRatioLog                    = 168,
	HighLocationVehicle            = 169,
	HighLocationBoat               = 170,
	UnderLandscapeBoat             = 171,
	UnderLandscapeVehicle          = 172,
	UnderLandscapeCharacter        = 173,
	BC_BoatCorrection              = 174,
	HBR_InvalidDashDistance        = 175,
	UNC_ACTIVATE                   = 176,
	UNC_DEACTIVATE                 = 177,
	UncAddUserFail                 = 178,
	UncSetUserInfoFail             = 179,
	UncDeleteUserFail              = 180,
	UncGetCookieFail               = 181,
	UncCookieVerifyFail            = 182,
	UncCookieNotRespond            = 183,
	UncUnknown                     = 184,
	None                           = 185,
	ECheatType_MAX                 = 186
};


// Enum TslGame.EPopupStyle
enum class EPopupStyle : uint8_t
{
	Ok_Cancel                      = 0,
	Ok                             = 1,
	Yes_No                         = 2,
	Controller_KeyboardMouse       = 3,
	EPopupStyle_MAX                = 4
};


// Enum TslGame.EKillcamDisplayCode
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
	EKillcamDisplayCode_MAX        = 8
};


// Enum TslGame.EWidgetShowType
enum class EWidgetShowType : uint8_t
{
	Show                           = 0,
	Hide                           = 1,
	Toggle                         = 2,
	EWidgetShowType_MAX            = 3
};


// Enum TslGame.EMovementSpamType
enum class EMovementSpamType : uint8_t
{
	LeanRight                      = 0,
	LeanLeft                       = 1,
	Crouch                         = 2,
	EMovementSpamType_MAX          = 3
};


// Enum TslGame.EAttackType
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
	EAttackType_MAX                = 8
};


// Enum TslGame.EPlayerMoveType
enum class EPlayerMoveType : uint8_t
{
	OnFoot                         = 0,
	OnSwim                         = 1,
	OnVehicle                      = 2,
	OnParachute                    = 3,
	OnFreefall                     = 4,
	EPlayerMoveType_MAX            = 5
};


// Enum TslGame.ELandingSoundSwitchState
enum class ELandingSoundSwitchState : uint8_t
{
	None                           = 0,
	Light                          = 1,
	Heavy                          = 2,
	VeryHeavy                      = 3,
	ELandingSoundSwitchState_MAX   = 4
};


// Enum TslGame.ESandboxConsoleGuideKeyType
enum class ESandboxConsoleGuideKeyType : uint8_t
{
	None                           = 0,
	ExpandAndClose                 = 1,
	SpawnAndBack                   = 2,
	AdjustAndClose                 = 3,
	ConfirmAndBack                 = 4,
	SpawnAndClose                  = 5,
	ESandboxConsoleGuideKeyType_MAX = 6
};


// Enum TslGame.ESandboxGroypType
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
	ESandboxGroypType_MAX          = 8
};


// Enum TslGame.ESandboxQuantityType
enum class ESandboxQuantityType : uint8_t
{
	None                           = 0,
	Item                           = 1,
	Vehicle                        = 2,
	ESandboxQuantityType_MAX       = 3
};


// Enum TslGame.ESandboxSpecialButtonType
enum class ESandboxSpecialButtonType : uint8_t
{
	None                           = 0,
	EquipLv3                       = 1,
	AddAmmo                        = 2,
	ESandboxSpecialButtonType_MAX  = 3
};


// Enum TslGame.ESandboxPowerType
enum class ESandboxPowerType : uint8_t
{
	None                           = 0,
	Fly                            = 1,
	InvulnerableEffect             = 2,
	CarePackage                    = 3,
	RedZone                        = 4,
	Revive                         = 5,
	TeamRevive                     = 6,
	GiveItemToEveryone             = 7,
	ESandboxPowerType_MAX          = 8
};


// Enum TslGame.EWeaponGripLeftHand
enum class EWeaponGripLeftHand : uint8_t
{
	NormalRifle                    = 0,
	Foregrip1                      = 1,
	Foregrip2                      = 2,
	Thompson                       = 3,
	EWeaponGripLeftHand_MAX        = 4
};


// Enum TslGame.ECustomGripBlendSpaceType
enum class ECustomGripBlendSpaceType : uint8_t
{
	None                           = 0,
	Stand                          = 1,
	Crouch                         = 2,
	Prone                          = 3,
	ProneTransition                = 4,
	ProneLocomotion                = 5,
	ECustomGripBlendSpaceType_MAX  = 6
};


// Enum TslGame.EAbilityType
enum class EAbilityType : uint8_t
{
	NoTarget                       = 0,
	NeedTarget                     = 1,
	AutoTarget                     = 2,
	EAbilityType_MAX               = 3
};


// Enum TslGame.EControlType
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
	EControlType_MAX               = 20
};


// Enum TslGame.ECharFlagsNormal
enum class ECharFlagsNormal : uint8_t
{
	IsGroggying                    = 0,
	IsActiveRagdollActive          = 1,
	HasShieldEquipped              = 2,
	IsOutsideBluezone              = 3,
	IsBeingHealed                  = 4,
	ECharFlagsNormal_MAX           = 5
};


// Enum TslGame.ELandingState
enum class ELandingState : uint8_t
{
	None                           = 0,
	Falling                        = 1,
	HeavyFalling                   = 2,
	ExtremeFalling                 = 3,
	FallingRecovery                = 4,
	PostLandingRecovery            = 5,
	ELandingState_MAX              = 6
};


// Enum TslGame.ECharFlagsSkipOwner
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
	IsCoatEquipped                 = 10,
	IsThrowHigh                    = 11,
	WantsToCancelVault             = 12,
	IsScopingRemote                = 13,
	IsAimingRemote                 = 14,
	IsFirstPersonRemote            = 15,
	IsInVehicleRemote              = 16,
	IsPeekLeftRemote               = 17,
	IsPeekRightRemote              = 18,
	IsHoldingAngled                = 19,
	ECharFlagsSkipOwner_MAX        = 20
};


// Enum TslGame.EPunchDamageType
enum class EPunchDamageType : uint8_t
{
	PunchDamage_Light              = 0,
	PunchDamage_Heavy              = 1,
	PunchDamage_MAX                = 2
};


// Enum TslGame.EMovementType
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
	EMovementType_MAX              = 19
};


// Enum TslGame.ERaycastDirection
enum class ERaycastDirection : uint8_t
{
	Forward                        = 0,
	Down_45_Degrees                = 1,
	Down                           = 2,
	ERaycastDirection_MAX          = 3
};


// Enum TslGame.EPerceptionType
enum class EPerceptionType : uint8_t
{
	Sight                          = 0,
	Disapp                         = 1,
	Hearing                        = 2,
	Attack                         = 3,
	None                           = 4,
	EPerceptionType_MAX            = 5
};


// Enum TslGame.EAttachParent
enum class EAttachParent : uint8_t
{
	None                           = 0,
	Character                      = 1,
	WeaponGun                      = 2,
	EAttachParent_MAX              = 3
};


// Enum TslGame.EAIPolyType
enum class EAIPolyType : uint8_t
{
	AIPoly_None                    = 0,
	AIPoly_Attack                  = 1,
	AIPoly_Moving                  = 2,
	AIPoly_Moving_Directly         = 3,
	AIPoly_Jump                    = 4,
	AIPoly_MovingTargetPos         = 5,
	AIPoly_Max                     = 6
};


// Enum TslGame.ERoamingActionType
enum class ERoamingActionType : uint8_t
{
	RAction_MoveToCenter           = 0,
	RAction_OcclusionCrouch        = 1,
	RAction_OcclusionProne         = 2,
	RActoin_Max                    = 3,
	ERoamingActionType_MAX         = 4
};


// Enum TslGame.EAIODealDoor
enum class EAIODealDoor : uint8_t
{
	Deal_None                      = 0,
	Deal_Wait                      = 1,
	Deal_MAX                       = 2
};


// Enum TslGame.ESurviveWeaponPropSlot
enum class ESurviveWeaponPropSlot : uint8_t
{
	SWPS_MainShootWeapon1          = 0,
	SWPS_MainShootWeapon2          = 1,
	SWPS_SubShootWeapon            = 2,
	SWPS_MeleeWeapon               = 3,
	SWPS_HandProp                  = 4,
	SWPS_Max                       = 5
};


// Enum TslGame.EWeatherStatusType
enum class EWeatherStatusType : uint8_t
{
	EWeatherStatusType_None        = 0,
	EWeatherStatusType_SunnyDay    = 1,
	EWeatherStatusType_Night       = 2,
	EWeatherStatusType_Fog         = 3,
	EWeatherStatusType_Rain        = 4,
	EWeatherStatusType_Snow        = 5,
	EWeatherStatusType_Blizzard    = 6,
	EWeatherStatusType_MAX         = 7
};


// Enum TslGame.UTPickerTargetType
enum class EUTPickerTargetType : uint8_t
{
	PTT_FRIEND                     = 0,
	PTT_ENEMY                      = 1,
	PTT_ALL                        = 2,
	PTT_Self                       = 3,
	PTT_MAX                        = 4
};


// Enum TslGame.ExtraPlayerLiveState
enum class ExtraPlayerLiveState : uint8_t
{
	InDefault                      = 0,
	InPlane                        = 1,
	InParachute                    = 2,
	InVehicle                      = 3,
	InDying                        = 4,
	InDied                         = 5,
	Offline                        = 6,
	ExtraPlayerLiveState_MAX       = 7
};


// Enum TslGame.EAIMoveType
enum class EAIMoveType : uint8_t
{
	StraightMove                   = 0,
	CurveMove                      = 1,
	EAIMoveType_MAX                = 2
};


// Enum TslGame.EAIWeaponShootType
enum class EAIWeaponShootType : uint8_t
{
	SingleShot                     = 0,
	Auto                           = 1,
	EAIWeaponShootType_MAX         = 2
};


// Enum TslGame.EAINewFocusPriority
enum class EAINewFocusPriority : uint8_t
{
	Default                        = 0,
	Move                           = 1,
	Gameplay                       = 2,
	EAINewFocusPriority_MAX        = 3
};


// Enum TslGame.EAIMovePose
enum class EAIMovePose : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	CrouchSprint                   = 2,
	KeepCurrentPose                = 3,
	EAIMovePose_MAX                = 4
};


// Enum TslGame.EAIPoseState
enum class EAIPoseState : uint8_t
{
	Stand                          = 0,
	Crouch                         = 1,
	Prone                          = 2,
	Jump                           = 3,
	Reload                         = 4,
	UnArmed                        = 5,
	EAIPoseState_MAX               = 6
};


// Enum TslGame.EAITriggerAttrType
enum class EAITriggerAttrType : uint8_t
{
	None                           = 0,
	Health                         = 1,
	Energy                         = 2,
	EAITriggerAttrType_MAX         = 3
};


// Enum TslGame.EAIAttrCompareType
enum class EAIAttrCompareType : uint8_t
{
	None                           = 0,
	Great                          = 1,
	Less                           = 2,
	EAIAttrCompareType_MAX         = 3
};


// Enum TslGame.EAIEquipSpawnItemType
enum class EAIEquipSpawnItemType : uint8_t
{
	Shoot_Weap                     = 0,
	Backpack                       = 1,
	other                          = 2,
	EAIEquipSpawnItemType_MAX      = 3
};


// Enum TslGame.EHealingItemType
enum class EHealingItemType : uint8_t
{
	HealItem                       = 0,
	BoostItem                      = 1,
	EHealingItemType_MAX           = 2
};


// Enum TslGame.EComparisonTarget
enum class EComparisonTarget : uint8_t
{
	Value                          = 0,
	BBKey                          = 1,
	EComparisonTarget_MAX          = 2
};


// Enum TslGame.EAIMapName
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
	Other                          = 8,
	EAIMapName_MAX                 = 9
};


// Enum TslGame.ETeamModeType
enum class ETeamModeType : uint8_t
{
	Solo                           = 0,
	Duo                            = 1,
	Squad                          = 2,
	ETeamModeType_MAX              = 3
};


// Enum TslGame.EBattleState
enum class EBattleState : uint8_t
{
	NoBattle                       = 0,
	FirstReaction                  = 1,
	InBattle                       = 2,
	InConfrontation                = 3,
	LongTimeInBattle               = 4,
	EBattleState_MAX               = 5
};


// Enum TslGame.EAICommand
enum class EAICommand : uint8_t
{
	None                           = 0,
	Moving                         = 1,
	Battle                         = 2,
	EAICommand_MAX                 = 3
};


// Enum TslGame.EAIActionState
enum class EAIActionState : uint8_t
{
	Idle                           = 0,
	Battle                         = 1,
	BattleMoving                   = 2,
	Healing                        = 3,
	Farming                        = 4,
	Moving                         = 5,
	Swimming                       = 6,
	EAIActionState_MAX             = 7
};


// Enum TslGame.EAIAliveState
enum class EAIAliveState : uint8_t
{
	Alive                          = 0,
	Groggy                         = 1,
	Dead                           = 2,
	EAIAliveState_MAX              = 3
};


// Enum TslGame.EPickupItemStatus
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
	EPickupItemStatus_MAX          = 8
};


// Enum TslGame.EIntoCircleLevel
enum class EIntoCircleLevel : uint8_t
{
	AlreadyInWhite                 = 0,
	NearWhite                      = 1,
	MiddleWhite                    = 2,
	ReachableWhite                 = 3,
	UnreachableWhite               = 4,
	EIntoCircleLevel_MAX           = 5
};


// Enum TslGame.EValueCompareFunc
enum class EValueCompareFunc : uint8_t
{
	MoreThan                       = 0,
	MoreThanOrEqual                = 1,
	LessThan                       = 2,
	LessThanOrEqual                = 3,
	Equal                          = 4,
	NotEqual                       = 5,
	EValueCompareFunc_MAX          = 6
};


// Enum TslGame.EAIParameter
enum class EAIParameter : uint8_t
{
	None                           = 0,
	Offensive                      = 1,
	PrepareType                    = 2,
	EAIParameter_MAX               = 3
};


// Enum TslGame.EPrepareType
enum class EPrepareType : uint8_t
{
	StopMovement                   = 0,
	MoveRandomLoc                  = 1,
	ThrowToy                       = 2,
	TypeEnd                        = 3,
	EPrepareType_MAX               = 4
};


// Enum TslGame.EAIBehaviors
enum class EAIBehaviors : uint8_t
{
	Normal                         = 0,
	Chasing                        = 1,
	Runaway                        = 2,
	EAIBehaviors_MAX               = 3
};


// Enum TslGame.ERightMoveDirection
enum class ERightMoveDirection : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Stop                           = 2,
	ERightMoveDirection_MAX        = 3
};


// Enum TslGame.EForwardMoveDirection
enum class EForwardMoveDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	Stop                           = 2,
	EForwardMoveDirection_MAX      = 3
};


// Enum TslGame.EUltronWithCircle
enum class EUltronWithCircle : uint8_t
{
	InWhiteCircle                  = 0,
	InBlueCircle                   = 1,
	OutBlueCircle                  = 2,
	MaxNum                         = 3,
	EUltronWithCircle_MAX          = 4
};


// Enum TslGame.EComparisonTargetCircle
enum class EComparisonTargetCircle : uint8_t
{
	WhiteCircle                    = 0,
	BlueCircle                     = 1,
	EComparisonTargetCircle_MAX    = 2
};


// Enum TslGame.ETurnDirection
enum class ETurnDirection : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Stop                           = 2,
	ETurnDirection_MAX             = 3
};


// Enum TslGame.EPercivedGrenadeType
enum class EPercivedGrenadeType : uint8_t
{
	FragGrenade                    = 0,
	StickyBomb                     = 1,
	C4                             = 2,
	EPercivedGrenadeType_MAX       = 3
};


// Enum TslGame.EEnemyCompareElement
enum class EEnemyCompareElement : uint8_t
{
	None                           = 0,
	HouseId                        = 1,
	EEnemyCompareElement_MAX       = 2
};


// Enum TslGame.EInfoPointWithHouse
enum class EInfoPointWithHouse : uint8_t
{
	All                            = 0,
	InHouse                        = 1,
	OutHouse                       = 2,
	EInfoPointWithHouse_MAX        = 3
};


// Enum TslGame.ETargetLocation
enum class ETargetLocation : uint8_t
{
	WhiteCircle                    = 0,
	OtherLocation                  = 1,
	ETargetLocation_MAX            = 2
};


// Enum TslGame.ETestMoveDirection
enum class ETestMoveDirection : uint8_t
{
	Front                          = 0,
	Back                           = 1,
	Left                           = 2,
	Right                          = 3,
	ETestMoveDirection_MAX         = 4
};


// Enum TslGame.EThownWeapon_AI
enum class EThownWeapon_AI : uint8_t
{
	GRENADE                        = 0,
	MOLOTOV                        = 1,
	SMOKEBOMB                      = 2,
	FLASHBANG                      = 3,
	EThownWeapon_MAX               = 4
};


// Enum TslGame.EThrowablePoseState_AI
enum class EThrowablePoseState_AI : uint8_t
{
	Idle                           = 0,
	PinOffStart                    = 1,
	Cooking                        = 2,
	WaitForThrow                   = 3,
	Throwing                       = 4,
	EThrowablePoseState_MAX        = 5
};


// Enum TslGame.ERoamingMoveType
enum class ERoamingMoveType : uint8_t
{
	RMoveCenter                    = 0,
	RMoveMax                       = 1,
	ERoamingMoveType_MAX           = 2
};


// Enum TslGame.EModifyBlackboardDataValueType
enum class EModifyBlackboardDataValueType : uint8_t
{
	Int                            = 0,
	Float                          = 1,
	Bool                           = 2,
	String                         = 3,
	Object                         = 4,
	Vector3                        = 5,
	EModifyBlackboardDataValueType_MAX = 6
};


// Enum TslGame.EThownWeapon
enum class EThownWeapon : uint8_t
{
	GRENADE                        = 0,
	MOLOTOV                        = 1,
	SMOKEBOMB                      = 2,
	FLASHBANG                      = 3,
	Toy                            = 4,
	EThownWeapon_MAX               = 5
};


// Enum TslGame.EThrowablePoseState
enum class EThrowablePoseState : uint8_t
{
	Idle                           = 0,
	PinOffStart                    = 1,
	Cooking                        = 2,
	WaitForThrow                   = 3,
	Throwing                       = 4,
	EThrowablePoseState_MAX        = 5
};


// Enum TslGame.EBoosterItem
enum class EBoosterItem : uint8_t
{
	ADRENALINE                     = 0,
	PAINKILLER                     = 1,
	ENERGYDRINK                    = 2,
	EBoosterItem_MAX               = 3
};


// Enum TslGame.EFlareDeploymentType
enum class EFlareDeploymentType : uint8_t
{
	Deploy_None                    = 0,
	Deploy_InWhite                 = 1,
	Deploy_InBlue                  = 2,
	Deploy_Outside                 = 3,
	Deploy_MAX                     = 4
};


// Enum TslGame.ECustomCarepackageState
enum class ECustomCarepackageState : uint8_t
{
	Transporting                   = 0,
	Falling                        = 1,
	Landing                        = 2,
	ECustomCarepackageState_MAX    = 3
};


// Enum TslGame.EWeaponReloadMethod
enum class EWeaponReloadMethod : uint8_t
{
	Magazine                       = 0,
	OneByOne                       = 1,
	OneByOneAndClip                = 2,
	EWeaponReloadMethod_MAX        = 3
};


// Enum TslGame.EDecoyFiringState
enum class EDecoyFiringState : uint8_t
{
	Firing                         = 0,
	BetweenShots                   = 1,
	BetweenSequences               = 2,
	EDecoyFiringState_MAX          = 3
};


// Enum TslGame.EDecoyState
enum class EDecoyState : uint8_t
{
	Uninitialized                  = 0,
	Cooking                        = 1,
	DelayedFiring                  = 2,
	Firing                         = 3,
	Reloading                      = 4,
	DelayedEnding                  = 5,
	EndOfLife                      = 6,
	EDecoyState_MAX                = 7
};


// Enum TslGame.EDoorState
enum class EDoorState : uint8_t
{
	Closed                         = 0,
	Closing                        = 1,
	Opened                         = 2,
	Opening                        = 3,
	EDoorState_MAX                 = 4
};


// Enum TslGame.EDestrucibleSurfaceSourceType
enum class EDestrucibleSurfaceSourceType : uint8_t
{
	Unknown                        = 0,
	Projectile                     = 1,
	Grenade                        = 2,
	Warhead                        = 3,
	Slashing                       = 4,
	EDestrucibleSurfaceSourceType_MAX = 5
};


// Enum TslGame.ETslRedeployPlayerState
enum class ETslRedeployPlayerState : uint8_t
{
	None                           = 0,
	Initialized                    = 1,
	RespawnTarget                  = 2,
	ReadyToFight                   = 3,
	Fighting                       = 4,
	Dead                           = 5,
	Survived                       = 6,
	Redeployed                     = 7,
	ETslRedeployPlayerState_MAX    = 8
};


// Enum TslGame.EWhiteZoneShape
enum class EWhiteZoneShape : uint8_t
{
	None                           = 0,
	Circle                         = 1,
	EWhiteZoneShape_MAX            = 2
};


// Enum TslGame.EEmPickupAircraftStatus
enum class EEmPickupAircraftStatus : uint8_t
{
	Available                      = 0,
	InvalidPhase_Early             = 1,
	InvalidPhase_Late              = 2,
	QueueFull                      = 3,
	Disabled                       = 4,
	EEmPickupAircraftStatus_MAX    = 5
};


// Enum TslGame.EFExplosivePropDataType
enum class EFExplosivePropDataType : uint8_t
{
	Default                        = 0,
	PropaneTank                    = 1,
	SmallTank                      = 2,
	RacingExplosive                = 3,
	EFExplosivePropDataType_MAX    = 4
};


// Enum TslGame.EMasteryItemType
enum class EMasteryItemType : uint8_t
{
	Charm                          = 0,
	Mesh                           = 1,
	EMasteryItemType_MAX           = 2
};


// Enum TslGame.ENpcDirection
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
	ENpcDirection_MAX              = 8
};


// Enum TslGame.ENpcWalkingSpeedType
enum class ENpcWalkingSpeedType : uint8_t
{
	Idle                           = 0,
	Walk                           = 1,
	Run                            = 2,
	Sprint                         = 3,
	ENpcWalkingSpeedType_MAX       = 4
};


// Enum TslGame.ENpcCharacterStateType
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
	ENpcCharacterStateType_MAX     = 12
};


// Enum TslGame.ERandomType
enum class ERandomType : uint8_t
{
	Random                         = 0,
	Shuffle                        = 1,
	Ascending                      = 2,
	Descending                     = 3,
	ERandomType_MAX                = 4
};


// Enum TslGame.ECustomAnimDataType
enum class ECustomAnimDataType : uint8_t
{
	CustomAnimData                 = 0,
	AnimSequence                   = 1,
	ECustomAnimDataType_MAX        = 2
};


// Enum TslGame.ECustomAnimSlotType
enum class ECustomAnimSlotType : uint8_t
{
	FullBody                       = 0,
	UpperBody                      = 1,
	FullBodyInstance               = 2,
	UpperBodyInstance              = 3,
	LowerBody                      = 4,
	ECustomAnimSlotType_MAX        = 5
};


// Enum TslGame.ERetriggerCounter
enum class ERetriggerCounter : uint8_t
{
	First                          = 0,
	Sec                            = 1,
	Third                          = 2,
	Fourth                         = 3,
	ERetriggerCounter_MAX          = 4
};


// Enum TslGame.EZombieType
enum class EZombieType : uint8_t
{
	ZDF1_Zombie                    = 0,
	ZDF2_C4_Zombie                 = 1,
	ZDF2_FragGrenade_Zombie        = 2,
	ZDF2_BlueGrenade_Zombie        = 3,
	ZDF2_Molotov_Zombie            = 4,
	EZombieType_MAX                = 5
};


// Enum TslGame.EAITaskState
enum class EAITaskState : uint8_t
{
	Idle                           = 0,
	Tasking                        = 1,
	Done                           = 2,
	InValid                        = 3,
	EAITaskState_MAX               = 4
};


// Enum TslGame.EFlashbangDebuffCurveValueTypes
enum class EFlashbangDebuffCurveValueTypes : uint8_t
{
	Blindness_Duration_Direct      = 0,
	Blindness_Duration_Indirect    = 1,
	Tinnitus_Level                 = 2,
	EFlashbangDebuffCurveValueTypes_MAX = 3
};


// Enum TslGame.ETracerDisplayMode
enum class ETracerDisplayMode : uint8_t
{
	TracerDM_None                  = 0,
	TracerDM_Particle              = 1,
	TracerDM_Mesh                  = 2,
	TracerDM_Billboard             = 3,
	TracerDM_MAX                   = 4
};


// Enum TslGame.TableType
enum class ETableType : uint8_t
{
	Ammo                           = 0,
	Attachment                     = 1,
	Equipment                      = 2,
	Skin                           = 3,
	Weapon                         = 4,
	WeaponThrowable                = 5,
	WeaponShield                   = 6,
	Castable                       = 7,
	UsedByAction                   = 8,
	Event                          = 9,
	Craft                          = 10,
	TableType_MAX                  = 11
};


// Enum TslGame.EVivoxResponseState
enum class EVivoxResponseState : uint8_t
{
	NotRequested                   = 0,
	Requested                      = 1,
	Fail                           = 2,
	Success                        = 3,
	EVivoxResponseState_MAX        = 4
};


// Enum TslGame.EWeaponReloadCancelReason
enum class EWeaponReloadCancelReason : uint8_t
{
	Default                        = 0,
	PlayerInterrupted              = 1,
	PlayerMovement                 = 2,
	PlayerInteraction              = 3,
	WeaponSwitch                   = 4,
	PlayerIncapacitated            = 5,
	EWeaponReloadCancelReason_MAX  = 6
};


// Enum TslGame.EWeaponReloadAnimExec
enum class EWeaponReloadAnimExec : uint8_t
{
	Tactical                       = 0,
	Charge                         = 1,
	Single                         = 2,
	Loop                           = 3,
	EWeaponReloadAnimExec_MAX      = 4
};


// Enum TslGame.EWeaponState
enum class EWeaponState : uint8_t
{
	Idle                           = 0,
	Firing                         = 1,
	Reloading                      = 2,
	EWeaponState_MAX               = 3
};


// Enum TslGame.ELoadingScreenType
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
	ELoadingScreenType_MAX         = 12
};


// Enum TslGame.GamepadHudDataType
enum class EGamepadHudDataType : uint8_t
{
	EFloat                         = 0,
	EBool                          = 1,
	EFString                       = 2,
	GamepadHudDataType_MAX         = 3
};


// Enum TslGame.ETslControllerType
enum class ETslControllerType : uint8_t
{
	Mouse                          = 0,
	GamePad                        = 1,
	Total                          = 2,
	ETslControllerType_MAX         = 3
};


// Enum TslGame.EVoiceInterfaceType
enum class EVoiceInterfaceType : uint8_t
{
	VIVOX                          = 0,
	XIM                            = 1,
	GVOICE                         = 2,
	EVoiceInterfaceType_MAX        = 3
};


// Enum TslGame.EVoiceTransmissionType
enum class EVoiceTransmissionType : uint8_t
{
	None                           = 0,
	ToAll                          = 1,
	ToChannel                      = 2,
	EVoiceTransmissionType_MAX     = 3
};


// Enum TslGame.EVoiceChannelType
enum class EVoiceChannelType : uint8_t
{
	None                           = 0,
	All                            = 1,
	GlobalOnly                     = 2,
	TeamOnly                       = 3,
	EVoiceChannelType_MAX          = 4
};


// Enum TslGame.EVoiceChannelJoinState
enum class EVoiceChannelJoinState : uint8_t
{
	NotJoined                      = 0,
	Joining                        = 1,
	Leaving                        = 2,
	Joined                         = 3,
	EVoiceChannelJoinState_MAX     = 4
};


// Enum TslGame.EVoiceLoginState
enum class EVoiceLoginState : uint8_t
{
	NotLoggedin                    = 0,
	Loggingin                      = 1,
	Loggedin                       = 2,
	EVoiceLoginState_MAX           = 3
};


// Enum TslGame.EVoiceConnectionState
enum class EVoiceConnectionState : uint8_t
{
	NotConnected                   = 0,
	Connecting                     = 1,
	Connected                      = 2,
	EVoiceConnectionState_MAX      = 3
};


// Enum TslGame.ETableCheckerHideOption
enum class ETableCheckerHideOption : uint8_t
{
	Hide                           = 0,
	Show                           = 1,
	ETableCheckerHideOption_MAX    = 2
};


// Enum TslGame.EKeyHintGradeSettingValue
enum class EKeyHintGradeSettingValue : uint8_t
{
	Basic                          = 0,
	Advanced                       = 1,
	EKeyHintGradeSettingValue_MAX  = 2
};


// Enum TslGame.EKeyHintGradeBitmask
enum class EKeyHintGradeBitmask : uint8_t
{
	Basic                          = 0,
	Advanced                       = 1,
	EKeyHintGradeBitmask_MAX       = 2
};


// Enum TslGame.ETslWeatherAction
enum class ETslWeatherAction : uint8_t
{
	NotDefined                     = 0,
	Initialized                    = 1,
	Prolonged                      = 2,
	ETslWeatherAction_MAX          = 3
};


// Enum TslGame.EBluezoneType
enum class EBluezoneType : uint8_t
{
	Normal                         = 0,
	Fast                           = 1,
	EBluezoneType_MAX              = 2
};


// Enum TslGame.EVendingMachineType
enum class EVendingMachineType : uint8_t
{
	AMMUNITION                     = 0,
	BOOSTING                       = 1,
	THROWABLE                      = 2,
	WEAPON                         = 3,
	HEALING                        = 4,
	EVendingMachineType_MAX        = 5
};


// Enum TslGame.EPatrolSpeed
enum class EPatrolSpeed : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	EPatrolSpeed_MAX               = 3
};


// Enum TslGame.EPlayerAuthState
enum class EPlayerAuthState : uint8_t
{
	None                           = 0,
	Login                          = 1,
	Logout                         = 2,
	EPlayerAuthState_MAX           = 3
};


// Enum TslGame.EInteractionPhase
enum class EInteractionPhase : uint8_t
{
	First                          = 0,
	Second                         = 1,
	EInteractionPhase_MAX          = 2
};


// Enum TslGame.ELobbyItemBundleType
enum class ELobbyItemBundleType : uint8_t
{
	Bundle                         = 0,
	Generator                      = 1,
	ELobbyItemBundleType_MAX       = 2
};


// Enum TslGame.EItemSpawnType
enum class EItemSpawnType : uint8_t
{
	FixedRatioAndAdjustableTotalNumber = 0,
	AdjustableRatioAndFixedTotalNumber = 1,
	AdjustableRatioAndAdjustableTotalNumber = 2,
	Invalid                        = 3,
	EItemSpawnType_MAX             = 4
};


// Enum TslGame.EThreatType
enum class EThreatType : uint8_t
{
	Damage                         = 0,
	Sight                          = 1,
	Noise                          = 2,
	EThreatType_MAX                = 3
};


// Enum TslGame.ELocationType
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
	ELocationType_MAX              = 8
};


// Enum TslGame.EClimate
enum class EClimate : uint8_t
{
	Climate_Normal                 = 0,
	Climate_Hot                    = 1,
	Climate_Cold                   = 2,
	Climate_Warm                   = 3,
	Climate_Humid                  = 4,
	Climate_HotAndHumid            = 5,
	Climate_ColdAndHumid           = 6,
	Climate_WarmAndHumid           = 7,
	Climate_Dry                    = 8,
	Climate_HotAndDry              = 9,
	Climate_ColdAndDry             = 10,
	Climate_WarmAndDry             = 11,
	Climate_MAX                    = 12
};


// Enum TslGame.ELobbyLinkState
enum class ELobbyLinkState : uint8_t
{
	Disconnect                     = 0,
	WaitInitialize                 = 1,
	WaitStart                      = 2,
	Gaming                         = 3,
	Finished                       = 4,
	ELobbyLinkState_MAX            = 5
};


// Enum TslGame.ELobbyCharacterAnimationType
enum class ELobbyCharacterAnimationType : uint8_t
{
	Default                        = 0,
	Wardrobe                       = 1,
	Appearance                     = 2,
	ELobbyCharacterAnimationType_MAX = 3
};


// Enum TslGame.EParameterLUTChannel
enum class EParameterLUTChannel : uint8_t
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	RGBA                           = 4,
	Undefined                      = 5,
	EParameterLUTChannel_MAX       = 6
};


// Enum TslGame.EMaterialParameterType
enum class EMaterialParameterType : uint8_t
{
	Bool                           = 0,
	Scalar                         = 1,
	Vector                         = 2,
	Texture                        = 3,
	Undefined                      = 4,
	EMaterialParameterType_MAX     = 5
};


// Enum TslGame.EBlackZoneState
enum class EBlackZoneState : uint8_t
{
	BZ_WaitingForMatchStart        = 0,
	BZ_SelectNewBlackZone          = 1,
	BZ_BeginStrike                 = 2,
	BZ_FireMisile                  = 3,
	BZ_EndBombing                  = 4,
	BZ_MAX                         = 5
};


// Enum TslGame.EArenaStageState
enum class EArenaStageState : uint8_t
{
	Prematch                       = 0,
	StageInProgress                = 1,
	BetweenStages                  = 2,
	FinishMatch                    = 3,
	EArenaStageState_MAX           = 4
};


// Enum TslGame.ERandomPointSelect
enum class ERandomPointSelect : uint8_t
{
	NavPoint                       = 0,
	NavPointInRadius               = 1,
	ReachableNavPointInRadius      = 2,
	ERandomPointSelect_MAX         = 3
};


// Enum TslGame.EPathDebugType
enum class EPathDebugType : uint8_t
{
	None                           = 0,
	Location                       = 1,
	SelectNpc                      = 2,
	EPathDebugType_MAX             = 3
};


// Enum TslGame.EPipeRotation
enum class EPipeRotation : uint8_t
{
	PIPEROTATION_A                 = 0,
	PIPEROTATION_B                 = 1,
	PIPEROTATION_C                 = 2,
	PIPEROTATION_D                 = 3,
	PIPEROTATION_MAX               = 4
};


// Enum TslGame.EPipeScaleOrigin
enum class EPipeScaleOrigin : uint8_t
{
	PIPESCALEORIGIN_Start          = 0,
	PIPESCALEORIGIN_Middle         = 1,
	PIPESCALEORIGIN_End            = 2,
	PIPESCALEORIGIN_MAX            = 3
};


// Enum TslGame.EPipeAxis
enum class EPipeAxis : uint8_t
{
	PIPEAXIS_X                     = 0,
	PIPEAXIS_Y                     = 1,
	PIPEAXIS_Z                     = 2,
	PIPEAXIS_MAX                   = 3
};


// Enum TslGame.ETargetState
enum class ETargetState : uint8_t
{
	Lying                          = 0,
	Standing                       = 1,
	ComingUp                       = 2,
	FallingDown                    = 3,
	ETargetState_MAX               = 4
};


// Enum TslGame.ECorrectedSpawnLocationTraceOriginMode
enum class ECorrectedSpawnLocationTraceOriginMode : uint8_t
{
	CapsuleAxis                    = 0,
	CapsuleOrigin                  = 1,
	ECorrectedSpawnLocationTraceOriginMode_MAX = 2
};


// Enum TslGame.ECorrectedSpawnLocationTraceType
enum class ECorrectedSpawnLocationTraceType : uint8_t
{
	Sweep                          = 0,
	Trace                          = 1,
	ECorrectedSpawnLocationTraceType_MAX = 2
};


// Enum TslGame.EThrowableState
enum class EThrowableState : uint8_t
{
	Idle                           = 0,
	PinOff                         = 1,
	Cooking                        = 2,
	Throw                          = 3,
	Dropped                        = 4,
	EThrowableState_MAX            = 5
};


// Enum TslGame.EProjectileExplosionStartType
enum class EProjectileExplosionStartType : uint8_t
{
	NotStart                       = 0,
	Impact                         = 1,
	Delay                          = 2,
	ImpactOrDelay                  = 3,
	EProjectileExplosionStartType_MAX = 4
};


// Enum TslGame.EProjectileExplodeState
enum class EProjectileExplodeState : uint8_t
{
	NotExplode                     = 0,
	ImpactExplode                  = 1,
	TimerExplode                   = 2,
	EProjectileExplodeState_MAX    = 3
};


// Enum TslGame.EProjectileExplosionRotationType
enum class EProjectileExplosionRotationType : uint8_t
{
	ProjectileUpVector             = 0,
	WorldUpVector                  = 1,
	ProjectileForwardVector        = 2,
	EProjectileExplosionRotationType_MAX = 3
};


// Enum TslGame.EDoorOpenState
enum class EDoorOpenState : uint8_t
{
	DoorClosed                     = 0,
	DoorOpened                     = 1,
	DoorOpening                    = 2,
	EDoorOpenState_MAX             = 3
};


// Enum TslGame.ETargetInteractionPurpose
enum class ETargetInteractionPurpose : uint8_t
{
	Move                           = 0,
	Reset                          = 1,
	ETargetInteractionPurpose_MAX  = 2
};


// Enum TslGame.ETrainingRoomInteractionType
enum class ETrainingRoomInteractionType : uint8_t
{
	None                           = 0,
	Training_Stop                  = 1,
	ETrainingRoomInteractionType_MAX = 2
};


// Enum TslGame.EHornSoundType
enum class EHornSoundType : uint8_t
{
	HornOn                         = 0,
	HornOff                        = 1,
	InstantHorn                    = 2,
	EHornSoundType_MAX             = 3
};


// Enum TslGame.EVehicleAnimType
enum class EVehicleAnimType : uint8_t
{
	DefaultDriver                  = 0,
	DefaultPassenger               = 1,
	BuggyDriver                    = 2,
	BuggyPassenger                 = 3,
	DaciaDriver                    = 4,
	DaciaPassengerFR               = 5,
	DaciaPassengerBL               = 6,
	DaciaPassengerBC               = 7,
	DaciaPassengerBR               = 8,
	UazDriver                      = 9,
	UazPassengerFR                 = 10,
	UazPassengerBL                 = 11,
	UazPassengerBC                 = 12,
	UazPassengerBR                 = 13,
	BoatDriver                     = 14,
	BoatPassengerFR                = 15,
	BoatPassengerBL                = 16,
	BoatPassengerBC                = 17,
	BoatPassengerBR                = 18,
	MotoDriver                     = 19,
	MotoPassenger                  = 20,
	MotoSidecar                    = 21,
	MotoDriverSidecar              = 22,
	MotoPassengerSidecar           = 23,
	AircraftPassenger              = 24,
	JetskiDriver                   = 25,
	JetskiPassenger                = 26,
	PickupTruckDriver              = 27,
	PickupTruckPassengerFR         = 28,
	PickupTruckPassengerBL_Open    = 29,
	PickupTruckPassengerBR_Open    = 30,
	PickupTruckPassengerBL_Closed  = 31,
	PickupTruckPassengerBR_Closed  = 32,
	MinibusDriver                  = 33,
	MinibusPassengerFR             = 34,
	MinibusPassengerML             = 35,
	MinibusPassengerMR             = 36,
	MinibusPassengerBL             = 37,
	MinibusPassengerBR             = 38,
	MiradoDriver                   = 39,
	MiradoFR                       = 40,
	MiradoRL                       = 41,
	MiradoRR                       = 42,
	ScooterPassenger               = 43,
	TukDriver                      = 44,
	RonyDriver                     = 45,
	Snowmobile_Passenger           = 46,
	YetiDriver                     = 47,
	YetiPassenger                  = 48,
	LadaNivaDriver                 = 49,
	BRDM_Driver                    = 50,
	BRDM_Passenger                 = 51,
	Motorglider_Pilot              = 52,
	Motorglider_Passenger          = 53,
	EVehicleAnimType_MAX           = 54
};


// Enum TslGame.ERiderCount
enum class ERiderCount : uint8_t
{
	Rider_Zero                     = 0,
	Rider_Single                   = 1,
	Rider_Multiple                 = 2,
	Rider_MAX                      = 3
};


// Enum TslGame.ERiderType
enum class ERiderType : uint8_t
{
	Driver                         = 0,
	Passenger                      = 1,
	ERiderType_MAX                 = 2
};


// Enum TslGame.ESeatDirection
enum class ESeatDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	Left                           = 2,
	Right                          = 3,
	ESeatDirection_MAX             = 4
};


// Enum TslGame.EMapColor
enum class EMapColor : uint8_t
{
	Undefined                      = 0,
	Red                            = 1,
	Green                          = 2,
	Blue                           = 3,
	Yellow                         = 4,
	EMapColor_MAX                  = 5
};


// Enum TslGame.ETdmSpawnKit
enum class ETdmSpawnKit : uint8_t
{
	Shotgun                        = 0,
	Smg                            = 1,
	Ar                             = 2,
	Dmr                            = 3,
	Sr                             = 4,
	Etc                            = 5,
	Max                            = 6,
	ETdmSpawnKit_MAX               = 7
};


// Enum TslGame.EVehicleEngineState
enum class EVehicleEngineState : uint8_t
{
	EEngineStateAutoOff            = 0,
	EEngineStateAutoOn             = 1,
	EEngineStateManualOff          = 2,
	EEngineStateManualOn           = 3,
	EVehicleEngineState_MAX        = 4
};


// Enum TslGame.EWheelContactType
enum class EWheelContactType : uint8_t
{
	WCT_Static                     = 0,
	WCT_Roll                       = 1,
	WCT_LatSlip                    = 2,
	WCT_LongSlip                   = 3,
	WCT_MAX                        = 4
};


// Enum TslGame.EEmoteMoveType
enum class EEmoteMoveType : uint8_t
{
	None                           = 0,
	MoveFoward                     = 1,
	EEmoteMoveType_MAX             = 2
};


// Enum TslGame.EEmotePlayType
enum class EEmotePlayType : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	TeamMate                       = 2,
	Interaction                    = 3,
	EEmotePlayType_MAX             = 4
};


// Enum TslGame.EEmoteAnimType
enum class EEmoteAnimType : uint8_t
{
	EmoteFullBody                  = 0,
	EmoteUpperBody                 = 1,
	EmoteArm                       = 2,
	EEmoteAnimType_MAX             = 3
};


// Enum TslGame.EPackageState
enum class EPackageState : uint8_t
{
	Normal                         = 0,
	Broken                         = 1,
	Empty                          = 2,
	EPackageState_MAX              = 3
};


// Enum TslGame.EThingGroupSpawnType
enum class EThingGroupSpawnType : uint8_t
{
	None                           = 0,
	Probability                    = 1,
	TotalCount                     = 2,
	EThingGroupSpawnType_MAX       = 3
};


// Enum TslGame.EHelicopterState
enum class EHelicopterState : uint8_t
{
	Normal                         = 0,
	Smoke                          = 1,
	Explosion                      = 2,
	EHelicopterState_MAX           = 3
};


// Enum TslGame.EEmergencyAircraftState
enum class EEmergencyAircraftState : uint8_t
{
	None                           = 0,
	Flame                          = 1,
	Explosion                      = 2,
	LastExplosion                  = 3,
	Destroy                        = 4,
	EEmergencyAircraftState_MAX    = 5
};


// Enum TslGame.EEmPickup_PathValidationState
enum class EEmPickup_PathValidationState : uint8_t
{
	None                           = 0,
	InProgress                     = 1,
	Valid                          = 2,
	Invalid                        = 3,
	EEmPickup_MAX                  = 4
};


// Enum TslGame.EFightingBehavior
enum class EFightingBehavior : uint8_t
{
	FB_Attack                      = 0,
	FB_BackDoMain                  = 1,
	FB_MAX                         = 2
};


// Enum TslGame.EMonsterEvent
enum class EMonsterEvent : uint8_t
{
	MET_None                       = 0,
	MET_ManualChangeState          = 1,
	MET_EnterDoMain                = 2,
	MET_LeaveDoMain                = 3,
	MET_EnterView                  = 4,
	MET_LeaveView                  = 5,
	MET_BeDamaged                  = 6,
	MET_SensedWeapon               = 7,
	MET_FightingBehavior           = 8,
	MET_SelectEnemy                = 9,
	MET_GameOver                   = 10,
	MET_MAX                        = 11
};


// Enum TslGame.EMonsterHurtSort
enum class EMonsterHurtSort : uint8_t
{
	HS_None                        = 0,
	HS_Damge                       = 1,
	HS_Time                        = 2,
	HS_Total                       = 3,
	HS_MAX                         = 4
};


// Enum TslGame.EMonsterVariety
enum class EMonsterVariety : uint8_t
{
	MV_Harmless                    = 0,
	MV_Neutral                     = 1,
	MV_Wild                        = 2,
	MV_MAX                         = 3
};


// Enum TslGame.EAnimShieldState
enum class EAnimShieldState : uint8_t
{
	SS_Hip                         = 0,
	SS_Block                       = 1,
	SS_ADS                         = 2,
	SS_MAX                         = 3
};


// Enum TslGame.EAnimPawnState
enum class EAnimPawnState : uint8_t
{
	PS_OnFoot                      = 0,
	PS_VehicleDriver               = 1,
	PS_VehiclePassenger            = 2,
	PS_SecondaryLocomotion         = 3,
	PS_MortarDriver                = 4,
	PS_MAX                         = 5
};


// Enum TslGame.ELastMoveTask
enum class ELastMoveTask : uint8_t
{
	MoveTo                         = 0,
	MoveDirectlyToward             = 1,
	ELastMoveTask_MAX              = 2
};


// Enum TslGame.EEjectAllowed
enum class EEjectAllowed : uint8_t
{
	NotAllowed                     = 0,
	Waiting                        = 1,
	Allowed                        = 2,
	EEjectAllowed_MAX              = 3
};


// Enum TslGame.EGameStage
enum class EGameStage : uint8_t
{
	PrepareGame                    = 0,
	EarlyGame                      = 1,
	MidGame                        = 2,
	EndGame                        = 3,
	EGameStage_MAX                 = 4
};


// Enum TslGame.EPlayerArenaObserverState
enum class EPlayerArenaObserverState : uint8_t
{
	Off                            = 0,
	RoundPreview                   = 1,
	FinalRoundPreview              = 2,
	WonAlive                       = 3,
	WonDead                        = 4,
	RoundFinished                  = 5,
	RoundFinishedWhileLoot         = 6,
	RoundResultWithObserve         = 7,
	RoundResult                    = 8,
	Eliminated                     = 9,
	AfterRoundLoadout              = 10,
	EPlayerArenaObserverState_MAX  = 11
};


// Enum TslGame.EArenaMoneySource
enum class EArenaMoneySource : uint8_t
{
	Initial                        = 0,
	Kill                           = 1,
	Revive                         = 2,
	WinArena                       = 3,
	LoseArena                      = 4,
	Buy                            = 5,
	EArenaMoneySource_MAX          = 6
};


// Enum TslGame.EArenaScreenOpen
enum class EArenaScreenOpen : uint8_t
{
	Loadout                        = 0,
	Leaderboard                    = 1,
	EArenaScreenOpen_MAX           = 2
};


// Enum TslGame.EArenaCameraObserveState
enum class EArenaCameraObserveState : uint8_t
{
	Off                            = 0,
	FreeFly                        = 1,
	AttachedToPlayer               = 2,
	EArenaCameraObserveState_MAX   = 3
};


// Enum TslGame.ELoadoutNotificationMessageType
enum class ELoadoutNotificationMessageType : uint8_t
{
	PURCHASEDMSG                   = 0,
	NOTENOUGHSPACEMSG              = 1,
	ALREADYHAVEMSG                 = 2,
	ATTACHMENTSININVENTORYMSG      = 3,
	ATTACHMENTSDISCARDEDMSG        = 4,
	ATTACHMENTSDROPPEDMSG          = 5,
	NOTENOUGHMONEYMSG              = 6,
	LOOTRESTRICTIONMSG             = 7,
	ELoadoutNotificationMessageType_MAX = 8
};


// Enum TslGame.EStrictSelectObserveTarget
enum class EStrictSelectObserveTarget : uint8_t
{
	None                           = 0,
	Arena                          = 1,
	Player                         = 2,
	EStrictSelectObserveTarget_MAX = 3
};


// Enum TslGame.EFutsalSoundType
enum class EFutsalSoundType : uint8_t
{
	Goal                           = 0,
	Start                          = 1,
	Finish                         = 2,
	EFutsalSoundType_MAX           = 3
};


// Enum TslGame.EPrivateTrainingRoomPhase
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
	EPrivateTrainingRoomPhase_MAX  = 10
};


// Enum TslGame.EPrivateWaitingRoomPhase
enum class EPrivateWaitingRoomPhase : uint8_t
{
	None                           = 0,
	LoadingMap                     = 1,
	Ready                          = 2,
	StartSelect_Practice           = 3,
	EPrivateWaitingRoomPhase_MAX   = 4
};


// Enum TslGame.ETrainingScoreType
enum class ETrainingScoreType : uint8_t
{
	None                           = 0,
	HeadShot                       = 1,
	Kill                           = 2,
	SoundCatch                     = 3,
	TotalScore                     = 4,
	AimAccuracy                    = 5,
	ETrainingScoreType_MAX         = 6
};


// Enum TslGame.ETrainingPracticeType
enum class ETrainingPracticeType : uint8_t
{
	None                           = 0,
	Practice_Aim                   = 1,
	Practice_Sound                 = 2,
	ETrainingPracticeType_MAX      = 3
};


// Enum TslGame.EBodyCarryStanceState
enum class EBodyCarryStanceState : uint8_t
{
	Standing                       = 0,
	WaitingToStand                 = 1,
	EBodyCarryStanceState_MAX      = 2
};


// Enum TslGame.EBodyCarryState
enum class EBodyCarryState : uint8_t
{
	Inactive                       = 0,
	Active                         = 1,
	PickingUp                      = 2,
	Dropping                       = 3,
	EBodyCarryState_MAX            = 4
};


// Enum TslGame.EHealthDebuffType
enum class EHealthDebuffType : uint8_t
{
	None                           = 0,
	Bleed                          = 1,
	EHealthDebuffType_MAX          = 2
};


// Enum TslGame.EControlDebuffType
enum class EControlDebuffType : uint8_t
{
	None                           = 0,
	Stun                           = 1,
	Trap                           = 2,
	Slow                           = 3,
	EControlDebuffType_MAX         = 4
};


// Enum TslGame.ECountInfoAnimType
enum class ECountInfoAnimType : uint8_t
{
	None                           = 0,
	Default                        = 1,
	Decreasing                     = 2,
	Increasing                     = 3,
	Warning                        = 4,
	Emerging                       = 5,
	Vanishing                      = 6,
	ECountInfoAnimType_MAX         = 7
};


// Enum TslGame.ECounterWidgetType
enum class ECounterWidgetType : uint8_t
{
	Assist                         = 0,
	ECounterWidgetType_MAX         = 1
};


// Enum TslGame.ECustomDamageEventReactionType
enum class ECustomDamageEventReactionType : uint8_t
{
	SpawnActor                     = 0,
	StopSpawnedParticles           = 1,
	HideMesh                       = 2,
	HideMeshInstance               = 3,
	HideBone                       = 4,
	ApplyPhysicalAnimationProfile  = 5,
	SetCollisionEnabled            = 6,
	ECustomDamageEventReactionType_MAX = 7
};


// Enum TslGame.ECustomDamageEventTriggerType
enum class ECustomDamageEventTriggerType : uint8_t
{
	OnPassedDamageThreshold        = 0,
	OnAnyDamage                    = 1,
	ECustomDamageEventTriggerType_MAX = 2
};


// Enum TslGame.EScmCollisionGroup
enum class EScmCollisionGroup : uint8_t
{
	Default                        = 0,
	FireField                      = 1,
	ExplosiveItem                  = 2,
	EScmCollisionGroup_MAX         = 3
};


// Enum TslGame.EDamageFieldType
enum class EDamageFieldType : uint8_t
{
	Default                        = 0,
	DirectTick                     = 1,
	EDamageFieldType_MAX           = 2
};


// Enum TslGame.EDroneOperationalState
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
	EDroneOperationalState_MAX     = 12
};


// Enum TslGame.EDroneState
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
	EDroneState_MAX                = 8
};


// Enum TslGame.EDroneOperationalRangeState
enum class EDroneOperationalRangeState : uint8_t
{
	InSafeRange                    = 0,
	InWarningRange                 = 1,
	OutOfRange                     = 2,
	EDroneOperationalRangeState_MAX = 3
};


// Enum TslGame.EOptionTab
enum class EOptionTab : uint8_t
{
	Graphics                       = 0,
	Audio                          = 1,
	Controls                       = 2,
	Gameplay                       = 3,
	KeyBindings                    = 4,
	EOptionTab_MAX                 = 5
};


// Enum TslGame.ETslGameOptionKeyBindingType
enum class ETslGameOptionKeyBindingType : uint8_t
{
	None                           = 0,
	Action                         = 1,
	Axis                           = 2,
	ETslGameOptionKeyBindingType_MAX = 3
};


// Enum TslGame.ETslGameOptionSupplementaryType
enum class ETslGameOptionSupplementaryType : uint8_t
{
	None                           = 0,
	KeyboardLayout                 = 1,
	PreviewImage                   = 2,
	PreviewCrosshair               = 3,
	VolumeUnitMeter                = 4,
	PreviewMaterial                = 5,
	LinkButton                     = 6,
	ETslGameOptionSupplementaryType_MAX = 7
};


// Enum TslGame.ENaviGamepadInputType
enum class ENaviGamepadInputType : uint8_t
{
	DPad_Pressed                   = 0,
	DPad_Released                  = 1,
	Axis                           = 2,
	Axis_Hold                      = 3,
	ENaviGamepadInputType_MAX      = 4
};


// Enum TslGame.EDynamicWeather
enum class EDynamicWeather : uint8_t
{
	NotInitialized                 = 0,
	Initialized                    = 1,
	BlendInStarted                 = 2,
	Saturated                      = 3,
	BlendOutStarted                = 4,
	BlendOutEnded                  = 5,
	Finished                       = 6,
	EDynamicWeather_MAX            = 7
};


// Enum TslGame.EEffectSpreadState
enum class EEffectSpreadState : uint8_t
{
	ESS_InitialTrace               = 0,
	ESS_InitialProcess             = 1,
	ESS_Spreading                  = 2,
	ESS_SpreadDone                 = 3,
	ESS_Ending                     = 4,
	ESS_MAX                        = 5
};


// Enum TslGame.EBuffCountType
enum class EBuffCountType : uint8_t
{
	HideCount                      = 0,
	ItemCount                      = 1,
	AmmoCount                      = 2,
	EBuffCountType_MAX             = 3
};


// Enum TslGame.ETslFenceSelector
enum class ETslFenceSelector : uint8_t
{
	None                           = 0,
	Use                            = 1,
	Use01                          = 2,
	Use02                          = 3,
	Use03                          = 4,
	ETslFenceSelector_MAX          = 5
};


// Enum TslGame.EReactionObjectType
enum class EReactionObjectType : uint8_t
{
	Fence                          = 0,
	Hay                            = 1,
	Camera                         = 2,
	EReactionObjectType_MAX        = 3
};


// Enum TslGame.EReactionType
enum class EReactionType : uint8_t
{
	Reaciton_None                  = 0,
	Reaction_Physics               = 1,
	Reaction_Destructible          = 2,
	EReactionType_MAX              = 3
};


// Enum TslGame.EFlowTextState
enum class EFlowTextState : uint8_t
{
	None                           = 0,
	Wait                           = 1,
	FlowLeftOut                    = 2,
	FlowLeftIn                     = 3,
	FlowRightOut                   = 4,
	FlowRightIn                    = 5,
	BlinkAnimation                 = 6,
	EFlowTextState_MAX             = 7
};


// Enum TslGame.EBlueBallProjectile_State
enum class EBlueBallProjectile_State : uint8_t
{
	Deactivated                    = 0,
	Raising                        = 1,
	Resting                        = 2,
	MovingToCenter                 = 3,
	MovingToCenterAndSearch        = 4,
	Homing                         = 5,
	EBlueBallProjectile_MAX        = 6
};


// Enum TslGame.EBBHolderSelectMethod
enum class EBBHolderSelectMethod : uint8_t
{
	Closest                        = 0,
	Random                         = 1,
	EBBHolderSelectMethod_MAX      = 2
};


// Enum TslGame.EChickenMonsterResult
enum class EChickenMonsterResult : uint8_t
{
	CMR_None                       = 0,
	CMR_Battle                     = 1,
	CMR_ChickenDied                = 2,
	CMR_MAX                        = 3
};


// Enum TslGame.ERacingBgmTheme
enum class ERacingBgmTheme : uint8_t
{
	Default                        = 0,
	WinterRaicng                   = 1,
	ERacingBgmTheme_MAX            = 2
};


// Enum TslGame.EWarModeCarePackageKitType
enum class EWarModeCarePackageKitType : uint8_t
{
	CarepackageKit_Off             = 0,
	CarepackageKit_Basic           = 1,
	CarepackageKit_ARKit           = 2,
	CarepackageKit_SRKit           = 3,
	CarepackageKit_MAX             = 4
};


// Enum TslGame.EZombieDefenseVersion
enum class EZombieDefenseVersion : uint8_t
{
	Version                        = 0,
	Version01                      = 1,
	Version_MAX                    = 2
};


// Enum TslGame.EPickRule
enum class EPickRule : uint8_t
{
	PR_Random                      = 0,
	PR_TopScore                    = 1,
	PR_MAX                         = 2
};


// Enum TslGame.EVoiceChatChannel
enum class EVoiceChatChannel : uint8_t
{
	All                            = 0,
	TeamOnly                       = 1,
	None                           = 2,
	EVoiceChatChannel_MAX          = 3
};


// Enum TslGame.EVoiceInputMode
enum class EVoiceInputMode : uint8_t
{
	OpenMic                        = 0,
	PushToTalk                     = 1,
	Disable                        = 2,
	EVoiceInputMode_MAX            = 3
};


// Enum TslGame.ERacingGamePhase
enum class ERacingGamePhase : uint8_t
{
	NotStarted                     = 0,
	PrepareState                   = 1,
	InProgress                     = 2,
	EndPhase                       = 3,
	End                            = 4,
	ERacingGamePhase_MAX           = 5
};


// Enum TslGame.ETslHelperInputActionType
enum class ETslHelperInputActionType : uint8_t
{
	DPad                           = 0,
	Shoulder                       = 1,
	Face                           = 2,
	Keyboard                       = 3,
	ETslHelperInputActionType_MAX  = 4
};


// Enum TslGame.ETslGMCommandInGameHelperButtonType
enum class ETslGMCommandInGameHelperButtonType : uint8_t
{
	NO_PARAM                       = 0,
	ONE_PARAM                      = 1,
	ETslGMCommandInGameHelperButtonType_MAX = 2
};


// Enum TslGame.ETrainingButtonActiveType
enum class ETrainingButtonActiveType : uint8_t
{
	Default                        = 0,
	AimTrainingOnly                = 1,
	ETrainingButtonActiveType_MAX  = 2
};


// Enum TslGame.EVendingMachineState
enum class EVendingMachineState : uint8_t
{
	ACTIVATED                      = 0,
	DEACTIVATED_TEMPORARILY_BY_PICK_DELAY = 1,
	DEACTIVATED_TEMPORARILY_BY_DAMAGE = 2,
	DEACTIVATED_TEMPORARILY_BY_JACKPOT = 3,
	DEACTIVATED_PERMANANTLY_BY_EXCEEDED_MAX_PICK_COUNT = 4,
	EVendingMachineState_MAX       = 5
};


// Enum TslGame.EOutGameMontageState
enum class EOutGameMontageState : uint8_t
{
	Default                        = 0,
	Playing                        = 1,
	Interrupted                    = 2,
	Finished                       = 3,
	EOutGameMontageState_MAX       = 4
};


// Enum TslGame.EItemRequestType
enum class EItemRequestType : uint8_t
{
	None                           = 0,
	Heal                           = 1,
	Ammo                           = 2,
	EItemRequestType_MAX           = 3
};


// Enum TslGame.JukeBoxAnimState
enum class EJukeBoxAnimState : uint8_t
{
	OPEN                           = 0,
	CLOSED                         = 1,
	JukeBoxAnimState_MAX           = 2
};


// Enum TslGame.ELivingThingThreatLevel
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
	ELivingThingThreatLevel_MAX    = 8
};


// Enum TslGame.ELivingThingCustomEvent
enum class ELivingThingCustomEvent : uint8_t
{
	HittedByBullet                 = 0,
	HittedByExplosion              = 1,
	HittedByCar                    = 2,
	HittedByCharacter              = 3,
	HittedByLivingThing            = 4,
	HittedByPhysicsBody            = 5,
	HittedByOthers                 = 6,
	Custom1                        = 7,
	Custom2                        = 8,
	Custom3                        = 9,
	Custom4                        = 10,
	Custom5                        = 11,
	Custom6                        = 12,
	Custom7                        = 13,
	Custom8                        = 14,
	Custom9                        = 15,
	Custom10                       = 16,
	Custom11                       = 17,
	Custom12                       = 18,
	Custom13                       = 19,
	Custom14                       = 20,
	Custom15                       = 21,
	Custom16                       = 22,
	Custom17                       = 23,
	Custom18                       = 24,
	Custom19                       = 25,
	Custom20                       = 26,
	MAX                            = 27,
	ELivingThingCustomEvent_MAX    = 28
};


// Enum TslGame.ETLMeshSelection
enum class ETLMeshSelection : uint8_t
{
	Auto                           = 0,
	StaticMesh                     = 1,
	SkeletalMesh                   = 2,
	None                           = 3,
	ETLMeshSelection_MAX           = 4
};


// Enum TslGame.ELobbyCharacterPosition
enum class ELobbyCharacterPosition : uint8_t
{
	Position1                      = 0,
	Position2                      = 1,
	Position3                      = 2,
	Position4                      = 3,
	ELobbyCharacterPosition_MAX    = 4
};


// Enum TslGame.ELobbyCharacterReadyType
enum class ELobbyCharacterReadyType : uint8_t
{
	Ready                          = 0,
	NotReady                       = 1,
	ReadyToNotReady                = 2,
	NotReadyToReady                = 3,
	EmoteToReady                   = 4,
	EmoteToNotReady                = 5,
	ELobbyCharacterReadyType_MAX   = 6
};


// Enum TslGame.EObserverPlayerListType
enum class EObserverPlayerListType : uint8_t
{
	Distance                       = 0,
	Kill                           = 1,
	Survivor                       = 2,
	Max                            = 3,
	EObserverPlayerListType_MAX    = 4
};


// Enum TslGame.ETslParticleCullType
enum class ETslParticleCullType : uint8_t
{
	None                           = 0,
	Distance                       = 1,
	Frustum                        = 2,
	LastRenderedTime               = 3,
	SameTransform                  = 4,
	NearbyTransform                = 5,
	DistAndFrustumAndNear          = 6,
	All                            = 7,
	ETslParticleCullType_MAX       = 8
};


// Enum TslGame.ETslParticleGroupPriority
enum class ETslParticleGroupPriority : uint8_t
{
	High                           = 0,
	Low                            = 1,
	ETslParticleGroupPriority_MAX  = 2
};


// Enum TslGame.ECustomDamageZoneType
enum class ECustomDamageZoneType : uint8_t
{
	Head                           = 0,
	UpperBody                      = 1,
	LowerBody                      = 2,
	Arms                           = 3,
	Legs                           = 4,
	ECustomDamageZoneType_MAX      = 5
};


// Enum TslGame.ECustomDamageWeaponClass
enum class ECustomDamageWeaponClass : uint8_t
{
	Bullet                         = 0,
	Melee                          = 1,
	ECustomDamageWeaponClass_MAX   = 2
};


// Enum TslGame.EArenaStartType
enum class EArenaStartType : uint8_t
{
	Player                         = 0,
	AircraftStart                  = 1,
	AircraftEnd                    = 2,
	EArenaStartType_MAX            = 3
};


// Enum TslGame.ERacingItemIcon
enum class ERacingItemIcon : uint8_t
{
	Heal                           = 0,
	Ammo                           = 1,
	Boost                          = 2,
	Gun                            = 3,
	FlareAmmo                      = 4,
	FlashBang                      = 5,
	Granade                        = 6,
	SmokeBomb                      = 7,
	SpikeTrap                      = 8,
	StickyBomb                     = 9,
	FirstKillBombardItem           = 10,
	FirstKillBombardItem_NotActivate = 11,
	ERacingItemIcon_MAX            = 12
};


// Enum TslGame.ERacingGameScoreType
enum class ERacingGameScoreType : uint8_t
{
	CheckPoint                     = 0,
	Trick                          = 1,
	Kill                           = 2,
	ERacingGameScoreType_MAX       = 3
};


// Enum TslGame.EPGALOutput
enum class EPGALOutput : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	EPGALOutput_MAX                = 2
};


// Enum TslGame.EMolotovSimulationType
enum class EMolotovSimulationType : uint8_t
{
	Molotov_SimulationImpact       = 0,
	Molotov_SimulationProjectile   = 1,
	Molotov_SimulationFragment     = 2,
	Molotov_SimulationVolumetric   = 3,
	Molotov_MAX                    = 4
};


// Enum TslGame.ESpikeDeploymentState
enum class ESpikeDeploymentState : uint8_t
{
	PreDeploy                      = 0,
	Deploying                      = 1,
	PostDeploy                     = 2,
	Popped                         = 3,
	Idle                           = 4,
	ESpikeDeploymentState_MAX      = 5
};


// Enum TslGame.E40mmDeployState
enum class E40mmDeployState : uint8_t
{
	None                           = 0,
	FuseTriggered                  = 1,
	DeployStarted                  = 2,
	DeployFinished                 = 3,
	DeployFailed                   = 4,
	E40mmDeployState_MAX           = 5
};


// Enum TslGame.EWarheadExplodedState
enum class EWarheadExplodedState : uint8_t
{
	NotExploded                    = 0,
	Exploded                       = 1,
	EWarheadExplodedState_MAX      = 2
};


// Enum TslGame.ETslPubgIdAssetType
enum class ETslPubgIdAssetType : uint8_t
{
	NONE                           = 0,
	NAMEPLATE                      = 1,
	EMBLEM                         = 2,
	EMBLEM_ANIMATED                = 3,
	MEDAL                          = 4,
	ETslPubgIdAssetType_MAX        = 5
};


// Enum TslGame.ETslReferenceObjType
enum class ETslReferenceObjType : uint8_t
{
	GameMode                       = 0,
	Character                      = 1,
	Preload                        = 2,
	ETslReferenceObjType_MAX       = 3
};


// Enum TslGame.ESoftRoleState
enum class ESoftRoleState : uint8_t
{
	Open                           = 0,
	Closed                         = 1,
	Inspect                        = 2,
	ESoftRoleState_MAX             = 3
};


// Enum TslGame.EReplayTimelineMode
enum class EReplayTimelineMode : uint8_t
{
	ReplayPlay                     = 0,
	ReplayEditor                   = 1,
	ReplayRender                   = 2,
	EReplayTimelineMode_MAX        = 3
};


// Enum TslGame.ESpraySystemMessage
enum class ESpraySystemMessage : uint8_t
{
	EEmpty                         = 0,
	EBlocked                       = 1,
	EOutRange                      = 2,
	EInvalidComponent              = 3,
	ESpraySystemMessage_MAX        = 4
};


// Enum TslGame.EAnimSecondaryLocomotionState
enum class EAnimSecondaryLocomotionState : uint8_t
{
	SLS_Freefall                   = 0,
	SLS_Parachute                  = 1,
	SLS_Swim                       = 2,
	SLS_DBNO                       = 3,
	SLS_Reviving                   = 4,
	SLS_Flying                     = 5,
	SLS_EmergencyPickup            = 6,
	SLS_ActiveRagdoll              = 7,
	SLS_Vaulting                   = 8,
	SLS_None                       = 9,
	SLS_MAX                        = 10
};


// Enum TslGame.ETrainHeadingDir
enum class ETrainHeadingDir : uint8_t
{
	XPositive                      = 0,
	XNegative                      = 1,
	YPositive                      = 2,
	YNegative                      = 3,
	ETrainHeadingDir_MAX           = 4
};


// Enum TslGame.ERideVehicle
enum class ERideVehicle : uint8_t
{
	None                           = 0,
	Ride                           = 1,
	Leave                          = 2,
	ERideVehicle_MAX               = 3
};


// Enum TslGame.ESwitcherHideWhen
enum class ESwitcherHideWhen : uint8_t
{
	UsingKeyboardMouse             = 0,
	UsingGamepad                   = 1,
	ESwitcherHideWhen_MAX          = 2
};


// Enum TslGame.EArenaHelpType
enum class EArenaHelpType : uint8_t
{
	LoadoutHelp                    = 0,
	MapHelp                        = 1,
	ReportHelp                     = 2,
	LoadoutHelp_Gamepad            = 3,
	MapHelp_Gamepad                = 4,
	ReportHelp_Gamepad             = 5,
	EArenaHelpType_MAX             = 6
};


// Enum TslGame.ENoReloadGuideType
enum class ENoReloadGuideType : uint8_t
{
	Alwyas                         = 0,
	WhenCurrentWeapon              = 1,
	ENoReloadGuideType_MAX         = 2
};


// Enum TslGame.EMeleeThrowState
enum class EMeleeThrowState : uint8_t
{
	Idle                           = 0,
	Prepare                        = 1,
	Throw                          = 2,
	EMeleeThrowState_MAX           = 3
};


// Enum TslGame.EHitCheckType
enum class EHitCheckType : uint8_t
{
	HitCheck_Once                  = 0,
	HitCheck_Multi                 = 1,
	HitCheck_MAX                   = 2
};


// Enum TslGame.EWeaponTransitionState
enum class EWeaponTransitionState : uint8_t
{
	Stable                         = 0,
	Arming                         = 1,
	UnArming                       = 2,
	EWeaponTransitionState_MAX     = 3
};


// Enum TslGame.EMinimapFocus
enum class EMinimapFocus : uint8_t
{
	CharacterFocus                 = 0,
	NextPlayzoneFocus              = 1,
	None                           = 2,
	EMinimapFocus_MAX              = 3
};


// Enum TslGame.ETslArenaLoadoutItemCategory
enum class ETslArenaLoadoutItemCategory : uint8_t
{
	PistolAndShotgun               = 0,
	Smg                            = 1,
	Ar                             = 2,
	Dmr                            = 3,
	Sr                             = 4,
	Equipment                      = 5,
	ETslArenaLoadoutItemCategory_MAX = 6
};


// Enum TslGame.ETslArenaLoadoutDirections
enum class ETslArenaLoadoutDirections : uint8_t
{
	Up                             = 0,
	Right                          = 1,
	Down                           = 2,
	Left                           = 3,
	ETslArenaLoadoutDirections_MAX = 4
};


// Enum TslGame.EResultPopupState
enum class EResultPopupState : uint8_t
{
	PopupState_Disable             = 0,
	PopupState_Enable              = 1,
	PopupState_JustClosed          = 2,
	PopupState_MAX                 = 3
};


// Enum TslGame.EConditionOfDeath
enum class EConditionOfDeath : uint8_t
{
	HeadShot                       = 0,
	DBNO                           = 1,
	DBNOByHeadShot                 = 2,
	None                           = 3,
	EConditionOfDeath_MAX          = 4
};


// Enum TslGame.ETslTeamInfoIconState
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
	BlueBallHolder                 = 9,
	Redeploy                       = 10,
	ETslTeamInfoIconState_MAX      = 11
};


// Enum TslGame.EControllerImageType
enum class EControllerImageType : uint8_t
{
	XboxOne                        = 0,
	PS4                            = 1,
	Quail                          = 2,
	Quail_ThirdParty               = 3,
	None                           = 4,
	EControllerImageType_MAX       = 5
};


// Enum TslGame.EBinaryStepperType
enum class EBinaryStepperType : uint8_t
{
	OFF                            = 0,
	ON                             = 1,
	EBinaryStepperType_MAX         = 2
};


// Enum TslGame.EKeyIconCombinationDisplayType
enum class EKeyIconCombinationDisplayType : uint8_t
{
	NotUsed                        = 0,
	Empty                          = 1,
	Plus                           = 2,
	Slash                          = 3,
	EKeyIconCombinationDisplayType_MAX = 4
};


// Enum TslGame.EGamepadKeyIconDisplayType
enum class EGamepadKeyIconDisplayType : uint8_t
{
	Tap                            = 0,
	DoubleTap                      = 1,
	ComboHold                      = 2,
	TimerHoldCircle                = 3,
	TimerHoldBar                   = 4,
	EGamepadKeyIconDisplayType_MAX = 5
};


// Enum TslGame.ETslWheelWidgetMouseCursorDirectionType
enum class ETslWheelWidgetMouseCursorDirectionType : uint8_t
{
	ABSOLUTE_COORD                 = 0,
	AREA_RESTRICTED_COORD          = 1,
	CIRCULAR_RESTRICTED_COORD      = 2,
	ETslWheelWidgetMouseCursorDirectionType_MAX = 3
};


// Enum TslGame.ETslWheelWidgetSelectType
enum class ETslWheelWidgetSelectType : uint8_t
{
	BY_CLICK                       = 0,
	BY_RELEASE                     = 1,
	BY_MAX                         = 2
};


// Enum TslGame.EEmotePlayViewType
enum class EEmotePlayViewType : uint8_t
{
	Disable                        = 0,
	TeamMate_Enable                = 1,
	Interaction_Enable             = 2,
	EEmotePlayViewType_MAX         = 3
};


// Enum TslGame.EWheelMenuMoveType
enum class EWheelMenuMoveType : uint8_t
{
	BY_LEFT                        = 0,
	BY_RIGHT                       = 1,
	BY_NONE                        = 2,
	BY_MAX                         = 3
};


// Enum TslGame.EBluezoneState
enum class EBluezoneState : uint8_t
{
	None                           = 0,
	Wait                           = 1,
	Release                        = 2,
	EBluezoneState_MAX             = 3
};


// Enum TslGame.EStatInfoType
enum class EStatInfoType : uint8_t
{
	Kill                           = 0,
	Damage                         = 1,
	Assist                         = 2,
	EStatInfoType_MAX              = 3
};


// Enum TslGame.EDisplayPlayerInfoType
enum class EDisplayPlayerInfoType : uint8_t
{
	PlayerList                     = 0,
	EngagedEnemies                 = 1,
	NearbyPlayers                  = 2,
	OtherEngagements               = 3,
	ObserverTeamInfoList           = 4,
	EDisplayPlayerInfoType_MAX     = 5
};


// Enum TslGame.MatchResultTypeEnum
enum class EMatchResultTypeEnum : uint8_t
{
	INVALID                        = 0,
	DEFAULT                        = 1,
	OBSERVER                       = 2,
	ZOMBIE                         = 3,
	LEAGUE                         = 4,
	TYPE_NUM                       = 5,
	MatchResultTypeEnum_MAX        = 6
};


// Enum TslGame.EMarkStates
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
	EMarkStates_MAX                = 9
};


// Enum TslGame.ETeenageInfoType
enum class ETeenageInfoType : uint8_t
{
	Normal                         = 0,
	Season                         = 1,
	ETeenageInfoType_MAX           = 2
};


// Enum TslGame.EGuideKeyType
enum class EGuideKeyType : uint8_t
{
	None                           = 0,
	PickUp                         = 1,
	PickUpAndPickUpAmount          = 2,
	PickUpAndHoldQuickEquip        = 3,
	Unequip                        = 4,
	DetachAll                      = 5,
	DetachAndDetachAll             = 6,
	Drop                           = 7,
	DropWeapon                     = 8,
	DropAndDropAmount              = 9,
	DropAndDropWeapon              = 10,
	DropWeaponAndWeaponToTrunk     = 11,
	DropAndDropWeaponAndMoveToTrunk = 12,
	DropFromTrunk                  = 13,
	Equip                          = 14,
	EquipAndMoveToTrunk            = 15,
	XQuickEquip                    = 16,
	Swap                           = 17,
	SwapWeapon                     = 18,
	SwapAndMoveToTrunk             = 19,
	Use                            = 20,
	UseAndMoveToTrunk              = 21,
	Confirm                        = 22,
	Cancel                         = 23,
	SwitchSlot                     = 24,
	Apply                          = 25,
	QuickPickUp                    = 26,
	QuickPickUpAndVicinityToTrunk  = 27,
	QuickPickUpAndDropFromTrunk    = 28,
	QuickDrop                      = 29,
	SwitchSlotAndSwapWeapon        = 30,
	MoveToTrunk                    = 31,
	VicinityToTrunk                = 32,
	Purchase                       = 33,
	EquipAndSwapWeapon             = 34,
	Pack                           = 35,
	EquipAndPack                   = 36,
	SwapAndPack                    = 37,
	UseAndPack                     = 38,
	QuickDropAndPack               = 39,
	XQuickEquipAndPack             = 40,
	VicinityToTrunkAndPack         = 41,
	DropFromTrunkAndPack           = 42,
	QuickPack                      = 43,
	QuickPackAndPickUpAmount       = 44,
	QuickPackAndHoldQuickEquip     = 45,
	UnpackAndUnpackAll             = 46,
	PackNoHold                     = 47,
	UnpackAll                      = 48,
	EGuideKeyType_MAX              = 49
};


// Enum TslGame.EGuideLineType
enum class EGuideLineType : uint8_t
{
	Upper                          = 0,
	Middle                         = 1,
	Lower                          = 2,
	EGuideLineType_MAX             = 3
};


// Enum TslGame.EFiremode
enum class EFiremode : uint8_t
{
	FullAuto                       = 0,
	ThreeRoundBurst                = 1,
	TwoRoundBurst                  = 2,
	SemiAuto                       = 3,
	Single                         = 4,
	FullAutoFast                   = 5,
	EFiremode_MAX                  = 6
};


// Enum TslGame.ETraumaBagHealMode
enum class ETraumaBagHealMode : uint8_t
{
	NoHealItem                     = 0,
	Bandage                        = 1,
	FirstAidKit                    = 2,
	Medkit                         = 3,
	ETraumaBagHealMode_MAX         = 4
};


// Enum TslGame.EHeatState
enum class EHeatState : uint8_t
{
	Stable                         = 0,
	IncreaseHeat                   = 1,
	DecreaseHeat                   = 2,
	OverHeated                     = 3,
	CoolingDown                    = 4,
	EHeatState_MAX                 = 5
};


// Enum TslGame.EConsoleHitDirections
enum class EConsoleHitDirections : uint8_t
{
	None                           = 0,
	Front_Right                    = 1,
	Front_Left                     = 2,
	Rear                           = 3,
	EConsoleHitDirections_MAX      = 4
};


// Enum TslGame.EPresetNumSlotState
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
	EPresetNumSlotState_MAX        = 8
};


// Enum TslGame.EKeyboardKeyIconDisplayType
enum class EKeyboardKeyIconDisplayType : uint8_t
{
	Tap                            = 0,
	DoubleTap                      = 1,
	Hold                           = 2,
	EKeyboardKeyIconDisplayType_MAX = 3
};


// Enum TslGame.ESoundType
enum class ESoundType : uint8_t
{
	Count                          = 0,
	Start                          = 1,
	ESoundType_MAX                 = 2
};


// Enum TslGame.ERoundEndPointType
enum class ERoundEndPointType : uint8_t
{
	Empty                          = 0,
	Lost                           = 1,
	Won                            = 2,
	ERoundEndPointType_MAX         = 3
};


// Enum TslGame.ELeaningState
enum class ELeaningState : uint8_t
{
	Normal                         = 0,
	LeanLeft                       = 1,
	LeanRight                      = 2,
	ELeaningState_MAX              = 3
};


// Enum TslGame.EEventBoostState
enum class EEventBoostState : uint8_t
{
	Normal                         = 0,
	UsingBoost                     = 1,
	CantUse                        = 2,
	EEventBoostState_MAX           = 3
};


// Enum TslGame.EVehicleAIAvoidanceMode
enum class EVehicleAIAvoidanceMode : uint8_t
{
	Off                            = 0,
	SingleTrace                    = 1,
	MultiTrace                     = 2,
	EVehicleAIAvoidanceMode_MAX    = 3
};


// Enum TslGame.ESpawnType
enum class ESpawnType : uint8_t
{
	Single                         = 0,
	ContinuousOnTimer              = 1,
	ContinuousOnDeath              = 2,
	ESpawnType_MAX                 = 3
};


// Enum TslGame.TslAudioInterpolation
enum class ETslAudioInterpolation : uint8_t
{
	AudioInterpolation_Log3        = 0,
	AudioInterpolation_Sine        = 1,
	AudioInterpolation_Log1        = 2,
	AudioInterpolation_InvSCurve   = 3,
	AudioInterpolation_Linear      = 4,
	AudioInterpolation_SCurve      = 5,
	AudioInterpolation_Exp1        = 6,
	AudioInterpolation_SineRecip   = 7,
	AudioInterpolation_Exp3        = 8,
	AudioInterpolation_MAX         = 9
};


// Enum TslGame.eVehicleSpawnStatus
enum class EeVehicleSpawnStatus : uint8_t
{
	SpawnNone                      = 0,
	SpawnAlived                    = 1,
	SpawnDestroyed                 = 2,
	eVehicleSpawnStatus_MAX        = 3
};


// Enum TslGame.ESurfaceEffect
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
	S_MAX                          = 55
};


// Enum TslGame.EMortarWeaponInstallState
enum class EMortarWeaponInstallState : uint8_t
{
	None                           = 0,
	InstallInprogress              = 1,
	InstallComplete                = 2,
	Installed                      = 3,
	EMortarWeaponInstallState_MAX  = 4
};


// Enum TslGame.EDeployState
enum class EDeployState : uint8_t
{
	INVALID                        = 0,
	UNDEPLOYED                     = 1,
	DEPLOYING                      = 2,
	DEPLOYED                       = 3,
	EDeployState_MAX               = 4
};


// Enum TslGame.EWeaponDisplayZoomState
enum class EWeaponDisplayZoomState : uint8_t
{
	ZoomState_Default              = 0,
	ZoomState_Charm                = 1,
	ZoomState_MAX                  = 2
};


// Enum TslGame.EUltAutoEquipItemType
enum class EUltAutoEquipItemType : uint8_t
{
	SubParts                       = 0,
	Throwable                      = 1,
	Boost                          = 2,
	Heal                           = 3,
	Other                          = 4,
	EUltAutoEquipItemType_MAX      = 5
};


// Enum TslGame.ECompareTeamDist
enum class ECompareTeamDist : uint8_t
{
	CurDest                        = 0,
	FinalDest                      = 1,
	SafeZone                       = 2,
	ECompareTeamDist_MAX           = 3
};


// Enum TslGame.EBlendSequenceByBoolStartType
enum class EBlendSequenceByBoolStartType : uint8_t
{
	Restart                        = 0,
	SameTime                       = 1,
	EBlendSequenceByBoolStartType_MAX = 2
};


// Enum TslGame.EJumpStartAnimationType
enum class EJumpStartAnimationType : uint8_t
{
	Stationary                     = 0,
	Forward                        = 1,
	Backward                       = 2,
	EJumpStartAnimationType_MAX    = 3
};


// Enum TslGame.ERotateBoneInputType
enum class ERotateBoneInputType : uint8_t
{
	Rotator                        = 0,
	AngleAxis                      = 1,
	ERotateBoneInputType_MAX       = 2
};


// Enum TslGame.ERotateBoneSpace
enum class ERotateBoneSpace : uint8_t
{
	BoneSpace                      = 0,
	LocalSpace                     = 1,
	WorldSpace                     = 2,
	ERotateBoneSpace_MAX           = 3
};


// Enum TslGame.ETslLocomotionNodeState
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
	ETslLocomotionNodeState_MAX    = 8
};


// Enum TslGame.ECharacterInteractionType
enum class ECharacterInteractionType : uint8_t
{
	Revive_Interact                = 0,
	InstantRevivalKit_Interact     = 1,
	TeamMateEmote_Interact         = 2,
	ECharacterInteractionType_MAX  = 3
};


// Enum TslGame.EInfoPointType
enum class EInfoPointType : uint8_t
{
	InfoPoint                      = 0,
	ObjectPoint                    = 1,
	SafePoint                      = 2,
	BeachPoint                     = 3,
	EInfoPointType_MAX             = 4
};



// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
	Success                        = 0,
	Blocked                        = 1,
	OffPath                        = 2,
	Aborted                        = 3,
	Skipped_DEPRECATED             = 4,
	Invalid                        = 5,
	EPathFollowingResult_MAX       = 6
};


// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
	Processing                     = 0,
	Success                        = 1,
	Failed                         = 2,
	Aborted                        = 3,
	OwnerLost                      = 4,
	MissingParam                   = 5,
	EEnvQueryStatus_MAX            = 6
};


// Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
	Animation                      = 0,
	Logic                          = 1,
	Script                         = 2,
	Gameplay                       = 3,
	MAX                            = 4,
	EAILockSource_MAX              = 5
};


// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
	SoftScript                     = 0,
	Logic                          = 1,
	HardScript                     = 2,
	Reaction                       = 3,
	Ultimate                       = 4,
	MAX                            = 5,
	EAIRequestPriority_MAX         = 6
};


// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
	Invalid                        = 0,
	FailedToStart                  = 1,
	InstantAbort                   = 2,
	FinishedAborting               = 3,
	FinishedExecution              = 4,
	Push                           = 5,
	EPawnActionEventType_MAX       = 6
};


// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
	NotStarted                     = 0,
	InProgress                     = 1,
	Success                        = 2,
	Failed                         = 3,
	Aborted                        = 4,
	EPawnActionResult_MAX          = 5
};


// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
	NeverStarted                   = 0,
	NotBeingAborted                = 1,
	MarkPendingAbort               = 2,
	LatentAbortInProgress          = 3,
	AbortDone                      = 4,
	MAX                            = 5,
	EPawnActionAbortState_MAX      = 6
};


// Enum AIModule.FAIDistanceType
enum class EFAIDistanceType : uint8_t
{
	Distance3D                     = 0,
	Distance2D                     = 1,
	DistanceZ                      = 2,
	MAX                            = 3,
	FAIDistanceType_MAX            = 4
};


// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3,
	EAIOptionFlag_MAX              = 4
};


// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
	Failed                         = 0,
	AlreadyAtGoal                  = 1,
	RequestSuccessful              = 2,
	EPathFollowingRequestResult_MAX = 3
};


// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
	Error                          = 0,
	NoMove                         = 1,
	DirectMove                     = 2,
	PartialPath                    = 3,
	PathToGoal                     = 4,
	EPathFollowingAction_MAX       = 5
};


// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
	Idle                           = 0,
	Waiting                        = 1,
	Paused                         = 2,
	Moving                         = 3,
	EPathFollowingStatus_MAX       = 4
};


// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
	Friendly                       = 0,
	Neutral                        = 1,
	Hostile                        = 2,
	ETeamAttitude_MAX              = 3
};


// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
	OnEveryPerception              = 0,
	OnPerceptionChange             = 1,
	EAISenseNotifyType_MAX         = 2
};


// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
	Lowest                         = 0,
	Low                            = 1,
	AutonomousAI                   = 2,
	High                           = 3,
	Ultimate                       = 4,
	EAITaskPriority_MAX            = 5
};


// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
	None                           = 0,
	LowerPriority                  = 1,
	Self                           = 2,
	Both                           = 3,
	EBTFlowAbortMode_MAX           = 4
};


// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	Aborted                        = 2,
	InProgress                     = 3,
	EBTNodeResult_MAX              = 4
};


// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
	None                           = 0,
	SpecifiedValue                 = 1,
	FilterThreshold                = 2,
	EEnvQueryTestClamping_MAX      = 3
};


// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
	TwoPoints                      = 0,
	Rotation                       = 1,
	EEnvDirection_MAX              = 2
};


// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{
	Box                            = 0,
	Sphere                         = 1,
	Capsule                        = 2,
	EEnvOverlapShape_MAX           = 3
};


// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
	Line                           = 0,
	Box                            = 1,
	Sphere                         = 2,
	Capsule                        = 3,
	EEnvTraceShape_MAX             = 4
};


// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
	None                           = 0,
	Navigation                     = 1,
	Geometry                       = 2,
	NavigationOverLedges           = 3,
	EEnvQueryTrace_MAX             = 4
};


// Enum AIModule.EAIParamType
enum class EAIParamType : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	EAIParamType_MAX               = 3
};


// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	EEnvQueryParam_MAX             = 3
};


// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
	SingleResult                   = 0,
	RandomBest5Pct                 = 1,
	RandomBest25Pct                = 2,
	AllMatching                    = 3,
	EEnvQueryRunMode_MAX           = 4
};


// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
	AverageScore                   = 0,
	MinScore                       = 1,
	MaxScore                       = 2,
	EEnvTestScoreOperator_MAX      = 3
};


// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
	AllPass                        = 0,
	AnyPass                        = 1,
	EEnvTestFilterOperator_MAX     = 2
};


// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EEnvTestCost_MAX               = 3
};


// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
	None                           = 0,
	Square                         = 1,
	Inverse                        = 2,
	Unused                         = 3,
	Constant                       = 4,
	Skip                           = 5,
	EEnvTestWeight_MAX             = 6
};


// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
	Linear                         = 0,
	Square                         = 1,
	InverseLinear                  = 2,
	SquareRoot                     = 3,
	Constant                       = 4,
	EEnvTestScoreEquation_MAX      = 5
};


// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
	Minimum                        = 0,
	Maximum                        = 1,
	Range                          = 2,
	Match                          = 3,
	EEnvTestFilterType_MAX         = 4
};


// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
	Filter                         = 0,
	Score                          = 1,
	FilterAndScore                 = 2,
	EEnvTestPurpose_MAX            = 3
};


// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
	Invalid                        = 0,
	Test                           = 1,
	And                            = 2,
	Or                             = 3,
	Not                            = 4,
	EBTDecoratorLogic_MAX          = 5
};


// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
	FirstNode                      = 0,
	TaskNode                       = 1,
	EBTChildIndex_MAX              = 2
};


// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	Contain                        = 2,
	NotContain                     = 3,
	ETextKeyOperation_MAX          = 4
};


// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	Less                           = 2,
	LessOrEqual                    = 3,
	Greater                        = 4,
	GreaterOrEqual                 = 5,
	EArithmeticKeyOperation_MAX    = 6
};


// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
	Set                            = 0,
	NotSet                         = 1,
	EBasicKeyOperation_MAX         = 2
};


// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
	ValueChange                    = 0,
	ResultChange                   = 1,
	EBTBlackboardRestart_MAX       = 2
};


// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	EBlackBoardEntryComparison_MAX = 2
};


// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
	NavmeshRaycast2D               = 0,
	HierarchicalQuery              = 1,
	RegularPathFinding             = 2,
	EPathExistanceQueryType_MAX    = 3
};


// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
	AbortBackground                = 0,
	WaitForBackground              = 1,
	EBTParallelMode_MAX            = 2
};


// Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t
{
	BySpaceBetween                 = 0,
	ByNumberOfPoints               = 1,
	EPointOnCircleSpacingMethod_MAX = 2
};


// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
	Absolute                       = 0,
	RelativeToScores               = 1,
	EEQSNormalizationType_MAX      = 2
};


// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
	Distance3D                     = 0,
	Distance2D                     = 1,
	DistanceZ                      = 2,
	DistanceAbsoluteZ              = 3,
	EEnvTestDistance_MAX           = 4
};


// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
	Dot3D                          = 0,
	Dot2D                          = 1,
	EEnvTestDot_MAX                = 2
};


// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
	PathExist                      = 0,
	PathCost                       = 1,
	PathLength                     = 2,
	EEnvTestPathfinding_MAX        = 3
};


// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
	All                            = 0,
	Best5Pct                       = 1,
	Best25Pct                      = 2,
	EEnvQueryHightlightMode_MAX    = 3
};


// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
	RequireSuccess                 = 0,
	IgnoreFailure                  = 1,
	EPawnActionFailHandling_MAX    = 2
};


// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	CopyBeforeTriggering           = 0,
	ReuseInstances                 = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2
};


// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
	UsePathfinding                 = 0,
	StraightLine                   = 1,
	EPawnActionMoveMode_MAX        = 2
};



// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	Visible                        = 0,
	Collapsed                      = 1,
	Hidden                         = 2,
	HitTestInvisible               = 3,
	SelfHitTestInvisible           = 4,
	ESlateVisibility_MAX           = 5
};


// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
	Default                        = 0,
	Number                         = 1,
	Web                            = 2,
	Email                          = 3,
	Password                       = 4,
	AlphaNumeric                   = 5,
	EVirtualKeyboardType_MAX       = 6
};


// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	Forward                        = 0,
	Reverse                        = 1,
	PingPong                       = 2,
	EUMGSequencePlayMode_MAX       = 3
};


// Enum UMG.EDragPivot
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
	EDragPivot_MAX                 = 10
};


// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	Automatic                      = 0,
	Fill                           = 1,
	ESlateSizeRule_MAX             = 2
};


// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	None                           = 0,
	Designing                      = 1,
	ShowOutline                    = 2,
	ExecutePreConstruct            = 3,
	EWidgetDesignFlags_MAX         = 4
};


// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	Function                       = 0,
	Property                       = 1,
	EBindingKind_MAX               = 2
};


// Enum UMG.EDesignPreviewSizeMode
enum class EDesignPreviewSizeMode : uint8_t
{
	FillScreen                     = 0,
	Custom                         = 1,
	CustomOnScreen                 = 2,
	Desired                        = 3,
	DesiredOnScreen                = 4,
	EDesignPreviewSizeMode_MAX     = 5
};


// Enum UMG.EWidgetForcedLOD
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
	EWidgetForcedLOD_MAX           = 10
};


// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
	Plane                          = 0,
	Cylinder                       = 1,
	Sphere                         = 2,
	EWidgetGeometryMode_MAX        = 3
};


// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	Opaque                         = 0,
	Masked                         = 1,
	Transparent                    = 2,
	EWidgetBlendMode_MAX           = 3
};


// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
	RealTime                       = 0,
	GameTime                       = 1,
	EWidgetTimingPolicy_MAX        = 2
};


// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	World                          = 0,
	Screen                         = 1,
	EWidgetSpace_MAX               = 2
};


// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
	World                          = 0,
	Mouse                          = 1,
	CenterScreen                   = 2,
	Custom                         = 3,
	EWidgetInteractionSource_MAX   = 4
};



// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	CancelAbilityImmediately       = 0,
	RemoveAbilityOnEnd             = 1,
	DoNothing                      = 2,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	Source                         = 0,
	Target                         = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2
};


// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8_t
{
	Authority                      = 0,
	NonAuthority                   = 1,
	Predicting                     = 2,
	Confirmed                      = 3,
	Rejected                       = 4,
	EGameplayAbilityActivationMode_MAX = 5
};


// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
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
	EAbilityGenericReplicatedEvent_MAX = 13
};


// Enum GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8_t
{
	NewOrRemoved                   = 0,
	AnyCountChange                 = 1,
	EGameplayTagEventType_MAX      = 2
};


// Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8_t
{
	OnActive                       = 0,
	WhileActive                    = 1,
	Executed                       = 2,
	Removed                        = 3,
	EGameplayCueEvent_MAX          = 4
};


// Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8_t
{
	None                           = 0,
	AggregateBySource              = 1,
	AggregateByTarget              = 2,
	EGameplayEffectStackingType_MAX = 3
};


// Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8_t
{
	Additive                       = 0,
	Multiplicitive                 = 1,
	Division                       = 2,
	Override                       = 3,
	Max                            = 4,
	EGameplayModOp_MAX             = 5
};


// Enum GameplayAbilities.EGameplayModEvaluationChannel
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
	EGameplayModEvaluationChannel_MAX = 11
};


// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
	LiteralTransform               = 0,
	ActorTransform                 = 1,
	SocketTransform                = 2,
	EGameplayAbilityTargetingLocationType_MAX = 3
};


// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8_t
{
	Instant                        = 0,
	UserConfirmed                  = 1,
	Custom                         = 2,
	CustomMulti                    = 3,
	EGameplayTargetingConfirmation_MAX = 4
};


// Enum GameplayAbilities.ERepAnimPositionMethod
enum class ERepAnimPositionMethod : uint8_t
{
	Position                       = 0,
	CurrentSectionId               = 1,
	ERepAnimPositionMethod_MAX     = 2
};


// Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8_t
{
	GameplayEvent                  = 0,
	OwnedTagAdded                  = 1,
	OwnedTagPresent                = 2,
	EGameplayAbilityTriggerSource_MAX = 3
};


// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
	ReplicateNo                    = 0,
	ReplicateYes                   = 1,
	EGameplayAbilityReplicationPolicy_MAX = 2
};


// Enum GameplayAbilities.EGameplayAbilityNetSecurityPolicy
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
	ClientOrServer                 = 0,
	ServerOnlyExecution            = 1,
	ServerOnlyTermination          = 2,
	ServerOnly                     = 3,
	EGameplayAbilityNetSecurityPolicy_MAX = 4
};


// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	LocalPredicted                 = 0,
	LocalOnly                      = 1,
	ServerInitiated                = 2,
	ServerOnly                     = 3,
	EGameplayAbilityNetExecutionPolicy_MAX = 4
};


// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
	NonInstanced                   = 0,
	InstancedPerActor              = 1,
	InstancedPerExecution          = 2,
	EGameplayAbilityInstancingPolicy_MAX = 3
};


// Enum GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8_t
{
	TDFS_Any                       = 0,
	TDFS_NoSelf                    = 1,
	TDFS_NoOthers                  = 2,
	TDFS_MAX                       = 3
};


// Enum GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	NeverReset                     = 0,
	ResetPeriod                    = 1,
	ExecuteAndResetPeriod          = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
	ClearEntireStack               = 0,
	RemoveSingleStackAndRefreshDuration = 1,
	RefreshDuration                = 2,
	EGameplayEffectStackingExpirationPolicy_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
	ResetOnSuccessfulApplication   = 0,
	NeverReset                     = 1,
	EGameplayEffectStackingPeriodPolicy_MAX = 2
};


// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
	RefreshOnSuccessfulApplication = 0,
	NeverRefresh                   = 1,
	EGameplayEffectStackingDurationPolicy_MAX = 2
};


// Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8_t
{
	Instant                        = 0,
	Infinite                       = 1,
	HasDuration                    = 2,
	EGameplayEffectDurationType_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	CapturedAttributeBacked        = 0,
	Transient                      = 1,
	EGameplayEffectScopedModifierAggregatorType_MAX = 2
};


// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8_t
{
	AttributeMagnitude             = 0,
	AttributeBaseValue             = 1,
	AttributeBonusMagnitude        = 2,
	AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType_MAX = 4
};


// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	ScalableFloat                  = 0,
	AttributeBased                 = 1,
	CustomCalculationClass         = 2,
	SetByCaller                    = 3,
	EGameplayEffectMagnitudeCalculation_MAX = 4
};


// Enum GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8_t
{
	Minimal                        = 0,
	Mixed                          = 1,
	Full                           = 2,
	EGameplayEffectReplicationMode_MAX = 3
};


// Enum GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8_t
{
	WaitingOnGame                  = 0,
	WaitingOnUser                  = 1,
	WaitingOnAvatar                = 2,
	EAbilityTaskWaitState_MAX      = 3
};


// Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	AlignFromTargetToSource        = 0,
	AlignToTargetForward           = 1,
	AlignToWorldSpace              = 2,
	ERootMotionMoveToActorTargetOffsetType_MAX = 3
};


// Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8_t
{
	BothWait                       = 0,
	OnlyServerWait                 = 1,
	OnlyClientWait                 = 2,
	EAbilityTaskNetSyncType_MAX    = 3
};


// Enum GameplayAbilities.EWaitAttributeChangeComparison
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
	EWaitAttributeChangeComparison_MAX = 8
};


// Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8_t
{
	Ability1                       = 0,
	Ability2                       = 1,
	Ability3                       = 2,
	Ability4                       = 3,
	Ability5                       = 4,
	Ability6                       = 5,
	Ability7                       = 6,
	Ability8                       = 7,
	Ability9                       = 8,
	EGameplayAbilityInputBinds_MAX = 9
};


// Enum GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8_t
{
	CueParameters                  = 0,
	FromSpec                       = 1,
	EGameplayCuePayloadType_MAX    = 2
};



// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
	StartOnTop                     = 0,
	StartAtEnd                     = 1,
	ETaskResourceOverlapPolicy_MAX = 2
};


// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
	Error                          = 0,
	Failed                         = 1,
	Success_Paused                 = 2,
	Success_Active                 = 3,
	Success_Finished               = 4,
	EGameplayTaskRunResult_MAX     = 5
};


// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
	Uninitialized                  = 0,
	AwaitingActivation             = 1,
	Paused                         = 2,
	Active                         = 3,
	Finished                       = 4,
	EGameplayTaskState_MAX         = 5
};



// Enum OceanPlugin.EFollowMethod
enum class EFollowMethod : uint8_t
{
	LookAtLocation                 = 0,
	FollowCamera                   = 1,
	FollowPawn                     = 2,
	Stationary                     = 3,
	EFollowMethod_MAX              = 4
};



// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t
{
	LimitedSlip_4W                 = 0,
	LimitedSlip_FrontDrive         = 1,
	LimitedSlip_RearDrive          = 2,
	Open_4W                        = 3,
	Open_FrontDrive                = 4,
	Open_RearDrive                 = 5,
	EVehicleDifferential4W_MAX     = 6
};



// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	Unchecked                      = 0,
	Checked                        = 1,
	Undetermined                   = 2,
	ECheckBoxState_MAX             = 3
};


// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	NoImage                        = 0,
	FullColor                      = 1,
	Linear                         = 2,
	ESlateBrushImageType_MAX       = 3
};


// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	NoMirror                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushMirrorType_MAX      = 4
};


// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	NoTile                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushTileType_MAX        = 4
};


// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	UseColor_Specified             = 0,
	UseColor_Specified_Link        = 1,
	UseColor_Foreground            = 2,
	UseColor_Foreground_Subdued    = 3,
	UseColor_MAX                   = 4
};


// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	NoDrawType                     = 0,
	Box                            = 1,
	Border                         = 2,
	Image                          = 3,
	ESlateBrushDrawType_MAX        = 4
};


// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	Escape                         = 0,
	Explicit                       = 1,
	Wrap                           = 2,
	Stop                           = 3,
	Custom                         = 4,
	Invalid                        = 5,
	EUINavigationRule_MAX          = 6
};


// Enum SlateCore.EUINavigation
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
	EUINavigation_MAX              = 8
};


// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	OnKeyPress                     = 0,
	OnNavigation                   = 1,
	OnMouseClick                   = 2,
	Direct                         = 3,
	ESelectInfo_MAX                = 4
};


// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	WhenScrollingPossible          = 0,
	Always                         = 1,
	Never                          = 2,
	EConsumeMouseWheel_MAX         = 3
};


// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	Default                        = 0,
	Auto                           = 1,
	AutoLight                      = 2,
	Monochrome                     = 3,
	None                           = 4,
	EFontHinting_MAX               = 5
};


// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	Default                        = 0,
	OnEnter                        = 1,
	OnUserMovedFocus               = 2,
	OnCleared                      = 3,
	ETextCommit_MAX                = 4
};


// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
	Auto                           = 0,
	KerningOnly                    = 1,
	FullShaping                    = 2,
	ETextShapingMethod_MAX         = 3
};


// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
	Metrics                        = 0,
	BoundingBox                    = 1,
	EFontLayoutMethod_MAX          = 2
};


// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3
};


// Enum SlateCore.EFontFallback
enum class EFontFallback : uint8_t
{
	FF_NoFallback                  = 0,
	FF_LocalizedFallback           = 1,
	FF_LastResortFallback          = 2,
	FF_Max                         = 3
};


// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2
};


// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2
};


// Enum SlateCore.EMenuPlacement
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
	MenuPlacement_MAX              = 12
};


// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4
};


// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4
};


// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
	Keyboard                       = 0,
	Controller                     = 1,
	User                           = 2,
	ENavigationGenesis_MAX         = 3
};


// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
	FocusedWidget                  = 0,
	WidgetUnderCursor              = 1,
	ENavigationSource_MAX          = 2
};


// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
	DownAndUp                      = 0,
	ButtonPress                    = 1,
	ButtonRelease                  = 2,
	EButtonPressMethod_MAX         = 3
};


// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	DownAndUp                      = 0,
	PreciseTap                     = 1,
	EButtonTouchMethod_MAX         = 2
};


// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	DownAndUp                      = 0,
	MouseDown                      = 1,
	MouseUp                        = 2,
	PreciseClick                   = 3,
	EButtonClickMethod_MAX         = 4
};


// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	CheckBox                       = 0,
	ToggleButton                   = 1,
	ESlateCheckBoxType_MAX         = 2
};


// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	Mouse                          = 0,
	Navigation                     = 1,
	SetDirectly                    = 2,
	Cleared                        = 3,
	OtherWidgetLostFocus           = 4,
	WindowActivate                 = 5,
	EFocusCause_MAX                = 6
};



// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
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
	ECoherentUIGTKeys_MAX          = 107
};


// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8_t
{
	None                           = 0,
	Keyboard                       = 1,
	Joystick                       = 2,
	KeyboardAndJoystick            = 3,
	ECoherentUIGTInputPropagationBehaviour_MAX = 4
};


// Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class EGamepadBehaviourOnFocusLost : uint8_t
{
	ResetState                     = 0,
	UseCurrentState                = 1,
	UseStateBeforeReset            = 2,
	EGamepadBehaviourOnFocusLost_MAX = 3
};


// Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class EGTInputWidgetLineTraceMode : uint8_t
{
	GTInputLineTrace_Single        = 0,
	GTInputLineTrace_Multi         = 1,
	GTInputLineTrace_MAX           = 2
};


// Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class EGTInputWidgetRaycastQuality : uint8_t
{
	RaycastQuality_Fast            = 0,
	RaycastQuality_Balanced        = 1,
	RaycastQuality_Accurate        = 2,
	RaycastQuality_MAX             = 3
};


// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA : uint8_t
{
	MSAA_1x                        = 0,
	MSAA_2x                        = 1,
	MSAA_4x                        = 2,
	MSAA_MAX                       = 3
};


// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8_t
{
	Trace                          = 0,
	Debug                          = 1,
	Info                           = 2,
	Warning                        = 3,
	AssertFailure                  = 4,
	Error                          = 5,
	ECoherentUIGTSettingsSeverity_MAX = 6
};



// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
	FavorTop                       = 0,
	FavorBottom                    = 1,
	EThreePlayerSplitScreenType_MAX = 2
};


// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	ETwoPlayerSplitScreenType_MAX  = 2
};



// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType : uint8_t
{
	Planar                         = 0,
	Cylindrical                    = 1,
	Wrapping                       = 2,
	ECustomizableObjectProjectorType_MAX = 3
};


// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8_t
{
	Full                           = 0,
	Local                          = 1,
	LocalAndChildren               = 2,
	AddWorkingSetNoChildren        = 3,
	AddWorkingSetAndChildren       = 4,
	EMutableCompileMeshType_MAX    = 5
};


// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8_t
{
	COGT_TOGGLE                    = 0,
	COGT_ALL                       = 1,
	COGT_ONE                       = 2,
	COGT_ONE_OR_NONE               = 3,
	COGT_MAX                       = 4
};


// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8_t
{
	None                           = 0,
	Bool                           = 1,
	Int                            = 2,
	Float                          = 3,
	Color                          = 4,
	Projector                      = 5,
	Texture                        = 6,
	EMutableParameterType_MAX      = 7
};


// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8_t
{
	All                            = 0,
	ClientOnly                     = 1,
	ECustomizableObjectRelevancy_MAX = 2
};



// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
	Invalid                        = 0,
	Closed                         = 1,
	Pending                        = 2,
	Open                           = 3,
	EBeaconConnectionState_MAX     = 4
};


// Enum OnlineSubsystemUtils.EPartyReservationResult
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
	EPartyReservationResult_MAX    = 14
};


// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	EClientRequestType_MAX         = 6
};



// Enum InputCore.ETouchIndex
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
	ETouchIndex_MAX                = 10
};


// Enum InputCore.ETouchType
enum class ETouchType : uint8_t
{
	Began                          = 0,
	Moved                          = 1,
	Stationary                     = 2,
	Ended                          = 3,
	NumTypes                       = 4,
	ETouchType_MAX                 = 5
};


// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
	None                           = 0,
	XBoxOne                        = 1,
	PS4                            = 2,
	EConsoleForGamepadLabels_MAX   = 3
};


// Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Pad                            = 2,
	ExternalCamera                 = 3,
	Gun                            = 4,
	Special                        = 5,
	Special01                      = 6,
	Special02                      = 7,
	Special03                      = 8,
	Special04                      = 9,
	Special05                      = 10,
	Special06                      = 11,
	Special07                      = 12,
	Special08                      = 13,
	EControllerHand_MAX            = 14
};



// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
	Auto                           = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ETextFlowDirection_MAX         = 3
};


// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
	DefaultWrapping                = 0,
	AllowPerCharacterWrapping      = 1,
	ETextWrappingPolicy_MAX        = 2
};


// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	ETextJustify_MAX               = 3
};


// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	List                           = 0,
	Tile                           = 1,
	Tree                           = 2,
	ETableViewMode_MAX             = 3
};


// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	None                           = 0,
	Single                         = 1,
	SingleToggle                   = 2,
	Multi                          = 3,
	ESelectionMode_MAX             = 4
};


// Enum Slate.EStretch
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
	EStretch_MAX                   = 8
};


// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	Both                           = 0,
	DownOnly                       = 1,
	UpOnly                         = 2,
	EStretchDirection_MAX          = 3
};


// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	LeftToRight                    = 0,
	RightToLeft                    = 1,
	FillFromCenter                 = 2,
	TopToBottom                    = 3,
	BottomToTop                    = 4,
	EProgressBarFillType_MAX       = 5
};



// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t
{
	NoFiltering                    = 0,
	PCF_1x1                        = 1,
	PCF_2x2                        = 2,
	EMobileCSMQuality_MAX          = 3
};



// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	NotTracked                     = 0,
	InertialOnly                   = 1,
	Tracked                        = 2,
	ETrackingStatus_MAX            = 3
};



// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	LockXZ                         = 3,
	LockYZ                         = 4,
	EFoliageScaling_MAX            = 5
};


// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	MAX_None                       = 4,
	EVertexColorMaskChannel_MAX    = 5
};


// Enum Foliage.FoliageVertexColorMask
enum class EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5
};


// Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{
	CollisionOverlap               = 0,
	ShadeOverlap                   = 1,
	AnyOverlap                     = 2,
	ESimulationQuery_MAX           = 3
};


// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
	CollisionOverlap               = 0,
	ShadeOverlap                   = 1,
	None                           = 2,
	ESimulationOverlap_MAX         = 3
};



// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
};


// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	EGrassScaling_MAX              = 3
};


// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
	Linear                         = 0,
	SquareRoot                     = 1,
	ELandscapeLODFalloff_MAX       = 2
};


// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
	Default                        = 0,
	Alphabetical                   = 1,
	UserSpecific                   = 2,
	ELandscapeLayerDisplayMode_MAX = 3
};


// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	None                           = 0,
	UseMaxLayers                   = 1,
	ExistingOnly                   = 2,
	UseComponentWhitelist          = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4
};


// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
	Additive                       = 0,
	Layered                        = 1,
	ELandscapeImportAlphamapType_MAX = 2
};


// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
};


// Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2
};


// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3
};


// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5
};


// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
};



// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
	InnerSequence                  = 0,
	MasterSequence                 = 1,
	External                       = 2,
	ESpawnOwnership_MAX            = 3
};


// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	Local                          = 0,
	Root                           = 1,
	EMovieSceneObjectBindingSpace_MAX = 2
};


// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	Auto                           = 0,
	User                           = 1,
	Break                          = 2,
	Linear                         = 3,
	Constant                       = 4,
	EMovieSceneKeyInterpolation_MAX = 5
};


// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
	KeepState                      = 0,
	RestoreState                   = 1,
	EMovieSceneCompletionMode_MAX  = 2
};


// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
	None                           = 0,
	PreRoll                        = 1,
	PostRoll                       = 2,
	ESectionEvaluationFlags_MAX    = 3
};


// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
	Static                         = 0,
	Swept                          = 1,
	EEvaluationMethod_MAX          = 2
};



// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	EModifyCurveApplyMode_MAX      = 3
};


// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	Euclidean                      = 0,
	Quaternion                     = 1,
	SwingAngle                     = 2,
	ERBFDistanceMethod_MAX         = 3
};


// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	ERBFFunctionType_MAX           = 5
};


// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
	DrivePoses                     = 0,
	DriveCurves                    = 1,
	EPoseDriverOutput_MAX          = 2
};


// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
	Rotation                       = 0,
	Translation                    = 1,
	EPoseDriverSource_MAX          = 2
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3
};


// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2
};


// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3
};


// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5
};


// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EComponentType
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
	EComponentType_MAX             = 11
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
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
	EInterpolationBlend_MAX        = 8
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};


// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESplineBoneAxis_MAX            = 3
};



// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NEG_X                          = 3,
	NEG_Y                          = 4,
	NEG_Z                          = 5,
	MovieScene3DPathSection_MAX    = 6
};


// Enum MovieSceneTracks.EShow3DTrajectory
enum class EShow3DTrajectory : uint8_t
{
	EST_OnlyWhenSelected           = 0,
	EST_Always                     = 1,
	EST_Never                      = 2,
	EST_MAX                        = 3
};


// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
	AtStartOfEvaluation            = 0,
	AtEndOfEvaluation              = 1,
	AfterSpawn                     = 2,
	EFireEventsAtPosition_MAX      = 3
};


// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
	Visible                        = 0,
	Hidden                         = 1,
	ELevelVisibility_MAX           = 2
};


// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
	Activate                       = 0,
	Deactivate                     = 1,
	Trigger                        = 2,
	EParticleKey_MAX               = 3
};



// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
	None                           = 0,
	Manual                         = 1,
	Tracking                       = 2,
	ECameraFocusMethod_MAX         = 3
};



// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
	Undefined                      = 0,
	AnyTagsMatch                   = 1,
	AllTagsMatch                   = 2,
	NoTagsMatch                    = 3,
	AnyExprMatch                   = 4,
	AllExprMatch                   = 5,
	NoExprMatch                    = 6,
	EGameplayTagQueryExprType_MAX  = 7
};


// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
	Any                            = 0,
	All                            = 1,
	EGameplayContainerMatchType_MAX = 2
};


// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t
{
	Explicit                       = 0,
	IncludeParentTags              = 1,
	EGameplayTagMatchType_MAX      = 2
};


// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{
	Native                         = 0,
	DefaultTagList                 = 1,
	TagList                        = 2,
	DataTable                      = 3,
	Invalid                        = 4,
	EGameplayTagSourceType_MAX     = 5
};



// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
	ContextActor                   = 0,
	ExternalActor                  = 1,
	Component                      = 2,
	EActorSequenceObjectReferenceType_MAX = 3
};



// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_MAX                       = 5
};



// Enum MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal                      = 0,
	MT_Looped                      = 1,
	MT_LoadingLoop                 = 2,
	MT_MAX                         = 3
};



// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};


// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
	NCS_Unknown                    = 0,
	NCS_Dirty                      = 1,
	NCS_Error                      = 2,
	NCS_UpToDate                   = 3,
	NCS_BeingCreated               = 4,
	NCS_UpToDateWithWarnings       = 5,
	NCS_MAX                        = 6
};


// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	Undefined                      = 0,
	Parameter                      = 1,
	Attribute                      = 2,
	SystemConstant                 = 3,
	ENiagaraInputNodeUsage_MAX     = 4
};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3
};


// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
	FaceCamera                     = 0,
	FaceCameraPlane                = 1,
	CustomFacingVector             = 2,
	ENiagaraSpriteFacingMode_MAX   = 3
};


// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
	Unaligned                      = 0,
	VelocityAligned                = 1,
	CustomAlignment                = 2,
	ENiagaraSpriteAlignment_MAX    = 3
};


// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
	SortNone                       = 0,
	SortViewDepth                  = 1,
	SortViewDistance               = 2,
	ENiagaraSortMode_MAX           = 3
};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	Function                       = 0,
	Module                         = 1,
	SpawnScript                    = 2,
	SpawnScriptInterpolated        = 3,
	UpdateScript                   = 4,
	EffectScript                   = 5,
	ENiagaraScriptUsage_MAX        = 6
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	PassThrough                    = 4,
	EUnusedAttributeBehaviour_MAX  = 5
};


// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	None                           = 0,
	SceneGeometry                  = 1,
	DepthBuffer                    = 2,
	DistanceField                  = 3,
	ENiagaraCollisionMode_MAX      = 4
};


// Enum Niagara.EScriptCompileIndices
enum class EScriptCompileIndices : uint8_t
{
	SpawnScript                    = 0,
	UpdateScript                   = 1,
	EventScript                    = 2,
	EScriptCompileIndices_MAX      = 3
};


// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
	EveryParticle                  = 0,
	SpawnedParticles               = 1,
	SingleParticle                 = 2,
	EScriptExecutionMode_MAX       = 3
};



// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	Audio                          = 0,
	Binary                         = 1,
	Caption                        = 2,
	Script                         = 3,
	Subtitle                       = 4,
	Text                           = 5,
	Video                          = 6,
	EMediaPlayerTrack_MAX          = 7
};



// Enum ClothingSystemRuntime.EClothingWindMethod
enum class EClothingWindMethod : uint8_t
{
	Legacy                         = 0,
	Accurate                       = 1,
	EClothingWindMethod_MAX        = 2
};


// Enum ClothingSystemRuntime.MaskTarget_PhysMesh
enum class EMaskTarget_PhysMesh : uint8_t
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	MaskTarget_MAX                 = 4
};



// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	Compressor                     = 0,
	Limiter                        = 1,
	Expander                       = 2,
	Gate                           = 3,
	Count                          = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5
};



// Enum BuildPatchServices.EManifestFileHeader
enum class EManifestFileHeader : uint8_t
{
	STORED_RAW                     = 0,
	STORED_COMPRESSED              = 1,
	STORED_MAX                     = 2
};



// Enum WebResource.EWRALOutput
enum class EWRALOutput : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	EWRALOutput_MAX                = 2
};



// Enum ZipUtility.EZipUtilityCompletionState
enum class EZipUtilityCompletionState : uint8_t
{
	SUCCESS                        = 0,
	FAILURE_NOT_FOUND              = 1,
	FAILURE_UNKNOWN                = 2,
	EZipUtilityCompletionState_MAX = 3
};


// Enum ZipUtility.ZipUtilityCompressionLevel
enum class EZipUtilityCompressionLevel : uint8_t
{
	COMPRESSION_LEVEL_NONE         = 0,
	COMPRESSION_LEVEL_FAST         = 1,
	COMPRESSION_LEVEL_NORMAL       = 2,
	COMPRESSION_LEVEL_MAX          = 3
};


// Enum ZipUtility.ZipUtilityCompressionFormat
enum class EZipUtilityCompressionFormat : uint8_t
{
	COMPRESSION_FORMAT_UNKNOWN     = 0,
	COMPRESSION_FORMAT_SEVEN_ZIP   = 1,
	COMPRESSION_FORMAT_ZIP         = 2,
	COMPRESSION_FORMAT_GZIP        = 3,
	COMPRESSION_FORMAT_BZIP2       = 4,
	COMPRESSION_FORMAT_RAR         = 5,
	COMPRESSION_FORMAT_TAR         = 6,
	COMPRESSION_FORMAT_ISO         = 7,
	COMPRESSION_FORMAT_CAB         = 8,
	COMPRESSION_FORMAT_LZMA        = 9,
	COMPRESSION_FORMAT_LZMA86      = 10,
	COMPRESSION_FORMAT_MAX         = 11
};



// Enum PrefabAsset.EPrefabVisualizerType
enum class EPrefabVisualizerType : uint8_t
{
	WireBox                        = 0,
	WireSphere                     = 1,
	EPrefabVisualizerType_MAX      = 2
};



// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t
{
	NoCollision                    = 0,
	FirstFrameCollision            = 1,
	EachFrameCollision             = 2,
	EFlipbookCollisionMode_MAX     = 3
};


// Enum Paper2D.ESpritePivotMode
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
	ESpritePivotMode_MAX           = 10
};


// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t
{
	SourceBoundingBox              = 0,
	TightBoundingBox               = 1,
	ShrinkWrapped                  = 2,
	FullyCustom                    = 3,
	Diced                          = 4,
	ESpritePolygonMode_MAX         = 5
};


// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t
{
	Box                            = 0,
	Circle                         = 1,
	Polygon                        = 2,
	ESpriteShapeType_MAX           = 3
};


// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t
{
	None                           = 0,
	Use2DPhysics                   = 1,
	Use3DPhysics                   = 2,
	ESpriteCollisionMode_MAX       = 3
};


// Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8_t
{
	DilateBorder                   = 0,
	PadWithZero                    = 1,
	EPaperSpriteAtlasPadding_MAX   = 2
};


// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t
{
	Orthogonal                     = 0,
	IsometricDiamond               = 1,
	IsometricStaggered             = 2,
	HexagonalStaggered             = 3,
	ETileMapProjectionMode_MAX     = 4
};



// Enum SubstanceCore.ESubstanceInputType
enum class ESubstanceInputType : uint8_t
{
	SIT_Float                      = 0,
	SIT_Float2                     = 1,
	SIT_Float3                     = 2,
	SIT_Float4                     = 3,
	SIT_Integer                    = 4,
	SIT_Image                      = 5,
	SIT_Unused                     = 6,
	SIT_Unused01                   = 7,
	SIT_Integer2                   = 8,
	SIT_Integer3                   = 9,
	SIT_Integer4                   = 10,
	SIT_MAX                        = 11
};


// Enum SubstanceCore.ESubstanceGenerationMode
enum class ESubstanceGenerationMode : uint8_t
{
	SGM_PlatformDefault            = 0,
	SGM_Baked                      = 1,
	SGM_OnLoadSync                 = 2,
	SGM_OnLoadSyncAndCache         = 3,
	SGM_OnLoadAsync                = 4,
	SGM_OnLoadAsyncAndCache        = 5,
	SGM_MAX                        = 6
};


// Enum SubstanceCore.ESubstanceEngineType
enum class ESubstanceEngineType : uint8_t
{
	SET_CPU                        = 0,
	SET_GPU                        = 1,
	SET_MAX                        = 2
};


// Enum SubstanceCore.ESubChannelType
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
	ESubChannelType_MAX            = 16
};


// Enum SubstanceCore.ESubstanceTextureSize
enum class ESubstanceTextureSize : uint8_t
{
	ERL                            = 0,
	ERL01                          = 1,
	ERL02                          = 2,
	ERL03                          = 3,
	ERL04                          = 4,
	ERL05                          = 5,
	ERL06                          = 6,
	ERL07                          = 7,
	ERL08                          = 8,
	ERL_MAX                        = 9
};



// Enum MK3DPublisher.ECapurerMode
enum class ECapurerMode : uint8_t
{
	ECapturerNone                  = 0,
	ECapturerMovie                 = 1,
	ECapturerSound                 = 2,
	ECapurerMode_MAX               = 3
};



// Enum AkAudio.EOcclusionCalculationMode
enum class EOcclusionCalculationMode : uint8_t
{
	SingleRaycast                  = 0,
	MultiRaycast                   = 1,
	EOcclusionCalculationMode_MAX  = 2
};


// Enum AkAudio.EOcclusionMode
enum class EOcclusionMode : uint8_t
{
	NoOcclusion                    = 0,
	OnPostEventWithRefresh         = 1,
	OnPostEvent                    = 2,
	OnlyRefresh                    = 3,
	EOcclusionMode_MAX             = 4
};


// Enum AkAudio.ESoundVolumeShape
enum class ESoundVolumeShape : uint8_t
{
	Box                            = 0,
	Sphere                         = 1,
	Capsule                        = 2,
	ESoundVolumeShape_MAX          = 3
};


// Enum AkAudio.EAkIgnoreRolloffDirection
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
	EAkIgnoreRolloffDirection_MAX  = 11
};



// Enum OnlineSubsystem.EInAppPurchaseState
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
	EInAppPurchaseState_MAX        = 8
};


// Enum OnlineSubsystem.EMPMatchOutcome
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
	EMPMatchOutcome_MAX            = 10
};



// Enum CoherentRenderingPlugin.ECoherentRenderingSettingsSeverity
enum class ECoherentRenderingSettingsSeverity : uint8_t
{
	Trace                          = 0,
	Debug                          = 1,
	Info                           = 2,
	Warning                        = 3,
	AssertFailure                  = 4,
	Error                          = 5,
	ECoherentRenderingSettingsSeverity_MAX = 6
};



// Enum HoudiniEngineRuntime.EHoudiniToolSelectionType
enum class EHoudiniToolSelectionType : uint8_t
{
	HTOOL_SELECTION_ALL            = 0,
	HTOOL_SELECTION_WORLD_ONLY     = 1,
	HTOOL_SELECTION_CB_ONLY        = 2,
	HTOOL_SELECTION_MAX            = 3
};


// Enum HoudiniEngineRuntime.EHoudiniToolType
enum class EHoudiniToolType : uint8_t
{
	HTOOLTYPE_GENERATOR            = 0,
	HTOOLTYPE_OPERATOR_SINGLE      = 1,
	HTOOLTYPE_OPERATOR_MULTI       = 2,
	HTOOLTYPE_OPERATOR_BATCH       = 3,
	HTOOLTYPE_MAX                  = 4
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsAxisImport
enum class EHoudiniRuntimeSettingsAxisImport : uint8_t
{
	HRSAI_Unreal                   = 0,
	HRSAI_Houdini                  = 1,
	HRSAI_MAX                      = 2
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
	HRSRF_Always                   = 0,
	HRSRF_OnlyIfMissing            = 1,
	HRSRF_Nothing                  = 2,
	HRSRF_MAX                      = 3
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8_t
{
	HRSST_InProcess                = 0,
	HRSST_Socket                   = 1,
	HRSST_NamedPipe                = 2,
	HRSST_MAX                      = 3
};


// Enum HoudiniEngineRuntime.EHoudiniVertexAttributeDataType
enum class EHoudiniVertexAttributeDataType : uint8_t
{
	VADT_Float                     = 0,
	VADT_Int32                     = 1,
	VADT_Bool                      = 2,
	VADT_MAX                       = 3
};


// Enum HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8_t
{
	Xform                          = 0,
	Bounder                        = 1,
	Unsupported                    = 2,
	EHoudiniHandleType_MAX         = 3
};



// Enum VectorVM.EVectorVMOp
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
	EVectorVMOp_MAX                = 85
};


// Enum VectorVM.EVectorVMOperandLocation
enum class EVectorVMOperandLocation : uint8_t
{
	Register                       = 0,
	Constant                       = 1,
	Num                            = 2,
	EVectorVMOperandLocation_MAX   = 3
};


// Enum VectorVM.EVectorVMBaseTypes
enum class EVectorVMBaseTypes : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	Num                            = 3,
	EVectorVMBaseTypes_MAX         = 4
};



// Enum PowerIKRuntime.EEffectorSpaceEnum
enum class EEffectorSpaceEnum : uint8_t
{
	ES_Additive                    = 0,
	ES_World                       = 1,
	ES_Component                   = 2,
	ES_MAX                         = 3
};


// Enum PowerIKRuntime.EPoleVectorModeEnum
enum class EPoleVectorModeEnum : uint8_t
{
	PV_None                        = 0,
	PV_Position                    = 1,
	PV_Bone                        = 2,
	PV_AngleOffset                 = 3,
	PV_MAX                         = 4
};



// UserDefinedEnum Enum_MagazineReloadAnimStateActionType.Enum_MagazineReloadAnimStateActionType
enum class Enum_MagazineReloadAnimStateActionType : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	NewEnumerator3                 = 3,
	NewEnumerator4                 = 4,
	NewEnumerator5                 = 5,
	Enum_MAX                       = 6
};



