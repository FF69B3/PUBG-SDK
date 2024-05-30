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
	PF_D32                         = 61,
	PF_MAX                         = 62
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


// Enum CoreUObject.*acd30ef692
enum class E*acd30ef692 : uint8_t
{
	*28443211a7                    = 0,
	*5c28c65f06                    = 1,
	*c28f79a2bc                    = 2,
	*acd30ef692_MAX                = 3
};


// Enum CoreUObject.*8668dcfcbe
enum class E*8668dcfcbe : uint8_t
{
	*c83e28fb34                    = 0,
	*ed753dc468                    = 1,
	*5ba487fd86                    = 2,
	*8668dcfcbe_MAX                = 3
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


// Enum Engine.EPendingCreationType
enum class EPendingCreationType : uint8_t
{
	None                           = 0,
	IncrementalAndOnDemand         = 1,
	OnDemandOnly                   = 2,
	EPendingCreationType_MAX       = 3
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


// Enum Engine.*0ba597e7b8
enum class E*0ba597e7b8 : uint8_t
{
	*ffbc966dd2                    = 0,
	*8da341b42d                    = 1,
	*15bda4c419                    = 2,
	*782f5a407d                    = 3,
	*80c6f18c0e                    = 4,
	*9bd2035b68                    = 5,
	*fa81791290                    = 6,
	*0ba597e7b8_MAX                = 7
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


// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	None                           = 0,
	ForOneFrame                    = 1,
	ForDuration                    = 2,
	Persistent                     = 3,
	EDrawDebugTrace_MAX            = 4
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


// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	SnapToTarget                   = 2,
	EAttachmentRule_MAX            = 3
};


// Enum Engine.*0a064c40bd
enum class E*0a064c40bd : uint8_t
{
	*4c24e0cd92                    = 0,
	*33abb0e585                    = 1,
	*b05bb7d67f                    = 2,
	*0a064c40bd_MAX                = 3
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


// Enum Engine.*3139f72a63
enum class E*3139f72a63 : uint8_t
{
	*35b5019843                    = 0,
	*e7bcf70219                    = 1,
	*697da6881b                    = 2,
	*0f83ea7817                    = 3,
	*3139f72a63_MAX                = 4
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


// Enum Engine.*d65464eb68
enum class E*d65464eb68 : uint8_t
{
	*a761592da1                    = 0,
	*19f3b2dc07                    = 1,
	*272a6cf8fd                    = 2,
	*d65464eb68_MAX                = 3
};


// Enum Engine.*b3efeb166c
enum class E*b3efeb166c : uint8_t
{
	*2f56067540                    = 0,
	*0e6ac76a8b                    = 1,
	*d50bc0a451                    = 2,
	*fa175ebad1                    = 3,
	*b3efeb166c_MAX                = 4
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


// Enum Engine.*f7fb0dbaff
enum class E*f7fb0dbaff : uint8_t
{
	*57fa474980                    = 0,
	*8971cd295e                    = 1,
	*db4633c471                    = 2,
	*77086f59ec                    = 3,
	*f91c0727f2                    = 4,
	*b04fe365f8                    = 5,
	*f7fb0dbaff_MAX                = 6
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


// Enum Engine.*6b6258d7b0
enum class E*6b6258d7b0 : uint8_t
{
	*85bc0fc413                    = 0,
	*ecfcdb7527                    = 1,
	*bf7557874a                    = 2,
	*6922c2ff89                    = 3,
	*bdb7633181                    = 4,
	*6b6258d7b0_MAX                = 5
};


// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
	Default                        = 0,
	ForceCPUAndGPU                 = 1,
	EMeshBufferAccess_MAX          = 2
};


// Enum Engine.*d589a962ba
enum class E*d589a962ba : uint8_t
{
	*7d402857ac                    = 0,
	*ce1ebd0507                    = 1,
	*83f6d9344c                    = 2,
	*d589a962ba_MAX                = 3
};


// Enum Engine.*029426f4e3
enum class E*029426f4e3 : uint8_t
{
	*9ec6703139                    = 0,
	*575bcadea6                    = 1,
	*03a8f98541                    = 2,
	*7c6502508b                    = 3,
	*029426f4e3_MAX                = 4
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
	DORM_ConnectedDormantPartial   = 4,
	DORM_Initial                   = 5,
	DORN_MAX                       = 6,
	ENetDormancy_MAX               = 7
};


// Enum Engine.*43b58ac7be
enum class E*43b58ac7be : uint8_t
{
	*83d4764a6a                    = 0,
	*293ac27501                    = 1,
	*849958ecb7                    = 2,
	*affc3204af                    = 3,
	*59a80e4411                    = 4,
	*97661238e0                    = 5,
	*48e19b3833                    = 6,
	*21deb7f825                    = 7,
	*43b58ac7be_MAX                = 8
};


// Enum Engine.*584dfddd33
enum class E*584dfddd33 : uint8_t
{
	*58edec5916                    = 0,
	*81b1008e98                    = 1,
	*f306ff6316                    = 2,
	*584dfddd33_MAX                = 3
};


// Enum Engine.*949e31debc
enum class E*949e31debc : uint8_t
{
	*9be0f75b52                    = 0,
	*57eccc1930                    = 1,
	*da6d9952c2                    = 2,
	*87075ef952                    = 3,
	*949e31debc_MAX                = 4
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


// Enum Engine.*98a1e6b654
enum class E*98a1e6b654 : uint8_t
{
	*e465ae7f22                    = 0,
	*c4e6bb8339                    = 1,
	*b0962d9e29                    = 2,
	*ec14c1ebf7                    = 3,
	*039094d9f1                    = 4,
	*07a171e7e8                    = 5,
	*98a1e6b654_MAX                = 6
};


// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8_t
{
	Normal                         = 0,
	Sensitive                      = 1,
	Custom                         = 2,
	ESleepFamily_MAX               = 3
};


// Enum Engine.*a476ca6a7a
enum class E*a476ca6a7a : uint8_t
{
	*dd96ef7989                    = 0,
	*83631b8761                    = 1,
	*e2c63a9e7c                    = 2,
	*a476ca6a7a_MAX                = 3
};


// Enum Engine.*3f4489a24c
enum class E*3f4489a24c : uint8_t
{
	*82dcac3d78                    = 0,
	*322007d8d0                    = 1,
	*5ea692c0f8                    = 2,
	*596b3500ab                    = 3,
	*3f4489a24c_MAX                = 4
};


// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3
};


// Enum Engine.*b7695414d7
enum class E*b7695414d7 : uint8_t
{
	*b3336223a1                    = 0,
	*1f1a0d006a                    = 1,
	*7c03cac4d1                    = 2,
	*b7695414d7_MAX                = 3
};


// Enum Engine.*40e03607cf
enum class E*40e03607cf : uint8_t
{
	*a464afc1d6                    = 0,
	*3c725b95a9                    = 1,
	*25277c549a                    = 2,
	*b203e96406                    = 3,
	*40e03607cf_MAX                = 4
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


// Enum Engine.*d4ebbf7b2b
enum class E*d4ebbf7b2b : uint8_t
{
	*a9eb8c96ea                    = 0,
	*99a772f9f0                    = 1,
	*cdabb8f9db                    = 2,
	*10cd6585ef                    = 3,
	*d4ebbf7b2b_MAX                = 4
};


// Enum Engine.*5349ee703c
enum class E*5349ee703c : uint8_t
{
	*430381b8f9                    = 0,
	*37eb32f5bf                    = 1,
	*509f51d520                    = 2,
	*ad9da960a9                    = 3,
	*07fb0c9c11                    = 4,
	*8617a6492f                    = 5,
	*6f6b1e21a2                    = 6,
	*5349ee703c_MAX                = 7
};


// Enum Engine.*4ba98ae97c
enum class E*4ba98ae97c : uint8_t
{
	*abe7464a27                    = 0,
	*dbf9714d0f                    = 1,
	*0cf5a7d77a                    = 2,
	*64c440965d                    = 3,
	*944b3132ee                    = 4,
	*4ba98ae97c_MAX                = 5
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


// Enum Engine.*7b4218ec52
enum class E*7b4218ec52 : uint8_t
{
	*75cf5972e8                    = 0,
	*96e30e532a                    = 1,
	*7ef45b2317                    = 2,
	*d414d4a431                    = 3,
	*7b4218ec52_MAX                = 4
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


// Enum Engine.*2c116ec9fd
enum class E*2c116ec9fd : uint8_t
{
	*0316528e87                    = 0,
	*e14f30ea37                    = 1,
	*3aa94debd4                    = 2,
	*d095aaa566                    = 3,
	*2c116ec9fd_MAX                = 4
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


// Enum Engine.*a290d08444
enum class E*a290d08444 : uint8_t
{
	*d6a0d197e7                    = 0,
	*7fed2d3cf9                    = 1,
	*9ffb8a422e                    = 2,
	*66e9cfec4a                    = 3,
	*a290d08444_MAX                = 4
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


// Enum Engine.*2e946577bc
enum class E*2e946577bc : uint8_t
{
	*16cc2c0920                    = 0,
	*18c376ea10                    = 1,
	*a96b6c6e9f                    = 2,
	*2e946577bc_MAX                = 3
};


// Enum Engine.ETranslucencyLightingMode
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
	TLM_MAX                        = 8
};


// Enum Engine.*ebc9a9a703
enum class E*ebc9a9a703 : uint8_t
{
	*ad98deb88d                    = 0,
	*305ea715a8                    = 1,
	*7997a12a56                    = 2,
	*80ea194d4a                    = 3,
	*ebc9a9a703_MAX                = 4
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


// Enum Engine.*f243fdf355
enum class E*f243fdf355 : uint8_t
{
	*0ceaa9256e                    = 0,
	*70dfa173aa                    = 1,
	*fac74973e6                    = 2,
	*f243fdf355_MAX                = 3
};


// Enum Engine.*a2b15b54df
enum class E*a2b15b54df : uint8_t
{
	*1482c7acf2                    = 0,
	*89f09b37f4                    = 1,
	*e0a19c38d5                    = 2,
	*7320ea140b                    = 3,
	*a2b15b54df_MAX                = 4
};


// Enum Engine.*0cd5613210
enum class E*0cd5613210 : uint8_t
{
	*4bfbb5953f                    = 0,
	*c2604e0025                    = 1,
	*548a8394d9                    = 2,
	*0cd5613210_MAX                = 3
};


// Enum Engine.*a569963809
enum class E*a569963809 : uint8_t
{
	*8077dd21a3                    = 0,
	*20ed0c9133                    = 1,
	*8eda251284                    = 2,
	*7d08d6833f                    = 3,
	*a569963809_MAX                = 4
};


// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3
};


// Enum Engine.*30914d3be4
enum class E*30914d3be4 : uint8_t
{
	*b69084d3b6                    = 0,
	*e928189889                    = 1,
	*e697532f51                    = 2,
	*c911287085                    = 3,
	*719e4fbbc9                    = 4,
	*661e4538ba                    = 5,
	*9fbae25244                    = 6,
	*9441f8fccf                    = 7,
	*fdd23a945f                    = 8,
	*ff9fffd02c                    = 9,
	*4bf98ceaad                    = 10,
	*14c664f632                    = 11,
	*87917e2c7a                    = 12,
	*368340c16d                    = 13,
	*0fc171bbc6                    = 14,
	*40f1d02335                    = 15,
	*d24b157a93                    = 16,
	*0252331ac3                    = 17,
	*8d8e0b6bb1                    = 18,
	*5350b3f4e5                    = 19,
	*307124ccbb                    = 20,
	*d951e99051                    = 21,
	*4aeb66d44c                    = 22,
	*cd4c08511d                    = 23,
	*075e5ecc46                    = 24,
	*846ee568b1                    = 25,
	*a4e36d7806                    = 26,
	*657e64cd89                    = 27,
	*667fe78c13                    = 28,
	*9cc97f7554                    = 29,
	*7b21b69507                    = 30,
	*6cb61944b2                    = 31,
	*30914d3be4_MAX                = 32
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


// Enum Engine.*546c5cf862
enum class E*546c5cf862 : uint8_t
{
	*dc94ea5ffe                    = 0,
	*fbd0df15ae                    = 1,
	*0fda9e2dfc                    = 2,
	*dc6b309fe1                    = 3,
	*546c5cf862_MAX                = 4
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


// Enum Engine.*eb7fec3171
enum class E*eb7fec3171 : uint8_t
{
	*6159fdceed                    = 0,
	*1ff9f56eb3                    = 1,
	*8bc5871129                    = 2,
	*eb7fec3171_MAX                = 3
};


// Enum Engine.*9ba3ce7ea5
enum class E*9ba3ce7ea5 : uint8_t
{
	*24b3070e03                    = 0,
	*19c356a079                    = 1,
	*63cb3faf0c                    = 2,
	*56f675373d                    = 3,
	*3f79079468                    = 4,
	*9ba3ce7ea5_MAX                = 5
};


// Enum Engine.*ce952290f8
enum class E*ce952290f8 : uint8_t
{
	*e8bca7d398                    = 0,
	*c97273ce80                    = 1,
	*eabbd25664                    = 2,
	*528459e9d9                    = 3,
	*ce952290f8_MAX                = 4
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


// Enum Engine.*bcfb7f7761
enum class E*bcfb7f7761 : uint8_t
{
	*fd447d05d3                    = 0,
	*b5ceec3f57                    = 1,
	*15f9d1b3f8                    = 2,
	*bcfb7f7761_MAX                = 3
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


// Enum Engine.*835b5e7ac0
enum class E*835b5e7ac0 : uint8_t
{
	*45d4041728                    = 0,
	*6c5c9da7df                    = 1,
	*afa4fe2306                    = 2,
	*7b3fe7b42f                    = 3,
	*835b5e7ac0_MAX                = 4
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


// Enum Engine.EAutoBenchPathType
enum class EAutoBenchPathType : uint8_t
{
	SnakeCurve                     = 0,
	HilbertCurve                   = 1,
	EAutoBenchPathType_MAX         = 2
};


// Enum Engine.EAutoBenchViewMode
enum class EAutoBenchViewMode : uint8_t
{
	Default                        = 0,
	Top                            = 1,
	EAutoBenchViewMode_MAX         = 2
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
	MP_Temperature                 = 28,
	MP_TemperatureAlpha            = 29,
	MP_MaterialAttributes          = 30,
	MP_CustomOutput                = 31,
	MP_MAX                         = 32
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


// Enum Engine.*9ed580bd35
enum class E*9ed580bd35 : uint8_t
{
	*8a4a658052                    = 0,
	*5186cc82ba                    = 1,
	*11dc1139f4                    = 2,
	*5d8d88b86f                    = 3,
	*d1b565d40a                    = 4,
	*e7a3f366fb                    = 5,
	*a725922ffa                    = 6,
	*8bf04a0a0f                    = 7,
	*c143730087                    = 8,
	*ba8b78102b                    = 9,
	*c95051942b                    = 10,
	*9ed580bd35_MAX                = 11
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


// Enum Engine.*57e980d13f
enum class E*57e980d13f : uint8_t
{
	*70dea89c90                    = 0,
	*efc195a913                    = 1,
	*c5c989d822                    = 2,
	*e3bb52b75c                    = 3,
	*57e980d13f_MAX                = 4
};


// Enum Engine.EStaticMeshLODType
enum class EStaticMeshLODType : uint8_t
{
	Reduction                      = 0,
	Proxy                          = 1,
	EStaticMeshLODType_MAX         = 2
};


// Enum Engine.*4497438eb7
enum class E*4497438eb7 : uint8_t
{
	*3109d759a3                    = 0,
	*a4aeb713a9                    = 1,
	*d07291cf48                    = 2,
	*4497438eb7_MAX                = 3
};


// Enum Engine.*61ce44143e
enum class E*61ce44143e : uint8_t
{
	*e70941d30c                    = 0,
	*fb44ccb638                    = 1,
	*c4f83530b5                    = 2,
	*1d33b25dcd                    = 3,
	*f25a53b75e                    = 4,
	*7ee22b3f17                    = 5,
	*44061988e5                    = 6,
	*a9150cd604                    = 7,
	*61ce44143e_MAX                = 8
};


// Enum Engine.*d5be3101a4
enum class E*d5be3101a4 : uint8_t
{
	*551ec2341e                    = 0,
	*6c106af3c3                    = 1,
	*8ba29bf7f9                    = 2,
	*72e0fd2936                    = 3,
	*c671b154e4                    = 4,
	*a2ce6c2eaa                    = 5,
	*d5be3101a4_MAX                = 6
};


// Enum Engine.*74067ee914
enum class E*74067ee914 : uint8_t
{
	*f9339a2e96                    = 0,
	*88c962b579                    = 1,
	*3ee653c5c5                    = 2,
	*1b412766cc                    = 3,
	*74067ee914_MAX                = 4
};


// Enum Engine.*a75ddbdcb4
enum class E*a75ddbdcb4 : uint8_t
{
	*2b831666d9                    = 0,
	*694e08b39b                    = 1,
	*035c13f5ea                    = 2,
	*a1b1a00904                    = 3,
	*27099f4ee3                    = 4,
	*651545c8b0                    = 5,
	*3e1a328270                    = 6,
	*a75ddbdcb4_MAX                = 7
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


// Enum Engine.*7f93f578af
enum class E*7f93f578af : uint8_t
{
	*bf96b58006                    = 0,
	*33f3939df8                    = 1,
	*07862a6b0c                    = 2,
	*5951bafbb7                    = 3,
	*16df2150d4                    = 4,
	*4cf5d05e30                    = 5,
	*7f93f578af_MAX                = 6
};


// Enum Engine.*af111c80d8
enum class E*af111c80d8 : uint8_t
{
	*95f8cd4f0a                    = 0,
	*948057160c                    = 1,
	*0fcc3eb0de                    = 2,
	*517ee41e4c                    = 3,
	*0a0ce6ca0e                    = 4,
	*af111c80d8_MAX                = 5
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


// Enum Engine.*e623bb7079
enum class E*e623bb7079 : uint8_t
{
	*306fc5e2d1                    = 0,
	*b5875d5be0                    = 1,
	*8748799d30                    = 2,
	*e623bb7079_MAX                = 3
};


// Enum Engine.*0915c670af
enum class E*0915c670af : uint8_t
{
	*b88658d518                    = 0,
	*632f384a08                    = 1,
	*f9b9bc0533                    = 2,
	*0915c670af_MAX                = 3
};


// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	Start                          = 0,
	Update                         = 1,
	Stop                           = 2,
	EDynamicForceFeedbackAction_MAX = 3
};


// Enum Engine.*c2b5664584
enum class E*c2b5664584 : uint8_t
{
	*a42e8998f5                    = 0,
	*61f54abc66                    = 1,
	*5a61794757                    = 2,
	*82c9affa61                    = 3,
	*c2b5664584_MAX                = 4
};


// Enum Engine.*a8f2b11e4d
enum class E*a8f2b11e4d : uint8_t
{
	*0230c792da                    = 0,
	*29a8e3178b                    = 1,
	*570c2a2b06                    = 2,
	*e54f0c0f39                    = 3,
	*a8f2b11e4d_MAX                = 4
};


// Enum Engine.*9bd4d4a12d
enum class E*9bd4d4a12d : uint8_t
{
	*561a1e881f                    = 0,
	*4275c6c54c                    = 1,
	*02e77810c1                    = 2,
	*d312d82a53                    = 3,
	*14996e52cb                    = 4,
	*9bd4d4a12d_MAX                = 5
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


// Enum Engine.*905e4d7447
enum class E*905e4d7447 : uint8_t
{
	*1be6e8328b                    = 0,
	*549a90c62f                    = 1,
	*b125a8d747                    = 2,
	*144b3aadd0                    = 3,
	*905e4d7447_MAX                = 4
};


// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	BothWays                       = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ENavLinkDirection_MAX          = 3
};


// Enum Engine.*f8cace28f4
enum class E*f8cace28f4 : uint8_t
{
	*e8417f2116                    = 0,
	*5fe3c1c371                    = 1,
	*9eb5947260                    = 2,
	*f70abed6c6                    = 3,
	*f8cace28f4_MAX                = 4
};


// Enum Engine.*e40ada2079
enum class E*e40ada2079 : uint8_t
{
	*077102d145                    = 0,
	*7361dc7c36                    = 1,
	*756dd3dcb8                    = 2,
	*709a348c95                    = 3,
	*e40ada2079_MAX                = 4
};


// Enum Engine.*e88ebe4e71
enum class E*e88ebe4e71 : uint8_t
{
	*aea6141797                    = 0,
	*116284f6f3                    = 1,
	*1c6f55fc16                    = 2,
	*e88ebe4e71_MAX                = 3
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


// Enum Engine.*3be576457d
enum class E*3be576457d : uint8_t
{
	*1d39b2c119                    = 0,
	*d00eb371cd                    = 1,
	*8c795b252d                    = 2,
	*59f6292642                    = 3,
	*3be576457d_MAX                = 4
};


// Enum Engine.*cdeb0096ae
enum class E*cdeb0096ae : uint8_t
{
	*37eae28d5a                    = 0,
	*019497c5d5                    = 1,
	*e9d882e0ea                    = 2,
	*e9b77a504a                    = 3,
	*de19d9a300                    = 4,
	*08ecad2ce1                    = 5,
	*51e089078d                    = 6,
	*bfba06f9d8                    = 7,
	*a6e1d02616                    = 8,
	*cdeb0096ae_MAX                = 9
};


// Enum Engine.*745389ee76
enum class E*745389ee76 : uint8_t
{
	*68500253a8                    = 0,
	*b14e3e21c0                    = 1,
	*70d8d47892                    = 2,
	*bba7d12674                    = 3,
	*745389ee76_MAX                = 4
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


// Enum Engine.*08131d6363
enum class E*08131d6363 : uint8_t
{
	*d81c23d999                    = 0,
	*db7429a4e8                    = 1,
	*4e9962ab87                    = 2,
	*8341f774fa                    = 3,
	*1903ca059c                    = 4,
	*08131d6363_MAX                = 5
};


// Enum Engine.*415b1569df
enum class E*415b1569df : uint8_t
{
	*2ea322a22e                    = 0,
	*e95d6b3c7d                    = 1,
	*c24e864c42                    = 2,
	*5c52dc4dc8                    = 3,
	*1db737e1d5                    = 4,
	*415b1569df_MAX                = 5
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


// Enum Engine.*4526fc5bdc
enum class E*4526fc5bdc : uint8_t
{
	*f9f1a136c9                    = 0,
	*f7d10db0ad                    = 1,
	*5b9cab2082                    = 2,
	*1259040d35                    = 3,
	*4526fc5bdc_MAX                = 4
};


// Enum Engine.*c3441b36ad
enum class E*c3441b36ad : uint8_t
{
	*4047e50561                    = 0,
	*b4d97d0ab5                    = 1,
	*3b52245c37                    = 2,
	*5902d29dcb                    = 3,
	*c3441b36ad_MAX                = 4
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


// Enum Engine.*96c7a10c31
enum class E*96c7a10c31 : uint8_t
{
	*90ebfa9813                    = 0,
	*2b1be5a63b                    = 1,
	*d91ac0dd90                    = 2,
	*ac46f17c3a                    = 3,
	*96c7a10c31_MAX                = 4
};


// Enum Engine.ESplineDecalActorSelector
enum class ESplineDecalActorSelector : uint8_t
{
	Use                            = 0,
	Use01                          = 1,
	Use02                          = 2,
	Use03                          = 3,
	None                           = 4,
	ESplineDecalActorSelector_MAX  = 5
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


// Enum Engine.*22051bb9e6
enum class E*22051bb9e6 : uint8_t
{
	*22f97738a3                    = 0,
	*7ec5324a75                    = 1,
	*48957ae0da                    = 2,
	*f5990ba1df                    = 3,
	*22051bb9e6_MAX                = 4
};


// Enum Engine.*a6653f0470
enum class E*a6653f0470 : uint8_t
{
	*4edbbe3f0c                    = 0,
	*c17bb1c7e9                    = 1,
	*c16455e9f3                    = 2,
	*5c35618317                    = 3,
	*a85ccab673                    = 4,
	*7b5584318d                    = 5,
	*d9450df5f3                    = 6,
	*60a13f10d6                    = 7,
	*a6653f0470_MAX                = 8
};


// Enum Engine.*24b0880f47
enum class E*24b0880f47 : uint8_t
{
	*f92df97a64                    = 0,
	*60e2ba5417                    = 1,
	*c1e0c6904f                    = 2,
	*686474f101                    = 3,
	*24b0880f47_MAX                = 4
};


// Enum Engine.*161af54ffb
enum class E*161af54ffb : uint8_t
{
	*f5d91edea3                    = 0,
	*f5ed357bf9                    = 1,
	*3e9eb2b652                    = 2,
	*158c9b024d                    = 3,
	*161af54ffb_MAX                = 4
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


// Enum Engine.*ba610db83a
enum class E*ba610db83a : uint8_t
{
	*6c135f2c4b                    = 0,
	*97f9ac7f13                    = 1,
	*fdcfcf0d07                    = 2,
	*ba610db83a_MAX                = 3
};


// Enum Engine.*caf533b21f
enum class E*caf533b21f : uint8_t
{
	*995b8937d1                    = 0,
	*d4e3ab0853                    = 1,
	*98d56fbc0a                    = 2,
	*03f3363219                    = 3,
	*dcff2e8c43                    = 4,
	*caf533b21f_MAX                = 5
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


// Enum Engine.*43fe7caf96
enum class E*43fe7caf96 : uint8_t
{
	*3f51c8cafe                    = 0,
	*04de0d9f3f                    = 1,
	*2453a4a573                    = 2,
	*43fe7caf96_MAX                = 3
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


// Enum Engine.*a4ce977d03
enum class E*a4ce977d03 : uint8_t
{
	*2e6950ebe9                    = 0,
	*b78248a715                    = 1,
	*58a929fbb7                    = 2,
	*a4ce977d03_MAX                = 3
};


// Enum Engine.*fb8f041d9f
enum class E*fb8f041d9f : uint8_t
{
	*f67af9c306                    = 0,
	*f9e1238155                    = 1,
	*6d3770793b                    = 2,
	*f6414af16a                    = 3,
	*fb8f041d9f_MAX                = 4
};


// Enum Engine.*26969143bd
enum class E*26969143bd : uint8_t
{
	*abf95a32b2                    = 0,
	*52d4a03c4e                    = 1,
	*5c8d9dff5b                    = 2,
	*26969143bd_MAX                = 3
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


// Enum Engine.*edf1972e40
enum class E*edf1972e40 : uint8_t
{
	*baf43e2bf0                    = 0,
	*2fda9e84d6                    = 1,
	*ed41bf44ff                    = 2,
	*48669f852a                    = 3,
	*0bd0896eb4                    = 4,
	*ed3b0d86aa                    = 5,
	*9e1f1c1de2                    = 6,
	*ce36836a4f                    = 7,
	*e0a70abe4b                    = 8,
	*9b86b0bfb9                    = 9,
	*56456d01cc                    = 10,
	*edf1972e40_MAX                = 11
};


// Enum Engine.*c5a1bbc96a
enum class E*c5a1bbc96a : uint8_t
{
	*5be60c72e8                    = 0,
	*1e9d0f8eb4                    = 1,
	*934dff668d                    = 2,
	*d02e471db1                    = 3,
	*c5a1bbc96a_MAX                = 4
};


// Enum Engine.*1f875c31f7
enum class E*1f875c31f7 : uint8_t
{
	*869c1eb846                    = 0,
	*ae2bfe56ce                    = 1,
	*5958692c16                    = 2,
	*2422b427aa                    = 3,
	*1f875c31f7_MAX                = 4
};


// Enum Engine.*568f8edf6b
enum class E*568f8edf6b : uint8_t
{
	*043cadc7f5                    = 0,
	*ad9c16810c                    = 1,
	*84de76e501                    = 2,
	*5130c28a09                    = 3,
	*2427acb590                    = 4,
	*422010406c                    = 5,
	*568f8edf6b_MAX                = 6
};


// Enum Engine.*846f696322
enum class E*846f696322 : uint8_t
{
	*f11854e45b                    = 0,
	*dbc500c40a                    = 1,
	*59111a2e7d                    = 2,
	*4879583d7d                    = 3,
	*846f696322_MAX                = 4
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


// Enum Engine.*c59f944071
enum class E*c59f944071 : uint8_t
{
	*75381934d4                    = 0,
	*f5f7ba0526                    = 1,
	*c354bfa5b5                    = 2,
	*48f5642c78                    = 3,
	*cc692a9587                    = 4,
	*c59f944071_MAX                = 5
};


// Enum Engine.*a0185cd48c
enum class E*a0185cd48c : uint8_t
{
	*54a4a1f202                    = 0,
	*c7f716caaa                    = 1,
	*a389bfa14b                    = 2,
	*526b78efe2                    = 3,
	*a0185cd48c_MAX                = 4
};


// Enum Engine.*07c5048c83
enum class E*07c5048c83 : uint8_t
{
	*e760ff8a7f                    = 0,
	*1d1625eda4                    = 1,
	*6295cb567c                    = 2,
	*07c5048c83_MAX                = 3
};


// Enum Engine.*445f22cd3c
enum class E*445f22cd3c : uint8_t
{
	*a67602cd8a                    = 0,
	*e76ea06a46                    = 1,
	*bc7b860b8d                    = 2,
	*1df5a8d381                    = 3,
	*445f22cd3c_MAX                = 4
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


// Enum Engine.*95309e0e1c
enum class E*95309e0e1c : uint8_t
{
	*31857be0dc                    = 0,
	*a44b65b947                    = 1,
	*55014869cb                    = 2,
	*95309e0e1c_MAX                = 3
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


// Enum Engine.*e79ad22844
enum class E*e79ad22844 : uint8_t
{
	*321aafb49e                    = 0,
	*e2e5c821e1                    = 1,
	*8b87d4f01e                    = 2,
	*8dc26b3208                    = 3,
	*e79ad22844_MAX                = 4
};


// Enum Engine.*4fe06f8e8a
enum class E*4fe06f8e8a : uint8_t
{
	*2dcbc6b7c4                    = 0,
	*488d45a11f                    = 1,
	*55b8cf7f71                    = 2,
	*4fe06f8e8a_MAX                = 3
};


// Enum Engine.*382fe96982
enum class E*382fe96982 : uint8_t
{
	*916ff4501a                    = 0,
	*96aed0bd3d                    = 1,
	*7674688437                    = 2,
	*382fe96982_MAX                = 3
};


// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
	MontageLength                  = 0,
	Duration                       = 1,
	EMontagePlayReturnType_MAX     = 2
};


// Enum Engine.*528731e847
enum class E*528731e847 : uint8_t
{
	*f2670547c7                    = 0,
	*e8ef6cea7c                    = 1,
	*1fb5f8c2a4                    = 2,
	*0a81c4b550                    = 3,
	*778e9a717c                    = 4,
	*528731e847_MAX                = 5
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


// Enum Engine.*6f9a5ec99b
enum class E*6f9a5ec99b : uint8_t
{
	*e42d95e5f7                    = 0,
	*6a7cd050ee                    = 1,
	*cf742d87b6                    = 2,
	*062eaf7e62                    = 3,
	*59dffa3738                    = 4,
	*d1655079fe                    = 5,
	*cb9a0fd318                    = 6,
	*6f9a5ec99b_MAX                = 7
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


// Enum Engine.*a2b47b9b66
enum class E*a2b47b9b66 : uint8_t
{
	*8200284c23                    = 0,
	*5a55a2e946                    = 1,
	*b1aff35c60                    = 2,
	*c4cfc9ae5e                    = 3,
	*a2b47b9b66_MAX                = 4
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


// Enum Engine.*b0f1c5aaff
enum class E*b0f1c5aaff : uint8_t
{
	*336eed49ce                    = 0,
	*5a8f425d59                    = 1,
	*1ed37ae9e7                    = 2,
	*b0f1c5aaff_MAX                = 3
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


// Enum Engine.*f9ec62c2a5
enum class E*f9ec62c2a5 : uint8_t
{
	*e618684ea8                    = 0,
	*0691b9b2af                    = 1,
	*e4ef620202                    = 2,
	*f9ec62c2a5_MAX                = 3
};


// Enum Engine.*8c66fa72c1
enum class E*8c66fa72c1 : uint8_t
{
	*e7d660b95e                    = 0,
	*540f471ac6                    = 1,
	*b2c1403c0b                    = 2,
	*916ba56242                    = 3,
	*aecd758c48                    = 4,
	*c1e9e91fc8                    = 5,
	*7e37afeb6d                    = 6,
	*1e6c8c365a                    = 7,
	*8c66fa72c1_MAX                = 8
};


// Enum Engine.*34a34d51d4
enum class E*34a34d51d4 : uint8_t
{
	*2da50dc1e4                    = 0,
	*da95a8c189                    = 1,
	*8f1feecc51                    = 2,
	*fc0f11c67d                    = 3,
	*d9df4e18a2                    = 4,
	*8a5e56fe49                    = 5,
	*34a34d51d4_MAX                = 6
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


// Enum Engine.*851c5dabf8
enum class E*851c5dabf8 : uint8_t
{
	*bdb064a691                    = 0,
	*b77e203f71                    = 1,
	*dd630539d7                    = 2,
	*d7cb171796                    = 3,
	*851c5dabf8_MAX                = 4
};


// Enum Engine.*70a8e5ed8d
enum class E*70a8e5ed8d : uint8_t
{
	*c8704ad9cd                    = 0,
	*f774fe1167                    = 1,
	*ab59e8a3be                    = 2,
	*b0ca24ff9b                    = 3,
	*70a8e5ed8d_MAX                = 4
};


// Enum Engine.*05559c8a7e
enum class E*05559c8a7e : uint8_t
{
	*2e8e7fbaab                    = 0,
	*731a1f726d                    = 1,
	*95c2c96048                    = 2,
	*f6d41365e2                    = 3,
	*021064a524                    = 4,
	*4471717885                    = 5,
	*05559c8a7e_MAX                = 6
};


// Enum Engine.*f5186aba64
enum class E*f5186aba64 : uint8_t
{
	*6564dd88dc                    = 0,
	*8467577046                    = 1,
	*cf661f1f96                    = 2,
	*09768c1bd1                    = 3,
	*c3550bd558                    = 4,
	*6179acf4e6                    = 5,
	*be434f6bff                    = 6,
	*f5186aba64_MAX                = 7
};


// Enum Engine.*13da68dde7
enum class E*13da68dde7 : uint8_t
{
	*19f7064b68                    = 0,
	*fc499f3009                    = 1,
	*479aa6f3ca                    = 2,
	*4fd356de14                    = 3,
	*ba2dc0dff0                    = 4,
	*a10d5c1922                    = 5,
	*13da68dde7_MAX                = 6
};


// Enum Engine.*4d7f770ff7
enum class E*4d7f770ff7 : uint8_t
{
	*6f56c6df2d                    = 0,
	*8ca0ca9aa2                    = 1,
	*c053a77db8                    = 2,
	*7b106200e5                    = 3,
	*4d7f770ff7_MAX                = 4
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


// Enum Engine.*3e5e548864
enum class E*3e5e548864 : uint8_t
{
	*be6281942a                    = 0,
	*3d780eb442                    = 1,
	*88d6520031                    = 2,
	*36d488c7b3                    = 3,
	*3e5e548864_MAX                = 4
};


// Enum Engine.*e05967c57f
enum class E*e05967c57f : uint8_t
{
	*b36c0e5e20                    = 0,
	*f9a1cae91c                    = 1,
	*de736828b3                    = 2,
	*217caaf55b                    = 3,
	*e05967c57f_MAX                = 4
};


// Enum Engine.*315f166416
enum class E*315f166416 : uint8_t
{
	*a181cddf95                    = 0,
	*e6f5fe19eb                    = 1,
	*aa94e09f82                    = 2,
	*87b068d6aa                    = 3,
	*0d413d41a4                    = 4,
	*cd05a1251b                    = 5,
	*cddcf34714                    = 6,
	*315f166416_MAX                = 7
};


// Enum Engine.*c39871e571
enum class E*c39871e571 : uint8_t
{
	*36804c65fa                    = 0,
	*d035432646                    = 1,
	*6867a3a86c                    = 2,
	*1656c8034b                    = 3,
	*321c78f1c8                    = 4,
	*c39871e571_MAX                = 5
};


// Enum Engine.*0c05162d4b
enum class E*0c05162d4b : uint8_t
{
	*b76c1c8c81                    = 0,
	*e9952e2da7                    = 1,
	*084cd82c96                    = 2,
	*47fbf82afe                    = 3,
	*0c05162d4b_MAX                = 4
};


// Enum Engine.*8bed075f3a
enum class E*8bed075f3a : uint8_t
{
	*65e7f546df                    = 0,
	*3b35ed28e2                    = 1,
	*693e0ff872                    = 2,
	*abfac3deb4                    = 3,
	*8bed075f3a_MAX                = 4
};


// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
	Blend                          = 0,
	UseA                           = 1,
	UseB                           = 2,
	EMaterialAttributeBlend_MAX    = 3
};


// Enum Engine.*d4ac699cf3
enum class E*d4ac699cf3 : uint8_t
{
	*1edd322ecd                    = 0,
	*a32d9bdfdd                    = 1,
	*d0d64a9dda                    = 2,
	*b51174b9be                    = 3,
	*d4ac699cf3_MAX                = 4
};


// Enum Engine.*736ec7469d
enum class E*736ec7469d : uint8_t
{
	*0eec35d4b0                    = 0,
	*2d212e515a                    = 1,
	*a65ccbc249                    = 2,
	*1b093c512e                    = 3,
	*5be6a1dea8                    = 4,
	*736ec7469d_MAX                = 5
};


// Enum Engine.*43dceb947e
enum class E*43dceb947e : uint8_t
{
	*6d0674cf47                    = 0,
	*1f4f22c15b                    = 1,
	*1d42937c01                    = 2,
	*9ed8bc47a3                    = 3,
	*54e2242202                    = 4,
	*43dceb947e_MAX                = 5
};


// Enum Engine.*8754b8d3ed
enum class E*8754b8d3ed : uint8_t
{
	*925bc84dcf                    = 0,
	*3e9eea7eae                    = 1,
	*cd84d5d89a                    = 2,
	*1da816e7cd                    = 3,
	*6be4fa6b8f                    = 4,
	*dd3af3f8e4                    = 5,
	*5c8c87be75                    = 6,
	*ca9af08167                    = 7,
	*1df28a5d0e                    = 8,
	*b0bd32929a                    = 9,
	*8754b8d3ed_MAX                = 10
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


// Enum Engine.*f4b2a2bb91
enum class E*f4b2a2bb91 : uint8_t
{
	*0abc38a7f7                    = 0,
	*eaa39b14af                    = 1,
	*22c8c950f9                    = 2,
	*f4b2a2bb91_MAX                = 3
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
	PPI_GIVolumes                  = 30,
	PPI_Thermal                    = 31,
	PPI_MAX                        = 32
};


// Enum Engine.*ba218f6029
enum class E*ba218f6029 : uint8_t
{
	*cd37283c03                    = 0,
	*178598d8f7                    = 1,
	*ef2579db5f                    = 2,
	*02cf79b709                    = 3,
	*ba218f6029_MAX                = 4
};


// Enum Engine.*c79c7d24b1
enum class E*c79c7d24b1 : uint8_t
{
	*05dd54e8b9                    = 0,
	*130d44d745                    = 1,
	*ee0eafed55                    = 2,
	*c79c7d24b1_MAX                = 3
};


// Enum Engine.*d322fc1f75
enum class E*d322fc1f75 : uint8_t
{
	*3b38d7aeb6                    = 0,
	*72c18ee4fd                    = 1,
	*674f5182fd                    = 2,
	*44e34ece3f                    = 3,
	*f6b178c9d8                    = 4,
	*92054bde27                    = 5,
	*4f8c4dfd18                    = 6,
	*c5668b2292                    = 7,
	*d322fc1f75_MAX                = 8
};


// Enum Engine.*f116e6940d
enum class E*f116e6940d : uint8_t
{
	*58efa5fd2e                    = 0,
	*583abf8195                    = 1,
	*4feb5ffce4                    = 2,
	*34e35ce7f4                    = 3,
	*10509fbf25                    = 4,
	*4714450abf                    = 5,
	*f116e6940d_MAX                = 6
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


// Enum Engine.*b3081741a0
enum class E*b3081741a0 : uint8_t
{
	*0aa87a2d0c                    = 0,
	*e2f849560c                    = 1,
	*b96420c5c8                    = 2,
	*afac2916e9                    = 3,
	*ccc7c75174                    = 4,
	*b3081741a0_MAX                = 5
};


// Enum Engine.*764c1c9fe4
enum class E*764c1c9fe4 : uint8_t
{
	*510fc5cfc0                    = 0,
	*a3cec8d020                    = 1,
	*85b427773d                    = 2,
	*a7a8ffa71d                    = 3,
	*ccc81841f3                    = 4,
	*764c1c9fe4_MAX                = 5
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


// Enum Engine.*8678ce427d
enum class E*8678ce427d : uint8_t
{
	*85eb70a02d                    = 0,
	*67eda66b85                    = 1,
	*94d065f2a6                    = 2,
	*aab2c987ec                    = 3,
	*b743f788bf                    = 4,
	*5eebd31bb2                    = 5,
	*8678ce427d_MAX                = 6
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


// Enum Engine.*7edd486270
enum class E*7edd486270 : uint8_t
{
	*1034ff787b                    = 0,
	*cbdfc5c0b6                    = 1,
	*1ff023baeb                    = 2,
	*abd4f01c26                    = 3,
	*899a30d36b                    = 4,
	*10d891156b                    = 5,
	*4406efae13                    = 6,
	*7edd486270_MAX                = 7
};


// Enum Engine.*9a2d774223
enum class E*9a2d774223 : uint8_t
{
	*b942963d1e                    = 0,
	*18848664d8                    = 1,
	*225c457fc1                    = 2,
	*5b460affa7                    = 3,
	*5f0f8ca2d0                    = 4,
	*5539ec6b22                    = 5,
	*2a64229644                    = 6,
	*584862bd4c                    = 7,
	*0e34704697                    = 8,
	*9a2d774223_MAX                = 9
};


// Enum Engine.*5347e83a70
enum class E*5347e83a70 : uint8_t
{
	*2bee3295ca                    = 0,
	*355a3d4c15                    = 1,
	*c15c4e6cb5                    = 2,
	*6562a5883c                    = 3,
	*a27d32a339                    = 4,
	*299e6bb5f4                    = 5,
	*f97e6d848c                    = 6,
	*3e0881de49                    = 7,
	*79aee11521                    = 8,
	*907b327adf                    = 9,
	*ce0a422716                    = 10,
	*c6b7517853                    = 11,
	*b5b65cc25b                    = 12,
	*5347e83a70_MAX                = 13
};


// Enum Engine.*58dcba0f12
enum class E*58dcba0f12 : uint8_t
{
	*5178d15c45                    = 0,
	*627b0993c6                    = 1,
	*99d087c8cc                    = 2,
	*1175c7aea9                    = 3,
	*f22e434787                    = 4,
	*73aab8f7e2                    = 5,
	*58dcba0f12_MAX                = 6
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


// Enum Engine.*226f30655e
enum class E*226f30655e : uint8_t
{
	*fb207666fa                    = 0,
	*9d18a9b109                    = 1,
	*433bc71d1a                    = 2,
	*226f30655e_MAX                = 3
};


// Enum Engine.*bfcd494b20
enum class E*bfcd494b20 : uint8_t
{
	*3ca734dd3c                    = 0,
	*c2ebf94d06                    = 1,
	*0e4b6fd803                    = 2,
	*0bde445b85                    = 3,
	*439f471897                    = 4,
	*7b70fa2478                    = 5,
	*b9b63d33da                    = 6,
	*94b55cf21c                    = 7,
	*bfcd494b20_MAX                = 8
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


// Enum Engine.*3e7b60294c
enum class E*3e7b60294c : uint8_t
{
	*4800b1bde2                    = 0,
	*1fb33efada                    = 1,
	*a3f989acf5                    = 2,
	*3e7b60294c_MAX                = 3
};


// Enum Engine.*7fdadea758
enum class E*7fdadea758 : uint8_t
{
	*16956c9e92                    = 0,
	*abf240b47f                    = 1,
	*613cccf096                    = 2,
	*56bad793c5                    = 3,
	*40a0641a4b                    = 4,
	*43eab852cb                    = 5,
	*181441669e                    = 6,
	*1c29e57636                    = 7,
	*2ed30e870c                    = 8,
	*851434cfe9                    = 9,
	*7fdadea758_MAX                = 10
};


// Enum Engine.*f32a5b7aad
enum class E*f32a5b7aad : uint8_t
{
	*edabf10162                    = 0,
	*f72da79f2a                    = 1,
	*523517c836                    = 2,
	*f32a5b7aad_MAX                = 3
};


// Enum Engine.*f07e73e8f6
enum class E*f07e73e8f6 : uint8_t
{
	*10dcb4e7b6                    = 0,
	*d61cf4d3fa                    = 1,
	*9308577fea                    = 2,
	*c4659accd6                    = 3,
	*344c16ef57                    = 4,
	*f07e73e8f6_MAX                = 5
};


// Enum Engine.*497eca89eb
enum class E*497eca89eb : uint8_t
{
	*00dc60a083                    = 0,
	*d6a6597766                    = 1,
	*67a2bc02e1                    = 2,
	*f10daca7be                    = 3,
	*ef22aa104d                    = 4,
	*3e767270f4                    = 5,
	*497eca89eb_MAX                = 6
};


// Enum Engine.*1ff3467d96
enum class E*1ff3467d96 : uint8_t
{
	*246e611446                    = 0,
	*c983fd2c3f                    = 1,
	*bcd3ae92b0                    = 2,
	*1ff3467d96_MAX                = 3
};


// Enum Engine.*882c1d0690
enum class E*882c1d0690 : uint8_t
{
	*1f4e3e0512                    = 0,
	*ed9ff43fe7                    = 1,
	*0eb44ecf29                    = 2,
	*deafdd3fd7                    = 3,
	*882c1d0690_MAX                = 4
};


// Enum Engine.*f6881b1cf9
enum class E*f6881b1cf9 : uint8_t
{
	*68a4fc99c9                    = 0,
	*4849d77ed0                    = 1,
	*574cbcbcab                    = 2,
	*76e1f3b114                    = 3,
	*1623e5ceba                    = 4,
	*56e60b0474                    = 5,
	*6fa5544517                    = 6,
	*f6881b1cf9_MAX                = 7
};


// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	Bounce                         = 0,
	Stop                           = 1,
	Kill                           = 2,
	EParticleCollisionResponse_MAX = 3
};


// Enum Engine.*9f0cbb649d
enum class E*9f0cbb649d : uint8_t
{
	*ac0cf5df9f                    = 0,
	*6863c4ab4c                    = 1,
	*78fde36944                    = 2,
	*9f0cbb649d_MAX                = 3
};


// Enum Engine.*03abbf09a2
enum class E*03abbf09a2 : uint8_t
{
	*fa61c572ab                    = 0,
	*7af38816a5                    = 1,
	*6c79098177                    = 2,
	*03abbf09a2_MAX                = 3
};


// Enum Engine.*cd3e015365
enum class E*cd3e015365 : uint8_t
{
	*dc674aa119                    = 0,
	*523f415afc                    = 1,
	*c8d176caea                    = 2,
	*cd3e015365_MAX                = 3
};


// Enum Engine.*09888eb08d
enum class E*09888eb08d : uint8_t
{
	*07d77cb733                    = 0,
	*87c35443b7                    = 1,
	*834bc4abbc                    = 2,
	*7a37eb3ee4                    = 3,
	*09888eb08d_MAX                = 4
};


// Enum Engine.*e9e428cbab
enum class E*e9e428cbab : uint8_t
{
	*ce3c591336                    = 0,
	*44a6e9f100                    = 1,
	*b68c09b208                    = 2,
	*e9e428cbab_MAX                = 3
};


// Enum Engine.*409a0fab6d
enum class E*409a0fab6d : uint8_t
{
	*9893a35cd5                    = 0,
	*89a22883a7                    = 1,
	*61416c919f                    = 2,
	*e58b5ccd5c                    = 3,
	*409a0fab6d_MAX                = 4
};


// Enum Engine.*5a2f3fd50b
enum class E*5a2f3fd50b : uint8_t
{
	*a1387e2b0f                    = 0,
	*bc6b025f6c                    = 1,
	*4f010ec8b7                    = 2,
	*3adf2184ef                    = 3,
	*8e75bf6cd0                    = 4,
	*42312a52b5                    = 5,
	*3db5001abc                    = 6,
	*374010e49d                    = 7,
	*9196d9a21f                    = 8,
	*70cef3f68a                    = 9,
	*ba6b88ebaf                    = 10,
	*5a2f3fd50b_MAX                = 11
};


// Enum Engine.*854acef7a7
enum class E*854acef7a7 : uint8_t
{
	*d4bb380a8f                    = 0,
	*4736619d22                    = 1,
	*f0166995fa                    = 2,
	*62a4e19fc1                    = 3,
	*d86f745804                    = 4,
	*2ddae2e166                    = 5,
	*ffa561d11d                    = 6,
	*854acef7a7_MAX                = 7
};


// Enum Engine.*9bd759cd73
enum class E*9bd759cd73 : uint8_t
{
	*3da3170aa9                    = 0,
	*a332205fc1                    = 1,
	*e3c95db261                    = 2,
	*962f01c923                    = 3,
	*aa0fc42b17                    = 4,
	*445fb98d78                    = 5,
	*9bd759cd73_MAX                = 6
};


// Enum Engine.*098c342837
enum class E*098c342837 : uint8_t
{
	*cc7b34a61e                    = 0,
	*07d344ee81                    = 1,
	*9fb51921cd                    = 2,
	*098c342837_MAX                = 3
};


// Enum Engine.*521efad3ed
enum class E*521efad3ed : uint8_t
{
	*7529d80794                    = 0,
	*f292e4aa6e                    = 1,
	*322e4dbe01                    = 2,
	*db9daa74d2                    = 3,
	*521efad3ed_MAX                = 4
};


// Enum Engine.*63528a7303
enum class E*63528a7303 : uint8_t
{
	*f0536cc769                    = 0,
	*12ca409f25                    = 1,
	*40e6acd43c                    = 2,
	*025d6864e2                    = 3,
	*ec45139823                    = 4,
	*73e1fc90bd                    = 5,
	*63528a7303_MAX                = 6
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


// Enum Engine.*5eb756c5ff
enum class E*5eb756c5ff : uint8_t
{
	*0cd06482a5                    = 0,
	*9a084b383f                    = 1,
	*f12c5201fc                    = 2,
	*64a57a5414                    = 3,
	*5eb756c5ff_MAX                = 4
};


// Enum Engine.*ad409cfd01
enum class E*ad409cfd01 : uint8_t
{
	*ae1e1e155f                    = 0,
	*d00952cbc3                    = 1,
	*d9af684a3d                    = 2,
	*891147978b                    = 3,
	*ad409cfd01_MAX                = 4
};


// Enum Engine.*4d1e676e85
enum class E*4d1e676e85 : uint8_t
{
	*6e17e70bc0                    = 0,
	*e9168f8523                    = 1,
	*48f0f88a71                    = 2,
	*ae55e57610                    = 3,
	*4d1e676e85_MAX                = 4
};


// Enum Engine.*9ff798a9b3
enum class E*9ff798a9b3 : uint8_t
{
	*3f8329f6e3                    = 0,
	*11bb95088a                    = 1,
	*587a3886cb                    = 2,
	*0639fad66f                    = 3,
	*882dd5a154                    = 4,
	*adf83e2ff7                    = 5,
	*4d08a64e52                    = 6,
	*a2158c0486                    = 7,
	*dc52b7995b                    = 8,
	*7bce338761                    = 9,
	*0cee989bf8                    = 10,
	*8a36e2e3b1                    = 11,
	*3ccb7a0277                    = 12,
	*dff208b441                    = 13,
	*9ff798a9b3_MAX                = 14
};


// Enum Engine.*97be4e39f3
enum class E*97be4e39f3 : uint8_t
{
	*3da8bafc04                    = 0,
	*8c7042af8f                    = 1,
	*3dbce05ed7                    = 2,
	*75718c718b                    = 3,
	*4f28dce37f                    = 4,
	*314fd25c99                    = 5,
	*97be4e39f3_MAX                = 6
};


// Enum Engine.*f3f17ef5cc
enum class E*f3f17ef5cc : uint8_t
{
	*1e46b13549                    = 0,
	*a34967663b                    = 1,
	*ea54fe13bb                    = 2,
	*ce357b9eae                    = 3,
	*f3f17ef5cc_MAX                = 4
};


// Enum Engine.*f7feca77a7
enum class E*f7feca77a7 : uint8_t
{
	*97909a7799                    = 0,
	*83c34d3898                    = 1,
	*34e67015fd                    = 2,
	*799af9372f                    = 3,
	*f7feca77a7_MAX                = 4
};


// Enum Engine.*b3f3cd2d8b
enum class E*b3f3cd2d8b : uint8_t
{
	*612af5fbff                    = 0,
	*a585a0ec94                    = 1,
	*45292227e6                    = 2,
	*8a09c590c9                    = 3,
	*6e5b9efc8c                    = 4,
	*5d7c220a91                    = 5,
	*f71bc277d0                    = 6,
	*4296367ed0                    = 7,
	*b3f3cd2d8b_MAX                = 8
};


// Enum Engine.*fc25c4b0c9
enum class E*fc25c4b0c9 : uint8_t
{
	*d2957b4445                    = 0,
	*5a615894e0                    = 1,
	*df1570edb3                    = 2,
	*fc25c4b0c9_MAX                = 3
};


// Enum Engine.*eec20f4f03
enum class E*eec20f4f03 : uint8_t
{
	*af7cddeb22                    = 0,
	*37abe5e863                    = 1,
	*5ecd250d6d                    = 2,
	*1af22bacfb                    = 3,
	*4e27fc8d22                    = 4,
	*eec20f4f03_MAX                = 5
};


// Enum Engine.*48dd26f3af
enum class E*48dd26f3af : uint8_t
{
	*99f4a993c8                    = 0,
	*cee7c2e68e                    = 1,
	*3a9f96d7ae                    = 2,
	*48dd26f3af_MAX                = 3
};


// Enum Engine.*e53bc39a94
enum class E*e53bc39a94 : uint8_t
{
	*99e01ad016                    = 0,
	*69b084c3a5                    = 1,
	*4fdda6dc56                    = 2,
	*3f1dd1d7a4                    = 3,
	*e53bc39a94_MAX                = 4
};


// Enum Engine.*1ae837ec11
enum class E*1ae837ec11 : uint8_t
{
	*f8d1aaf42f                    = 0,
	*7f130ee6a5                    = 1,
	*36a668fb19                    = 2,
	*47c64336cf                    = 3,
	*1ae837ec11_MAX                = 4
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


// Enum Engine.*77bc3ffc7f
enum class E*77bc3ffc7f : uint8_t
{
	*a14b5b313b                    = 0,
	*edc7d15e67                    = 1,
	*d8ab330245                    = 2,
	*32ed5b3402                    = 3,
	*77bc3ffc7f_MAX                = 4
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


// Enum Engine.*85952d16cc
enum class E*85952d16cc : uint8_t
{
	*df26d296d8                    = 0,
	*344e7aba85                    = 1,
	*d80e07404d                    = 2,
	*411e3f330d                    = 3,
	*61182ee578                    = 4,
	*8dbc32a21c                    = 5,
	*3e4c9742d9                    = 6,
	*89bbd4d901                    = 7,
	*260df5aaa3                    = 8,
	*85952d16cc_MAX                = 9
};


// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	Speaker                        = 0,
	Controller                     = 1,
	ControllerFallbackToSpeaker    = 2,
	EAudioOutputTarget_MAX         = 3
};


// Enum Engine.*4ef9980ed6
enum class E*4ef9980ed6 : uint8_t
{
	*b7bc7af723                    = 0,
	*2f3b9b5b90                    = 1,
	*6a89853692                    = 2,
	*d141a87f48                    = 3,
	*4ef9980ed6_MAX                = 4
};


// Enum Engine.*f87eb7ddb6
enum class E*f87eb7ddb6 : uint8_t
{
	*e52bb42eca                    = 0,
	*5045f7144b                    = 1,
	*a776fb8785                    = 2,
	*9ad1cb6bf3                    = 3,
	*7929781cec                    = 4,
	*f87eb7ddb6_MAX                = 5
};


// Enum Engine.*8e102d2ee2
enum class E*8e102d2ee2 : uint8_t
{
	*1965949247                    = 0,
	*aa586146fb                    = 1,
	*bb114d05a4                    = 2,
	*8e102d2ee2_MAX                = 3
};


// Enum Engine.EVolumetricDataFormat
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
	EVolumetricDataFormat_MAX      = 11
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


// Enum Engine.*57bf8fd3e2
enum class E*57bf8fd3e2 : uint8_t
{
	*68ab9a1da6                    = 0,
	*894d85c2a1                    = 1,
	*10f58fd0ee                    = 2,
	*57bf8fd3e2_MAX                = 3
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
	StuntEmoteOnVehicle            = 36,
	VehicleJumping                 = 37,
	EmergencyPickupAircraft        = 38,
	CasterAttackByZombieAI         = 39,
	BodyCarry                      = 40,
	UplaodingTeamParkour           = 41,
	CasterStunned                  = 42,
	VehicleFuelFull                = 43,
	CharacterBehaviorNotFound      = 44,
	TeamsPlantedBomb               = 45,
	ECastCancelReason_MAX          = 46
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


// Enum TslGame.ETirePunctureReason
enum class ETirePunctureReason : uint8_t
{
	Shot                           = 0,
	Environment                    = 1,
	Explosion                      = 2,
	PanzerFaustExplosion           = 3,
	SkipFX                         = 4,
	ManualRemoval                  = 5,
	Other                          = 6,
	ETirePunctureReason_MAX        = 7
};


// Enum TslGame.*44d6bea5f5
enum class E*44d6bea5f5 : uint8_t
{
	*90a4e82c1e                    = 0,
	*50932fd330                    = 1,
	*6621a4d675                    = 2,
	*44d6bea5f5_MAX                = 3
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
	DronePackage                   = 11,
	EWeaponAttachmentSlotID_MAX    = 12
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
	PcLiteGlobalAccountJp          = 11,
	ConsoleStadia                  = 12,
	PcEpic                         = 13,
	AI                             = 14,
	Max                            = 15,
	EOutGamePlatformProvider_MAX   = 16
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
	Damage_Explosion_PlantedTimeBomb = 15,
	Damage_Instant_Fall            = 16,
	Damage_Drown                   = 17,
	Damage_BleedOut                = 18,
	Damage_Explosion_JerryCan      = 19,
	Damage_ZombieBuff              = 20,
	Damage_CPPWinExit              = 21,
	Damage_MeleeThrow              = 22,
	Damage_Explosion_C4            = 23,
	Damage_Explosion_StickyBomb    = 24,
	Damage_Explosion_Breach        = 25,
	Damage_Explosion_PanzerFaustWarhead = 26,
	Damage_Explosion_PanzerFaustWarheadVehicleArmorPenetration = 27,
	Damage_Explosion_PanzerFaustBackBlast = 28,
	Damage_Explosion_Mortar        = 29,
	Damage_Explosion_BlackZone     = 30,
	Damage_Explosion_Meteor        = 31,
	Damage_TrainHit                = 32,
	Damage_Explosion_PropaneTank   = 33,
	Damage_LootTruckHit            = 34,
	Damage_Explosion_LootTruck     = 35,
	Damage_ShipHit                 = 36,
	Damage_Lava                    = 37,
	Damage_KillTruckHit            = 38,
	Damage_KillTruckTurret         = 39,
	Damage_HelicopterHit           = 40,
	Damage_Explosion_Aircraft      = 41,
	Damage_BlueZoneGrenade         = 42,
	Damage_FBRMolotov              = 43,
	Damage_DronePackage            = 44,
	Damage_Monster                 = 45,
	Damage_Ability                 = 46,
	Damage_Ability_ChickAttack     = 47,
	Damage_Ability_ChickAttack_Wave = 48,
	Damage_Ability_Jump_Wave       = 49,
	Damage_Ability_FireBreath      = 50,
	Damage_Ability_FeathZone       = 51,
	Damage_Rotor                   = 52,
	Damage_MotorGlider             = 53,
	Damage_Gun_Penetrate_BRDM      = 54,
	Damage_Explosion_GasPump       = 55,
	Damage_Blizzard                = 56,
	Damage_SandStorm               = 57,
	Damage_CableCarHit             = 58,
	Damage_DropStructHit           = 59,
	Damage_Poision                 = 60,
	Damage_ZombieDash              = 61,
	Damage_StunGun                 = 62,
	Damage_EventWeapon             = 63,
	Damage_MAX                     = 64
};


// Enum TslGame.*b703f8cb2d
enum class E*b703f8cb2d : uint8_t
{
	*dd2e86b143                    = 0,
	*60bbbf5830                    = 1,
	*dbabac5eb7                    = 2,
	*b703f8cb2d_MAX                = 3
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


// Enum TslGame.EOPUIMonsterType
enum class EOPUIMonsterType : uint8_t
{
	None                           = 0,
	Chicken                        = 1,
	ZombieTanker                   = 2,
	ZombieC4                       = 3,
	MAX                            = 4,
	EOPUIMonsterType_MAX           = 5
};


// Enum TslGame.EEquipSlotID
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
	EEquipSlotID_MAX               = 22
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
	Thrown_BlueChipDetector        = 12,
	Thrown_Toolbox                 = 13,
	Thrown_CanBomb                 = 14,
	Thrown_SpareTire               = 15,
	Thrown_IntegratedRepairKit     = 16,
	Thrown_PlantedBombKit          = 17,
	Thrown_DefusingBombKit         = 18,
	Thrown_Other                   = 19,
	Thrown_StructFlare             = 20,
	Thrown_MAX                     = 21
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


// Enum TslGame.*47f5806d64
enum class E*47f5806d64 : uint8_t
{
	*daec6d2764                    = 0,
	*9242996ed8                    = 1,
	*2ca489d3ad                    = 2,
	*a4bf5fd0b7                    = 3,
	*e458fc7307                    = 4,
	*653c4523a1                    = 5,
	*ee10f4d03a                    = 6,
	*d20c5be5fe                    = 7,
	*788c750c37                    = 8,
	*47f5806d64_MAX                = 9
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
	BulletproofShield              = 16,
	VehicleSkin                    = 17,
	UnlockDoor                     = 18,
	Custom                         = 19,
	VehicleRepair                  = 20,
	ArmorRepair                    = 21,
	BlueChipTower                  = 22,
	RevivalTransmitter             = 23,
	OpenBox                        = 24,
	PlantedBomb                    = 25,
	DefusingBomb                   = 26,
	BattleReadyKit                 = 27,
	OpenStrongBox                  = 28,
	ECastAnim_MAX                  = 29
};


// Enum TslGame.ECharacterNegativeEffects
enum class ECharacterNegativeEffects : uint8_t
{
	Blind                          = 0,
	Burning                        = 1,
	Stun                           = 2,
	Taser                          = 3,
	Total                          = 4,
	ECharacterNegativeEffects_MAX  = 5
};


// Enum TslGame.ETargetingType
enum class ETargetingType : uint8_t
{
	Targeting_None                 = 0,
	Targeting_Aiming               = 1,
	Targeting_Scoping              = 2,
	Targeting_MAX                  = 3
};


// Enum TslGame.EVoiceInputMode
enum class EVoiceInputMode : uint8_t
{
	OpenMic                        = 0,
	PushToTalk                     = 1,
	Toggle                         = 2,
	Disable                        = 3,
	MAX                            = 4,
	EVoiceInputMode_MAX            = 5
};


// Enum TslGame.*650939aba3
enum class E*650939aba3 : uint8_t
{
	*bca6dd7b3a                    = 0,
	*891da2a8db                    = 1,
	*342d89c7cc                    = 2,
	*cae9324a9c                    = 3,
	*3e06d48a64                    = 4,
	*40d925f1de                    = 5,
	*041b238d59                    = 6,
	*e923db8852                    = 7,
	*650939aba3_MAX                = 8
};


// Enum TslGame.ETslOvercastAction
enum class ETslOvercastAction : uint8_t
{
	Initialized                    = 0,
	Prolonged                      = 1,
	CreateThunder                  = 2,
	ETslOvercastAction_MAX         = 3
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
	LoadMapRequested               = 6,
	EReadyToPlayState_MAX          = 7
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


// Enum TslGame.ERevivalMethod
enum class ERevivalMethod : uint8_t
{
	None                           = 0,
	BluechipTower                  = 1,
	RevivalTransmitter             = 2,
	Cheat                          = 3,
	ERevivalMethod_MAX             = 4
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
	UltronAI                       = 7,
	ScriptBotAI                    = 8,
	MarketAI                       = 9,
	ETslAIPlayerType_MAX           = 10
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
	Assistant                      = 6,
	GroggyCauser                   = 7,
	ESubjectToReport_MAX           = 8
};


// Enum TslGame.EMarketCategoryType
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
	EMarketCategoryType_MAX        = 8
};


// Enum TslGame.EMarketUIEquipCategory
enum class EMarketUIEquipCategory : uint8_t
{
	None                           = 0,
	Helmet                         = 1,
	Vest                           = 2,
	Backpack                       = 3,
	MAX                            = 4,
	EMarketUIEquipCategory_MAX     = 5
};


// Enum TslGame.*402f4ed2df
enum class E*402f4ed2df : uint8_t
{
	*788552bf87                    = 0,
	*a810ff7434                    = 1,
	*565a3ad7e0                    = 2,
	*22fade96a9                    = 3,
	*402f4ed2df_MAX                = 4
};


// Enum TslGame.ECastableItemType
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
	Battery                        = 9,
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
	ECastableItemType_MAX          = 20
};


// Enum TslGame.EItemRequestType
enum class EItemRequestType : uint8_t
{
	None                           = 0,
	Heal                           = 1,
	Ammo                           = 2,
	EItemRequestType_MAX           = 3
};


// Enum TslGame.EPlayerAuthState
enum class EPlayerAuthState : uint8_t
{
	None                           = 0,
	Login                          = 1,
	Logout                         = 2,
	EPlayerAuthState_MAX           = 3
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
	Skin_Throwable                 = 6,
	Skin_MAX                       = 7
};


// Enum TslGame.EBluezoneType
enum class EBluezoneType : uint8_t
{
	Normal                         = 0,
	Fast                           = 1,
	EBluezoneType_MAX              = 2
};


// Enum TslGame.ESpecialZoneAdditionalEffect
enum class ESpecialZoneAdditionalEffect : uint8_t
{
	RemoveFireAndSmoke             = 0,
	DestructDrone                  = 1,
	DeactivateBluezoneBlocker      = 2,
	DeactivateSpotterScope         = 3,
	DeactivateBlueChipDetector     = 4,
	DeactivateBlueChipRevival      = 5,
	DeactivateReticle              = 6,
	DeactivateVehicle              = 7,
	DeactivateElectricObject       = 8,
	ESpecialZoneAdditionalEffect_MAX = 9
};


// Enum TslGame.EWhiteZoneShape
enum class EWhiteZoneShape : uint8_t
{
	None                           = 0,
	Circle                         = 1,
	EWhiteZoneShape_MAX            = 2
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


// Enum TslGame.ETslCharacterType
enum class ETslCharacterType : uint8_t
{
	none                           = 0,
	user                           = 1,
	user_ai                        = 2,
	npc_pillar                     = 3,
	npc_guard                      = 4,
	monster_bear                   = 5,
	monster_chicken                = 6,
	zombie_user                    = 7,
	zombie_ai                      = 8,
	npc_killtruck                  = 9,
	ETslCharacterType_MAX          = 10
};


// Enum TslGame.EAliveNumChangeType
enum class EAliveNumChangeType : uint8_t
{
	None                           = 0,
	Die                            = 1,
	ReviveOrRespawn                = 2,
	EAliveNumChangeType_MAX        = 3
};


// Enum TslGame.EVaultStartType
enum class EVaultStartType : uint8_t
{
	Basic                          = 0,
	AfterUsingAscender             = 1,
	AfterTeamParkourRaising        = 2,
	EVaultStartType_MAX            = 3
};


// Enum TslGame.ESetHealthReason
enum class ESetHealthReason : uint8_t
{
	Undefined                      = 0,
	ByPlayerHeal                   = 1,
	ByPlayerDamage                 = 2,
	ByPassiveRecovery              = 3,
	ByReviveOrDeploy               = 4,
	BySystem                       = 5,
	ESetHealthReason_MAX           = 6
};


// Enum TslGame.ETslMapName
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
	ETslMapName_MAX                = 12
};


// Enum TslGame.FTslHASModeAuraType
enum class EFTslHASModeAuraType : uint8_t
{
	None                           = 0,
	Prop                           = 1,
	Generator                      = 2,
	Character                      = 3,
	FTslHASModeAuraType_MAX        = 4
};


// Enum TslGame.EAscenderSettlePoint
enum class EAscenderSettlePoint : uint8_t
{
	INVALID                        = 0,
	RopeAttachPoint_LOWER          = 1,
	RopeAttachPoint_UPPER          = 2,
	RopeAttachPoint_START          = 3,
	EAscenderSettlePoint_MAX       = 4
};


// Enum TslGame.EAuxilaryIconRequestor
enum class EAuxilaryIconRequestor : uint8_t
{
	None                           = 0,
	Minimap                        = 1,
	OwningWidget                   = 2,
	EAuxilaryIconRequestor_MAX     = 3
};


// Enum TslGame.EAuxilaryIconType
enum class EAuxilaryIconType : uint8_t
{
	Invalid                        = 0,
	Drone                          = 1,
	Drone_Destroyed                = 2,
	Detected_Player                = 3,
	Detected_Player_Above          = 4,
	Detected_Player_Below          = 5,
	EAuxilaryIconType_MAX          = 6
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


// Enum TslGame.*1878765964
enum class E*1878765964 : uint8_t
{
	*75a666eb70                    = 0,
	*e834dabc2f                    = 1,
	*ff602c0766                    = 2,
	*bceb9c50e3                    = 3,
	*1878765964_MAX                = 4
};


// Enum TslGame.*a360180ea7
enum class E*a360180ea7 : uint8_t
{
	*61ac14c19f                    = 0,
	*a3b987ea6d                    = 1,
	*d59b0519f7                    = 2,
	*864f0da5e8                    = 3,
	*147f40ed5c                    = 4,
	*c60aee4c3c                    = 5,
	*2c9ff9fbae                    = 6,
	*65527c021b                    = 7,
	*73e4a5ea7e                    = 8,
	*b29db33ebb                    = 9,
	*4bd4041a26                    = 10,
	*c198a7e011                    = 11,
	*5e61f23cbe                    = 12,
	*cddfebdd69                    = 13,
	*a360180ea7_MAX                = 14
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


// Enum TslGame.*54e172ef17
enum class E*54e172ef17 : uint8_t
{
	*fa2e557cb7                    = 0,
	*acce5f58da                    = 1,
	*b458c0db00                    = 2,
	*732d48898f                    = 3,
	*54e172ef17_MAX                = 4
};


// Enum TslGame.*5a7a65d5b1
enum class E*5a7a65d5b1 : uint8_t
{
	*e0105ca6b0                    = 0,
	*931954fe35                    = 1,
	*e644346db8                    = 2,
	*a09b205088                    = 3,
	*e2664080f9                    = 4,
	*a7ed4032be                    = 5,
	*cc1f8c6efd                    = 6,
	*5a7a65d5b1_MAX                = 7
};


// Enum TslGame.EInteractableActorType
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
	EInteractableActorType_MAX     = 15
};


// Enum TslGame.EInteractInputType
enum class EInteractInputType : uint8_t
{
	None                           = 0,
	MainInteract                   = 1,
	SecondaryInteract              = 2,
	EInteractInputType_MAX         = 3
};


// Enum TslGame.EKickProcess
enum class EKickProcess : uint8_t
{
	Disconnect                     = 0,
	Shutdown                       = 1,
	ShutdownIn10Sec                = 2,
	DuplicatedLogin                = 3,
	EKickProcess_MAX               = 4
};


// Enum TslGame.EDirectMessageType
enum class EDirectMessageType : uint8_t
{
	Radio                          = 0,
	Direct                         = 1,
	DirectReply                    = 2,
	Warning                        = 3,
	System                         = 4,
	EDirectMessageType_MAX         = 5
};


// Enum TslGame.EDirectMessageOutGameType
enum class EDirectMessageOutGameType : uint8_t
{
	Normal                         = 0,
	Preset                         = 1,
	System                         = 2,
	ClanNormal                     = 3,
	ClanSystem                     = 4,
	EDirectMessageOutGameType_MAX  = 5
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
	RecoilModifier                 = 16,
	PlayerAttackDamageModifier     = 17,
	MonsterAttackDamageModifier    = 18,
	ReduceGaugeRatio               = 19,
	DebuffResistance               = 20,
	EBuffPropertyType_MAX          = 21
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
	CableCar                       = 3,
	Escalator                      = 4,
	COUNT                          = 5,
	EMovementBaseType_MAX          = 6
};


// Enum TslGame.*4f0e6c7858
enum class E*4f0e6c7858 : uint8_t
{
	*943206f705                    = 0,
	*115477f86d                    = 1,
	*bd937c0940                    = 2,
	*4f0e6c7858_MAX                = 3
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
	None                           = 2,
	EPrivateTrainingRoomType_MAX   = 3
};


// Enum TslGame.ETeamMateEmoteErrorType
enum class ETeamMateEmoteErrorType : uint8_t
{
	Normal                         = 0,
	ExcessFollower                 = 1,
	ExcessLimitDistance            = 2,
	ETeamMateEmoteErrorType_MAX    = 3
};


// Enum TslGame.EInventoryRadioMessageType
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
	EInventoryRadioMessageType_MAX = 21
};


// Enum TslGame.ERadioMessageInteractionType
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
	ERadioMessageInteractionType_MAX = 8
};


// Enum TslGame.ERadioMessageAlarmSoundCategory
enum class ERadioMessageAlarmSoundCategory : uint8_t
{
	Normal                         = 0,
	Notify                         = 1,
	Warning                        = 2,
	Important                      = 3,
	Invalid                        = 4,
	ERadioMessageAlarmSoundCategory_MAX = 5
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
	Invalid                        = 27,
	ERadioMessageCategory_MAX      = 28
};


// Enum TslGame.ERadioMessageDecorateType
enum class ERadioMessageDecorateType : uint8_t
{
	None                           = 0,
	EnemySpotted                   = 1,
	WorldMapPing                   = 2,
	RewardProvided                 = 3,
	ERadioMessageDecorateType_MAX  = 4
};


// Enum TslGame.*7f20992e9e
enum class E*7f20992e9e : uint8_t
{
	*59a74a0193                    = 0,
	*1457046f79                    = 1,
	*d6b2ece15a                    = 2,
	*a96b6c6e9f                    = 3,
	*7f20992e9e_MAX                = 4
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


// Enum TslGame.*b1f9c002de
enum class E*b1f9c002de : uint8_t
{
	*656ea7b1be                    = 0,
	*aca374edf7                    = 1,
	*1e078d2aee                    = 2,
	*b1f9c002de_MAX                = 3
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
	RETURN_TO_GAME                 = 6,
	EXIT_TO_DESKTOP                = 7,
	GM_COMMAND_INGAME_HELPER       = 8,
	MATCH_LOG                      = 9,
	ESystemMenuButtonType_MAX      = 10
};


// Enum TslGame.*89f4f34a3c
enum class E*89f4f34a3c : uint8_t
{
	*8a8a501ae3                    = 0,
	*e1c35749f9                    = 1,
	*2cc9f8c33f                    = 2,
	*89f4f34a3c_MAX                = 3
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


// Enum TslGame.*f7ee07e22d
enum class E*f7ee07e22d : uint8_t
{
	*23301bd5c0                    = 0,
	*20fcbd9f67                    = 1,
	*09bf557b9b                    = 2,
	*e8e99d3d41                    = 3,
	*379f76a38b                    = 4,
	*2e5433c914                    = 5,
	*e87d33d63c                    = 6,
	*f7ee07e22d_MAX                = 7
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


// Enum TslGame.*9f050c3156
enum class E*9f050c3156 : uint8_t
{
	*6d80e25b75                    = 0,
	*1c21f4dbec                    = 1,
	*022504bb97                    = 2,
	*bc79642edb                    = 3,
	*806dc29f47                    = 4,
	*62d4ec011d                    = 5,
	*991978dc09                    = 6,
	*e3ae9a4612                    = 7,
	*f325827dfa                    = 8,
	*9f050c3156_MAX                = 9
};


// Enum TslGame.EWeatherChange
enum class EWeatherChange : uint8_t
{
	NoChange                       = 0,
	Rainy                          = 1,
	Foggy                          = 2,
	EWeatherChange_MAX             = 3
};


// Enum TslGame.*5d394dfe1a
enum class E*5d394dfe1a : uint8_t
{
	*6c82512e8d                    = 0,
	*6a9f5f4e1f                    = 1,
	*917fe14185                    = 2,
	*93b3fbd0ef                    = 3,
	*3ee5d43e9c                    = 4,
	*226f217129                    = 5,
	*5d394dfe1a_MAX                = 6
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


// Enum TslGame.EServerStatType
enum class EServerStatType : uint8_t
{
	UE                             = 0,
	NET                            = 1,
	FRAMEPRO                       = 2,
	EServerStatType_MAX            = 3
};


// Enum TslGame.*978f33faa8
enum class E*978f33faa8 : uint8_t
{
	*1689cb60bf                    = 0,
	*d450a0cc33                    = 1,
	*e01aa61fdf                    = 2,
	*978f33faa8_MAX                = 3
};


// Enum TslGame.EWeaponStoreItemGroup
enum class EWeaponStoreItemGroup : uint8_t
{
	None                           = 0,
	WeaponGroupA                   = 1,
	WeaponGroupB                   = 2,
	WeaponGroupC                   = 3,
	EWeaponStoreItemGroup_MAX      = 4
};


// Enum TslGame.EStoreItemGroup
enum class EStoreItemGroup : uint8_t
{
	None                           = 0,
	ItemGroupA                     = 1,
	ItemGroupB                     = 2,
	ItemGroupC                     = 3,
	EStoreItemGroup_MAX            = 4
};


// Enum TslGame.EStoreCategory
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
	EStoreCategory_MAX             = 13
};


// Enum TslGame.EMarketLevel
enum class EMarketLevel : uint8_t
{
	None                           = 0,
	GroupA                         = 1,
	GroupB                         = 2,
	GroupC                         = 3,
	GroupD                         = 4,
	EMarketLevel_MAX               = 5
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
	Ghillie                        = 6,
	Backpack                       = 7,
	Eyes                           = 8,
	TorsoArmor                     = 9,
	Hands                          = 10,
	Feet                           = 11,
	Belt                           = 12,
	Face                           = 13,
	EAnimatableCustomizableTypes_MAX = 14
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


// Enum TslGame.ETslApRewardLogicType
enum class ETslApRewardLogicType : uint8_t
{
	None                           = 0,
	Public                         = 1,
	ETslApRewardLogicType_MAX      = 2
};


// Enum TslGame.ETslBpRewardLogicType
enum class ETslBpRewardLogicType : uint8_t
{
	None                           = 0,
	Public                         = 1,
	ScoreBased                     = 2,
	ETslBpRewardLogicType_MAX      = 3
};


// Enum TslGame.ELobbyItemStateFlags
enum class ELobbyItemStateFlags : uint8_t
{
	Default                        = 0,
	Vehicle_DoorOpened             = 1,
	ELobbyItemStateFlags_MAX       = 2
};


// Enum TslGame.ELobbyCustomizingSlotType
enum class ELobbyCustomizingSlotType : uint8_t
{
	None                           = 0,
	VehicleSlot                    = 1,
	WeaponSlot                     = 2,
	ELobbyCustomizingSlotType_MAX  = 3
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


// Enum TslGame.*559236f33c
enum class E*559236f33c : uint8_t
{
	*ab188c4cb4                    = 0,
	*ed9788b7cf                    = 1,
	*1c4b5183a9                    = 2,
	*d4a8effad7                    = 3,
	*0bbfef7b85                    = 4,
	*559236f33c_MAX                = 5
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
	Draw                           = 3,
	ERoundEndPointType_MAX         = 4
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


// Enum TslGame.*d0eb541af9
enum class E*d0eb541af9 : uint8_t
{
	*e7aba3cfe3                    = 0,
	*91c249573c                    = 1,
	*642b8ca436                    = 2,
	*b112902e90                    = 3,
	*1a943f77a5                    = 4,
	*6b549182bb                    = 5,
	*77df035dd1                    = 6,
	*51a01b8735                    = 7,
	*04018749c1                    = 8,
	*9fc5f4a76f                    = 9,
	*d0eb541af9_MAX                = 10
};


// Enum TslGame.*87325c2f84
enum class E*87325c2f84 : uint8_t
{
	*d4237d0dff                    = 0,
	*4ae0a6e05f                    = 1,
	*7ff7ad01a2                    = 2,
	*bb8012f59c                    = 3,
	*87325c2f84_MAX                = 4
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


// Enum TslGame.ETslZiplinegunCancelReason
enum class ETslZiplinegunCancelReason : uint8_t
{
	CutInvalidAngle                = 0,
	CutCollideObject               = 1,
	Withdraw                       = 2,
	WithdrawMissingTarget          = 3,
	ETslZiplinegunCancelReason_MAX = 4
};


// Enum TslGame.ETslZiplinegunState
enum class ETslZiplinegunState : uint8_t
{
	None                           = 0,
	Ready                          = 1,
	Hooked                         = 2,
	Withdraw                       = 3,
	ETslZiplinegunState_MAX        = 4
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


// Enum TslGame.ERepairKitMode
enum class ERepairKitMode : uint8_t
{
	Helmet                         = 0,
	Vest                           = 1,
	None                           = 2,
	ERepairKitMode_MAX             = 3
};


// Enum TslGame.EWeaponAbilityType
enum class EWeaponAbilityType : uint8_t
{
	None                           = 0,
	Digging                        = 1,
	EWeaponAbilityType_MAX         = 2
};


// Enum TslGame.*c6d66bd231
enum class E*c6d66bd231 : uint8_t
{
	*9a2d1a5cb6                    = 0,
	*1602d76f9e                    = 1,
	*60fce30799                    = 2,
	*c6d66bd231_MAX                = 3
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


// Enum TslGame.EWarModeCarePackageKitType
enum class EWarModeCarePackageKitType : uint8_t
{
	CarepackageKit_Off             = 0,
	CarepackageKit_Basic           = 1,
	CarepackageKit_ARKit           = 2,
	CarepackageKit_SRKit           = 3,
	CarepackageKit_MAX             = 4
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


// Enum TslGame.EDuelMatchResult
enum class EDuelMatchResult : uint8_t
{
	Win                            = 0,
	Lose                           = 1,
	EDuelMatchResult_MAX           = 2
};


// Enum TslGame.ELogSendTiming
enum class ELogSendTiming : uint8_t
{
	DuelMatchEnd                   = 0,
	MatchEnd                       = 1,
	ELogSendTiming_MAX             = 2
};


// Enum TslGame.*f892cc43d8
enum class E*f892cc43d8 : uint8_t
{
	*5a4f41a9c7                    = 0,
	*5a035c9ffd                    = 1,
	*f37a8c81cd                    = 2,
	*6eefb5d5f1                    = 3,
	*f892cc43d8_MAX                = 4
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


// Enum TslGame.*197bbf2f64
enum class E*197bbf2f64 : uint8_t
{
	*7e945d5514                    = 0,
	*494e9fd895                    = 1,
	*197bbf2f64_MAX                = 2
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


// Enum TslGame.*86755e5dcb
enum class E*86755e5dcb : uint8_t
{
	*75a2db639e                    = 0,
	*ab6a9d0214                    = 1,
	*0ebdc0d711                    = 2,
	*86755e5dcb_MAX                = 3
};


// Enum TslGame.EReportDetailCauseType
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
	EReportDetailCauseType_MAX     = 8
};


// Enum TslGame.EReportedSessionType
enum class EReportedSessionType : uint8_t
{
	PublicOrCustomGame             = 0,
	Killcam                        = 1,
	Replay                         = 2,
	PublicDuel                     = 3,
	EReportedSessionType_MAX       = 4
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
	InappropriateClanTag           = 8,
	Abusing                        = 9,
	MarketingSpamming              = 10,
	EReportCause_MAX               = 11
};


// Enum TslGame.ItemPackageType
enum class EItemPackageType : uint8_t
{
	None                           = 0,
	RootBox                        = 1,
	CarePackage                    = 2,
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


// Enum TslGame.*d11bcf7be0
enum class E*d11bcf7be0 : uint8_t
{
	*a7916ddae1                    = 0,
	*73a6da9306                    = 1,
	*cf634ca36d                    = 2,
	*a86f55b29e                    = 3,
	*adeba27f23                    = 4,
	*0cc9825855                    = 5,
	*d11bcf7be0_MAX                = 6
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
	ArenaModeEagleEye              = 4,
	EagleEye                       = 5,
	EObserverAuthorityType_MAX     = 6
};


// Enum TslGame.*7c70474fbe
enum class E*7c70474fbe : uint8_t
{
	*02351e4ff4                    = 0,
	*9da97c5624                    = 1,
	*471f48ac4c                    = 2,
	*7c70474fbe_MAX                = 3
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
	HAS                            = 16,
	IntenseBattleRoyale            = 17,
	OverPower                      = 18,
	Bomb                           = 19,
	SLB                            = 20,
	None                           = 21,
	EGameModeType_MAX              = 22
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


// Enum TslGame.*cc525edb3c
enum class E*cc525edb3c : uint8_t
{
	*514da8463f                    = 0,
	*e5ecba0f22                    = 1,
	*1307e0d9b9                    = 2,
	*cc525edb3c_MAX                = 3
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
	EThingSpotGroupType_MAX        = 27
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
	UnlockableItemPackage          = 6,
	Max                            = 7,
	EInventoryListPackageType_MAX  = 8
};


// Enum TslGame.EInventorySlotType
enum class EInventorySlotType : uint8_t
{
	Vicinity                       = 0,
	Inventory                      = 1,
	Crafting                       = 2,
	Shop                           = 3,
	Equipment                      = 4,
	Weapon                         = 5,
	Max                            = 6,
	EInventorySlotType_MAX         = 7
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


// Enum TslGame.EWeaponDisplayTypes
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
	EWeaponDisplayTypes_MAX        = 19
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


// Enum TslGame.*947c19e84e
enum class E*947c19e84e : uint8_t
{
	*90ab0882bd                    = 0,
	*e66e2fefeb                    = 1,
	*0a134cb3bf                    = 2,
	*947c19e84e_MAX                = 3
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


// Enum TslGame.ECustomPartType
enum class ECustomPartType : uint8_t
{
	Vehicle                        = 0,
	ECustomPartType_MAX            = 1
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
	Part                           = 8,
	EItemCategory_MAX              = 9
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


// Enum TslGame.*f5c48dbafe
enum class E*f5c48dbafe : uint8_t
{
	*a9f380b48c                    = 0,
	*a4774d4379                    = 1,
	*11b1740de4                    = 2,
	*f5c48dbafe_MAX                = 3
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


// Enum TslGame.*8d62b2d022
enum class E*8d62b2d022 : uint8_t
{
	*99d29c8ff2                    = 0,
	*3598989f9a                    = 1,
	*dfa4ae532e                    = 2,
	*0d85a70390                    = 3,
	*004882afa2                    = 4,
	*7eb82e87cb                    = 5,
	*7c562819cf                    = 6,
	*b68e66b30b                    = 7,
	*f454d0c002                    = 8,
	*8d62b2d022_MAX                = 9
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


// Enum TslGame.*bf7ee6b68a
enum class E*bf7ee6b68a : uint8_t
{
	*a6c4bb4b3b                    = 0,
	*23570b3765                    = 1,
	*c2a0a1d065                    = 2,
	*bf7ee6b68a_MAX                = 3
};


// Enum TslGame.EBlueZoneInductorState
enum class EBlueZoneInductorState : uint8_t
{
	None                           = 0,
	Banned_SafeZoneRecon_ByModeSetting = 1,
	Banned_SafeZoneFlare_ByModeSetting = 2,
	BannedBy_ModeSetting           = 3,
	Banned_SafeZoneRecon_ByOtherInductor = 4,
	Banned_SafeZoneRecon           = 5,
	Banned_SafeZoneFlare_ByOtherInductor = 6,
	Banned_SafeZoneFlare           = 7,
	BannedBy_OtherInductor         = 8,
	Banned_AnyType                 = 9,
	ActiveBy_SafeZoneRecon         = 10,
	ActiveBy_SafeZoneFlare         = 11,
	ActiveBy_MagneticInductor      = 12,
	ActiveBy_AnyReason             = 13,
	EBlueZoneInductorState_MAX     = 14
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
	Monster                        = 2,
	EMatchStartType_MAX            = 3
};


// Enum TslGame.EGender
enum class EGender : uint8_t
{
	Male                           = 0,
	Female                         = 1,
	EGender_MAX                    = 2
};


// Enum TslGame.EThermalItemType
enum class EThermalItemType : uint8_t
{
	Character                      = 0,
	Vehicle                        = 1,
	Blood                          = 2,
	Fire                           = 3,
	Ghillie                        = 4,
	CountOrNone                    = 5,
	EThermalItemType_MAX           = 6
};


// Enum TslGame.ETslDestructibleObjectType
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
	ETslDestructibleObjectType_MAX = 15
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


// Enum TslGame.ESpecialEquipmentType
enum class ESpecialEquipmentType : uint8_t
{
	Default                        = 0,
	BluezoneBlocker                = 1,
	EmergencyParachute             = 2,
	Toolbox                        = 3,
	TacPack                        = 4,
	TraumaBag                      = 5,
	SoftRole                       = 6,
	ESpecialEquipmentType_MAX      = 7
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


// Enum TslGame.*a7d3aa38a5
enum class E*a7d3aa38a5 : uint8_t
{
	*acf64a406b                    = 0,
	*4726b72bdc                    = 1,
	*7787b44c4c                    = 2,
	*a7d3aa38a5_MAX                = 3
};


// Enum TslGame.*c897ae7748
enum class E*c897ae7748 : uint8_t
{
	*35a6ad84d2                    = 0,
	*74e080979b                    = 1,
	*af7a00aefd                    = 2,
	*f6adce2263                    = 3,
	*a9623bdb72                    = 4,
	*c897ae7748_MAX                = 5
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


// Enum TslGame.ECastLevel
enum class ECastLevel : uint8_t
{
	None                           = 0,
	NoRestriction                  = 1,
	Restriction                    = 2,
	OnlyRotationRestriction        = 3,
	ECastLevel_MAX                 = 4
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
	Default                        = 0,
	Character                      = 1,
	Vehicle                        = 2,
	Wheel                          = 3,
	DestructibleActor              = 4,
	ExplosiveItem                  = 5,
	DummyAI                        = 6,
	EDamageVictimActorType_MAX     = 7
};


// Enum TslGame.EVehicleConvertState
enum class EVehicleConvertState : uint8_t
{
	None                           = 0,
	Play                           = 1,
	Cancel                         = 2,
	Finish                         = 3,
	EVehicleConvertState_MAX       = 4
};


// Enum TslGame.EVehiclePartType
enum class EVehiclePartType : uint8_t
{
	BodyColor                      = 0,
	WheelColor                     = 1,
	BrakeCaliperColor              = 2,
	BoostEffect                    = 3,
	WheelMesh                      = 4,
	PinstripeColor                 = 5,
	Spoiler                        = 6,
	EVehiclePartType_MAX           = 7
};


// Enum TslGame.*03d8e0ed66
enum class E*03d8e0ed66 : uint8_t
{
	*f4a9132814                    = 0,
	*119757d700                    = 1,
	*a65ba9e6e7                    = 2,
	*451512bfbc                    = 3,
	*03d8e0ed66_MAX                = 4
};


// Enum TslGame.*04599cef6b
enum class E*04599cef6b : uint8_t
{
	*62e8c2f823                    = 0,
	*93f6aac89d                    = 1,
	*29230035ba                    = 2,
	*88fc966fca                    = 3,
	*3e99420342                    = 4,
	*0f1690454c                    = 5,
	*f224ecffdb                    = 6,
	*8911b16d9c                    = 7,
	*d186e948b1                    = 8,
	*30514fd780                    = 9,
	*8ba4590c66                    = 10,
	*67b7599994                    = 11,
	*dc7c4f2a9c                    = 12,
	*3dfe6fc76a                    = 13,
	*1fb24f37b1                    = 14,
	*ab06385aa5                    = 15,
	*035d0917da                    = 16,
	*9e72b0ff3b                    = 17,
	*573f8f65af                    = 18,
	*b1165e9d60                    = 19,
	*d7def1bf55                    = 20,
	*f9bc7d91d0                    = 21,
	*799bfec6d4                    = 22,
	*31b40948e0                    = 23,
	*727ffcdaaa                    = 24,
	*5b7189a671                    = 25,
	*9fd0e16e93                    = 26,
	*57921f43df                    = 27,
	*0ef4fff3ee                    = 28,
	*d3905b1a09                    = 29,
	*07cf69c883                    = 30,
	*71ba2cf548                    = 31,
	*4f7aa774f1                    = 32,
	*7848ab6eec                    = 33,
	*9ff217894f                    = 34,
	*d19b816b8e                    = 35,
	*d5648fd895                    = 36,
	*483084434c                    = 37,
	*1f496ae8aa                    = 38,
	*b31614c6f7                    = 39,
	*20c099c2cc                    = 40,
	*5154464349                    = 41,
	*5dbebc214f                    = 42,
	*16ad947a4d                    = 43,
	*d179927679                    = 44,
	*46c778b563                    = 45,
	*ca3631b272                    = 46,
	*592dc09f03                    = 47,
	*1f992ae16f                    = 48,
	*9fc5c4b1e2                    = 49,
	*cadc0f1147                    = 50,
	*d726b0f46d                    = 51,
	*daf91acae9                    = 52,
	*d353cc6a98                    = 53,
	*3a4bede50e                    = 54,
	*04599cef6b_MAX                = 55
};


// Enum TslGame.*42b8b49d78
enum class E*42b8b49d78 : uint8_t
{
	*bc114f8681                    = 0,
	*29815d0f08                    = 1,
	*4c909b8e4e                    = 2,
	*ed06637560                    = 3,
	*42b8b49d78_MAX                = 4
};


// Enum TslGame.ERiderType
enum class ERiderType : uint8_t
{
	Driver                         = 0,
	Passenger                      = 1,
	ERiderType_MAX                 = 2
};


// Enum TslGame.EStatTrakState
enum class EStatTrakState : uint8_t
{
	Run                            = 0,
	Locked                         = 1,
	Error                          = 2,
	EStatTrakState_MAX             = 3
};


// Enum TslGame.*1a49fddd92
enum class E*1a49fddd92 : uint8_t
{
	*d69bc3703e                    = 0,
	*5131692fa0                    = 1,
	*4c0d61b7d1                    = 2,
	*1fca809222                    = 3,
	*682ed592f1                    = 4,
	*1a49fddd92_MAX                = 5
};


// Enum TslGame.ESkinMeshType
enum class ESkinMeshType : uint8_t
{
	SkeletalMesh                   = 0,
	AsyncStaticMesh                = 1,
	StaticMesh                     = 2,
	ESkinMeshType_MAX              = 3
};


// Enum TslGame.EVehicleSkinCategory
enum class EVehicleSkinCategory : uint8_t
{
	None                           = 0,
	FourSeaterSUV                  = 1,
	FourSeaterSedan                = 2,
	TwoSeaterSportsCar             = 3,
	TwoSeaterMotorbike             = 4,
	EVehicleSkinCategory_MAX       = 5
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


// Enum TslGame.*e9d7ccf460
enum class E*e9d7ccf460 : uint8_t
{
	*46f35c029f                    = 0,
	*9571bf91cc                    = 1,
	*fcd57dab28                    = 2,
	*0ccfd4bdab                    = 3,
	*e9d7ccf460_MAX                = 4
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


// Enum TslGame.ECheatType
enum class ECheatType : uint8_t
{
	None                           = 0,
	SpeedHack                      = 1,
	IgnoreWall_Hit                 = 2,
	IgnoreWall_Sight               = 3,
	IgnoreVelocity_Hit             = 4,
	IgnoreVelocity                 = 5,
	IgnoreVelocity2                = 6,
	ItemPackage                    = 7,
	CarePackageMount               = 8,
	Aimbot                         = 9,
	VerifyLagSwitch                = 10,
	InvalidNetConnectionClose      = 11,
	InvalidImpact                  = 12,
	InvalidImpactZ                 = 13,
	InvalidImpact_Gun_C            = 14,
	InvalidOrigin_Gun              = 15,
	InvalidOrigin_Melee            = 16,
	InvalidOrigin_Punch            = 17,
	InvalidOrigin_Throwable        = 18,
	InvalidOrigin_MeleeThrow       = 19,
	InvalidSimStep_MeleeThrow      = 20,
	InvalidRange                   = 21,
	InvalidRange2                  = 22,
	InvalidRange_MeleeThrow        = 23,
	InvalidImpact_Adjusted         = 24,
	InvalidImpactZ_Adjusted        = 25,
	InvalidImpact_Gun_C_Adjusted   = 26,
	InvalidOrigin_Punch_Adjusted   = 27,
	InvalidOrigin_Melee_Adjusted   = 28,
	InvalidOrigin_MeleeThrow_Adjusted = 29,
	InvalidOrigin_Gun_Adjusted     = 30,
	InvalidOrigin_Gun_C_Adjusted   = 31,
	InvalidRange2_Adjusted         = 32,
	InvalidReviving                = 33,
	InvalidKick                    = 34,
	InvalidA0                      = 35,
	InvalidB1                      = 36,
	InvalidB101                    = 37,
	InvalidH0                      = 38,
	InvalidOrigin_Gun_C            = 39,
	InvalidD0                      = 40,
	InvalidS0                      = 41,
	InvalidH1                      = 42,
	InvalidH2                      = 43,
	InvalidH3                      = 44,
	InvalidC0                      = 45,
	InvalidC1                      = 46,
	InvalidC2                      = 47,
	InvalidC3                      = 48,
	InvalidC4                      = 49,
	InvalidC5                      = 50,
	InvalidC6                      = 51,
	InvalidC7                      = 52,
	InvalidT0                      = 53,
	InvalidT1                      = 54,
	InvalidT2                      = 55,
	InvalidAimDir                  = 56,
	InvalidPelletDir               = 57,
	InvalidAmmoSpeed               = 58,
	InvalidAmmoDir                 = 59,
	InvalidCharacterFlag           = 60,
	InvalidCharacterXRay           = 61,
	InvalidPropertyCrc             = 62,
	InvalidWeaponCrc               = 63,
	InvalidWeaponRecoil            = 64,
	InvalidWeaponRecoilMultiplier  = 65,
	InvalidSwayBuffer              = 66,
	InvalidCameraYaw               = 67,
	InvalidWeaponPackageCrc        = 68,
	InvalidWeaponFlag              = 69,
	InvalidHitComponent            = 70,
	InvalidCollisionProfileCrc     = 71,
	InvalidPakListCrc              = 72,
	InvalidCharacterCrc            = 73,
	InvalidHitLocation             = 74,
	InvalidSight                   = 75,
	InvalidBackface                = 76,
	InvalidMovementCurveCrc        = 77,
	InvalidDriverFire              = 78,
	InvalidVehicleOverlap          = 79,
	InvalidViewRotation            = 80,
	InvalidPenetration             = 81,
	InvalidPunchSpeed              = 82,
	InvalidMortarFireInterval      = 83,
	InvalidMortarAllowedShots      = 84,
	InvalidSandboxItemUsage        = 85,
	InvalidItemPickup              = 86,
	CHKSUM_PUNCH                   = 87,
	CHKSUM_MELEE                   = 88,
	CHKSUM_A0                      = 89,
	CHKSUM_T0                      = 90,
	CHKSUM_S0                      = 91,
	CHKSUM_D0                      = 92,
	CHKSUM_V0                      = 93,
	CHKSUM_W0                      = 94,
	CHKSUM_T1                      = 95,
	CHKSUM_D1                      = 96,
	CHKSUM_CD                      = 97,
	CHKSUM_LC                      = 98,
	CHKSUM_P0                      = 99,
	CHKSUM_BP                      = 100,
	CHKSUM_G1                      = 101,
	CHKSUM_H2                      = 102,
	CHKSUM_H3                      = 103,
	CHKSUM_UO                      = 104,
	CHKSUM_UF                      = 105,
	VHC_RI                         = 106,
	VHC_MG_FF                      = 107,
	VHC_MG_FC                      = 108,
	VHC_MG_SW                      = 109,
	VHC_MG_OS                      = 110,
	VHC_MG_BC                      = 111,
	VHC_MG_TC                      = 112,
	VHC_MG_PL                      = 113,
	VHC_MG_HL                      = 114,
	VHC_MG_SD                      = 115,
	VHC_MG_AA                      = 116,
	VHC_MG_AV                      = 117,
	VHC_MG_AD                      = 118,
	VHC_MGB_FF                     = 119,
	VHC_MGB_FC                     = 120,
	VHC_MGB_OS                     = 121,
	VHC_MGB_BC                     = 122,
	VHC_MGB_TC                     = 123,
	VHC_MGB_PL                     = 124,
	VHC_MGB_HL                     = 125,
	VHC_MGB_AA                     = 126,
	VHC_MGB_AV                     = 127,
	VHC_MGB_AD                     = 128,
	VHC_MGF_OS                     = 129,
	VHC_MGF_TC                     = 130,
	VHC_MGF_BC                     = 131,
	VHC_MGF_SD                     = 132,
	VHC_MGF_AA                     = 133,
	VHC_MGF_AV                     = 134,
	VHC_KILL                       = 135,
	VHC_ED                         = 136,
	VHC_SERVERSIMUL                = 137,
	VHC_SIMULATION_ACTIVATE        = 138,
	VHC_SIMULATION_DEACTIVATE      = 139,
	VHC_TRY_BYPASS_SERVERSIMUL     = 140,
	VHC_BYPASSED_SERVERSIMUL       = 141,
	VHC_FORCE_SERVERSIMUL          = 142,
	CK_ACTIVATE                    = 143,
	CK_DEACTIVATE                  = 144,
	AntiCheatKick_WallHack         = 145,
	AntiCheatKick_ESP              = 146,
	AntiCheatKick_SpeedHack1       = 147,
	AntiCheatKick_SpeedHack2       = 148,
	AntiCheatKick_SpeedHack3       = 149,
	AntiCheatKick_PLFC             = 150,
	AntiCheatKick_TCFC             = 151,
	AntiCheatKick_HL               = 152,
	AntiCheatKick_OS               = 153,
	AntiCheatKick_FC               = 154,
	AntiCheatKick_SV               = 155,
	VehicleSimulation_PLFC         = 156,
	VehicleSimulation_TCFC         = 157,
	VehicleSimulation_HL           = 158,
	VehicleSimulation_OS           = 159,
	VehicleSimulation_FC           = 160,
	CC_ACTIVATE                    = 161,
	CC_DEACTIVATE                  = 162,
	CC_FORCE_ERROR_CORRECTION      = 163,
	FLC_ACTIVATE                   = 164,
	FLC_DEACTIVATE                 = 165,
	FallingCorrection              = 166,
	VaultingCorrection             = 167,
	QS_AJ                          = 168,
	QS_VZ                          = 169,
	KGB_AF                         = 170,
	ConsoleInputLog                = 171,
	FireInputLog                   = 172,
	ESPLog                         = 173,
	ESPRatioLog                    = 174,
	IsEnabledAntiESP               = 175,
	HighLocationVehicle            = 176,
	HighLocationBoat               = 177,
	UnderLandscapeBoat             = 178,
	UnderLandscapeCharacter        = 179,
	InsideMeshCharacter            = 180,
	BC_BoatCorrection              = 181,
	HBR_InvalidDashDistance        = 182,
	UNC_ACTIVATE                   = 183,
	UNC_DEACTIVATE                 = 184,
	UncAddUserFail                 = 185,
	UncSetUserInfoFail             = 186,
	UncDeleteUserFail              = 187,
	UncGetCookieFail               = 188,
	UncCookieVerifyFail            = 189,
	UncCookieNotRespond            = 190,
	DESP_SelfInfo                  = 191,
	DESP_SelfInvalidCheckSum       = 192,
	DESP_SelfInvalidCount          = 193,
	DESP_RemoteInfo                = 194,
	DESP_RemoteInvalidCheckSum     = 195,
	HitInSmoke                     = 196,
	BoneFocusedShoot               = 197,
	CenterFocusedShoot             = 198,
	Combination_Undefined          = 199,
	Combination_FlyingCar          = 200,
	Combination_InsideMeshAttack   = 201,
	AbnormalMovementPostVaultSpeed = 202,
	AbnormalMovementPostVaultDistance = 203,
	VaultOverLimitDistance         = 204,
	Vehicle_PhysXDisabled          = 205,
	Vehicle_GravityDisabled        = 206,
	MaxCheatType                   = 207,
	ECheatType_MAX                 = 208
};


// Enum TslGame.ETslCustomMovementMode
enum class ETslCustomMovementMode : uint8_t
{
	Vaulting                       = 0,
	Freefalling                    = 1,
	Parachuting                    = 2,
	UsingAscender                  = 3,
	TeamParkour                    = 4,
	ETslCustomMovementMode_MAX     = 5
};


// Enum TslGame.*ea456f5474
enum class E*ea456f5474 : uint8_t
{
	*00e4eb80ed                    = 0,
	*93f5ac0068                    = 1,
	*28b5b9ec7a                    = 2,
	*49687d026e                    = 3,
	*ea456f5474_MAX                = 4
};


// Enum TslGame.EPreoccupiedTeamType
enum class EPreoccupiedTeamType : uint8_t
{
	NEUTRAL                        = 0,
	RED                            = 1,
	BLUE                           = 2,
	EPreoccupiedTeamType_MAX       = 3
};


// Enum TslGame.*bd9ecc81ee
enum class E*bd9ecc81ee : uint8_t
{
	*81c010f40f                    = 0,
	*4791b5aec1                    = 1,
	*617c1d8196                    = 2,
	*935440482a                    = 3,
	*bd9ecc81ee_MAX                = 4
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


// Enum TslGame.ESpecialZoneState
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
	ESpecialZoneState_MAX          = 9
};


// Enum TslGame.ESpecialZoneType
enum class ESpecialZoneType : uint8_t
{
	None                           = 0,
	Blizzard                       = 1,
	SandStorm                      = 2,
	EMP                            = 3,
	ESpecialZoneType_MAX           = 4
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


// Enum TslGame.EVoiceChannelType
enum class EVoiceChannelType : uint8_t
{
	None                           = 0,
	All                            = 1,
	GlobalOnly                     = 2,
	TeamOnly                       = 3,
	EVoiceChannelType_MAX          = 4
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


// Enum TslGame.ELandingSoundSwitchState
enum class ELandingSoundSwitchState : uint8_t
{
	None                           = 0,
	Light                          = 1,
	Heavy                          = 2,
	VeryHeavy                      = 3,
	ELandingSoundSwitchState_MAX   = 4
};


// Enum TslGame.GamepadHudDataType
enum class EGamepadHudDataType : uint8_t
{
	EFloat                         = 0,
	EBool                          = 1,
	EFString                       = 2,
	GamepadHudDataType_MAX         = 3
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
	SettingAPrevious               = 3,
	SettingAGunset                 = 4,
	ESandboxSpecialButtonType_MAX  = 5
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
	BlueZone                       = 8,
	ESandboxPowerType_MAX          = 9
};


// Enum TslGame.ESandboxSoundType
enum class ESandboxSoundType : uint8_t
{
	None                           = 0,
	ItemSpawnClick                 = 1,
	ItemSpawnSuccess               = 2,
	ESandboxSoundType_MAX          = 3
};


// Enum TslGame.ESandboxValidateItemResult
enum class ESandboxValidateItemResult : uint8_t
{
	Success                        = 0,
	Invalid_Item_IdMismatch        = 1,
	Invalid_Item_RequestParamMismatch = 2,
	Invalid_Power_Training         = 3,
	Invalid_Vehicle_Training       = 4,
	ESandboxValidateItemResult_MAX = 5
};


// Enum TslGame.*5774b2aef7
enum class E*5774b2aef7 : uint8_t
{
	*155fd634f4                    = 0,
	*39566ff070                    = 1,
	*92455f0c80                    = 2,
	*573efdd425                    = 3,
	*945c2913dd                    = 4,
	*5774b2aef7_MAX                = 5
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


// Enum TslGame.*ec5b6a8840
enum class E*ec5b6a8840 : uint8_t
{
	*410d1f037a                    = 0,
	*a862ddcff1                    = 1,
	*6ad1fad2d8                    = 2,
	*e9de86e84c                    = 3,
	*0668fb20d6                    = 4,
	*5461428713                    = 5,
	*1a113fc5e0                    = 6,
	*ec5b6a8840_MAX                = 7
};


// Enum TslGame.ECurrentSoundState
enum class ECurrentSoundState : uint8_t
{
	None                           = 0,
	MovingUp                       = 1,
	MovingUpSprinting              = 2,
	MovingDown                     = 3,
	MovingDownSprinting            = 4,
	Stopping                       = 5,
	ECurrentSoundState_MAX         = 6
};


// Enum TslGame.*c2b3b56540
enum class E*c2b3b56540 : uint8_t
{
	*1a66b4655d                    = 0,
	*26a6732060                    = 1,
	*f3d631f63b                    = 2,
	*c2b3b56540_MAX                = 3
};


// Enum TslGame.*962bc92237
enum class E*962bc92237 : uint8_t
{
	*50eb396ba6                    = 0,
	*cce03f19d7                    = 1,
	*d3b1de9873                    = 2,
	*a12bf1d37e                    = 3,
	*962bc92237_MAX                = 4
};


// Enum TslGame.EAscenderDirection
enum class EAscenderDirection : uint8_t
{
	RopeForward                    = 0,
	RopeBackward                   = 1,
	MAX                            = 2,
	EAscenderDirection_MAX         = 3
};


// Enum TslGame.EAscenderRopeSubType
enum class EAscenderRopeSubType : uint8_t
{
	None                           = 0,
	Ziplinegun                     = 1,
	EAscenderRopeSubType_MAX       = 2
};


// Enum TslGame.EAscenderRopeType
enum class EAscenderRopeType : uint8_t
{
	None                           = 0,
	AscenderRope                   = 1,
	AscenderZipline                = 2,
	EAscenderRopeType_MAX          = 3
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
	Group                          = 2,
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
	IsInBluezone                   = 3,
	IsBeingHealed                  = 4,
	IsSelfHemostasis               = 5,
	ECharFlagsNormal_MAX           = 6
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
	ECharFlagsSkipOwner_MAX        = 21
};


// Enum TslGame.*0cf1e0f7d7
enum class E*0cf1e0f7d7 : uint8_t
{
	*9e854fba81                    = 0,
	*f5d51369b8                    = 1,
	*4ca3f00dd4                    = 2,
	*0cf1e0f7d7_MAX                = 3
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


// Enum TslGame.ERaycastDirection
enum class ERaycastDirection : uint8_t
{
	Forward                        = 0,
	Down_45_Degrees                = 1,
	Down                           = 2,
	ERaycastDirection_MAX          = 3
};


// Enum TslGame.*ce63be8eb9
enum class E*ce63be8eb9 : uint8_t
{
	*11c4f3e7fc                    = 0,
	*4f3fe9fe86                    = 1,
	*3db257707f                    = 2,
	*f317b583c8                    = 3,
	*0ddc158a0b                    = 4,
	*598477231f                    = 5,
	*b4d71da390                    = 6,
	*ce63be8eb9_MAX                = 7
};


// Enum TslGame.*08a1bd0a5b
enum class E*08a1bd0a5b : uint8_t
{
	*6eb8abbf2e                    = 0,
	*84bf44b346                    = 1,
	*eb9a2cdfbf                    = 2,
	*249d1effdf                    = 3,
	*18b31412f6                    = 4,
	*08a1bd0a5b_MAX                = 5
};


// Enum TslGame.*ceb327b266
enum class E*ceb327b266 : uint8_t
{
	*d2fbcb951c                    = 0,
	*4b68a2f055                    = 1,
	*c05dbd5798                    = 2,
	*1b871018c4                    = 3,
	*ceb327b266_MAX                = 4
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


// Enum TslGame.*69ccacc84a
enum class E*69ccacc84a : uint8_t
{
	*18b1e8e0a0                    = 0,
	*984e7e3b89                    = 1,
	*a3df17c64a                    = 2,
	*8b3f1df7fc                    = 3,
	*f043a0e14d                    = 4,
	*69ccacc84a_MAX                = 5
};


// Enum TslGame.*d5e5b95d9d
enum class E*d5e5b95d9d : uint8_t
{
	*e5f48b62d7                    = 0,
	*e4b1cb278b                    = 1,
	*26ad8e6af7                    = 2,
	*d5e5b95d9d_MAX                = 3
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


// Enum TslGame.*a462a58403
enum class E*a462a58403 : uint8_t
{
	*6a6b36de0a                    = 0,
	*36e2db5eca                    = 1,
	*0e9649a59d                    = 2,
	*e4ec7e7771                    = 3,
	*6af565bfdb                    = 4,
	*a7cb9d0527                    = 5,
	*2561823ea3                    = 6,
	*d4296b915e                    = 7,
	*a462a58403_MAX                = 8
};


// Enum TslGame.*4b3994178c
enum class E*4b3994178c : uint8_t
{
	*8dfcaeab11                    = 0,
	*9625d361cd                    = 1,
	*4e2b55d8d8                    = 2,
	*ad25caeab2                    = 3,
	*e7b1c13636                    = 4,
	*4b3994178c_MAX                = 5
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


// Enum TslGame.*88d0d212c4
enum class E*88d0d212c4 : uint8_t
{
	*e3f8237289                    = 0,
	*8d6c984eaa                    = 1,
	*46003c76d1                    = 2,
	*88d0d212c4_MAX                = 3
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


// Enum TslGame.EMasteryItemType
enum class EMasteryItemType : uint8_t
{
	Charm                          = 0,
	Mesh                           = 1,
	EMasteryItemType_MAX           = 2
};


// Enum TslGame.TableType
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
	TableType_MAX                  = 15
};


// Enum TslGame.EWeaponReloadMethod
enum class EWeaponReloadMethod : uint8_t
{
	Magazine                       = 0,
	OneByOne                       = 1,
	OneByOneAndClip                = 2,
	EWeaponReloadMethod_MAX        = 3
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
	VehicleMoving                  = 6,
	EWeaponReloadCancelReason_MAX  = 7
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


// Enum TslGame.EWeaponTransitionState
enum class EWeaponTransitionState : uint8_t
{
	Stable                         = 0,
	Arming                         = 1,
	UnArming                       = 2,
	EWeaponTransitionState_MAX     = 3
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


// Enum TslGame.EBombGameJoinType
enum class EBombGameJoinType : uint8_t
{
	Normal                         = 0,
	IntrusionStart                 = 1,
	IntrusionFinish                = 2,
	EBombGameJoinType_MAX          = 3
};


// Enum TslGame.EBombGameAreaType
enum class EBombGameAreaType : uint8_t
{
	None                           = 0,
	StartArea                      = 1,
	PlantedASite                   = 2,
	PlantedBSite                   = 3,
	NormalArea                     = 4,
	EBombGameAreaType_MAX          = 5
};


// Enum TslGame.EBombItemCategory
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
	EBombItemCategory_MAX          = 10
};


// Enum TslGame.EBombTeamStateInfoType
enum class EBombTeamStateInfoType : uint8_t
{
	MoveASite                      = 0,
	MoveBSite                      = 1,
	SaveMoney                      = 2,
	GiveMoney                      = 3,
	Rush                           = 4,
	SaveMe                         = 5,
	MAX                            = 6,
	EBombTeamStateInfoType_MAX     = 7
};


// Enum TslGame.ECoinTakeType
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
	ECoinTakeType_MAX              = 18
};


// Enum TslGame.EBombModeSoundType
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
	EBombModeSoundType_MAX         = 13
};


// Enum TslGame.ETimeBombPhaseType
enum class ETimeBombPhaseType : uint8_t
{
	Unknown                        = 0,
	Planting_Phase1                = 1,
	Planting_Phase2                = 2,
	Planting_Phase3                = 3,
	Explosion                      = 4,
	Defusing                       = 5,
	ETimeBombPhaseType_MAX         = 6
};


// Enum TslGame.ETslBombMatchWinType
enum class ETslBombMatchWinType : uint8_t
{
	Draw                           = 0,
	ExceedRoundWin                 = 1,
	ExceedUseBombKit               = 2,
	ExceedKillCount                = 3,
	EnemyAllLogout                 = 4,
	ETslBombMatchWinType_MAX       = 5
};


// Enum TslGame.*bb1d69cbbd
enum class E*bb1d69cbbd : uint8_t
{
	*c68c85a0b3                    = 0,
	*4f9de49ad5                    = 1,
	*dc86d6bbc5                    = 2,
	*fd8c922551                    = 3,
	*51f8d7b167                    = 4,
	*bb1d69cbbd_MAX                = 5
};


// Enum TslGame.ETslBombPlantedState
enum class ETslBombPlantedState : uint8_t
{
	NotSet                         = 0,
	Planting                       = 1,
	Planted                        = 2,
	Defused                        = 3,
	Exploded                       = 4,
	ETslBombPlantedState_MAX       = 5
};


// Enum TslGame.ETslBombRoundInProgressState
enum class ETslBombRoundInProgressState : uint8_t
{
	Invalid                        = 0,
	TeamDecision                   = 1,
	Preparing                      = 2,
	Playing                        = 3,
	Ending                         = 4,
	ETslBombRoundInProgressState_MAX = 5
};


// Enum TslGame.EBombKeyNotifyState
enum class EBombKeyNotifyState : uint8_t
{
	None                           = 0,
	InStartArea                    = 1,
	DefenseTeam                    = 2,
	AttackTeam                     = 3,
	HoldBombPlantingKit            = 4,
	EBombKeyNotifyState_MAX        = 5
};


// Enum TslGame.EBombRoundAttribute
enum class EBombRoundAttribute : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	OverTime                       = 2,
	TeamRoleChanged                = 3,
	EBombRoundAttribute_MAX        = 4
};


// Enum TslGame.EBombRoundResultConditionType
enum class EBombRoundResultConditionType : uint8_t
{
	None                           = 0,
	Excellent                      = 1,
	Impressive                     = 2,
	Overwhelming                   = 3,
	Perfect                        = 4,
	Thrifty                        = 5,
	MAX                            = 6,
	EBombRoundResultConditionType_MAX = 7
};


// Enum TslGame.ETslBombRoundResultHistoryType
enum class ETslBombRoundResultHistoryType : uint8_t
{
	None                           = 0,
	TimeUp                         = 1,
	BombExploded                   = 2,
	BombDefused                    = 3,
	TeamElimination                = 4,
	TeamGameLogout                 = 5,
	ETslBombRoundResultHistoryType_MAX = 6
};


// Enum TslGame.EBombUITeamStatusType
enum class EBombUITeamStatusType : uint8_t
{
	None                           = 0,
	Attack                         = 1,
	Defence                        = 2,
	MAX                            = 3,
	EBombUITeamStatusType_MAX      = 4
};


// Enum TslGame.EBombScopeInfo
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
	EBombScopeInfo_MAX             = 10
};


// Enum TslGame.ETslBombKDAMType
enum class ETslBombKDAMType : uint8_t
{
	Kill                           = 0,
	Death                          = 1,
	Assist                         = 2,
	MissionInstallBomb             = 3,
	MissionDefuseBomb              = 4,
	ETslBombKDAMType_MAX           = 5
};


// Enum TslGame.ETslBombTeamRole
enum class ETslBombTeamRole : uint8_t
{
	None                           = 0,
	AttackTeam                     = 1,
	DefenseTeam                    = 2,
	ROLE_MAX                       = 3,
	ETslBombTeamRole_MAX           = 4
};


// Enum TslGame.EHealingItemType
enum class EHealingItemType : uint8_t
{
	HealItem                       = 0,
	BoostItem                      = 1,
	EHealingItemType_MAX           = 2
};


// Enum TslGame.EItemPickupFailReason
enum class EItemPickupFailReason : uint8_t
{
	None                           = 0,
	ItemIsInvalid                  = 1,
	ShouldHaveItemIsFalse          = 2,
	PickUpItemFinish_UltronFail    = 3,
	NotEnoughSpace                 = 4,
	EItemPickupFailReason_MAX      = 5
};


// Enum TslGame.EItemPickupInfo
enum class EItemPickupInfo : uint8_t
{
	None                           = 0,
	RealLooting                    = 1,
	BluezonePhyase                 = 2,
	FakeLooting                    = 3,
	AfterAllLooting                = 4,
	CheckWeaponTask                = 5,
	Test                           = 6,
	EItemPickupInfo_MAX            = 7
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
	Heaven                         = 8,
	Kiki                           = 9,
	Other                          = 10,
	EAIMapName_MAX                 = 11
};


// Enum TslGame.ETeamModeType
enum class ETeamModeType : uint8_t
{
	Solo                           = 0,
	Duo                            = 1,
	Squad                          = 2,
	ETeamModeType_MAX              = 3
};


// Enum TslGame.*4f123574d2
enum class E*4f123574d2 : uint8_t
{
	*fbeb4d1c75                    = 0,
	*553f2e01f3                    = 1,
	*d4d10216bf                    = 2,
	*52d1f3b78e                    = 3,
	*639f53a728                    = 4,
	*073d5f9f8e                    = 5,
	*4f123574d2_MAX                = 6
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


// Enum TslGame.EPatrolSpeed
enum class EPatrolSpeed : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	EPatrolSpeed_MAX               = 3
};


// Enum TslGame.*f3ab80e333
enum class E*f3ab80e333 : uint8_t
{
	*f9dde01522                    = 0,
	*13aa7fb5d6                    = 1,
	*5fefc27441                    = 2,
	*912563e453                    = 3,
	*f3ab80e333_MAX                = 4
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
	EThownWeapon_MAX               = 4
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


// Enum TslGame.*3931a4c07e
enum class E*3931a4c07e : uint8_t
{
	*4197e430d5                    = 0,
	*2e9526e5b6                    = 1,
	*e697fa5fed                    = 2,
	*65431ff735                    = 3,
	*0f291ced93                    = 4,
	*3931a4c07e_MAX                = 5
};


// Enum TslGame.EFightMovingType
enum class EFightMovingType : uint8_t
{
	FM_Target                      = 0,
	FM_TargetPos                   = 1,
	FM_RandomPos                   = 2,
	FM_Max                         = 3
};


// Enum TslGame.EMonsterPatrol
enum class EMonsterPatrol : uint8_t
{
	Patrol_BackDomain              = 0,
	Patrol_Flee                    = 1,
	Patrol_RunawayHouse            = 2,
	Patrol_SpawnSpot               = 3,
	Patrol_Hearing                 = 4,
	Patrol_Random                  = 5,
	Patrol_Max                     = 6
};


// Enum TslGame.*6aa86e686f
enum class E*6aa86e686f : uint8_t
{
	*060939ff95                    = 0,
	*bbab2b6be3                    = 1,
	*ef2b027b54                    = 2,
	*e53c293802                    = 3,
	*77895ab6c9                    = 4,
	*6aa86e686f_MAX                = 5
};


// Enum TslGame.*3ea0222386
enum class E*3ea0222386 : uint8_t
{
	*9a08391dbd                    = 0,
	*39dbcf5dc4                    = 1,
	*362675523c                    = 2,
	*c359c5a88c                    = 3,
	*ac44b1b115                    = 4,
	*3ea0222386_MAX                = 5
};


// Enum TslGame.*28442f454d
enum class E*28442f454d : uint8_t
{
	*93acc4453d                    = 0,
	*19d27f1b46                    = 1,
	*ea44805d8d                    = 2,
	*a811ccbbe0                    = 3,
	*28442f454d_MAX                = 4
};


// Enum TslGame.EReactionObjectType
enum class EReactionObjectType : uint8_t
{
	Fence                          = 0,
	Hay                            = 1,
	Camera                         = 2,
	Bamboo                         = 3,
	BirdCage                       = 4,
	LandscapeReacting              = 5,
	EReactionObjectType_MAX        = 6
};


// Enum TslGame.*8598753562
enum class E*8598753562 : uint8_t
{
	*00475a7c17                    = 0,
	*cc59bf3fe7                    = 1,
	*9bf3c67e8d                    = 2,
	*12f8853f8c                    = 3,
	*8598753562_MAX                = 4
};


// Enum TslGame.ECraftResult
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
	ECraftResult_MAX               = 12
};


// Enum TslGame.*4872b4b2d8
enum class E*4872b4b2d8 : uint8_t
{
	*68aae89615                    = 0,
	*845d10c280                    = 1,
	*12598fa883                    = 2,
	*cba4659195                    = 3,
	*44357e2092                    = 4,
	*737984b4c8                    = 5,
	*f333c7f760                    = 6,
	*4872b4b2d8_MAX                = 7
};


// Enum TslGame.ECustomCarepackageState
enum class ECustomCarepackageState : uint8_t
{
	Transporting                   = 0,
	Falling                        = 1,
	Landing                        = 2,
	ECustomCarepackageState_MAX    = 3
};


// Enum TslGame.*996727a83b
enum class E*996727a83b : uint8_t
{
	*2a914cefcb                    = 0,
	*56e569d611                    = 1,
	*9a4a66f287                    = 2,
	*c1ac7f5244                    = 3,
	*75cc56fcb6                    = 4,
	*fde09b6586                    = 5,
	*580a865915                    = 6,
	*c8b58fc2f2                    = 7,
	*9f13f26334                    = 8,
	*97861d508a                    = 9,
	*5f67c3d820                    = 10,
	*4018dab98f                    = 11,
	*5bd722f052                    = 12,
	*996727a83b_MAX                = 13
};


// Enum TslGame.EReplayTimelineMode
enum class EReplayTimelineMode : uint8_t
{
	ReplayPlay                     = 0,
	ReplayEditor                   = 1,
	ReplayRender                   = 2,
	EReplayTimelineMode_MAX        = 3
};


// Enum TslGame.*da8915b8f0
enum class E*da8915b8f0 : uint8_t
{
	*d5d94a71f9                    = 0,
	*0f871a112b                    = 1,
	*37c181a8a3                    = 2,
	*aa049ab590                    = 3,
	*aeccd00630                    = 4,
	*da8915b8f0_MAX                = 5
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


// Enum TslGame.ETslWeatherAction
enum class ETslWeatherAction : uint8_t
{
	NotDefined                     = 0,
	Initialized                    = 1,
	Prolonged                      = 2,
	ETslWeatherAction_MAX          = 3
};


// Enum TslGame.EGameStartupTimeRecordType
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
	EGameStartupTimeRecordType_MAX = 10
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


// Enum TslGame.eDESPMode
enum class EeDESPMode : uint8_t
{
	None                           = 0,
	UniformDivision                = 1,
	RadiusFromCenter               = 2,
	eDESPMode_MAX                  = 3
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


// Enum TslGame.EFExplosivePropDataType
enum class EFExplosivePropDataType : uint8_t
{
	Default                        = 0,
	PropaneTank                    = 1,
	SmallTank                      = 2,
	RacingExplosive                = 3,
	GasPump                        = 4,
	EVCharger                      = 5,
	EFExplosivePropDataType_MAX    = 6
};


// Enum TslGame.*c4d6362bc0
enum class E*c4d6362bc0 : uint8_t
{
	*878e431cda                    = 0,
	*fd3ae757c3                    = 1,
	*d3ba4591ca                    = 2,
	*dec963d14f                    = 3,
	*c4d6362bc0_MAX                = 4
};


// Enum TslGame.ECharacterInteractBehaviorType
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
	ECharacterInteractBehaviorType_MAX = 10
};


// Enum TslGame.EInteractionPhase
enum class EInteractionPhase : uint8_t
{
	First                          = 0,
	Second                         = 1,
	EInteractionPhase_MAX          = 2
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


// Enum TslGame.*15ce423516
enum class E*15ce423516 : uint8_t
{
	*4fe63ac11c                    = 0,
	*e7e6096f1e                    = 1,
	*cd4d6e2566                    = 2,
	*579f9f7fd7                    = 3,
	*cbacd339f0                    = 4,
	*15ce423516_MAX                = 5
};


// Enum TslGame.EMarketShopUINotifyType
enum class EMarketShopUINotifyType : uint8_t
{
	None                           = 0,
	InsufficientSpace              = 1,
	Sold                           = 2,
	Obtained                       = 3,
	MAX                            = 4,
	EMarketShopUINotifyType_MAX    = 5
};


// Enum TslGame.EMarketUITuningPhase
enum class EMarketUITuningPhase : uint8_t
{
	None                           = 0,
	init                           = 1,
	PlayingAnim                    = 2,
	Done                           = 3,
	Empty                          = 4,
	NotEnoughCoin                  = 5,
	MAX                            = 6,
	EMarketUITuningPhase_MAX       = 7
};


// Enum TslGame.EMarketUIRandomPhase
enum class EMarketUIRandomPhase : uint8_t
{
	None                           = 0,
	Reset                          = 1,
	PlayingAnim                    = 2,
	Result                         = 3,
	MAX                            = 4,
	EMarketUIRandomPhase_MAX       = 5
};


// Enum TslGame.*cf46db7228
enum class E*cf46db7228 : uint8_t
{
	*7c1d2eeccc                    = 0,
	*b7d96dd68f                    = 1,
	*ad74205d87                    = 2,
	*cfd52b615d                    = 3,
	*cf46db7228_MAX                = 4
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
	ENpcCharacterStateType_MAX     = 23
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


// Enum TslGame.EPathDebugType
enum class EPathDebugType : uint8_t
{
	None                           = 0,
	Location                       = 1,
	SelectNpc                      = 2,
	EPathDebugType_MAX             = 3
};


// Enum TslGame.*bbb345efaa
enum class E*bbb345efaa : uint8_t
{
	*d912032b8a                    = 0,
	*ec93bd5158                    = 1,
	*b0e2333234                    = 2,
	*be06c0340e                    = 3,
	*9595141163                    = 4,
	*bbb345efaa_MAX                = 5
};


// Enum TslGame.*cc6ea2ae2f
enum class E*cc6ea2ae2f : uint8_t
{
	*94b8bf94be                    = 0,
	*1de3366dab                    = 1,
	*6e3192db1f                    = 2,
	*f20409cc57                    = 3,
	*cc6ea2ae2f_MAX                = 4
};


// Enum TslGame.*c068c10fab
enum class E*c068c10fab : uint8_t
{
	*86744c4e1a                    = 0,
	*1f069af30c                    = 1,
	*058e6c0d8c                    = 2,
	*2f9da874c7                    = 3,
	*c068c10fab_MAX                = 4
};


// Enum TslGame.*1f03aa8187
enum class E*1f03aa8187 : uint8_t
{
	*557fc77b38                    = 0,
	*736d620242                    = 1,
	*ead36024aa                    = 2,
	*2b83262f6d                    = 3,
	*1f03aa8187_MAX                = 4
};


// Enum TslGame.*c0c414a513
enum class E*c0c414a513 : uint8_t
{
	*30075c4b29                    = 0,
	*0ca7f19c4f                    = 1,
	*b81fe5ce38                    = 2,
	*86687bc7db                    = 3,
	*c0c414a513_MAX                = 4
};


// Enum TslGame.*651cd3692c
enum class E*651cd3692c : uint8_t
{
	*a87bcc7d01                    = 0,
	*113a14eeb2                    = 1,
	*8838e00a22                    = 2,
	*3059226d99                    = 3,
	*651cd3692c_MAX                = 4
};


// Enum TslGame.ETargetInteractionPurpose
enum class ETargetInteractionPurpose : uint8_t
{
	Move                           = 0,
	Reset                          = 1,
	ETargetInteractionPurpose_MAX  = 2
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


// Enum TslGame.ESpareTireProcessState
enum class ESpareTireProcessState : uint8_t
{
	None                           = 0,
	PutWorking                     = 1,
	PutCancel                      = 2,
	PutFinish                      = 3,
	TakeWorking                    = 4,
	TakeCancel                     = 5,
	TakeFinish                     = 6,
	ESpareTireProcessState_MAX     = 7
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


// Enum TslGame.EVehicleEngineState
enum class EVehicleEngineState : uint8_t
{
	EEngineStateAutoOff            = 0,
	EEngineStateAutoOn             = 1,
	EEngineStateManualOff          = 2,
	EEngineStateManualOn           = 3,
	EVehicleEngineState_MAX        = 4
};


// Enum TslGame.*62190eee4e
enum class E*62190eee4e : uint8_t
{
	*1b8095cec1                    = 0,
	*4bc1be25a8                    = 1,
	*a43466a488                    = 2,
	*e21945d4de                    = 3,
	*cb34ed8dec                    = 4,
	*62190eee4e_MAX                = 5
};


// Enum TslGame.EPackageState
enum class EPackageState : uint8_t
{
	Normal                         = 0,
	Broken                         = 1,
	Empty                          = 2,
	EPackageState_MAX              = 3
};


// Enum TslGame.EPackageDoorState
enum class EPackageDoorState : uint8_t
{
	CLOSED                         = 0,
	OPENING                        = 1,
	OPENED                         = 2,
	EPackageDoorState_MAX          = 3
};


// Enum TslGame.EThingGroupSpawnType
enum class EThingGroupSpawnType : uint8_t
{
	None                           = 0,
	Probability                    = 1,
	TotalCount                     = 2,
	EThingGroupSpawnType_MAX       = 3
};


// Enum TslGame.*84272de075
enum class E*84272de075 : uint8_t
{
	*4192eba292                    = 0,
	*dc5e6bc2c9                    = 1,
	*c08e1277b0                    = 2,
	*96ccfa72be                    = 3,
	*c1e3abc36e                    = 4,
	*84272de075_MAX                = 5
};


// Enum TslGame.ETeamParkourRole
enum class ETeamParkourRole : uint8_t
{
	Role_None                      = 0,
	Role_Supporter                 = 1,
	Role_Uploader                  = 2,
	Role_MAX                       = 3
};


// Enum TslGame.ETeamParkourState
enum class ETeamParkourState : uint8_t
{
	None                           = 0,
	ReadyToRaising                 = 1,
	ReadyToPulling                 = 2,
	Uploading                      = 3,
	Finish                         = 4,
	Failed                         = 5,
	ETeamParkourState_MAX          = 6
};


// Enum TslGame.*1e5441b9ea
enum class E*1e5441b9ea : uint8_t
{
	*962c860715                    = 0,
	*6ae93db5d4                    = 1,
	*6e74c28f27                    = 2,
	*d2e6a1bd79                    = 3,
	*1e5441b9ea_MAX                = 4
};


// Enum TslGame.*c992790aeb
enum class E*c992790aeb : uint8_t
{
	*85cde47348                    = 0,
	*83ca57d921                    = 1,
	*7a76763f60                    = 2,
	*e72041624b                    = 3,
	*c992790aeb_MAX                = 4
};


// Enum TslGame.EContainerState
enum class EContainerState : uint8_t
{
	Closed                         = 0,
	Opening                        = 1,
	Opened                         = 2,
	EContainerState_MAX            = 3
};


// Enum TslGame.ESpawnDestroyTiming
enum class ESpawnDestroyTiming : uint8_t
{
	Undefined                      = 0,
	SpawnOnMatchStart              = 1,
	DestoryOnMatchStart            = 2,
	ESpawnDestroyTiming_MAX        = 3
};


// Enum TslGame.*d2eef19da3
enum class E*d2eef19da3 : uint8_t
{
	*0b66c35222                    = 0,
	*b843418193                    = 1,
	*24b9136df0                    = 2,
	*d2eef19da3_MAX                = 3
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


// Enum TslGame.ECompareTeamDist
enum class ECompareTeamDist : uint8_t
{
	CurDest                        = 0,
	FinalDest                      = 1,
	SafeZone                       = 2,
	ECompareTeamDist_MAX           = 3
};


// Enum TslGame.EAirDropType
enum class EAirDropType : uint8_t
{
	NormalCarePackage              = 0,
	CustomAirDrop                  = 1,
	Market                         = 2,
	EAirDropType_MAX               = 3
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


// Enum TslGame.*c4d8f32484
enum class E*c4d8f32484 : uint8_t
{
	*bc80a74739                    = 0,
	*37b83f6e3a                    = 1,
	*c4d8f32484_MAX                = 2
};


// Enum TslGame.*1b60c3f569
enum class E*1b60c3f569 : uint8_t
{
	*b11103fbd6                    = 0,
	*2cb7db8fe4                    = 1,
	*9203d964c7                    = 2,
	*4dcd5c2aa3                    = 3,
	*9159f3f1e8                    = 4,
	*9d87ffa988                    = 5,
	*1a94aeec6f                    = 6,
	*67ad797ab7                    = 7,
	*69ebfa85dc                    = 8,
	*0cbd1bdedf                    = 9,
	*a2e98f43f5                    = 10,
	*5db2f9da83                    = 11,
	*8ae9ce6c81                    = 12,
	*1b60c3f569_MAX                = 13
};


// Enum TslGame.*d4844e0ec5
enum class E*d4844e0ec5 : uint8_t
{
	*e6c1a8cbab                    = 0,
	*7a518b9dbf                    = 1,
	*541d0fa71c                    = 2,
	*5ad8a216a5                    = 3,
	*d4844e0ec5_MAX                = 4
};


// Enum TslGame.*3d8b61fe43
enum class E*3d8b61fe43 : uint8_t
{
	*a247ce044a                    = 0,
	*8e285b2aad                    = 1,
	*d6f032ef10                    = 2,
	*aafd0a0213                    = 3,
	*a409cc23ee                    = 4,
	*b72a63edf0                    = 5,
	*3d8b61fe43_MAX                = 6
};


// Enum TslGame.EOPUIBuffLocationType
enum class EOPUIBuffLocationType : uint8_t
{
	None                           = 0,
	TPP                            = 1,
	FPP                            = 2,
	FPPWithMosnterHp               = 3,
	MAX                            = 4,
	EOPUIBuffLocationType_MAX      = 5
};


// Enum TslGame.EClanNoticeUGCLevel
enum class EClanNoticeUGCLevel : uint8_t
{
	Hide                           = 0,
	Show                           = 1,
	EClanNoticeUGCLevel_MAX        = 2
};


// Enum TslGame.EClanNameUGCLevel
enum class EClanNameUGCLevel : uint8_t
{
	HideAll                        = 0,
	OnlyMine                       = 1,
	MineAndOthersTag               = 2,
	ShowAll                        = 3,
	EClanNameUGCLevel_MAX          = 4
};


// Enum TslGame.ETslPreloadPriority
enum class ETslPreloadPriority : uint8_t
{
	Static                         = 0,
	Dynamic                        = 1,
	ETslPreloadPriority_MAX        = 2
};


// Enum TslGame.EBlueChipTowerState
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
	EBlueChipTowerState_MAX        = 8
};


// Enum TslGame.BlueChipTowerAnimState
enum class EBlueChipTowerAnimState : uint8_t
{
	Wait                           = 0,
	IsInUse                        = 1,
	Success                        = 2,
	BlueChipTowerAnimState_MAX     = 3
};


// Enum TslGame.EFollowTargetType
enum class EFollowTargetType : uint8_t
{
	Bot                            = 0,
	CurrentPlayer                  = 1,
	EFollowTargetType_MAX          = 2
};


// Enum TslGame.ETslTrainingTeleportType
enum class ETslTrainingTeleportType : uint8_t
{
	InfoThumnail                   = 0,
	MapIconVolume                  = 1,
	NONE                           = 2,
	ETslTrainingTeleportType_MAX   = 3
};


// Enum TslGame.ETslTrainingType
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
	ETslTrainingType_MAX           = 10
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


// Enum TslGame.ETrainingInfoType
enum class ETrainingInfoType : uint8_t
{
	Latest                         = 0,
	Best                           = 1,
	ETrainingInfoType_MAX          = 2
};


// Enum TslGame.ETrainingPracticeType
enum class ETrainingPracticeType : uint8_t
{
	None                           = 0,
	Practice_Aim                   = 1,
	Practice_Sound                 = 2,
	ETrainingPracticeType_MAX      = 3
};


// Enum TslGame.ETrainingDashboardRange
enum class ETrainingDashboardRange : uint8_t
{
	None                           = 0,
	Range10                        = 1,
	Range50                        = 2,
	Range100                       = 3,
	ETrainingDashboardRange_MAX    = 4
};


// Enum TslGame.EOneOnOneResultType
enum class EOneOnOneResultType : uint8_t
{
	None                           = 0,
	Lose                           = 1,
	Win                            = 2,
	Draw                           = 3,
	Escape                         = 4,
	EOneOnOneResultType_MAX        = 5
};


// Enum TslGame.EOneOnOneStageType
enum class EOneOnOneStageType : uint8_t
{
	None                           = 0,
	Arena                          = 1,
	Audience                       = 2,
	EOneOnOneStageType_MAX         = 3
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


// Enum TslGame.EItemClientAnimSeqUnload
enum class EItemClientAnimSeqUnload : uint8_t
{
	None                           = 0,
	Disable                        = 1,
	Enable                         = 2,
	EItemClientAnimSeqUnload_MAX   = 3
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
	RevivalTarget                  = 8,
	RevivalRegisted                = 9,
	Revived                        = 10,
	ETslRedeployPlayerState_MAX    = 11
};


// Enum TslGame.EHASSurvivorItemLevel
enum class EHASSurvivorItemLevel : uint8_t
{
	None                           = 0,
	Lv1                            = 1,
	Lv2                            = 2,
	EHASSurvivorItemLevel_MAX      = 3
};


// Enum TslGame.EHASSurvivorItemType
enum class EHASSurvivorItemType : uint8_t
{
	None                           = 0,
	Flashbang                      = 1,
	Healkit                        = 2,
	Toolkit                        = 3,
	SmokeBomb                      = 4,
	EHASSurvivorItemType_MAX       = 5
};


// Enum TslGame.EHASSurvivorCorruptPhase
enum class EHASSurvivorCorruptPhase : uint8_t
{
	None                           = 0,
	PhaseOne                       = 1,
	PhaseTwo                       = 2,
	Corrupted                      = 3,
	EHASSurvivorCorruptPhase_MAX   = 4
};


// Enum TslGame.EHASSurvivorBreathState
enum class EHASSurvivorBreathState : uint8_t
{
	None                           = 0,
	NormalBreath                   = 1,
	FastBreath                     = 2,
	Exhausted                      = 3,
	EHASSurvivorBreathState_MAX    = 4
};


// Enum TslGame.EHASSurvivorState
enum class EHASSurvivorState : uint8_t
{
	Normal                         = 0,
	Injured                        = 1,
	DBNO                           = 2,
	BodyCarried                    = 3,
	Captured                       = 4,
	Dead                           = 5,
	Escaped                        = 6,
	Sacrificed                     = 7,
	EndgameDead                    = 8,
	EHASSurvivorState_MAX          = 9
};


// Enum TslGame.EHASSeekerState
enum class EHASSeekerState : uint8_t
{
	Normal                         = 0,
	Stunned                        = 1,
	EHASSeekerState_MAX            = 2
};


// Enum TslGame.EHASPlayerRole
enum class EHASPlayerRole : uint8_t
{
	None                           = 0,
	Killer                         = 1,
	Survivor                       = 2,
	EHASPlayerRole_MAX             = 3
};


// Enum TslGame.ETslHASStencilColor
enum class ETslHASStencilColor : uint8_t
{
	None                           = 0,
	SpectatedCharacter             = 1,
	SpectatedCharacterTeam         = 2,
	SpectatedCharacterEnemy        = 3,
	WithoutSpectatedCharacter      = 4,
	WithoutSpectatedTeamCharacter  = 5,
	InteractionFocusingColor       = 6,
	SandboxOutline                 = 7,
	Invincible                     = 8,
	ETslHASStencilColor_MAX        = 9
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


// Enum TslGame.*fcb733feda
enum class E*fcb733feda : uint8_t
{
	*992c6b0e70                    = 0,
	*d323d3787e                    = 1,
	*1b4af3096c                    = 2,
	*4ebb8f0c80                    = 3,
	*c65dc8b705                    = 4,
	*8edca14364                    = 5,
	*9ed151e4cd                    = 6,
	*fcb733feda_MAX                = 7
};


// Enum TslGame.ETslHASInteractType
enum class ETslHASInteractType : uint8_t
{
	BlockAllInteractive            = 0,
	InteractionObjectCanPassThrough = 1,
	ETslHASInteractType_MAX        = 2
};


// Enum TslGame.ETslHASFixTargetState
enum class ETslHASFixTargetState : uint8_t
{
	PreStart                       = 0,
	Normal                         = 1,
	StopFixing                     = 2,
	Fixing                         = 3,
	Explode                        = 4,
	Broken                         = 5,
	Fixed                          = 6,
	ETslHASFixTargetState_MAX      = 7
};


// Enum TslGame.*84f66a68c5
enum class E*84f66a68c5 : uint8_t
{
	*297b02f43b                    = 0,
	*886ab54725                    = 1,
	*84f66a68c5_MAX                = 2
};


// Enum TslGame.EHASGamePhase
enum class EHASGamePhase : uint8_t
{
	NotStarted                     = 0,
	Started                        = 1,
	GeneratorAllFixed              = 2,
	EndGame                        = 3,
	MatchEnded                     = 4,
	EHASGamePhase_MAX              = 5
};


// Enum TslGame.EHASPrisonSoundType
enum class EHASPrisonSoundType : uint8_t
{
	Bluezone                       = 0,
	BluezoneStop                   = 1,
	Sink                           = 2,
	EHASPrisonSoundType_MAX        = 3
};


// Enum TslGame.ETslHASPrisonState
enum class ETslHASPrisonState : uint8_t
{
	PreStart                       = 0,
	Normal                         = 1,
	Broken                         = 2,
	SurvivorHooked                 = 3,
	Sacrificed                     = 4,
	Reload                         = 5,
	ETslHASPrisonState_MAX         = 6
};


// Enum TslGame.*eb21d0ee2a
enum class E*eb21d0ee2a : uint8_t
{
	*53c32a3891                    = 0,
	*cc860ad1f8                    = 1,
	*fb7d7493f8                    = 2,
	*aeb86b1359                    = 3,
	*a379dc6819                    = 4,
	*2051d56818                    = 5,
	*c169acb50f                    = 6,
	*88926e4041                    = 7,
	*ade014237a                    = 8,
	*eb21d0ee2a_MAX                = 9
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


// Enum TslGame.EBulletproofShieldDurabilityState
enum class EBulletproofShieldDurabilityState : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Damaged                        = 2,
	DamagedSeverely                = 3,
	Destroyed                      = 4,
	EBulletproofShieldDurabilityState_MAX = 5
};


// Enum TslGame.EBulletproofShieldInstallState
enum class EBulletproofShieldInstallState : uint8_t
{
	None                           = 0,
	InstallInprogress              = 1,
	InstallComplete                = 2,
	Destroyed                      = 3,
	EBulletproofShieldInstallState_MAX = 4
};


// Enum TslGame.*ebb618db08
enum class E*ebb618db08 : uint8_t
{
	*f28630aeb0                    = 0,
	*d98d514a9c                    = 1,
	*1e9a791796                    = 2,
	*031b3c9050                    = 3,
	*9f5ecde650                    = 4,
	*0f68db5823                    = 5,
	*f7efc2a546                    = 6,
	*fbaa6d28fa                    = 7,
	*30f66ee411                    = 8,
	*ebb618db08_MAX                = 9
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


// Enum TslGame.*b82f6b524e
enum class E*b82f6b524e : uint8_t
{
	*f15ae4d4e0                    = 0,
	*48bce4b116                    = 1,
	*eac37f8111                    = 2,
	*aefcf50432                    = 3,
	*b82f6b524e_MAX                = 4
};


// Enum TslGame.ELivingThingState
enum class ELivingThingState : uint8_t
{
	Idle                           = 0,
	Alert                          = 1,
	Dead                           = 2,
	Max                            = 3,
	ELivingThingState_MAX          = 4
};


// Enum TslGame.*cd3dccacea
enum class E*cd3dccacea : uint8_t
{
	*0fbb077a26                    = 0,
	*ea0bc4f7ae                    = 1,
	*54817449df                    = 2,
	*cd3dccacea_MAX                = 3
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


// Enum TslGame.*29dce92ebd
enum class E*29dce92ebd : uint8_t
{
	*49687a8fa7                    = 0,
	*8e47e8666d                    = 1,
	*4a19a0881a                    = 2,
	*29dce92ebd_MAX                = 3
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


// Enum TslGame.EDuelUIState
enum class EDuelUIState : uint8_t
{
	None                           = 0,
	Battle                         = 1,
	Spectating                     = 2,
	MAX                            = 3,
	EDuelUIState_MAX               = 4
};


// Enum TslGame.EDuelUITeam
enum class EDuelUITeam : uint8_t
{
	None                           = 0,
	MyTeam                         = 1,
	OpposingTeam                   = 2,
	MAX                            = 3,
	EDuelUITeam_MAX                = 4
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


// Enum TslGame.*014bc01ff3
enum class E*014bc01ff3 : uint8_t
{
	*7a73c5150e                    = 0,
	*da510e3f03                    = 1,
	*1e192cd888                    = 2,
	*014bc01ff3_MAX                = 3
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


// Enum TslGame.ETslIngameMission_ConditionData_InteractionType
enum class ETslIngameMission_ConditionData_InteractionType : uint8_t
{
	None                           = 0,
	VehicleRadio                   = 1,
	BodyCarry                      = 2,
	InteractableActor              = 3,
	ETslIngameMission_ConditionData_MAX = 4
};


// Enum TslGame.ETslIngameMission_Condition_PlaceType
enum class ETslIngameMission_Condition_PlaceType : uint8_t
{
	None                           = 0,
	SecretRoom                     = 1,
	Market                         = 2,
	ETslIngameMission_Condition_MAX = 3
};


// Enum TslGame.ETslIngameMission_ConditionData_VisitType
enum class ETslIngameMission_ConditionData_VisitType : uint8_t
{
	None                           = 0,
	Region                         = 1,
	Place                          = 2,
	ETslIngameMission_ConditionData_MAX = 3
};


// Enum TslGame.ETslIngameMission_ConditionData_ReviveType
enum class ETslIngameMission_ConditionData_ReviveType : uint8_t
{
	None                           = 0,
	SelfDBNO                       = 1,
	TeamDBNO                       = 2,
	Redeploy                       = 3,
	Bluechip                       = 4,
	ETslIngameMission_ConditionData_MAX = 5
};


// Enum TslGame.ETslIngameMission_Condition_ParkourType
enum class ETslIngameMission_Condition_ParkourType : uint8_t
{
	None                           = 0,
	Vaulting                       = 1,
	Cooperative                    = 2,
	ETslIngameMission_Condition_MAX = 3
};


// Enum TslGame.ETslIngameMission_ConditionData_KillType
enum class ETslIngameMission_ConditionData_KillType : uint8_t
{
	None                           = 0,
	Vehicle                        = 1,
	RidingShot                     = 2,
	HeadShot                       = 3,
	ETslIngameMission_ConditionData_MAX = 4
};


// Enum TslGame.ETslIngameMission_ConditionData_KillAssistType
enum class ETslIngameMission_ConditionData_KillAssistType : uint8_t
{
	Kill                           = 0,
	Assist                         = 1,
	KillOrAssist                   = 2,
	ETslIngameMission_ConditionData_MAX = 3
};


// Enum TslGame.ETslIngameMission_Condition_ComparisonType
enum class ETslIngameMission_Condition_ComparisonType : uint8_t
{
	Less                           = 0,
	Greater                        = 1,
	ETslIngameMission_Condition_MAX = 2
};


// Enum TslGame.ETslIngameMission_CoditionData_VehicleType
enum class ETslIngameMission_CoditionData_VehicleType : uint8_t
{
	None                           = 0,
	Floating                       = 1,
	Wheeled                        = 2,
	MotorBike                      = 3,
	Flying                         = 4,
	All                            = 5,
	ETslIngameMission_CoditionData_MAX = 6
};


// Enum TslGame.ETslIngameMission_CoditionData_MoveType
enum class ETslIngameMission_CoditionData_MoveType : uint8_t
{
	None                           = 0,
	Walk                           = 1,
	Drive                          = 2,
	Parachute                      = 3,
	Swim                           = 4,
	SafeZone                       = 5,
	ETslIngameMission_CoditionData_MAX = 6
};


// Enum TslGame.ETslIngameMissionCondition_FlareGunUsage
enum class ETslIngameMissionCondition_FlareGunUsage : uint8_t
{
	None                           = 0,
	BRDM                           = 1,
	CarePackage                    = 2,
	SafeZone                       = 3,
	ETslIngameMissionCondition_MAX = 4
};


// Enum TslGame.ETslIngameMission_ConditionData_ItemType
enum class ETslIngameMission_ConditionData_ItemType : uint8_t
{
	Any                            = 0,
	Equipable                      = 1,
	Weapon                         = 2,
	Castable                       = 3,
	ETslIngameMission_ConditionData_MAX = 4
};


// Enum TslGame.ETslIngameMission_ConditionData_ItemUseType
enum class ETslIngameMission_ConditionData_ItemUseType : uint8_t
{
	None                           = 0,
	ItemConsume                    = 1,
	Flaregun                       = 2,
	ItemThrow                      = 3,
	FireWeapon                     = 4,
	ETslIngameMission_ConditionData_MAX = 5
};


// Enum TslGame.ETslIngameMission_ConditionData_ItemMissionType
enum class ETslIngameMission_ConditionData_ItemMissionType : uint8_t
{
	None                           = 0,
	PickUp                         = 1,
	Use                            = 2,
	Request                        = 3,
	Give                           = 4,
	ETslIngameMission_ConditionData_MAX = 5
};


// Enum TslGame.ETslIngameMissionRewardType
enum class ETslIngameMissionRewardType : uint8_t
{
	Normal                         = 0,
	Jackpot                        = 1,
	ETslIngameMissionRewardType_MAX = 2
};


// Enum TslGame.ETslIngameMissionType
enum class ETslIngameMissionType : uint8_t
{
	None                           = 0,
	Newbie                         = 1,
	Easy                           = 2,
	Normal                         = 3,
	Hard                           = 4,
	Event                          = 5,
	ETslIngameMissionType_MAX      = 6
};


// Enum TslGame.*8f594a2078
enum class E*8f594a2078 : uint8_t
{
	*2f71d284a6                    = 0,
	*8ee70d0ca0                    = 1,
	*f112ec2e83                    = 2,
	*8f594a2078_MAX                = 3
};


// Enum TslGame.ETslIngameMissionFailReason
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
	ETslIngameMissionFailReason_MAX = 22
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


// Enum TslGame.*f0c31adf68
enum class E*f0c31adf68 : uint8_t
{
	*a4121afb2e                    = 0,
	*93d4bc7576                    = 1,
	*a410b7fe7a                    = 2,
	*7bad421a5b                    = 3,
	*8b0a9d4b57                    = 4,
	*669ba1b9a8                    = 5,
	*de2fd46d53                    = 6,
	*22f63c8121                    = 7,
	*d496a6c174                    = 8,
	*f0c31adf68_MAX                = 9
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


// Enum TslGame.ERacingBgmTheme
enum class ERacingBgmTheme : uint8_t
{
	Default                        = 0,
	WinterRaicng                   = 1,
	ERacingBgmTheme_MAX            = 2
};


// Enum TslGame.*ae8d62b3c1
enum class E*ae8d62b3c1 : uint8_t
{
	*7dc3daffd5                    = 0,
	*2479601ca6                    = 1,
	*d77658b8c5                    = 2,
	*ae8d62b3c1_MAX                = 3
};


// Enum TslGame.*036184a995
enum class E*036184a995 : uint8_t
{
	*eb344f7a1f                    = 0,
	*38d5dca4e6                    = 1,
	*14f8ce64d5                    = 2,
	*036184a995_MAX                = 3
};


// Enum TslGame.EVoiceChatChannel
enum class EVoiceChatChannel : uint8_t
{
	All                            = 0,
	TeamOnly                       = 1,
	None                           = 2,
	MAX                            = 3,
	EVoiceChatChannel_MAX          = 4
};


// Enum TslGame.EVoiceInputMode_Console
enum class EVoiceInputMode_Console : uint8_t
{
	OpenMic                        = 0,
	Disable                        = 1,
	MAX                            = 2,
	EVoiceInputMode_MAX            = 3
};


// Enum TslGame.EVoiceInputMode_PC
enum class EVoiceInputMode_PC : uint8_t
{
	OpenMic                        = 0,
	PushToTalk                     = 1,
	Toggle                         = 2,
	Disable                        = 3,
	MAX                            = 4,
	EVoiceInputMode_MAX            = 5
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


// Enum TslGame.EBombUIHUDTimerStatusType
enum class EBombUIHUDTimerStatusType : uint8_t
{
	None                           = 0,
	RoundTime                      = 1,
	Attack                         = 2,
	Defence                        = 3,
	MAX                            = 4,
	EBombUIHUDTimerStatusType_MAX  = 5
};


// Enum TslGame.EBombUIMatchResultType
enum class EBombUIMatchResultType : uint8_t
{
	None                           = 0,
	Lose                           = 1,
	Win                            = 2,
	Draw                           = 3,
	MAX                            = 4,
	EBombUIMatchResultType_MAX     = 5
};


// Enum TslGame.EBombUIPlayerStatusType
enum class EBombUIPlayerStatusType : uint8_t
{
	None                           = 0,
	Alive                          = 1,
	DBNO                           = 2,
	Die                            = 3,
	Disconnected                   = 4,
	MAX                            = 5,
	EBombUIPlayerStatusType_MAX    = 6
};


// Enum TslGame.EGarageState
enum class EGarageState : uint8_t
{
	None                           = 0,
	DoorClosed                     = 1,
	DoorOpening                    = 2,
	DoorOpenedWithSiren            = 3,
	DoorOpenedWithFlashing         = 4,
	FinalState                     = 5,
	EGarageState_MAX               = 6
};


// Enum TslGame.EGasPumpType
enum class EGasPumpType : uint8_t
{
	Fuel                           = 0,
	Electric                       = 1,
	EGasPumpType_MAX               = 2
};


// Enum TslGame.EGasPumpLogType
enum class EGasPumpLogType : uint8_t
{
	StartFueling                   = 0,
	CompleteFueling                = 1,
	CancelFuelingFull              = 2,
	Explode                        = 3,
	EGasPumpLogType_MAX            = 4
};


// Enum TslGame.EGasPumpState
enum class EGasPumpState : uint8_t
{
	Inactive                       = 0,
	StartFueling                   = 1,
	StopFueling                    = 2,
	StopFuelingFull                = 3,
	EGasPumpState_MAX              = 4
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


// Enum TslGame.*df79cdecd7
enum class E*df79cdecd7 : uint8_t
{
	*baa762eee0                    = 0,
	*a03ae57542                    = 1,
	*6c5af15581                    = 2,
	*df79cdecd7_MAX                = 3
};


// Enum TslGame.*df3d29c4df
enum class E*df3d29c4df : uint8_t
{
	*992c6b0e70                    = 0,
	*1b4af3096c                    = 1,
	*f5dc5bff58                    = 2,
	*018c068ce7                    = 3,
	*8c8dab15cd                    = 4,
	*89b579d436                    = 5,
	*df3d29c4df_MAX                = 6
};


// Enum TslGame.*75ce3a4a54
enum class E*75ce3a4a54 : uint8_t
{
	*992c6b0e70                    = 0,
	*7eeecd5a7c                    = 1,
	*1b4af3096c                    = 2,
	*cd7d138e96                    = 3,
	*75ce3a4a54_MAX                = 4
};


// Enum TslGame.EFireworkLauncherState
enum class EFireworkLauncherState : uint8_t
{
	ACTIVATED                      = 0,
	DEACTIVATED_TEMPORARILY_BY_FIRE_DELAY = 1,
	DEACTIVATED_PERMENANTLY_BY_OUT_OF_STOCK = 2,
	EFireworkLauncherState_MAX     = 3
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


// Enum TslGame.ETurnTableAnimState
enum class ETurnTableAnimState : uint8_t
{
	PLAYING                        = 0,
	STOPPED                        = 1,
	ETurnTableAnimState_MAX        = 2
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


// Enum TslGame.EZombieTargetingType
enum class EZombieTargetingType : uint8_t
{
	Passive                        = 0,
	Aggressive                     = 1,
	AggresiveRandom                = 2,
	EZombieTargetingType_MAX       = 3
};


// Enum TslGame.EZombieAttackType
enum class EZombieAttackType : uint8_t
{
	Melee                          = 0,
	Throw                          = 1,
	EZombieAttackType_MAX          = 2
};


// Enum TslGame.EHASSoundType
enum class EHASSoundType : uint8_t
{
	Breath                         = 0,
	BreathStop                     = 1,
	FastBreath                     = 2,
	FastBreathStop                 = 3,
	HeartBeat                      = 4,
	ReadyToFire                    = 5,
	Exhausted                      = 6,
	ExhaustedStop                  = 7,
	Moan                           = 8,
	MoanStop                       = 9,
	Panic                          = 10,
	CabinetPanic                   = 11,
	SeekerStun                     = 12,
	EHASSoundType_MAX              = 13
};


// Enum TslGame.ETslHAS_QTEType
enum class ETslHAS_QTEType : uint8_t
{
	Generator                      = 0,
	Wiggle                         = 1,
	Prison                         = 2,
	Healing                        = 3,
	None                           = 4,
	ETslHAS_MAX                    = 5
};


// Enum TslGame.ETslHASActiveEffet
enum class ETslHASActiveEffet : uint8_t
{
	GeneratorActive                = 0,
	PrisonActive                   = 1,
	ExitActive                     = 2,
	None                           = 3,
	ETslHASActiveEffet_MAX         = 4
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


// Enum TslGame.*9d378196a2
enum class E*9d378196a2 : uint8_t
{
	*17bacbbc82                    = 0,
	*c7ecca7d45                    = 1,
	*de1afe2745                    = 2,
	*585f33d396                    = 3,
	*2b85580c03                    = 4,
	*9d378196a2_MAX                = 5
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


// Enum TslGame.*e55404ec99
enum class E*e55404ec99 : uint8_t
{
	*9b146eaf40                    = 0,
	*f24ed70649                    = 1,
	*b4f8890608                    = 2,
	*1b4e1363c2                    = 3,
	*31a5837f50                    = 4,
	*af79c2db60                    = 5,
	*c34dfb932a                    = 6,
	*e55404ec99_MAX                = 7
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


// Enum TslGame.*740c590085
enum class E*740c590085 : uint8_t
{
	*045d1c6a98                    = 0,
	*45c7f67f9d                    = 1,
	*3afe56663e                    = 2,
	*740c590085_MAX                = 3
};


// Enum TslGame.ETslPubgIdAssetType
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
	ETslPubgIdAssetType_MAX        = 9
};


// Enum TslGame.ETslReferenceObjType
enum class ETslReferenceObjType : uint8_t
{
	GameMode                       = 0,
	Character                      = 1,
	Preload                        = 2,
	ETslReferenceObjType_MAX       = 3
};


// Enum TslGame.*83e3c04475
enum class E*83e3c04475 : uint8_t
{
	*613497e0c9                    = 0,
	*a394efa326                    = 1,
	*6c200412e7                    = 2,
	*db27daa0a9                    = 3,
	*cbed2f235d                    = 4,
	*83e3c04475_MAX                = 5
};


// Enum TslGame.ESoftRoleState
enum class ESoftRoleState : uint8_t
{
	Open                           = 0,
	Closed                         = 1,
	Inspect                        = 2,
	ESoftRoleState_MAX             = 3
};


// Enum TslGame.ESandStormSoundType
enum class ESandStormSoundType : uint8_t
{
	None                           = 0,
	StartSound                     = 1,
	LoopSound                      = 2,
	InSound                        = 3,
	OutSound                       = 4,
	ESandStormSoundType_MAX        = 5
};


// Enum TslGame.*11464d098b
enum class E*11464d098b : uint8_t
{
	*1bed3a9e69                    = 0,
	*d8806abf4a                    = 1,
	*067622cc29                    = 2,
	*62318c89f7                    = 3,
	*51b9692c2c                    = 4,
	*11464d098b_MAX                = 5
};


// Enum TslGame.*9801b273dd
enum class E*9801b273dd : uint8_t
{
	*8c66b681f0                    = 0,
	*28e5d0022e                    = 1,
	*8337d62f5d                    = 2,
	*4c81791289                    = 3,
	*d8764976f0                    = 4,
	*e0d185d159                    = 5,
	*ecc7a4bdef                    = 6,
	*eafbc3e1a2                    = 7,
	*88cc68588e                    = 8,
	*7d3fa9e295                    = 9,
	*2453a4a573                    = 10,
	*9801b273dd_MAX                = 11
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


// Enum TslGame.ETslBombStartEffectWidgetAPI
enum class ETslBombStartEffectWidgetAPI : uint8_t
{
	Type1_PlayStartEffect          = 0,
	Type2_PlayStartRoundEffect     = 1,
	ETslBombStartEffectWidgetAPI_MAX = 2
};


// Enum TslGame.ETslFlareGunWidgetDisplayType
enum class ETslFlareGunWidgetDisplayType : uint8_t
{
	Worldmap                       = 0,
	Hud                            = 1,
	ETslFlareGunWidgetDisplayType_MAX = 2
};


// Enum TslGame.ERedeployProgressDotType
enum class ERedeployProgressDotType : uint8_t
{
	None                           = 0,
	Pass                           = 1,
	Start                          = 2,
	Recruit                        = 3,
	NotOpenYet                     = 4,
	PlayingRedeploy                = 5,
	MAX                            = 6,
	ERedeployProgressDotType_MAX   = 7
};


// Enum TslGame.*2fe12a33d0
enum class E*2fe12a33d0 : uint8_t
{
	*4439f7b2ef                    = 0,
	*a1a778f53f                    = 1,
	*8d812a1343                    = 2,
	*866f837859                    = 3,
	*9c899d3862                    = 4,
	*0e06314b5c                    = 5,
	*1b9e9b8066                    = 6,
	*2fe12a33d0_MAX                = 7
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


// Enum TslGame.*0e083dfa67
enum class E*0e083dfa67 : uint8_t
{
	*5c6ca65a49                    = 0,
	*ed6c4700e2                    = 1,
	*c8b8967a7e                    = 2,
	*0e083dfa67_MAX                = 3
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


// Enum TslGame.*b90b07bf14
enum class E*b90b07bf14 : uint8_t
{
	*5b8bac91f7                    = 0,
	*b83736fe58                    = 1,
	*53a002c672                    = 2,
	*d85488dae6                    = 3,
	*b90b07bf14_MAX                = 4
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
	RedeployFighting               = 11,
	Revival                        = 12,
	SpecificMode                   = 13,
	Tasered                        = 14,
	ETslTeamInfoIconState_MAX      = 15
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


// Enum TslGame.EDirectMessageColorType
enum class EDirectMessageColorType : uint8_t
{
	Alert                          = 0,
	System                         = 1,
	Chat                           = 2,
	Clan                           = 3,
	MAX                            = 4,
	EDirectMessageColorType_MAX    = 5
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


// Enum TslGame.*724262f345
enum class E*724262f345 : uint8_t
{
	*197bfdfed8                    = 0,
	*fc843bbb2d                    = 1,
	*e579fed412                    = 2,
	*4680920308                    = 3,
	*724262f345_MAX                = 4
};


// Enum TslGame.EBluezoneState
enum class EBluezoneState : uint8_t
{
	Wait                           = 0,
	Release                        = 1,
	NoRestrict                     = 2,
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
	EGuideKeyType_MAX              = 31
};


// Enum TslGame.EBlueBlockerStateUIType
enum class EBlueBlockerStateUIType : uint8_t
{
	None                           = 0,
	Active                         = 1,
	Deactive                       = 2,
	Hide                           = 3,
	EBlueBlockerStateUIType_MAX    = 4
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
	FullAuto_SG                    = 6,
	ThreeRoundBurst_SG             = 7,
	SemiAuto_SG                    = 8,
	EFiremode_MAX                  = 9
};


// Enum TslGame.ETraumaBagHealMode
enum class ETraumaBagHealMode : uint8_t
{
	NoHealItem                     = 0,
	Bandage                        = 1,
	FirstAidKit                    = 2,
	Medkit                         = 3,
	BattleReadyKit                 = 4,
	MaxAndNone                     = 5,
	ETraumaBagHealMode_MAX         = 6
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


// Enum TslGame.EKeyboardKeyIconDisplayType
enum class EKeyboardKeyIconDisplayType : uint8_t
{
	Tap                            = 0,
	DoubleTap                      = 1,
	Hold                           = 2,
	EKeyboardKeyIconDisplayType_MAX = 3
};


// Enum TslGame.ETslHASInteractionState
enum class ETslHASInteractionState : uint8_t
{
	Normal                         = 0,
	Buffed                         = 1,
	Debuffed                       = 2,
	Multiple                       = 3,
	ETslHASInteractionState_MAX    = 4
};


// Enum TslGame.ETslHASInteractionType
enum class ETslHASInteractionType : uint8_t
{
	None                           = 0,
	Generator                      = 1,
	Exit                           = 2,
	Healing                        = 3,
	BeingHealed                    = 4,
	Chest                          = 5,
	SelfHeal                       = 6,
	Wiggle                         = 7,
	Scoping                        = 8,
	CabinetKnock                   = 9,
	ETslHASInteractionType_MAX     = 10
};


// Enum TslGame.ETslHASInteractionMethod
enum class ETslHASInteractionMethod : uint8_t
{
	None                           = 0,
	Hand                           = 1,
	Medkit                         = 2,
	Toolbox                        = 3,
	Win94                          = 4,
	ETslHASInteractionMethod_MAX   = 5
};


// Enum TslGame.EHASEndGamePhase
enum class EHASEndGamePhase : uint8_t
{
	NotStarted                     = 0,
	Lv0                            = 1,
	Lv1                            = 2,
	Lv2                            = 3,
	Lv3                            = 4,
	Lv4                            = 5,
	EHASEndGamePhase_MAX           = 6
};


// Enum TslGame.EHASSeekerWeaponSlotType
enum class EHASSeekerWeaponSlotType : uint8_t
{
	Win94                          = 0,
	Machete                        = 1,
	StickyBomb                     = 2,
	EHASSeekerWeaponSlotType_MAX   = 3
};


// Enum TslGame.EHASSeekerWeapon
enum class EHASSeekerWeapon : uint8_t
{
	None                           = 0,
	Win94                          = 1,
	Machete                        = 2,
	StickyBomb                     = 3,
	EHASSeekerWeapon_MAX           = 4
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


// Enum TslGame.ETslMapMarkerTowerState
enum class ETslMapMarkerTowerState : uint8_t
{
	Enable                         = 0,
	Active                         = 1,
	Disable                        = 2,
	ETslMapMarkerTowerState_MAX    = 3
};


// Enum TslGame.ETslNotificationMessageAnimationType
enum class ETslNotificationMessageAnimationType : uint8_t
{
	None                           = 0,
	Appear                         = 1,
	Loop                           = 2,
	ETslNotificationMessageAnimationType_MAX = 3
};


// Enum TslGame.ETslNotificationMessageColorType
enum class ETslNotificationMessageColorType : uint8_t
{
	RichText                       = 0,
	Default                        = 1,
	Blue                           = 2,
	Red                            = 3,
	Yellow                         = 4,
	ETslNotificationMessageColorType_MAX = 5
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



// Enum PhysXVehicles.*c4f1aaf157
enum class E*c4f1aaf157 : uint8_t
{
	*e64020f6ae                    = 0,
	*1d6f1686d5                    = 1,
	*4f2e382cfd                    = 2,
	*0e8527e669                    = 3,
	*bdc658dc38                    = 4,
	*ff6e39bb09                    = 5,
	*7a290c6b01                    = 6,
	*c4f1aaf157_MAX                = 7
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


// Enum AIModule.*fb2868e9e5
enum class E*fb2868e9e5 : uint8_t
{
	*fd1b9db5ac                    = 0,
	*03a80ccb23                    = 1,
	*218bfabf3f                    = 2,
	*91c76d313e                    = 3,
	*fb2868e9e5_MAX                = 4
};


// Enum AIModule.*86f0e4e7c4
enum class E*86f0e4e7c4 : uint8_t
{
	*7a7fda5537                    = 0,
	*2ab11547e2                    = 1,
	*188486cd33                    = 2,
	*86f0e4e7c4_MAX                = 3
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


// Enum AIModule.*f5d402b84d
enum class E*f5d402b84d : uint8_t
{
	*6926c9cac7                    = 0,
	*74f91cc7bb                    = 1,
	*3981c72215                    = 2,
	*f5d402b84d_MAX                = 3
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


// Enum AIModule.*f49756e7b2
enum class E*f49756e7b2 : uint8_t
{
	*515241f063                    = 0,
	*1218dc3c69                    = 1,
	*fe96b5fc72                    = 2,
	*f49756e7b2_MAX                = 3
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


// Enum AIModule.*97c1d16363
enum class E*97c1d16363 : uint8_t
{
	*ee23ddb7fd                    = 0,
	*709c4ce5ec                    = 1,
	*435bb711b7                    = 2,
	*97c1d16363_MAX                = 3
};


// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
	Absolute                       = 0,
	RelativeToScores               = 1,
	EEQSNormalizationType_MAX      = 2
};


// Enum AIModule.*1b150dd80a
enum class E*1b150dd80a : uint8_t
{
	*4712cc5f78                    = 0,
	*1a53e72309                    = 1,
	*4ebbd33fe8                    = 2,
	*5dbebfcfbc                    = 3,
	*baa131f2a9                    = 4,
	*1b150dd80a_MAX                = 5
};


// Enum AIModule.*78c2fd06a5
enum class E*78c2fd06a5 : uint8_t
{
	*c6b05edaa3                    = 0,
	*5f73d56e70                    = 1,
	*67a82d4067                    = 2,
	*78c2fd06a5_MAX                = 3
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


// Enum AIModule.*19e7c06a26
enum class E*19e7c06a26 : uint8_t
{
	*e2dd50aa5d                    = 0,
	*021c0e26cc                    = 1,
	*28707bbd95                    = 2,
	*19e7c06a26_MAX                = 3
};


// Enum AIModule.*f7fe62254d
enum class E*f7fe62254d : uint8_t
{
	*709e062744                    = 0,
	*69f5fbb22e                    = 1,
	*589eec8caa                    = 2,
	*f7fe62254d_MAX                = 3
};


// Enum AIModule.*cfcc243796
enum class E*cfcc243796 : uint8_t
{
	*04073859de                    = 0,
	*876609bca0                    = 1,
	*5527df5cf4                    = 2,
	*cfcc243796_MAX                = 3
};



// Enum GameplayAbilities.*67b010953b
enum class E*67b010953b : uint8_t
{
	*7a8e8920b3                    = 0,
	*20b067c2bd                    = 1,
	*4cb06c515f                    = 2,
	*684eda8bcb                    = 3,
	*67b010953b_MAX                = 4
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


// Enum GameplayAbilities.*8502021a7c
enum class E*8502021a7c : uint8_t
{
	*30ac25f173                    = 0,
	*bae9f1ad07                    = 1,
	*2f4e9580e4                    = 2,
	*8502021a7c_MAX                = 3
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


// Enum GameplayAbilities.*e84978577a
enum class E*e84978577a : uint8_t
{
	*23565ee58d                    = 0,
	*6c63f76081                    = 1,
	*424fa37052                    = 2,
	*e76d851eb8                    = 3,
	*e84978577a_MAX                = 4
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


// Enum GameplayAbilities.*3c56341bd7
enum class E*3c56341bd7 : uint8_t
{
	*f7fbe1a416                    = 0,
	*64b21be3ff                    = 1,
	*ffe4a630aa                    = 2,
	*a49ede1e82                    = 3,
	*3c56341bd7_MAX                = 4
};


// Enum GameplayAbilities.*9af92ba203
enum class E*9af92ba203 : uint8_t
{
	*db232dc28e                    = 0,
	*eaca723f4a                    = 1,
	*6e483cc36b                    = 2,
	*9af92ba203_MAX                = 3
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


// Enum GameplayAbilities.*a2050f467a
enum class E*a2050f467a : uint8_t
{
	*336a6af0fa                    = 0,
	*341261bc5f                    = 1,
	*17cf440413                    = 2,
	*0c31d4d0b7                    = 3,
	*a2050f467a_MAX                = 4
};


// Enum GameplayAbilities.*299166aea1
enum class E*299166aea1 : uint8_t
{
	*d81ade1e04                    = 0,
	*7cae20c521                    = 1,
	*9ecb6a5b89                    = 2,
	*a4a0e4f6bf                    = 3,
	*299166aea1_MAX                = 4
};


// Enum GameplayAbilities.*79afad0968
enum class E*79afad0968 : uint8_t
{
	*fd4ab195ae                    = 0,
	*3cb89ab478                    = 1,
	*6f0070c0a8                    = 2,
	*fae57145ee                    = 3,
	*79afad0968_MAX                = 4
};


// Enum GameplayAbilities.*324ef8811a
enum class E*324ef8811a : uint8_t
{
	*97a83745ff                    = 0,
	*1db4f86954                    = 1,
	*0a121f74d8                    = 2,
	*4e5572eb0f                    = 3,
	*324ef8811a_MAX                = 4
};


// Enum GameplayAbilities.*c2655ade34
enum class E*c2655ade34 : uint8_t
{
	*4ed2fa894d                    = 0,
	*fd4ab195ae                    = 1,
	*2cf917c189                    = 2,
	*c2655ade34_MAX                = 3
};


// Enum GameplayAbilities.*6d71ea00ed
enum class E*6d71ea00ed : uint8_t
{
	*5b6cffa67c                    = 0,
	*9a77fbe69b                    = 1,
	*815d10faaf                    = 2,
	*6d71ea00ed_MAX                = 3
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


// Enum GameplayAbilities.*63fc210d6d
enum class E*63fc210d6d : uint8_t
{
	*5e9d8ff7a4                    = 0,
	*aadf514623                    = 1,
	*4d4ff80581                    = 2,
	*6641d50afa                    = 3,
	*63fc210d6d_MAX                = 4
};


// Enum GameplayAbilities.*ee90a4d0e4
enum class E*ee90a4d0e4 : uint8_t
{
	*41b51adc77                    = 0,
	*be4a90181e                    = 1,
	*423f27ec67                    = 2,
	*bc56823905                    = 3,
	*ee90a4d0e4_MAX                = 4
};


// Enum GameplayAbilities.*1e1cdd949a
enum class E*1e1cdd949a : uint8_t
{
	*fc968e9ab9                    = 0,
	*9cc6092e83                    = 1,
	*b8e2dbeca7                    = 2,
	*17e7c58e07                    = 3,
	*1e1cdd949a_MAX                = 4
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


// Enum GameplayAbilities.*c33aac20f5
enum class E*c33aac20f5 : uint8_t
{
	*b33b1e06d7                    = 0,
	*2365625e4c                    = 1,
	*2b65c139e1                    = 2,
	*6a2ba6e544                    = 3,
	*65a98a4209                    = 4,
	*4cadf31a6c                    = 5,
	*8faf34a6db                    = 6,
	*21c0e947ce                    = 7,
	*857191d414                    = 8,
	*03cbe5d8a7                    = 9,
	*c33aac20f5_MAX                = 10
};


// Enum GameplayAbilities.*5b7922fd3e
enum class E*5b7922fd3e : uint8_t
{
	*5ff006ea10                    = 0,
	*b9ef6d38f7                    = 1,
	*85c5d4130c                    = 2,
	*5b7922fd3e_MAX                = 3
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


// Enum SlateCore.*121031ee6f
enum class E*121031ee6f : uint8_t
{
	*d3772f5aee                    = 0,
	*e8ec69bd5c                    = 1,
	*6de5aa8901                    = 2,
	*121031ee6f_MAX                = 3
};


// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3
};


// Enum SlateCore.*47b712d567
enum class E*47b712d567 : uint8_t
{
	*a2fa41147e                    = 0,
	*a4b672016c                    = 1,
	*61a094ac54                    = 2,
	*bad88ef632                    = 3,
	*47b712d567_MAX                = 4
};


// Enum SlateCore.*5da6dfb740
enum class E*5da6dfb740 : uint8_t
{
	*b1d5a26c1b                    = 0,
	*01317ca42e                    = 1,
	*492f34b3c0                    = 2,
	*5da6dfb740_MAX                = 3
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


// Enum SlateCore.*b972632bf0
enum class E*b972632bf0 : uint8_t
{
	*893d9a46e8                    = 0,
	*f2fb2df934                    = 1,
	*7411ca9cc6                    = 2,
	*b972632bf0_MAX                = 3
};


// Enum SlateCore.*5965cc0781
enum class E*5965cc0781 : uint8_t
{
	*b3de72a8e0                    = 0,
	*0c460bd4e6                    = 1,
	*b700301c3d                    = 2,
	*8435d1cafe                    = 3,
	*5965cc0781_MAX                = 4
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



// Enum ChromaSDKPlugin.EChromaSDKStreamStatusEnum
enum class EChromaSDKStreamStatusEnum : uint8_t
{
	READY                          = 0,
	AUTHORIZING                    = 1,
	BROADCASTING                   = 2,
	WATCHING                       = 3,
	NOT_AUTHORIZED                 = 4,
	BROADCAST_DUPLICATE            = 5,
	SERVICE_OFFLINE                = 6,
	EChromaSDKStreamStatusEnum_MAX = 7
};


// Enum ChromaSDKPlugin.*3bd96f27fc
enum class E*3bd96f27fc : uint8_t
{
	*a117ba051e                    = 0,
	*581b69e0d7                    = 1,
	*7fef503ddc                    = 2,
	*39a2fa204b                    = 3,
	*e53d958403                    = 4,
	*f8808d91ce                    = 5,
	*a271b1f9e7                    = 6,
	*3bd96f27fc_MAX                = 7
};


// Enum ChromaSDKPlugin.*20ef0ec7be
enum class E*20ef0ec7be : uint8_t
{
	*0f2a028c80                    = 0,
	*291b39b760                    = 1,
	*5dc46c4cc2                    = 2,
	*6fe7781fa4                    = 3,
	*4998abee7c                    = 4,
	*20ef0ec7be_MAX                = 5
};


// Enum ChromaSDKPlugin.*9b4e4066e3
enum class E*9b4e4066e3 : uint8_t
{
	*466cbb7c64                    = 0,
	*b199353328                    = 1,
	*1297e5d395                    = 2,
	*f5fea235ed                    = 3,
	*6b82df6cf7                    = 4,
	*631b5d32bc                    = 5,
	*b4996ef48e                    = 6,
	*47a5b930cc                    = 7,
	*a846e3990a                    = 8,
	*2fc3ebba4b                    = 9,
	*9d09c21405                    = 10,
	*ad3b9c9a9a                    = 11,
	*9d918e833a                    = 12,
	*9358d3f59c                    = 13,
	*6d1e3c264d                    = 14,
	*dd2293b783                    = 15,
	*dcfdb71fc3                    = 16,
	*4edd3e1cb6                    = 17,
	*620252be11                    = 18,
	*33ab0e745f                    = 19,
	*62f3bf8967                    = 20,
	*a3d2c590b7                    = 21,
	*5f9d3f23f2                    = 22,
	*9b4e4066e3_MAX                = 23
};


// Enum ChromaSDKPlugin.*093f7e9ac9
enum class E*093f7e9ac9 : uint8_t
{
	*2d0f888be4                    = 0,
	*1e649ae859                    = 1,
	*4f8c7ddbee                    = 2,
	*de88234415                    = 3,
	*f6408e267a                    = 4,
	*d558eca00e                    = 5,
	*5061852a27                    = 6,
	*3cef88f46b                    = 7,
	*99f1aeef49                    = 8,
	*cc6b20b4a4                    = 9,
	*1b21bf5115                    = 10,
	*01931844e1                    = 11,
	*3f15a61433                    = 12,
	*02f35c48fc                    = 13,
	*6c20c2e221                    = 14,
	*b8d2678508                    = 15,
	*4338b1c91d                    = 16,
	*b1dd68f27a                    = 17,
	*384426cd0a                    = 18,
	*279d080f7e                    = 19,
	*218ac4f73e                    = 20,
	*fa1c63ef9d                    = 21,
	*9190522798                    = 22,
	*e917e67d8b                    = 23,
	*c1f57ffbe4                    = 24,
	*b815033e1f                    = 25,
	*344fb24024                    = 26,
	*cf84cf6175                    = 27,
	*6bad8f3dda                    = 28,
	*b32f9a0ce9                    = 29,
	*9beb3f5693                    = 30,
	*3ecdebd24d                    = 31,
	*0dba8bf67a                    = 32,
	*2e0b7bfa19                    = 33,
	*73082cfdd6                    = 34,
	*7c91c3feeb                    = 35,
	*e8a9a00e5e                    = 36,
	*6f909f9fab                    = 37,
	*bd618b4b19                    = 38,
	*08d7a36464                    = 39,
	*c5cb3664fd                    = 40,
	*ac00f12c38                    = 41,
	*94f9622dd9                    = 42,
	*8182f6b01c                    = 43,
	*cb682f2ac8                    = 44,
	*897869b9a3                    = 45,
	*9a81c44853                    = 46,
	*db253a7d1a                    = 47,
	*ef72197851                    = 48,
	*cbe20e6bfc                    = 49,
	*d3722d138f                    = 50,
	*8e089a8047                    = 51,
	*eb564e2788                    = 52,
	*2cbff6e1c7                    = 53,
	*0f95390ef2                    = 54,
	*4c77592494                    = 55,
	*2cfe3f09bb                    = 56,
	*6098c5b58f                    = 57,
	*a5e87cd625                    = 58,
	*c10f355618                    = 59,
	*929cf48081                    = 60,
	*57b05145cd                    = 61,
	*50a4a111b6                    = 62,
	*e77e78282c                    = 63,
	*8231030790                    = 64,
	*1cfafe88a1                    = 65,
	*a0ebf69452                    = 66,
	*2da3be1ac5                    = 67,
	*10a0b8a96f                    = 68,
	*ab1a1378b9                    = 69,
	*4aed746562                    = 70,
	*0910ea0b81                    = 71,
	*003908f2dc                    = 72,
	*215147348f                    = 73,
	*0aea9c27dd                    = 74,
	*bd207d9d24                    = 75,
	*ab0f0b8d9c                    = 76,
	*2c228c2f92                    = 77,
	*e999cc65ae                    = 78,
	*76fd613453                    = 79,
	*6734336596                    = 80,
	*89e2f8ca98                    = 81,
	*d109ff535d                    = 82,
	*3f15329f50                    = 83,
	*6197f4885f                    = 84,
	*3fc3d036ce                    = 85,
	*a397b6fcee                    = 86,
	*8126bca6d9                    = 87,
	*792011214f                    = 88,
	*914b8292a3                    = 89,
	*6a5f4f901b                    = 90,
	*d405c6d26e                    = 91,
	*89b7f28146                    = 92,
	*9bab4afa7a                    = 93,
	*cd11736d4c                    = 94,
	*3d3b881bd4                    = 95,
	*7ea991ab74                    = 96,
	*e1841036f3                    = 97,
	*309594644e                    = 98,
	*9aa5bbe46d                    = 99,
	*489d9dccad                    = 100,
	*844c086b4f                    = 101,
	*65a161d444                    = 102,
	*7b80ea1577                    = 103,
	*5590d1b6e6                    = 104,
	*16bf4d7888                    = 105,
	*415e7cb3ce                    = 106,
	*6a1da459c7                    = 107,
	*9571d41bb9                    = 108,
	*0301075d4d                    = 109,
	*c032bd45c0                    = 110,
	*43c70b0ba6                    = 111,
	*c7600ecfec                    = 112,
	*81a8e0bbe9                    = 113,
	*2089bdfa48                    = 114,
	*636e834072                    = 115,
	*8590e02df7                    = 116,
	*e092ddbc12                    = 117,
	*f9cf532a1e                    = 118,
	*854ad217dc                    = 119,
	*a57ce7d753                    = 120,
	*5da3c21ac2                    = 121,
	*83338dd66a                    = 122,
	*9e9fb42602                    = 123,
	*9715a47db0                    = 124,
	*5bedda700a                    = 125,
	*093f7e9ac9_MAX                = 126
};


// Enum ChromaSDKPlugin.*757191fcd6
enum class E*757191fcd6 : uint8_t
{
	*2056ddcd78                    = 0,
	*cc99c86afc                    = 1,
	*aff8aa5ee6                    = 2,
	*f011a5745b                    = 3,
	*833e841fcf                    = 4,
	*3cfc7e8bf7                    = 5,
	*bbbc22ac4f                    = 6,
	*757191fcd6_MAX                = 7
};


// Enum ChromaSDKPlugin.*573692f5e8
enum class E*573692f5e8 : uint8_t
{
	*aff8aa5ee6                    = 0,
	*f011a5745b                    = 1,
	*833e841fcf                    = 2,
	*bbbc22ac4f                    = 3,
	*573692f5e8_MAX                = 4
};


// Enum ChromaSDKPlugin.*6c60f7d6b2
enum class E*6c60f7d6b2 : uint8_t
{
	*2056ddcd78                    = 0,
	*cc99c86afc                    = 1,
	*3cfc7e8bf7                    = 2,
	*bbbc22ac4f                    = 3,
	*6c60f7d6b2_MAX                = 4
};


// Enum ChromaSDKPlugin.*054d30ef18
enum class E*054d30ef18 : uint8_t
{
	*4b32eb6336                    = 0,
	*49c7344af5                    = 1,
	*bbbc22ac4f                    = 2,
	*054d30ef18_MAX                = 3
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


// Enum CoherentUIGTPlugin.*8845bfe340
enum class E*8845bfe340 : uint8_t
{
	*5ead7c966c                    = 0,
	*6602942074                    = 1,
	*7671c39335                    = 2,
	*07fa0465d1                    = 3,
	*8845bfe340_MAX                = 4
};


// Enum CoherentUIGTPlugin.*d4e5fb576e
enum class E*d4e5fb576e : uint8_t
{
	*5418f9a046                    = 0,
	*a41ec4607e                    = 1,
	*62e1bddb2b                    = 2,
	*d4e5fb576e_MAX                = 3
};


// Enum CoherentUIGTPlugin.*ad39dd25ee
enum class E*ad39dd25ee : uint8_t
{
	*31837eda46                    = 0,
	*5e5183d0fc                    = 1,
	*c0e70c47fa                    = 2,
	*7654ae4c21                    = 3,
	*ad39dd25ee_MAX                = 4
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


// Enum Foliage.*63a9f0e80c
enum class E*63a9f0e80c : uint8_t
{
	*7a513e5ec6                    = 0,
	*a35cf6df7b                    = 1,
	*59aa61507d                    = 2,
	*6a55a2ae01                    = 3,
	*63a9f0e80c_MAX                = 4
};


// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
	CollisionOverlap               = 0,
	ShadeOverlap                   = 1,
	None                           = 2,
	ESimulationOverlap_MAX         = 3
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



// Enum TslGameMode.ETslSLBStageDifficulty
enum class ETslSLBStageDifficulty : uint8_t
{
	Easy                           = 0,
	Normal                         = 1,
	Hard                           = 2,
	Max                            = 3,
	ETslSLBStageDifficulty_MAX     = 4
};


// Enum TslGameMode.ETslSLBStage
enum class ETslSLBStage : uint8_t
{
	Stage1                         = 0,
	Stage2                         = 1,
	Stage3                         = 2,
	Stage4                         = 3,
	Stage5                         = 4,
	Stage6                         = 5,
	Max                            = 6,
	ETslSLBStage_MAX               = 7
};


// Enum TslGameMode.EAIBattleState
enum class EAIBattleState : uint8_t
{
	None                           = 0,
	ReturnToSpawnLocation          = 1,
	Patrol                         = 2,
	Battle                         = 3,
	EAIBattleState_MAX             = 4
};


// Enum TslGameMode.EOneOnOneRoomState
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
	EOneOnOneRoomState_MAX         = 11
};


// Enum TslGameMode.EOneOnOneTicketState
enum class EOneOnOneTicketState : uint8_t
{
	None                           = 0,
	Waiting                        = 1,
	CountDown                      = 2,
	Playing                        = 3,
	EOneOnOneTicketState_MAX       = 4
};


// Enum TslGameMode.EOneOnOneSideType
enum class EOneOnOneSideType : uint8_t
{
	None                           = 0,
	Home                           = 1,
	Away                           = 2,
	Audience                       = 3,
	EOneOnOneSideType_MAX          = 4
};


// Enum TslGameMode.EOneOnOneInvenRecoverType
enum class EOneOnOneInvenRecoverType : uint8_t
{
	None                           = 0,
	Empty                          = 1,
	Recover                        = 2,
	EOneOnOneInvenRecoverType_MAX  = 3
};


// Enum TslGameMode.EOneOnOneMessageType
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
	EOneOnOneMessageType_MAX       = 8
};


// Enum TslGameMode.*16c468aa9a
enum class E*16c468aa9a : uint8_t
{
	*dad97b8e13                    = 0,
	*0fbb077a26                    = 1,
	*fd33bc95a0                    = 2,
	*7fea6e831c                    = 3,
	*944dfa25aa                    = 4,
	*16c468aa9a_MAX                = 5
};


// Enum TslGameMode.EInteractionErrorType
enum class EInteractionErrorType : uint8_t
{
	None                           = 0,
	Success                        = 1,
	Fail_SearchingOneOnOne         = 2,
	Fail_PlayingOneOnOne           = 3,
	EInteractionErrorType_MAX      = 4
};


// Enum TslGameMode.ETrainingButtonActiveType
enum class ETrainingButtonActiveType : uint8_t
{
	Default                        = 0,
	AimTrainingOnly                = 1,
	ETrainingButtonActiveType_MAX  = 2
};


// Enum TslGameMode.EPrivateTrainingRoomPhase
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


// Enum TslGameMode.EPrivateWaitingRoomPhase
enum class EPrivateWaitingRoomPhase : uint8_t
{
	None                           = 0,
	LoadingMap                     = 1,
	Ready                          = 2,
	StartSelect_Practice           = 3,
	EPrivateWaitingRoomPhase_MAX   = 4
};


// Enum TslGameMode.EBBHolderSelectMethod
enum class EBBHolderSelectMethod : uint8_t
{
	Closest                        = 0,
	Random                         = 1,
	EBBHolderSelectMethod_MAX      = 2
};


// Enum TslGameMode.*0a2eb3621c
enum class E*0a2eb3621c : uint8_t
{
	*5b4a337157                    = 0,
	*b0daaaf237                    = 1,
	*c65ba72448                    = 2,
	*370b939f19                    = 3,
	*0a2eb3621c_MAX                = 4
};


// Enum TslGameMode.EIBRRBluezone
enum class EIBRRBluezone : uint8_t
{
	BlueZone                       = 0,
	Random                         = 1,
	MAX                            = 2,
	EIBRRBluezone_MAX              = 3
};


// Enum TslGameMode.*8a9c34d549
enum class E*8a9c34d549 : uint8_t
{
	*d2d3ceee17                    = 0,
	*cf5181d408                    = 1,
	*3f42f7897d                    = 2,
	*8a9c34d549_MAX                = 3
};


// Enum TslGameMode.ETslSLBGeneratorState
enum class ETslSLBGeneratorState : uint8_t
{
	Breakdown                      = 0,
	NeedFuel                       = 1,
	BeforeActivate                 = 2,
	Activate                       = 3,
	MAX                            = 4,
	ETslSLBGeneratorState_MAX      = 5
};


// Enum TslGameMode.ETslSLBZombieSpawnType
enum class ETslSLBZombieSpawnType : uint8_t
{
	Instant                        = 0,
	Time                           = 1,
	ETslSLBZombieSpawnType_MAX     = 2
};


// Enum TslGameMode.ETslSLBAreaBlockActorState
enum class ETslSLBAreaBlockActorState : uint8_t
{
	Close                          = 0,
	Open                           = 1,
	MAX                            = 2,
	ETslSLBAreaBlockActorState_MAX = 3
};


// Enum TslGameMode.ESLBTriggerShapeType
enum class ESLBTriggerShapeType : uint8_t
{
	Box                            = 0,
	Sphere                         = 1,
	ESLBTriggerShapeType_MAX       = 2
};


// Enum TslGameMode.ETslSLBInteractionType
enum class ETslSLBInteractionType : uint8_t
{
	None                           = 0,
	Generator                      = 1,
	Refueling                      = 2,
	ClearDebuff                    = 3,
	OpenLastDoor                   = 4,
	MAX                            = 5,
	ETslSLBInteractionType_MAX     = 6
};


// Enum TslGameMode.ETslSLBExitActorState
enum class ETslSLBExitActorState : uint8_t
{
	Close                          = 0,
	Open                           = 1,
	MAX                            = 2,
	ETslSLBExitActorState_MAX      = 3
};


// Enum TslGameMode.EHungerState
enum class EHungerState : uint8_t
{
	Normal                         = 0,
	Hunger                         = 1,
	Starvation                     = 2,
	Famine                         = 3,
	EHungerState_MAX               = 4
};


// Enum TslGameMode.*30e33dcb45
enum class E*30e33dcb45 : uint8_t
{
	*75c081109c                    = 0,
	*304dbca13e                    = 1,
	*30e33dcb45_MAX                = 2
};


// Enum TslGameMode.ETrainingInfoSwitcherIndex
enum class ETrainingInfoSwitcherIndex : uint8_t
{
	Aim                            = 0,
	Sound                          = 1,
	ETrainingInfoSwitcherIndex_MAX = 2
};


// Enum TslGameMode.ETslTrainingDashboardRangeUIType
enum class ETslTrainingDashboardRangeUIType : uint8_t
{
	None                           = 0,
	Range10                        = 1,
	Range50                        = 2,
	Range100                       = 3,
	ETslTrainingDashboardRangeUIType_MAX = 4
};


// Enum TslGameMode.ETslTrainingDashboardPracticeUIType
enum class ETslTrainingDashboardPracticeUIType : uint8_t
{
	None                           = 0,
	Practice_Aim                   = 1,
	Practice_Sound                 = 2,
	ETslTrainingDashboardPracticeUIType_MAX = 3
};


// Enum TslGameMode.ETrainingRoomInteractionType
enum class ETrainingRoomInteractionType : uint8_t
{
	None                           = 0,
	Training_Stop                  = 1,
	ETrainingRoomInteractionType_MAX = 2
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



// Enum HeadMountedDisplay.*1951ef9e1e
enum class E*1951ef9e1e : uint8_t
{
	*51c1cf7545                    = 0,
	*30de84b4bd                    = 1,
	*d195992789                    = 2,
	*a7dadf7441                    = 3,
	*1951ef9e1e_MAX                = 4
};



// Enum Landscape.*cb8be4c099
enum class E*cb8be4c099 : uint8_t
{
	*523abaed14                    = 0,
	*d4470868ee                    = 1,
	*43d07bae00                    = 2,
	*349c49df1e                    = 3,
	*cb8be4c099_MAX                = 4
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


// Enum Landscape.*61a1ec7a2a
enum class E*61a1ec7a2a : uint8_t
{
	*29a1524979                    = 0,
	*d0a4d8d309                    = 1,
	*ce37492e3b                    = 2,
	*474a5b8f84                    = 3,
	*d13a97749d                    = 4,
	*61a1ec7a2a_MAX                = 5
};


// Enum Landscape.*8df67ddbb5
enum class E*8df67ddbb5 : uint8_t
{
	*271921345c                    = 0,
	*0b4945c094                    = 1,
	*1fd47c6ad9                    = 2,
	*8df67ddbb5_MAX                = 3
};


// Enum Landscape.*bdb73fb820
enum class E*bdb73fb820 : uint8_t
{
	*58d6daa720                    = 0,
	*712d3a7808                    = 1,
	*a5347a2c2b                    = 2,
	*9465ffad8b                    = 3,
	*bdb73fb820_MAX                = 4
};


// Enum Landscape.*4b851fe750
enum class E*4b851fe750 : uint8_t
{
	*32786a98da                    = 0,
	*b63db7d125                    = 1,
	*46a1dd0d1f                    = 2,
	*b14a233cdc                    = 3,
	*866d0d6f4b                    = 4,
	*1a05164e43                    = 5,
	*4b851fe750_MAX                = 6
};


// Enum Landscape.*2cca2a453d
enum class E*2cca2a453d : uint8_t
{
	*7cc6897d2f                    = 0,
	*c8e179d8c8                    = 1,
	*295a5118cb                    = 2,
	*4ebc42baeb                    = 3,
	*7260fb36e5                    = 4,
	*2cca2a453d_MAX                = 5
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


// Enum MovieScene.*8daa9c177b
enum class E*8daa9c177b : uint8_t
{
	*bd63d377d9                    = 0,
	*d9129a7172                    = 1,
	*51c0bee4eb                    = 2,
	*8daa9c177b_MAX                = 3
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


// Enum MovieSceneTracks.*01c71b3586
enum class E*01c71b3586 : uint8_t
{
	*b4166fd2b5                    = 0,
	*1f8c46b476                    = 1,
	*224e61de22                    = 2,
	*b28f857264                    = 3,
	*01c71b3586_MAX                = 4
};


// Enum MovieSceneTracks.*4008d72b23
enum class E*4008d72b23 : uint8_t
{
	*e6fe3aa8cf                    = 0,
	*defbf937b1                    = 1,
	*f0388e6450                    = 2,
	*444062d617                    = 3,
	*4008d72b23_MAX                = 4
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



// Enum MoviePlayer.*a84d34b4ed
enum class E*a84d34b4ed : uint8_t
{
	*297c1627d0                    = 0,
	*eabfc9b1e8                    = 1,
	*796d7e02d7                    = 2,
	*714bc51c30                    = 3,
	*a84d34b4ed_MAX                = 4
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


// Enum Niagara.*af20f40a49
enum class E*af20f40a49 : uint8_t
{
	*7564ee2fa3                    = 0,
	*1fb3e3cf99                    = 1,
	*81bd8acdb0                    = 2,
	*e3ef3dc30f                    = 3,
	*8fa2f53677                    = 4,
	*29bbb7e552                    = 5,
	*f667c51ae6                    = 6,
	*af20f40a49_MAX                = 7
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


// Enum Niagara.*2ec0a8e282
enum class E*2ec0a8e282 : uint8_t
{
	*d9838ee883                    = 0,
	*bbcdf4d8d9                    = 1,
	*51c1d42d45                    = 2,
	*eb63ceef25                    = 3,
	*2ec0a8e282_MAX                = 4
};


// Enum Niagara.*14b4c6458c
enum class E*14b4c6458c : uint8_t
{
	*3c5d0e61f4                    = 0,
	*7b228025c7                    = 1,
	*d41c9c303d                    = 2,
	*1aba0259ec                    = 3,
	*14b4c6458c_MAX                = 4
};


// Enum Niagara.*271248d423
enum class E*271248d423 : uint8_t
{
	*215c83b7d6                    = 0,
	*acd0dbe253                    = 1,
	*31882c73e0                    = 2,
	*5b22b32713                    = 3,
	*271248d423_MAX                = 4
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


// Enum Niagara.*dbd70f5c3b
enum class E*dbd70f5c3b : uint8_t
{
	*dc71794c61                    = 0,
	*edeef210a7                    = 1,
	*4a7be96bb8                    = 2,
	*2c1d3ca465                    = 3,
	*dbd70f5c3b_MAX                = 4
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



// Enum BuildPatchServices.*158a7307b0
enum class E*158a7307b0 : uint8_t
{
	*be37d95932                    = 0,
	*33f57463ba                    = 1,
	*a0680932db                    = 2,
	*158a7307b0_MAX                = 3
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


// Enum ZipUtility.*60b0986560
enum class E*60b0986560 : uint8_t
{
	*9f93386f42                    = 0,
	*4241a65b35                    = 1,
	*60246f002b                    = 2,
	*9ef52c2a1e                    = 3,
	*60b0986560_MAX                = 4
};


// Enum ZipUtility.*c2c30e976d
enum class E*c2c30e976d : uint8_t
{
	*49f36694ff                    = 0,
	*2668804d53                    = 1,
	*65059d1c13                    = 2,
	*3f37044ea1                    = 3,
	*b376df7dc1                    = 4,
	*ac6b99d37a                    = 5,
	*7ecab4db88                    = 6,
	*2c153217ff                    = 7,
	*6db57f2624                    = 8,
	*1a309535ba                    = 9,
	*ae2fe5c39a                    = 10,
	*7038fc88dd                    = 11,
	*c2c30e976d_MAX                = 12
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


// Enum Paper2D.*dff41b5378
enum class E*dff41b5378 : uint8_t
{
	*34fe5f386f                    = 0,
	*f65f2e295f                    = 1,
	*edc60487a8                    = 2,
	*dff41b5378_MAX                = 3
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



// Enum ACLPlugin.*fe412f5113
enum class E*fe412f5113 : uint8_t
{
	*4e371f1a55                    = 0,
	*149bfa8b1b                    = 1,
	*c17a16b100                    = 2,
	*6b06233f71                    = 3,
	*4940bba1eb                    = 4,
	*e07eb5c115                    = 5,
	*fe412f5113_MAX                = 6
};


// Enum ACLPlugin.*0adb269e21
enum class E*0adb269e21 : uint8_t
{
	*6a6f8bf982                    = 0,
	*8d602bdcff                    = 1,
	*bd48b7634f                    = 2,
	*0adb269e21_MAX                = 3
};


// Enum ACLPlugin.*b78732dae2
enum class E*b78732dae2 : uint8_t
{
	*1c24f279b7                    = 0,
	*4f5cefe066                    = 1,
	*8c8e5cee39                    = 2,
	*4cb8b406af                    = 3,
	*b78732dae2_MAX                = 4
};



// Enum SubstanceCore.*90c307829e
enum class E*90c307829e : uint8_t
{
	*bf365dd21e                    = 0,
	*c254211879                    = 1,
	*7a651c16b7                    = 2,
	*0dafe53ab1                    = 3,
	*c69279b43b                    = 4,
	*94598d462f                    = 5,
	*3f78e9f214                    = 6,
	*a1415d50a6                    = 7,
	*188ddb550d                    = 8,
	*f7b5f0b5c5                    = 9,
	*5d0a92b432                    = 10,
	*8b233af1f8                    = 11,
	*90c307829e_MAX                = 12
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


// Enum SubstanceCore.*b06621fa1b
enum class E*b06621fa1b : uint8_t
{
	*4f0c175be4                    = 0,
	*f4fb1812dc                    = 1,
	*cb3ed7e922                    = 2,
	*0a81ec445d                    = 3,
	*81d25517af                    = 4,
	*927f63c344                    = 5,
	*531d2bfabd                    = 6,
	*80ea16226b                    = 7,
	*23f40392e2                    = 8,
	*5b176b63d0                    = 9,
	*b06621fa1b_MAX                = 10
};



// Enum MK3DPublisher.*9bc7a1735a
enum class E*9bc7a1735a : uint8_t
{
	*4fd54cea94                    = 0,
	*7ed7b88d96                    = 1,
	*0e8f689765                    = 2,
	*6d99e8d302                    = 3,
	*9bc7a1735a_MAX                = 4
};



// Enum AkAudio.*edf7ddfdd0
enum class E*edf7ddfdd0 : uint8_t
{
	*aa2ad88a32                    = 0,
	*542ae24a78                    = 1,
	*671087adbe                    = 2,
	*edf7ddfdd0_MAX                = 3
};


// Enum AkAudio.*65aaebfd4e
enum class E*65aaebfd4e : uint8_t
{
	*df888e6215                    = 0,
	*d10466c515                    = 1,
	*49d1fddec0                    = 2,
	*33b83b7d44                    = 3,
	*29af8e89ab                    = 4,
	*65aaebfd4e_MAX                = 5
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



// Enum HoudiniEngineRuntime.*09467f6f49
enum class E*09467f6f49 : uint8_t
{
	*08c918c0c7                    = 0,
	*46e6631966                    = 1,
	*c75e06433b                    = 2,
	*f32e91e771                    = 3,
	*09467f6f49_MAX                = 4
};


// Enum HoudiniEngineRuntime.*e28405aa7e
enum class E*e28405aa7e : uint8_t
{
	*458d072e2b                    = 0,
	*a551d695e1                    = 1,
	*8012bc63be                    = 2,
	*7ae8310ed7                    = 3,
	*78ea8697e7                    = 4,
	*e28405aa7e_MAX                = 5
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


// Enum HoudiniEngineRuntime.*ea5c89e0df
enum class E*ea5c89e0df : uint8_t
{
	*1ab95f050b                    = 0,
	*e9349a0820                    = 1,
	*3af3d87b68                    = 2,
	*050193745e                    = 3,
	*ea5c89e0df_MAX                = 4
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



