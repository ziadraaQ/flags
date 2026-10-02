#pragma once
#include <cstdint>
#include <string>

namespace Offsets {
    inline std::string ClientVersion = "version-02c37bc51a384b8f";
    inline constexpr size_t TotalOffsets = 10051;
    inline constexpr size_t TotalClasses = 1386;

    namespace AbsolutePosition {
        inline constexpr uintptr_t ChannelTabsConfiguration = 0x100;
        inline constexpr uintptr_t ChatInputBarConfiguration = 0x108;
        inline constexpr uintptr_t ChatWindowConfiguration = 0x110;
        inline constexpr uintptr_t GuiBase2d = 0x118;
    }

    namespace AbsoluteSize {
        inline constexpr uintptr_t ChannelTabsConfiguration = 0x100;
        inline constexpr uintptr_t ChatInputBarConfiguration = 0x108;
        inline constexpr uintptr_t ChatWindowConfiguration = 0x110;
        inline constexpr uintptr_t GuiBase2d = 0x118;
    }

    namespace AccelerationTime {
        inline constexpr uintptr_t ClimbController = 0x100;
        inline constexpr uintptr_t GroundController = 0x108;
        inline constexpr uintptr_t SwimController = 0x110;
    }

    namespace Accessory {
        inline constexpr uintptr_t AccessoryType = 0x100;
    }

    namespace AccessoryDescription {
        inline constexpr uintptr_t AccessoryType = 0x108;
        inline constexpr uintptr_t AssetId = 0x110;
        inline constexpr uintptr_t GetAppliedInstance = 0x100;
        inline constexpr uintptr_t Instance = 0x118;
        inline constexpr uintptr_t IsLayered = 0x120;
        inline constexpr uintptr_t Order = 0x128;
        inline constexpr uintptr_t Position = 0x130;
        inline constexpr uintptr_t Puffiness = 0x138;
        inline constexpr uintptr_t Rotation = 0x140;
        inline constexpr uintptr_t Scale = 0x148;
    }

    namespace Accoutrement {
        inline constexpr uintptr_t AttachmentForward = 0x100;
        inline constexpr uintptr_t AttachmentPoint = 0x108;
        inline constexpr uintptr_t AttachmentPos = 0x110;
        inline constexpr uintptr_t AttachmentRight = 0x118;
        inline constexpr uintptr_t AttachmentUp = 0x120;
        inline constexpr uintptr_t BackendAccoutrementState = 0x128;
    }

    namespace AchievementService {
        inline constexpr uintptr_t GrantAchievement = 0x100;
        inline constexpr uintptr_t HasAchieved = 0x108;
        inline constexpr uintptr_t IsAvailable = 0x110;
    }

    namespace AcousticSimulationEnabled {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioListener = 0x108;
        inline constexpr uintptr_t Sound = 0x110;
        inline constexpr uintptr_t SoundService = 0x118;
    }

    namespace Activate {
        inline constexpr uintptr_t Plugin = 0x100;
        inline constexpr uintptr_t Tool = 0x108;
    }

    namespace Active {
        inline constexpr uintptr_t AudioDeviceInput = 0x108;
        inline constexpr uintptr_t BillboardGui = 0x110;
        inline constexpr uintptr_t Constraint = 0x118;
        inline constexpr uintptr_t ControllerBase = 0x120;
        inline constexpr uintptr_t GuiObject = 0x128;
        inline constexpr uintptr_t HopperBin = 0x130;
        inline constexpr uintptr_t JointInstance = 0x138;
        inline constexpr uintptr_t PendingSubscribe = 0x100;
        inline constexpr uintptr_t RTAnimationTracker = 0x140;
        inline constexpr uintptr_t RocketPropulsion = 0x148;
        inline constexpr uintptr_t SurfaceGuiBase = 0x150;
        inline constexpr uintptr_t VideoCaptureService = 0x158;
        inline constexpr uintptr_t VideoDeviceInput = 0x160;
        inline constexpr uintptr_t WeldConstraint = 0x168;
    }

    namespace Actor {
        inline constexpr uintptr_t BindToMessage = 0x100;
        inline constexpr uintptr_t BindToMessageParallel = 0x108;
        inline constexpr uintptr_t SendMessage = 0x110;
    }

    namespace AdGui {
        inline constexpr uintptr_t AdEvent = 0x148;
        inline constexpr uintptr_t AdShape = 0x118;
        inline constexpr uintptr_t EnableVideoAds = 0x120;
        inline constexpr uintptr_t FallbackImage = 0x128;
        inline constexpr uintptr_t FallbackImageContent = 0x130;
        inline constexpr uintptr_t GetSingleReportAdInfo = 0x100;
        inline constexpr uintptr_t HandleLuaUIEvent = 0x108;
        inline constexpr uintptr_t OnAdEvent = 0x140;
        inline constexpr uintptr_t ReportIsSubscribedToVideoCompletion = 0x150;
        inline constexpr uintptr_t Status = 0x138;
        inline constexpr uintptr_t adGuiStateChanged = 0x158;
        inline constexpr uintptr_t forwardStateToLuaUI = 0x110;
    }

    namespace AdPlacement {
        inline constexpr uintptr_t ActivationInstance = 0x100;
        inline constexpr uintptr_t AdFormat = 0x108;
        inline constexpr uintptr_t PlacementId = 0x110;
        inline constexpr uintptr_t RewardId = 0x118;
        inline constexpr uintptr_t RewardImageContent = 0x120;
        inline constexpr uintptr_t RewardName = 0x128;
        inline constexpr uintptr_t Visible = 0x130;
    }

    namespace AdPortal {
        inline constexpr uintptr_t PortalInvalidReason = 0x100;
        inline constexpr uintptr_t PortalVersion = 0x108;
        inline constexpr uintptr_t Status = 0x110;
    }

    namespace AdService {
        inline constexpr uintptr_t AdTeleportEnded = 0x1b8;
        inline constexpr uintptr_t AdTeleportInitiated = 0x1c0;
        inline constexpr uintptr_t CampaignEligibilityResponseFailureSignalFromClient = 0x1c8;
        inline constexpr uintptr_t CampaignEligibilityResponseSuccessSignalFromClient = 0x1d0;
        inline constexpr uintptr_t CreateAdRewardFromDevProductId = 0x130;
        inline constexpr uintptr_t GetAdAvailabilityNowAsync = 0x100;
        inline constexpr uintptr_t GetAdAvailabilityNowForUniverseAsync = 0x108;
        inline constexpr uintptr_t GetAdTeleportInfo = 0x138;
        inline constexpr uintptr_t GetCampaignEligibilityAsync = 0x110;
        inline constexpr uintptr_t GetCampaignEligibilitySignalFromServer = 0x1d8;
        inline constexpr uintptr_t GetReportAdInfo = 0x140;
        inline constexpr uintptr_t GetUniversalAppAdsEligibility = 0x148;
        inline constexpr uintptr_t HandleWhyThisAdClicked = 0x150;
        inline constexpr uintptr_t HideEudsaDisclosure = 0x158;
        inline constexpr uintptr_t IsAdLoaded = 0x160;
        inline constexpr uintptr_t OnDemandVideoCompleteFromUI = 0x168;
        inline constexpr uintptr_t OnImmersiveBrandedAdDisclosureButtonActivated = 0x1a8;
        inline constexpr uintptr_t RegisterAdOpportunityAsync = 0x118;
        inline constexpr uintptr_t RegisterDisclosureButton = 0x170;
        inline constexpr uintptr_t RegisterImpressionSource = 0x178;
        inline constexpr uintptr_t ReportImpressionSignal = 0x1e0;
        inline constexpr uintptr_t ReportTeleportSignal = 0x1e8;
        inline constexpr uintptr_t ReturnToPublisherExperience = 0x180;
        inline constexpr uintptr_t RewardedVideoAdEnded = 0x1f0;
        inline constexpr uintptr_t RewardedVideoAdStarted = 0x1f8;
        inline constexpr uintptr_t ServeAdResponseSignal = 0x200;
        inline constexpr uintptr_t ServeAdSignal = 0x208;
        inline constexpr uintptr_t SetAdGuiInteractivityHandlerInitialized = 0x188;
        inline constexpr uintptr_t ShowDynamicEudsaDisclosure = 0x210;
        inline constexpr uintptr_t ShowReportAdPopup = 0x218;
        inline constexpr uintptr_t ShowRewardedVideoAdAsync = 0x120;
        inline constexpr uintptr_t ShowRewardedVideoAdAtClientAsync = 0x128;
        inline constexpr uintptr_t ShowVideoAd = 0x190;
        inline constexpr uintptr_t SubmitAdNotification = 0x198;
        inline constexpr uintptr_t UnregisterAdOpportunity = 0x1a0;
        inline constexpr uintptr_t VideoAdClosed = 0x220;
        inline constexpr uintptr_t adGuiRegisterUI = 0x228;
        inline constexpr uintptr_t onDemandVideoPlayInUI = 0x1b0;
        inline constexpr uintptr_t rewardedVideoAdPlayServerToClient = 0x230;
        inline constexpr uintptr_t rewardedVideoAdPlayServerToClientWithPlacement = 0x238;
        inline constexpr uintptr_t rewardedVideoAdResultClientToServer = 0x240;
    }

    namespace AddConstraintFunction {
        inline constexpr uintptr_t DragDetector = 0x100;
        inline constexpr uintptr_t UIDragDetector = 0x108;
    }

    namespace AddTag {
        inline constexpr uintptr_t CollectionService = 0x100;
        inline constexpr uintptr_t Instance = 0x108;
    }

    namespace AddressChange {
        inline constexpr uintptr_t SettledLoss = 0x100;
    }

    namespace AdjustWeight {
        inline constexpr uintptr_t AnimationStreamTrack = 0x100;
        inline constexpr uintptr_t AnimationTrack = 0x108;
    }

    namespace Adornee {
        inline constexpr uintptr_t BillboardGui = 0x100;
        inline constexpr uintptr_t Highlight = 0x108;
        inline constexpr uintptr_t IntConstrainedValue = 0x110;
        inline constexpr uintptr_t PVInstance = 0x118;
        inline constexpr uintptr_t PartOperation = 0x120;
        inline constexpr uintptr_t SurfaceGuiBase = 0x128;
    }

    namespace Adornment {
        inline constexpr uintptr_t Adornee = 0xb8;
        inline constexpr uintptr_t Effect = 0xf8;
        inline constexpr uintptr_t FillColor = 0xd0;
        inline constexpr uintptr_t LineThickness = 0xf0;
        inline constexpr uintptr_t ModelModifier = 0x100;
        inline constexpr uintptr_t OutlineColor = 0xdc;
        inline constexpr uintptr_t Prop = 0xb0;
        inline constexpr uintptr_t ReservedId = 0xf4;
    }

    namespace AdsInitIxpArmReadCounter {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace AirController {
        inline constexpr uintptr_t BalanceMaxTorque = 0x100;
        inline constexpr uintptr_t BalanceSpeed = 0x108;
        inline constexpr uintptr_t LinearImpulse = 0x110;
        inline constexpr uintptr_t MaintainAngularMomentum = 0x118;
        inline constexpr uintptr_t MaintainLinearMomentum = 0x120;
        inline constexpr uintptr_t MoveMaxForce = 0x128;
        inline constexpr uintptr_t TurnMaxTorque = 0x130;
        inline constexpr uintptr_t TurnSpeedFactor = 0x138;
    }

    namespace AirDensity {
        inline constexpr uintptr_t AtmosphereSensor = 0x100;
        inline constexpr uintptr_t Workspace = 0x108;
    }

    namespace AirProperties {
        inline constexpr uintptr_t AirDensity = 0x18;
        inline constexpr uintptr_t GlobalWind = 0x3c;
    }

    namespace AlignOrientation {
        inline constexpr uintptr_t AlignType = 0x100;
        inline constexpr uintptr_t CFrame = 0x108;
        inline constexpr uintptr_t LookAtPosition = 0x110;
        inline constexpr uintptr_t MaxAngularVelocity = 0x118;
        inline constexpr uintptr_t MaxTorque = 0x120;
        inline constexpr uintptr_t Mode = 0x128;
        inline constexpr uintptr_t PrimaryAxis = 0x130;
        inline constexpr uintptr_t PrimaryAxisOnly = 0x138;
        inline constexpr uintptr_t ReactionTorqueEnabled = 0x140;
        inline constexpr uintptr_t Responsiveness = 0x148;
        inline constexpr uintptr_t RigidityEnabled = 0x150;
        inline constexpr uintptr_t SecondaryAxis = 0x158;
    }

    namespace AlignPosition {
        inline constexpr uintptr_t ApplyAtCenterOfMass = 0x100;
        inline constexpr uintptr_t ForceLimitMode = 0x108;
        inline constexpr uintptr_t ForceRelativeTo = 0x110;
        inline constexpr uintptr_t MaxAxesForce = 0x118;
        inline constexpr uintptr_t MaxForce = 0x120;
        inline constexpr uintptr_t MaxVelocity = 0x128;
        inline constexpr uintptr_t Mode = 0x130;
        inline constexpr uintptr_t Position = 0x138;
        inline constexpr uintptr_t ReactionForceEnabled = 0x140;
        inline constexpr uintptr_t Responsiveness = 0x148;
        inline constexpr uintptr_t RigidityEnabled = 0x150;
    }

    namespace Alloc {
        inline constexpr uintptr_t Malloc = 0x18093a0;
    }

    namespace AlwaysOnTop {
        inline constexpr uintptr_t BillboardGui = 0x100;
        inline constexpr uintptr_t HandleAdornment = 0x108;
        inline constexpr uintptr_t SurfaceGui = 0x110;
    }

    namespace AnalyticsService {
        inline constexpr uintptr_t ApiKey = 0x180;
        inline constexpr uintptr_t FireCustomEvent = 0x108;
        inline constexpr uintptr_t FireEvent = 0x110;
        inline constexpr uintptr_t FireInGameEconomyEvent = 0x118;
        inline constexpr uintptr_t FireLogEvent = 0x120;
        inline constexpr uintptr_t FirePlayerProgressionEvent = 0x128;
        inline constexpr uintptr_t GetDurationLoggerTimestamp = 0x130;
        inline constexpr uintptr_t GetPlayerSegmentsAsync = 0x100;
        inline constexpr uintptr_t LogCustomEvent = 0x138;
        inline constexpr uintptr_t LogEconomyEvent = 0x140;
        inline constexpr uintptr_t LogFunnelStepEvent = 0x148;
        inline constexpr uintptr_t LogJourneyEvent = 0x150;
        inline constexpr uintptr_t LogOnboardingFunnelStepEvent = 0x158;
        inline constexpr uintptr_t LogProgressionCompleteEvent = 0x160;
        inline constexpr uintptr_t LogProgressionEvent = 0x168;
        inline constexpr uintptr_t LogProgressionFailEvent = 0x170;
        inline constexpr uintptr_t LogProgressionStartEvent = 0x178;
    }

    namespace Angle {
        inline constexpr uintptr_t CylinderHandleAdornment = 0x100;
        inline constexpr uintptr_t SpotLight = 0x108;
        inline constexpr uintptr_t SurfaceLight = 0x110;
    }

    namespace AngleAttenuation {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioListener = 0x108;
    }

    namespace AngularVelocity {
        inline constexpr uintptr_t AngularVelocity = 0x100;
        inline constexpr uintptr_t BodyAngularVelocity = 0x120;
        inline constexpr uintptr_t CylindricalConstraint = 0x128;
        inline constexpr uintptr_t HingeConstraint = 0x130;
        inline constexpr uintptr_t MaxTorque = 0x108;
        inline constexpr uintptr_t ReactionTorqueEnabled = 0x110;
        inline constexpr uintptr_t RelativeTo = 0x118;
    }

    namespace AnimatedImage {
        inline constexpr uintptr_t Content = 0x118;
        inline constexpr uintptr_t GetBoundTracks = 0x100;
        inline constexpr uintptr_t Pause = 0x108;
        inline constexpr uintptr_t PlaybackSpeed = 0x120;
        inline constexpr uintptr_t Resume = 0x110;
    }

    namespace AnimatedImageService {
        inline constexpr uintptr_t GetFrameNames = 0x100;
        inline constexpr uintptr_t GetTrack = 0x108;
        inline constexpr uintptr_t GetTracksChanged = 0x110;
        inline constexpr uintptr_t Prewarm = 0x118;
        inline constexpr uintptr_t UnloadTracks = 0x120;
    }

    namespace AnimatedImageTrack {
        inline constexpr uintptr_t Duration = 0x110;
        inline constexpr uintptr_t FrameCount = 0x118;
        inline constexpr uintptr_t GetContent = 0x100;
        inline constexpr uintptr_t GetFrameNames = 0x108;
        inline constexpr uintptr_t TrackName = 0x120;
    }

    namespace Animation {
        inline constexpr uintptr_t AnimationContent = 0x100;
        inline constexpr uintptr_t AnimationId = 0x108;
        inline constexpr uintptr_t AnimationStreamTrack = 0x110;
        inline constexpr uintptr_t AnimationTrack = 0x118;
    }

    namespace AnimationClip {
        inline constexpr uintptr_t Guid = 0x100;
        inline constexpr uintptr_t GuidBinaryString = 0x108;
        inline constexpr uintptr_t Length = 0x110;
        inline constexpr uintptr_t Loop = 0x118;
        inline constexpr uintptr_t Priority = 0x120;
    }

    namespace AnimationClipProvider {
        inline constexpr uintptr_t GetAnimationClip = 0x120;
        inline constexpr uintptr_t GetAnimationClipAsync = 0x100;
        inline constexpr uintptr_t GetAnimationClipById = 0x128;
        inline constexpr uintptr_t GetAnimationNodeDefinition = 0x130;
        inline constexpr uintptr_t GetAnimationNodeTypes = 0x138;
        inline constexpr uintptr_t GetAnimationValueNodeDefinition = 0x140;
        inline constexpr uintptr_t GetAnimationValueNodeTypes = 0x148;
        inline constexpr uintptr_t GetAnimations = 0x108;
        inline constexpr uintptr_t GetAnimationsAsync = 0x110;
        inline constexpr uintptr_t GetClipEvaluatorAsync = 0x118;
        inline constexpr uintptr_t GetMemStats = 0x150;
        inline constexpr uintptr_t RegisterActiveAnimationClip = 0x158;
        inline constexpr uintptr_t RegisterAnimationClip = 0x160;
    }

    namespace AnimationConstraint {
        inline constexpr uintptr_t AngularDamping = 0x100;
        inline constexpr uintptr_t AngularStrength = 0x108;
        inline constexpr uintptr_t C0 = 0x110;
        inline constexpr uintptr_t C1 = 0x118;
        inline constexpr uintptr_t EnableSkinning = 0x120;
        inline constexpr uintptr_t IsKinematic = 0x128;
        inline constexpr uintptr_t LinearDamping = 0x130;
        inline constexpr uintptr_t LinearStrength = 0x138;
        inline constexpr uintptr_t MaxForce = 0x140;
        inline constexpr uintptr_t MaxTorque = 0x148;
        inline constexpr uintptr_t Part0 = 0x150;
        inline constexpr uintptr_t Part1 = 0x158;
        inline constexpr uintptr_t Transform = 0x160;
    }

    namespace AnimationController {
        inline constexpr uintptr_t AnimationPlayed = 0x110;
        inline constexpr uintptr_t GetPlayingAnimationTracks = 0x100;
        inline constexpr uintptr_t LoadAnimation = 0x108;
    }

    namespace AnimationFromVideoCreatorService {
        inline constexpr uintptr_t CreateJob = 0x100;
        inline constexpr uintptr_t DownloadJobResult = 0x108;
        inline constexpr uintptr_t FullProcess = 0x110;
        inline constexpr uintptr_t GetJobStatus = 0x118;
    }

    namespace AnimationNodeDefinition {
        inline constexpr uintptr_t AddInputPin = 0x100;
        inline constexpr uintptr_t GetOrderedInputPinNames = 0x108;
        inline constexpr uintptr_t InputPinData = 0x120;
        inline constexpr uintptr_t InputPinsChanged = 0x138;
        inline constexpr uintptr_t NodeId = 0x128;
        inline constexpr uintptr_t NodeType = 0x130;
        inline constexpr uintptr_t RemoveInputPin = 0x110;
        inline constexpr uintptr_t SetOrderedInputPinNames = 0x118;
    }

    namespace AnimationPlayed {
        inline constexpr uintptr_t AnimationNodeDefinition = 0x100;
        inline constexpr uintptr_t Animator = 0x108;
        inline constexpr uintptr_t Humanoid = 0x110;
    }

    namespace AnimationRigData {
        inline constexpr uintptr_t Dump = 0x100;
        inline constexpr uintptr_t Generic = 0x158;
        inline constexpr uintptr_t GetLabels = 0x108;
        inline constexpr uintptr_t GetNames = 0x110;
        inline constexpr uintptr_t GetParents = 0x118;
        inline constexpr uintptr_t GetPostTransforms = 0x120;
        inline constexpr uintptr_t GetPreTransforms = 0x128;
        inline constexpr uintptr_t GetTransforms = 0x130;
        inline constexpr uintptr_t IsValidR15 = 0x138;
        inline constexpr uintptr_t IsValidR15Plus = 0x140;
        inline constexpr uintptr_t LoadFromHumanoid = 0x148;
        inline constexpr uintptr_t LoadFromModel = 0x150;
        inline constexpr uintptr_t label = 0x160;
        inline constexpr uintptr_t name = 0x168;
        inline constexpr uintptr_t parent = 0x170;
        inline constexpr uintptr_t postTransform = 0x178;
        inline constexpr uintptr_t preTransform = 0x180;
        inline constexpr uintptr_t transform = 0x188;
    }

    namespace AnimationStreamTrack {
        inline constexpr uintptr_t AdjustWeight = 0x100;
        inline constexpr uintptr_t Animation = 0x130;
        inline constexpr uintptr_t FACSDataLod = 0x138;
        inline constexpr uintptr_t GetActive = 0x108;
        inline constexpr uintptr_t GetTrackerData = 0x110;
        inline constexpr uintptr_t IsPlaying = 0x140;
        inline constexpr uintptr_t Play = 0x118;
        inline constexpr uintptr_t Priority = 0x148;
        inline constexpr uintptr_t Stop = 0x120;
        inline constexpr uintptr_t Stopped = 0x160;
        inline constexpr uintptr_t TogglePause = 0x128;
        inline constexpr uintptr_t WeightCurrent = 0x150;
        inline constexpr uintptr_t WeightTarget = 0x158;
    }

    namespace AnimationTrack {
        inline constexpr uintptr_t AdjustSpeed = 0x100;
        inline constexpr uintptr_t AdjustWeight = 0x108;
        inline constexpr uintptr_t Animation = 0xa8;
        inline constexpr uintptr_t Animator = 0x100;
        inline constexpr uintptr_t DidLoop = 0x1c0;
        inline constexpr uintptr_t Ended = 0x1c8;
        inline constexpr uintptr_t GetDebugData = 0x110;
        inline constexpr uintptr_t GetMarkerReachedSignal = 0x118;
        inline constexpr uintptr_t GetParameter = 0x120;
        inline constexpr uintptr_t GetParameterDefaults = 0x128;
        inline constexpr uintptr_t GetTargetInstance = 0x130;
        inline constexpr uintptr_t GetTargetNames = 0x138;
        inline constexpr uintptr_t GetTimeOfKeyframe = 0x140;
        inline constexpr uintptr_t IsPlaying = 0x522;
        inline constexpr uintptr_t KeyframeReached = 0x1d0;
        inline constexpr uintptr_t Length = 0x188;
        inline constexpr uintptr_t Looped = 0xd5;
        inline constexpr uintptr_t ParameterChanged = 0x1d8;
        inline constexpr uintptr_t Play = 0x148;
        inline constexpr uintptr_t Priority = 0x198;
        inline constexpr uintptr_t ResetGraph = 0x150;
        inline constexpr uintptr_t SetParameter = 0x158;
        inline constexpr uintptr_t SetTargetInstance = 0x160;
        inline constexpr uintptr_t Speed = 0xc4;
        inline constexpr uintptr_t Stop = 0x168;
        inline constexpr uintptr_t Stopped = 0x1e0;
        inline constexpr uintptr_t TimePosition = 0xc8;
        inline constexpr uintptr_t UpdateGraphNodeProperty = 0x170;
        inline constexpr uintptr_t WeightCurrent = 0x1b0;
        inline constexpr uintptr_t WeightTarget = 0x1b8;
    }

    namespace AnimationValueNodeDefinition {
        inline constexpr uintptr_t NodeId = 0x100;
        inline constexpr uintptr_t NodeType = 0x108;
    }

    namespace Animator {
        inline constexpr uintptr_t ActiveAnimations = 0xa80;
        inline constexpr uintptr_t AnimTrackMetadata0 = 0x168;
        inline constexpr uintptr_t AnimTrackMetadata1 = 0x170;
        inline constexpr uintptr_t AnimTrackMetadata10 = 0x178;
        inline constexpr uintptr_t AnimTrackMetadata11 = 0x180;
        inline constexpr uintptr_t AnimTrackMetadata12 = 0x188;
        inline constexpr uintptr_t AnimTrackMetadata13 = 0x190;
        inline constexpr uintptr_t AnimTrackMetadata14 = 0x198;
        inline constexpr uintptr_t AnimTrackMetadata15 = 0x1a0;
        inline constexpr uintptr_t AnimTrackMetadata2 = 0x1a8;
        inline constexpr uintptr_t AnimTrackMetadata3 = 0x1b0;
        inline constexpr uintptr_t AnimTrackMetadata4 = 0x1b8;
        inline constexpr uintptr_t AnimTrackMetadata5 = 0x1c0;
        inline constexpr uintptr_t AnimTrackMetadata6 = 0x1c8;
        inline constexpr uintptr_t AnimTrackMetadata7 = 0x1d0;
        inline constexpr uintptr_t AnimTrackMetadata8 = 0x1d8;
        inline constexpr uintptr_t AnimTrackMetadata9 = 0x1e0;
        inline constexpr uintptr_t AnimTrackPlayState0 = 0x1e8;
        inline constexpr uintptr_t AnimTrackPlayState1 = 0x1f0;
        inline constexpr uintptr_t AnimTrackPlayState10 = 0x1f8;
        inline constexpr uintptr_t AnimTrackPlayState11 = 0x200;
        inline constexpr uintptr_t AnimTrackPlayState12 = 0x208;
        inline constexpr uintptr_t AnimTrackPlayState13 = 0x210;
        inline constexpr uintptr_t AnimTrackPlayState14 = 0x218;
        inline constexpr uintptr_t AnimTrackPlayState15 = 0x220;
        inline constexpr uintptr_t AnimTrackPlayState2 = 0x228;
        inline constexpr uintptr_t AnimTrackPlayState3 = 0x230;
        inline constexpr uintptr_t AnimTrackPlayState4 = 0x238;
        inline constexpr uintptr_t AnimTrackPlayState5 = 0x240;
        inline constexpr uintptr_t AnimTrackPlayState6 = 0x248;
        inline constexpr uintptr_t AnimTrackPlayState7 = 0x250;
        inline constexpr uintptr_t AnimTrackPlayState8 = 0x258;
        inline constexpr uintptr_t AnimTrackPlayState9 = 0x260;
        inline constexpr uintptr_t AnimTrackWeight0 = 0x268;
        inline constexpr uintptr_t AnimTrackWeight1 = 0x270;
        inline constexpr uintptr_t AnimTrackWeight10 = 0x278;
        inline constexpr uintptr_t AnimTrackWeight11 = 0x280;
        inline constexpr uintptr_t AnimTrackWeight12 = 0x288;
        inline constexpr uintptr_t AnimTrackWeight13 = 0x290;
        inline constexpr uintptr_t AnimTrackWeight14 = 0x298;
        inline constexpr uintptr_t AnimTrackWeight15 = 0x2a0;
        inline constexpr uintptr_t AnimTrackWeight2 = 0x2a8;
        inline constexpr uintptr_t AnimTrackWeight3 = 0x2b0;
        inline constexpr uintptr_t AnimTrackWeight4 = 0x2b8;
        inline constexpr uintptr_t AnimTrackWeight5 = 0x2c0;
        inline constexpr uintptr_t AnimTrackWeight6 = 0x2c8;
        inline constexpr uintptr_t AnimTrackWeight7 = 0x2d0;
        inline constexpr uintptr_t AnimTrackWeight8 = 0x2d8;
        inline constexpr uintptr_t AnimTrackWeight9 = 0x2e0;
        inline constexpr uintptr_t AnimationId0 = 0x2e8;
        inline constexpr uintptr_t AnimationId1 = 0x2f0;
        inline constexpr uintptr_t AnimationId10 = 0x2f8;
        inline constexpr uintptr_t AnimationId11 = 0x300;
        inline constexpr uintptr_t AnimationId12 = 0x308;
        inline constexpr uintptr_t AnimationId13 = 0x310;
        inline constexpr uintptr_t AnimationId14 = 0x318;
        inline constexpr uintptr_t AnimationId15 = 0x320;
        inline constexpr uintptr_t AnimationId2 = 0x328;
        inline constexpr uintptr_t AnimationId3 = 0x330;
        inline constexpr uintptr_t AnimationId4 = 0x338;
        inline constexpr uintptr_t AnimationId5 = 0x340;
        inline constexpr uintptr_t AnimationId6 = 0x348;
        inline constexpr uintptr_t AnimationId7 = 0x350;
        inline constexpr uintptr_t AnimationId8 = 0x358;
        inline constexpr uintptr_t AnimationId9 = 0x360;
        inline constexpr uintptr_t AnimationPlayed = 0x390;
        inline constexpr uintptr_t AnimationPlayedCoreScript = 0x398;
        inline constexpr uintptr_t AnimationStreamTrackPlayed = 0x3a0;
        inline constexpr uintptr_t ApplyJointVelocities = 0x100;
        inline constexpr uintptr_t EvaluationThrottled = 0x368;
        inline constexpr uintptr_t FacsReplicationData = 0x370;
        inline constexpr uintptr_t GetPlayingAnimationTracks = 0x108;
        inline constexpr uintptr_t GetPlayingAnimationTracksCoreScript = 0x110;
        inline constexpr uintptr_t GetTrackByAnimationId = 0x118;
        inline constexpr uintptr_t LoadAnimation = 0x120;
        inline constexpr uintptr_t LoadAnimationCoreScript = 0x128;
        inline constexpr uintptr_t LoadStreamAnimation = 0x130;
        inline constexpr uintptr_t LoadStreamAnimationForSelfieView_deprecated = 0x138;
        inline constexpr uintptr_t LoadStreamAnimationV2 = 0x140;
        inline constexpr uintptr_t OnCombinedUpdate = 0x3a8;
        inline constexpr uintptr_t OnGraphParameterUpdate = 0x3b0;
        inline constexpr uintptr_t OnStreamingUpdated2 = 0x3b8;
        inline constexpr uintptr_t PreferLodEnabled = 0x378;
        inline constexpr uintptr_t RegisterEvaluationParallelCallback = 0x148;
        inline constexpr uintptr_t RootMotion = 0x380;
        inline constexpr uintptr_t RootMotionWeight = 0x388;
        inline constexpr uintptr_t StepAnimations = 0x150;
        inline constexpr uintptr_t StepAnimationsInternal = 0x158;
        inline constexpr uintptr_t StreamSyncRequest = 0x3c0;
        inline constexpr uintptr_t SynchronizeWith = 0x160;
    }

    namespace AntiBotBotCountV1 {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace AppAgeSignalsService {
        inline constexpr uintptr_t GetAppAgeSignalsAsync = 0x100;
        inline constexpr uintptr_t IsAvailable = 0x108;
    }

    namespace AppLifecycleObserverService {
        inline constexpr uintptr_t GetCurrentState = 0x100;
        inline constexpr uintptr_t IsDidDetachSupported = 0x108;
        inline constexpr uintptr_t OnBecomeActive = 0x130;
        inline constexpr uintptr_t OnDetach = 0x138;
        inline constexpr uintptr_t OnHide = 0x140;
        inline constexpr uintptr_t OnResignActive = 0x148;
        inline constexpr uintptr_t OnStart = 0x150;
        inline constexpr uintptr_t OnUnhide = 0x158;
        inline constexpr uintptr_t TriggerOnLandingPageMount = 0x110;
        inline constexpr uintptr_t TriggerOnLuaAppInteractive = 0x118;
        inline constexpr uintptr_t TriggerOnLuaAppReadyToRender = 0x120;
        inline constexpr uintptr_t TriggerOnPageMilestone = 0x128;
    }

    namespace AppRatingPromptService {
        inline constexpr uintptr_t OnGameLeft = 0x110;
        inline constexpr uintptr_t isAppRatingPromptAvailable = 0x100;
        inline constexpr uintptr_t showAppRatingPrompt = 0x108;
    }

    namespace AppUpdateService {
        inline constexpr uintptr_t CanPerformBinaryUpdate = 0x100;
        inline constexpr uintptr_t CheckForUpdate = 0x108;
        inline constexpr uintptr_t GetProtocolLaunchUpdateName = 0x110;
        inline constexpr uintptr_t GetProtocolLaunchUpdateType = 0x118;
        inline constexpr uintptr_t PerformManagedUpdate = 0x120;
    }

    namespace ApplyAtCenterOfMass {
        inline constexpr uintptr_t AlignPosition = 0x100;
        inline constexpr uintptr_t DragDetector = 0x108;
        inline constexpr uintptr_t LineForce = 0x110;
        inline constexpr uintptr_t VectorForce = 0x118;
    }

    namespace ArcHandles {
        inline constexpr uintptr_t Axes = 0x100;
        inline constexpr uintptr_t MouseButton1Down = 0x130;
        inline constexpr uintptr_t MouseButton1DownConnectionCount = 0x108;
        inline constexpr uintptr_t MouseButton1Up = 0x138;
        inline constexpr uintptr_t MouseButton1UpConnectionCount = 0x110;
        inline constexpr uintptr_t MouseDrag = 0x140;
        inline constexpr uintptr_t MouseDragConnectionCount = 0x118;
        inline constexpr uintptr_t MouseEnter = 0x148;
        inline constexpr uintptr_t MouseEnterConnectionCount = 0x120;
        inline constexpr uintptr_t MouseLeave = 0x150;
        inline constexpr uintptr_t MouseLeaveConnectionCount = 0x128;
    }

    namespace ArrayTypingInfo {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace AssetDeliveryProxy {
        inline constexpr uintptr_t Interface = 0x100;
        inline constexpr uintptr_t Port = 0x108;
        inline constexpr uintptr_t StartServer = 0x110;
    }

    namespace AssetEjectionModuleFilled {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace AssetId {
        inline constexpr uintptr_t AccessoryDescription = 0x100;
        inline constexpr uintptr_t AudioPlayer = 0x108;
        inline constexpr uintptr_t BodyPartDescription = 0x110;
        inline constexpr uintptr_t MakeupDescription = 0x118;
        inline constexpr uintptr_t PartOperation = 0x120;
    }

    namespace AssetPatchSettings {
        inline constexpr uintptr_t ContentId = 0x100;
        inline constexpr uintptr_t OutputPath = 0x108;
        inline constexpr uintptr_t PatchId = 0x110;
    }

    namespace AssetQualityService {
        inline constexpr uintptr_t FetchAssetQualitySummaryFromGltfAsync = 0x100;
        inline constexpr uintptr_t FetchAssetQualitySummaryFromJobIdAsync = 0x108;
        inline constexpr uintptr_t FetchAssetQualitySummaryFromJobIdV2Async = 0x110;
        inline constexpr uintptr_t FetchAssetQualityValidationEntriesFromModelsAsync = 0x118;
        inline constexpr uintptr_t FetchAssetQualityValidationRawFromModelsAsync = 0x120;
        inline constexpr uintptr_t FetchAssetQualityVisualizationDataFromUrlAsync = 0x128;
        inline constexpr uintptr_t GenerateAssetQualityGltfFromInstanceAsync = 0x130;
    }

    namespace AssetRepresentation {
        inline constexpr uintptr_t AudioPlayer = 0x100;
        inline constexpr uintptr_t Sound = 0x108;
    }

    namespace AssetRequestCdnDelay {
        inline constexpr uintptr_t EventIngest = 0x100;
    }

    namespace AssetService {
        inline constexpr uintptr_t AllowInsertFreeAssets = 0x208;
        inline constexpr uintptr_t AudioMetadataFailedResponse = 0x210;
        inline constexpr uintptr_t AudioMetadataRequest = 0x218;
        inline constexpr uintptr_t AudioMetadataResponse = 0x220;
        inline constexpr uintptr_t CachePartOperationsAsync = 0x100;
        inline constexpr uintptr_t CanEditAssetAsync = 0x108;
        inline constexpr uintptr_t ComposeDecalAsync = 0x110;
        inline constexpr uintptr_t CreateAssetAsync = 0x118;
        inline constexpr uintptr_t CreateAssetVersionAsync = 0x120;
        inline constexpr uintptr_t CreateDataModelContentAsync = 0x128;
        inline constexpr uintptr_t CreateDecalAsync = 0x130;
        inline constexpr uintptr_t CreateEditableImage = 0x1e8;
        inline constexpr uintptr_t CreateEditableImageAsync = 0x138;
        inline constexpr uintptr_t CreateEditableImageFromDownloadAsync = 0x140;
        inline constexpr uintptr_t CreateEditableMesh = 0x1f0;
        inline constexpr uintptr_t CreateEditableMeshAsync = 0x148;
        inline constexpr uintptr_t CreateMeshPartAsync = 0x150;
        inline constexpr uintptr_t CreatePlaceAsync = 0x158;
        inline constexpr uintptr_t CreatePlaceInPlayerInventoryAsync = 0x160;
        inline constexpr uintptr_t CreateSurfaceAppearanceAsync = 0x168;
        inline constexpr uintptr_t CreateTextContentAsync = 0x170;
        inline constexpr uintptr_t CreateTextureAsync = 0x178;
        inline constexpr uintptr_t DeserializeInstance = 0x1f8;
        inline constexpr uintptr_t GetAssetIdsForPackage = 0x180;
        inline constexpr uintptr_t GetAssetIdsForPackageAsync = 0x188;
        inline constexpr uintptr_t GetAudioMetadataAsync = 0x190;
        inline constexpr uintptr_t GetBundleDetailsAsync = 0x198;
        inline constexpr uintptr_t GetCreatorAssetID = 0x1a0;
        inline constexpr uintptr_t GetGamePlacesAsync = 0x1a8;
        inline constexpr uintptr_t GetOpaqueContentMetadataMap = 0x200;
        inline constexpr uintptr_t LoadAssetAsync = 0x1b0;
        inline constexpr uintptr_t OpenPublishResultModal = 0x228;
        inline constexpr uintptr_t PromptCreatePlatformContentAsync = 0x1b8;
        inline constexpr uintptr_t PromptImportAnimationClipFromVideoAsync = 0x1c0;
        inline constexpr uintptr_t ReadTextContentAsync = 0x1c8;
        inline constexpr uintptr_t SavePlaceAsync = 0x1d0;
        inline constexpr uintptr_t SearchAudio = 0x1d8;
        inline constexpr uintptr_t SearchAudioAsync = 0x1e0;
    }

    namespace Atmosphere {
        inline constexpr uintptr_t Color = 0xa8;
        inline constexpr uintptr_t Decay = 0xb4;
        inline constexpr uintptr_t Density = 0xc0;
        inline constexpr uintptr_t Glare = 0xc4;
        inline constexpr uintptr_t Haze = 0xc8;
        inline constexpr uintptr_t Offset = 0xcc;
    }

    namespace AtmosphereSensor {
        inline constexpr uintptr_t AirDensity = 0x100;
        inline constexpr uintptr_t RelativeWindVelocity = 0x108;
    }

    namespace Attachment {
        inline constexpr uintptr_t Axis = 0x128;
        inline constexpr uintptr_t CFrame = 0x130;
        inline constexpr uintptr_t GetAxis = 0x100;
        inline constexpr uintptr_t GetConstraints = 0x108;
        inline constexpr uintptr_t GetSecondaryAxis = 0x110;
        inline constexpr uintptr_t Orientation = 0x138;
        inline constexpr uintptr_t Position = 0xb4;
        inline constexpr uintptr_t Rotation = 0x148;
        inline constexpr uintptr_t SecondaryAxis = 0x150;
        inline constexpr uintptr_t SetAxis = 0x118;
        inline constexpr uintptr_t SetSecondaryAxis = 0x120;
        inline constexpr uintptr_t Visible = 0x158;
        inline constexpr uintptr_t WorldAxis = 0x160;
        inline constexpr uintptr_t WorldCFrame = 0x168;
        inline constexpr uintptr_t WorldOrientation = 0x170;
        inline constexpr uintptr_t WorldPosition = 0x178;
        inline constexpr uintptr_t WorldRotation = 0x180;
        inline constexpr uintptr_t WorldSecondaryAxis = 0x188;
    }

    namespace Attachment0 {
        inline constexpr uintptr_t Beam = 0x100;
        inline constexpr uintptr_t Constraint = 0x108;
        inline constexpr uintptr_t PathfindingLink = 0x110;
        inline constexpr uintptr_t Trail = 0x118;
    }

    namespace Attachment1 {
        inline constexpr uintptr_t Beam = 0x100;
        inline constexpr uintptr_t Constraint = 0x108;
        inline constexpr uintptr_t PathfindingLink = 0x110;
        inline constexpr uintptr_t Trail = 0x118;
    }

    namespace Attack {
        inline constexpr uintptr_t AudioCompressor = 0x100;
        inline constexpr uintptr_t AudioGate = 0x108;
        inline constexpr uintptr_t CompressorSoundEffect = 0x110;
    }

    namespace Attribute {
        inline constexpr uintptr_t Key = 0x0;
        inline constexpr uintptr_t Size = 0x58;
        inline constexpr uintptr_t TypeIdRva = 0x87948e4;
        inline constexpr uintptr_t TypeIdRvaNew = 0x87949d4;
        inline constexpr uintptr_t Value = 0x8;
    }

    namespace AttributesMap {
        inline constexpr uintptr_t Attributes = 0x10;
        inline constexpr uintptr_t Length = 0x0;
    }

    namespace AudioAnalyzer {
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t GetSpectrum = 0x118;
        inline constexpr uintptr_t PeakLevel = 0x120;
        inline constexpr uintptr_t RmsLevel = 0x128;
        inline constexpr uintptr_t SpectrumEnabled = 0x130;
        inline constexpr uintptr_t WindowSize = 0x138;
        inline constexpr uintptr_t WiringChanged = 0x140;
    }

    namespace AudioChannelMixer {
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t Layout = 0x118;
        inline constexpr uintptr_t WiringChanged = 0x120;
    }

    namespace AudioChannelSplitter {
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t Layout = 0x118;
        inline constexpr uintptr_t WiringChanged = 0x120;
    }

    namespace AudioChorus {
        inline constexpr uintptr_t Bypass = 0x118;
        inline constexpr uintptr_t Depth = 0x120;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t Mix = 0x128;
        inline constexpr uintptr_t Rate = 0x130;
        inline constexpr uintptr_t WiringChanged = 0x138;
    }

    namespace AudioCompressor {
        inline constexpr uintptr_t Attack = 0x118;
        inline constexpr uintptr_t Bypass = 0x120;
        inline constexpr uintptr_t Editor = 0x128;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t MakeupGain = 0x130;
        inline constexpr uintptr_t Ratio = 0x138;
        inline constexpr uintptr_t Release = 0x140;
        inline constexpr uintptr_t Threshold = 0x148;
        inline constexpr uintptr_t WiringChanged = 0x150;
    }

    namespace AudioContent {
        inline constexpr uintptr_t AudioPlayer = 0x100;
        inline constexpr uintptr_t Sound = 0x108;
    }

    namespace AudioDeviceInput {
        inline constexpr uintptr_t AccessList = 0x128;
        inline constexpr uintptr_t AccessType = 0x130;
        inline constexpr uintptr_t Active = 0x138;
        inline constexpr uintptr_t DictationEnabled = 0x140;
        inline constexpr uintptr_t EchoCancellation = 0x148;
        inline constexpr uintptr_t GainControl = 0x150;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t GetUserIdAccessList = 0x118;
        inline constexpr uintptr_t IsReady = 0x158;
        inline constexpr uintptr_t Muted = 0x160;
        inline constexpr uintptr_t MutedByLocalUser = 0x168;
        inline constexpr uintptr_t NoiseSuppression = 0x170;
        inline constexpr uintptr_t Player = 0x178;
        inline constexpr uintptr_t SetUserIdAccessList = 0x120;
        inline constexpr uintptr_t Volume = 0x180;
        inline constexpr uintptr_t WiringChanged = 0x188;
    }

    namespace AudioDeviceOutput {
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t Player = 0x118;
        inline constexpr uintptr_t WiringChanged = 0x120;
    }

    namespace AudioDistortion {
        inline constexpr uintptr_t Bypass = 0x118;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t Level = 0x120;
        inline constexpr uintptr_t WiringChanged = 0x128;
    }

    namespace AudioEcho {
        inline constexpr uintptr_t Bypass = 0x120;
        inline constexpr uintptr_t DelayTime = 0x128;
        inline constexpr uintptr_t DryLevel = 0x130;
        inline constexpr uintptr_t Feedback = 0x138;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t RampTime = 0x140;
        inline constexpr uintptr_t Reset = 0x118;
        inline constexpr uintptr_t WetLevel = 0x148;
        inline constexpr uintptr_t WiringChanged = 0x150;
    }

    namespace AudioEmitter {
        inline constexpr uintptr_t AcousticSimulationEnabled = 0x148;
        inline constexpr uintptr_t AngleAttenuation = 0x150;
        inline constexpr uintptr_t AudioInteractionGroup = 0x158;
        inline constexpr uintptr_t DiffractionEnabled = 0x160;
        inline constexpr uintptr_t DistanceAttenuation = 0x168;
        inline constexpr uintptr_t DistanceAttenuationBounds = 0x170;
        inline constexpr uintptr_t DistanceAttenuationMode = 0x178;
        inline constexpr uintptr_t GetAngleAttenuation = 0x100;
        inline constexpr uintptr_t GetAudibilityFor = 0x108;
        inline constexpr uintptr_t GetConnectedWires = 0x110;
        inline constexpr uintptr_t GetDistanceAttenuation = 0x118;
        inline constexpr uintptr_t GetInputPins = 0x120;
        inline constexpr uintptr_t GetInteractingListeners = 0x128;
        inline constexpr uintptr_t GetOutputPins = 0x130;
        inline constexpr uintptr_t OcclusionEnabled = 0x180;
        inline constexpr uintptr_t PositionInstance = 0x188;
        inline constexpr uintptr_t PositionType = 0x190;
        inline constexpr uintptr_t ReverbEnabled = 0x198;
        inline constexpr uintptr_t SetAngleAttenuation = 0x138;
        inline constexpr uintptr_t SetDistanceAttenuation = 0x140;
        inline constexpr uintptr_t SimulationFidelity = 0x1a0;
        inline constexpr uintptr_t WiringChanged = 0x1a8;
    }

    namespace AudioEqualizer {
        inline constexpr uintptr_t Bypass = 0x118;
        inline constexpr uintptr_t Editor = 0x120;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t HighGain = 0x128;
        inline constexpr uintptr_t LowGain = 0x130;
        inline constexpr uintptr_t MidGain = 0x138;
        inline constexpr uintptr_t MidRange = 0x140;
        inline constexpr uintptr_t WiringChanged = 0x148;
    }

    namespace AudioFader {
        inline constexpr uintptr_t Bypass = 0x118;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t Volume = 0x120;
        inline constexpr uintptr_t WiringChanged = 0x128;
    }

    namespace AudioFilter {
        inline constexpr uintptr_t Bypass = 0x120;
        inline constexpr uintptr_t Editor = 0x128;
        inline constexpr uintptr_t FilterType = 0x130;
        inline constexpr uintptr_t Frequency = 0x138;
        inline constexpr uintptr_t Gain = 0x140;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetGainAt = 0x108;
        inline constexpr uintptr_t GetInputPins = 0x110;
        inline constexpr uintptr_t GetOutputPins = 0x118;
        inline constexpr uintptr_t Q = 0x148;
        inline constexpr uintptr_t WiringChanged = 0x150;
    }

    namespace AudioFlanger {
        inline constexpr uintptr_t Bypass = 0x118;
        inline constexpr uintptr_t Depth = 0x120;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t Mix = 0x128;
        inline constexpr uintptr_t Rate = 0x130;
        inline constexpr uintptr_t WiringChanged = 0x138;
    }

    namespace AudioFocusService {
        inline constexpr uintptr_t AcquireFocus = 0x100;
        inline constexpr uintptr_t GetFocusedContextId = 0x108;
        inline constexpr uintptr_t GetRegisteredContexts = 0x110;
        inline constexpr uintptr_t OnContextRegistered = 0x128;
        inline constexpr uintptr_t OnContextUnregistered = 0x130;
        inline constexpr uintptr_t OnDeafenVoiceAudio = 0x138;
        inline constexpr uintptr_t OnUndeafenVoiceAudio = 0x140;
        inline constexpr uintptr_t RegisterContextIdFromLua = 0x118;
        inline constexpr uintptr_t RequestFocus = 0x120;
    }

    namespace AudioGate {
        inline constexpr uintptr_t Attack = 0x120;
        inline constexpr uintptr_t Bypass = 0x128;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t Release = 0x130;
        inline constexpr uintptr_t Reset = 0x118;
        inline constexpr uintptr_t Threshold = 0x138;
        inline constexpr uintptr_t WiringChanged = 0x140;
    }

    namespace AudioInteractionGroup {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioListener = 0x108;
    }

    namespace AudioLimiter {
        inline constexpr uintptr_t Bypass = 0x118;
        inline constexpr uintptr_t Editor = 0x120;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t MaxLevel = 0x128;
        inline constexpr uintptr_t Release = 0x130;
        inline constexpr uintptr_t WiringChanged = 0x138;
    }

    namespace AudioListener {
        inline constexpr uintptr_t AcousticSimulationEnabled = 0x150;
        inline constexpr uintptr_t AngleAttenuation = 0x158;
        inline constexpr uintptr_t AudioInteractionGroup = 0x160;
        inline constexpr uintptr_t DiffractionEnabled = 0x168;
        inline constexpr uintptr_t DistanceAttenuation = 0x170;
        inline constexpr uintptr_t GetAngleAttenuation = 0x100;
        inline constexpr uintptr_t GetAudibilityFor = 0x108;
        inline constexpr uintptr_t GetConnectedWires = 0x110;
        inline constexpr uintptr_t GetDistanceAttenuation = 0x118;
        inline constexpr uintptr_t GetInputPins = 0x120;
        inline constexpr uintptr_t GetInteractingEmitters = 0x128;
        inline constexpr uintptr_t GetOutputPins = 0x130;
        inline constexpr uintptr_t OcclusionEnabled = 0x178;
        inline constexpr uintptr_t PositionInstance = 0x180;
        inline constexpr uintptr_t PositionType = 0x188;
        inline constexpr uintptr_t Reset = 0x138;
        inline constexpr uintptr_t ReverbEnabled = 0x190;
        inline constexpr uintptr_t SetAngleAttenuation = 0x140;
        inline constexpr uintptr_t SetDistanceAttenuation = 0x148;
        inline constexpr uintptr_t SimulationFidelity = 0x198;
        inline constexpr uintptr_t WiringChanged = 0x1a0;
    }

    namespace AudioPitchShifter {
        inline constexpr uintptr_t Bypass = 0x118;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t Pitch = 0x120;
        inline constexpr uintptr_t WindowSize = 0x128;
        inline constexpr uintptr_t WiringChanged = 0x130;
    }

    namespace AudioPlayer {
        inline constexpr uintptr_t Asset = 0x138;
        inline constexpr uintptr_t AssetId = 0x140;
        inline constexpr uintptr_t AssetRepresentation = 0x148;
        inline constexpr uintptr_t AudioContent = 0x150;
        inline constexpr uintptr_t AutoLoad = 0x158;
        inline constexpr uintptr_t AutoPlay = 0x160;
        inline constexpr uintptr_t Cancel = 0x108;
        inline constexpr uintptr_t Ended = 0x1b0;
        inline constexpr uintptr_t GetConnectedWires = 0x110;
        inline constexpr uintptr_t GetInputPins = 0x118;
        inline constexpr uintptr_t GetOutputPins = 0x120;
        inline constexpr uintptr_t GetWaveformAsync = 0x100;
        inline constexpr uintptr_t IsPlaying = 0x168;
        inline constexpr uintptr_t IsReady = 0x170;
        inline constexpr uintptr_t LoopRegion = 0x178;
        inline constexpr uintptr_t Looped = 0x1b8;
        inline constexpr uintptr_t Looping = 0x180;
        inline constexpr uintptr_t Play = 0x128;
        inline constexpr uintptr_t PlaybackRegion = 0x188;
        inline constexpr uintptr_t PlaybackSpeed = 0x190;
        inline constexpr uintptr_t Stop = 0x130;
        inline constexpr uintptr_t TimeLength = 0x198;
        inline constexpr uintptr_t TimePosition = 0x1a0;
        inline constexpr uintptr_t Volume = 0x1a8;
        inline constexpr uintptr_t WiringChanged = 0x1c0;
    }

    namespace AudioRecorder {
        inline constexpr uintptr_t CanRecordAsync = 0x100;
        inline constexpr uintptr_t Clear = 0x118;
        inline constexpr uintptr_t GetConnectedWires = 0x120;
        inline constexpr uintptr_t GetInputPins = 0x128;
        inline constexpr uintptr_t GetOutputPins = 0x130;
        inline constexpr uintptr_t GetTemporaryContent = 0x138;
        inline constexpr uintptr_t GetUnrecordableInstancesAsync = 0x108;
        inline constexpr uintptr_t IsRecording = 0x148;
        inline constexpr uintptr_t RecordAsync = 0x110;
        inline constexpr uintptr_t Stop = 0x140;
        inline constexpr uintptr_t TimeLength = 0x150;
        inline constexpr uintptr_t WiringChanged = 0x158;
    }

    namespace AudioReverb {
        inline constexpr uintptr_t Bypass = 0x120;
        inline constexpr uintptr_t DecayRatio = 0x128;
        inline constexpr uintptr_t DecayTime = 0x130;
        inline constexpr uintptr_t Density = 0x138;
        inline constexpr uintptr_t Diffusion = 0x140;
        inline constexpr uintptr_t DryLevel = 0x148;
        inline constexpr uintptr_t EarlyDelayTime = 0x150;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t HighCutFrequency = 0x158;
        inline constexpr uintptr_t LateDelayTime = 0x160;
        inline constexpr uintptr_t LowShelfFrequency = 0x168;
        inline constexpr uintptr_t LowShelfGain = 0x170;
        inline constexpr uintptr_t ReferenceFrequency = 0x178;
        inline constexpr uintptr_t Reset = 0x118;
        inline constexpr uintptr_t WetLevel = 0x180;
        inline constexpr uintptr_t WiringChanged = 0x188;
    }

    namespace AudioSearchParams {
        inline constexpr uintptr_t Album = 0x100;
        inline constexpr uintptr_t Artist = 0x108;
        inline constexpr uintptr_t AudioSubType = 0x110;
        inline constexpr uintptr_t AudioSubtype = 0x118;
        inline constexpr uintptr_t MaxDuration = 0x120;
        inline constexpr uintptr_t MinDuration = 0x128;
        inline constexpr uintptr_t SearchKeyword = 0x130;
        inline constexpr uintptr_t Tag = 0x138;
        inline constexpr uintptr_t Title = 0x140;
    }

    namespace AudioSpeechToText {
        inline constexpr uintptr_t DictationEnabled = 0x118;
        inline constexpr uintptr_t DisableVoiceDetection = 0x120;
        inline constexpr uintptr_t EnableVolumeCheck = 0x128;
        inline constexpr uintptr_t Enabled = 0x130;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t Locale = 0x138;
        inline constexpr uintptr_t Text = 0x140;
        inline constexpr uintptr_t VoiceDetected = 0x148;
        inline constexpr uintptr_t VoiceDetectedOverride = 0x150;
        inline constexpr uintptr_t WiringChanged = 0x158;
    }

    namespace AudioTextToSpeech {
        inline constexpr uintptr_t AutoLocalize = 0x148;
        inline constexpr uintptr_t Ended = 0x1a8;
        inline constexpr uintptr_t GetConnectedWires = 0x118;
        inline constexpr uintptr_t GetInputPins = 0x120;
        inline constexpr uintptr_t GetOutputPins = 0x128;
        inline constexpr uintptr_t GetWaveformAsync = 0x100;
        inline constexpr uintptr_t IsLoaded = 0x150;
        inline constexpr uintptr_t IsPlaying = 0x158;
        inline constexpr uintptr_t LoadAsync = 0x108;
        inline constexpr uintptr_t LoadPlatformAsync = 0x110;
        inline constexpr uintptr_t Looped = 0x1b0;
        inline constexpr uintptr_t Looping = 0x160;
        inline constexpr uintptr_t Pause = 0x130;
        inline constexpr uintptr_t Pitch = 0x168;
        inline constexpr uintptr_t Play = 0x138;
        inline constexpr uintptr_t PlaybackSpeed = 0x170;
        inline constexpr uintptr_t Speed = 0x178;
        inline constexpr uintptr_t Text = 0x180;
        inline constexpr uintptr_t TimeLength = 0x188;
        inline constexpr uintptr_t TimePosition = 0x190;
        inline constexpr uintptr_t Unload = 0x140;
        inline constexpr uintptr_t VoiceId = 0x198;
        inline constexpr uintptr_t Volume = 0x1a0;
        inline constexpr uintptr_t WiringChanged = 0x1b8;
    }

    namespace AudioTremolo {
        inline constexpr uintptr_t Bypass = 0x118;
        inline constexpr uintptr_t Depth = 0x120;
        inline constexpr uintptr_t Duty = 0x128;
        inline constexpr uintptr_t Frequency = 0x130;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t Shape = 0x138;
        inline constexpr uintptr_t Skew = 0x140;
        inline constexpr uintptr_t Square = 0x148;
        inline constexpr uintptr_t WiringChanged = 0x150;
    }

    namespace AudioWindSynthesizer {
        inline constexpr uintptr_t Enabled = 0x118;
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t PositionInstance = 0x120;
        inline constexpr uintptr_t PositionType = 0x128;
        inline constexpr uintptr_t Profile = 0x130;
        inline constexpr uintptr_t Volume = 0x138;
        inline constexpr uintptr_t WiringChanged = 0x140;
    }

    namespace AuroraScript {
        inline constexpr uintptr_t AddTo = 0x100;
        inline constexpr uintptr_t AuroraScriptBindingsSerialize = 0x128;
        inline constexpr uintptr_t ChangedThisFrame = 0x158;
        inline constexpr uintptr_t EnableCulling = 0x130;
        inline constexpr uintptr_t EnableLOD = 0x138;
        inline constexpr uintptr_t GetSchema = 0x108;
        inline constexpr uintptr_t IsOnInstance = 0x110;
        inline constexpr uintptr_t LODCriticality = 0x140;
        inline constexpr uintptr_t Priority = 0x148;
        inline constexpr uintptr_t RemoveFrom = 0x118;
        inline constexpr uintptr_t SignalFired = 0x120;
        inline constexpr uintptr_t Source = 0x150;
        inline constexpr uintptr_t SynchronizeState = 0x160;
    }

    namespace AuroraScriptObject {
        inline constexpr uintptr_t BehaviorWeak = 0x110;
        inline constexpr uintptr_t BoundInstanceWeak = 0x118;
        inline constexpr uintptr_t FrameId = 0x120;
        inline constexpr uintptr_t GetCurrentState = 0x100;
        inline constexpr uintptr_t LODLevel = 0x128;
        inline constexpr uintptr_t MaxFrequency = 0x130;
        inline constexpr uintptr_t PriorFrameInvoked = 0x138;
        inline constexpr uintptr_t SetStateFieldValue = 0x108;
    }

    namespace AuroraScriptService {
        inline constexpr uintptr_t FindBinding = 0x100;
        inline constexpr uintptr_t FindBindings = 0x108;
        inline constexpr uintptr_t GetAllCollections = 0x110;
        inline constexpr uintptr_t GetLocalFrameId = 0x118;
        inline constexpr uintptr_t SendMessage = 0x120;
        inline constexpr uintptr_t getBehaviorObjects = 0x128;
        inline constexpr uintptr_t getBehaviors = 0x130;
        inline constexpr uintptr_t getBehaviorsForInstance = 0x138;
        inline constexpr uintptr_t getInstancesForBehavior = 0x140;
    }

    namespace AuroraService {
        inline constexpr uintptr_t BufferFullInputCount = 0x170;
        inline constexpr uintptr_t FixedRateTick = 0x1b8;
        inline constexpr uintptr_t GetPredictedInstances = 0x100;
        inline constexpr uintptr_t GetRemoteWorldStepId = 0x108;
        inline constexpr uintptr_t GetServerView = 0x110;
        inline constexpr uintptr_t GetWorldStepId = 0x118;
        inline constexpr uintptr_t HashRoundingPoint = 0x178;
        inline constexpr uintptr_t IgnoreRotation = 0x180;
        inline constexpr uintptr_t InputDropRate = 0x188;
        inline constexpr uintptr_t IsInstancePredicted = 0x120;
        inline constexpr uintptr_t LockStepIdOffset = 0x190;
        inline constexpr uintptr_t OutOfOrderInputCount = 0x198;
        inline constexpr uintptr_t PlayInputRecording = 0x128;
        inline constexpr uintptr_t RCCHeartbeatFPS = 0x1a0;
        inline constexpr uintptr_t RollbackOffset = 0x1a8;
        inline constexpr uintptr_t SetReplicationLag = 0x130;
        inline constexpr uintptr_t ShowDebugVisualizer = 0x138;
        inline constexpr uintptr_t StartInputRecording = 0x140;
        inline constexpr uintptr_t StartPrediction = 0x148;
        inline constexpr uintptr_t Step = 0x1c0;
        inline constexpr uintptr_t StepPhysics = 0x150;
        inline constexpr uintptr_t StopInputRecording = 0x158;
        inline constexpr uintptr_t StopPrediction = 0x160;
        inline constexpr uintptr_t TooOldInputCount = 0x1b0;
        inline constexpr uintptr_t UpdateProperties = 0x168;
    }

    namespace AutoJumpEnabled {
        inline constexpr uintptr_t Humanoid = 0x100;
        inline constexpr uintptr_t Player = 0x108;
        inline constexpr uintptr_t StarterPlayer = 0x110;
    }

    namespace AutoLocalize {
        inline constexpr uintptr_t AudioTextToSpeech = 0x100;
        inline constexpr uintptr_t Decal = 0x108;
        inline constexpr uintptr_t GuiBase2d = 0x110;
        inline constexpr uintptr_t ProximityPrompt = 0x118;
    }

    namespace AvatarAbilityRules {
        inline constexpr uintptr_t CharacterControllerMode = 0x100;
        inline constexpr uintptr_t EnableClimbing = 0x108;
        inline constexpr uintptr_t EnableCrouching = 0x110;
        inline constexpr uintptr_t EnableFallingDown = 0x118;
        inline constexpr uintptr_t EnableGettingUp = 0x120;
        inline constexpr uintptr_t EnableHolding = 0x128;
        inline constexpr uintptr_t EnableJumping = 0x130;
        inline constexpr uintptr_t EnableReaching = 0x138;
        inline constexpr uintptr_t EnableRunning = 0x140;
        inline constexpr uintptr_t EnableSitting = 0x148;
        inline constexpr uintptr_t EnableSprinting = 0x150;
        inline constexpr uintptr_t EnableSwimming = 0x158;
        inline constexpr uintptr_t EnableTurning = 0x160;
    }

    namespace AvatarAccessoryRules {
        inline constexpr uintptr_t AccessoryMode = 0x108;
        inline constexpr uintptr_t CustomAccessoryMode = 0x110;
        inline constexpr uintptr_t CustomBackAccessoryEnabled = 0x118;
        inline constexpr uintptr_t CustomBackAccessoryId = 0x120;
        inline constexpr uintptr_t CustomFaceAccessoryEnabled = 0x128;
        inline constexpr uintptr_t CustomFaceAccessoryId = 0x130;
        inline constexpr uintptr_t CustomFrontAccessoryEnabled = 0x138;
        inline constexpr uintptr_t CustomFrontAccessoryId = 0x140;
        inline constexpr uintptr_t CustomHairAccessoryEnabled = 0x148;
        inline constexpr uintptr_t CustomHairAccessoryId = 0x150;
        inline constexpr uintptr_t CustomHeadAccessoryEnabled = 0x158;
        inline constexpr uintptr_t CustomHeadAccessoryId = 0x160;
        inline constexpr uintptr_t CustomNeckAccessoryEnabled = 0x168;
        inline constexpr uintptr_t CustomNeckAccessoryId = 0x170;
        inline constexpr uintptr_t CustomShoulderAccessoryEnabled = 0x178;
        inline constexpr uintptr_t CustomShoulderAccessoryId = 0x180;
        inline constexpr uintptr_t CustomWaistAccessoryEnabled = 0x188;
        inline constexpr uintptr_t CustomWaistAccessoryId = 0x190;
        inline constexpr uintptr_t EnableEmissives = 0x198;
        inline constexpr uintptr_t EnableSound = 0x1a0;
        inline constexpr uintptr_t EnableVFX = 0x1a8;
        inline constexpr uintptr_t LimitBounds = 0x1b0;
        inline constexpr uintptr_t LimitMethod = 0x1b8;
        inline constexpr uintptr_t willRemoveAccessory = 0x100;
    }

    namespace AvatarAnimationRules {
        inline constexpr uintptr_t AnimationClipsMode = 0x100;
        inline constexpr uintptr_t AnimationPacksMode = 0x108;
        inline constexpr uintptr_t CustomClimbAnimationEnabled = 0x110;
        inline constexpr uintptr_t CustomClimbAnimationId = 0x118;
        inline constexpr uintptr_t CustomFallAnimationEnabled = 0x120;
        inline constexpr uintptr_t CustomFallAnimationId = 0x128;
        inline constexpr uintptr_t CustomIdleAlt1AnimationEnabled = 0x130;
        inline constexpr uintptr_t CustomIdleAlt1AnimationId = 0x138;
        inline constexpr uintptr_t CustomIdleAlt2AnimationEnabled = 0x140;
        inline constexpr uintptr_t CustomIdleAlt2AnimationId = 0x148;
        inline constexpr uintptr_t CustomIdleAnimationEnabled = 0x150;
        inline constexpr uintptr_t CustomIdleAnimationId = 0x158;
        inline constexpr uintptr_t CustomJumpAnimationEnabled = 0x160;
        inline constexpr uintptr_t CustomJumpAnimationId = 0x168;
        inline constexpr uintptr_t CustomRunAnimationEnabled = 0x170;
        inline constexpr uintptr_t CustomRunAnimationId = 0x178;
        inline constexpr uintptr_t CustomSwimAnimationEnabled = 0x180;
        inline constexpr uintptr_t CustomSwimAnimationId = 0x188;
        inline constexpr uintptr_t CustomSwimIdleAnimationEnabled = 0x190;
        inline constexpr uintptr_t CustomSwimIdleAnimationId = 0x198;
        inline constexpr uintptr_t CustomWalkAnimationEnabled = 0x1a0;
        inline constexpr uintptr_t CustomWalkAnimationId = 0x1a8;
    }

    namespace AvatarBodyRules {
        inline constexpr uintptr_t AppearanceMode = 0x100;
        inline constexpr uintptr_t BuildMode = 0x108;
        inline constexpr uintptr_t CustomBodyBundleId = 0x110;
        inline constexpr uintptr_t CustomBodyType = 0x118;
        inline constexpr uintptr_t CustomBodyTypeScale = 0x120;
        inline constexpr uintptr_t CustomEyebrowEnabled = 0x128;
        inline constexpr uintptr_t CustomEyebrowId = 0x130;
        inline constexpr uintptr_t CustomEyelashEnabled = 0x138;
        inline constexpr uintptr_t CustomEyelashId = 0x140;
        inline constexpr uintptr_t CustomFaceEnabled = 0x148;
        inline constexpr uintptr_t CustomFaceId = 0x150;
        inline constexpr uintptr_t CustomHeadEnabled = 0x158;
        inline constexpr uintptr_t CustomHeadId = 0x160;
        inline constexpr uintptr_t CustomHeadScale = 0x168;
        inline constexpr uintptr_t CustomHeight = 0x170;
        inline constexpr uintptr_t CustomHeightScale = 0x178;
        inline constexpr uintptr_t CustomLeftArmEnabled = 0x180;
        inline constexpr uintptr_t CustomLeftArmId = 0x188;
        inline constexpr uintptr_t CustomLeftLegEnabled = 0x190;
        inline constexpr uintptr_t CustomLeftLegId = 0x198;
        inline constexpr uintptr_t CustomMoodEnabled = 0x1a0;
        inline constexpr uintptr_t CustomMoodId = 0x1a8;
        inline constexpr uintptr_t CustomProportionsScale = 0x1b0;
        inline constexpr uintptr_t CustomRightArmEnabled = 0x1b8;
        inline constexpr uintptr_t CustomRightArmId = 0x1c0;
        inline constexpr uintptr_t CustomRightLegEnabled = 0x1c8;
        inline constexpr uintptr_t CustomRightLegId = 0x1d0;
        inline constexpr uintptr_t CustomTorsoEnabled = 0x1d8;
        inline constexpr uintptr_t CustomTorsoId = 0x1e0;
        inline constexpr uintptr_t CustomWidthScale = 0x1e8;
        inline constexpr uintptr_t KeepPlayerHead = 0x1f0;
        inline constexpr uintptr_t ScaleMode = 0x1f8;
    }

    namespace AvatarChatService {
        inline constexpr uintptr_t ClientFeatures = 0x150;
        inline constexpr uintptr_t ClientFeaturesInitialized = 0x158;
        inline constexpr uintptr_t DebugCounterGet = 0x110;
        inline constexpr uintptr_t EnableVoice = 0x118;
        inline constexpr uintptr_t GetClientFeaturesAsync = 0x100;
        inline constexpr uintptr_t GetServerFeaturesAsync = 0x108;
        inline constexpr uintptr_t IsEnabled = 0x120;
        inline constexpr uintptr_t IsPlaceEnabled = 0x128;
        inline constexpr uintptr_t IsUniverseEnabled = 0x130;
        inline constexpr uintptr_t OnClientFeatures = 0x168;
        inline constexpr uintptr_t PollClientFeatures = 0x138;
        inline constexpr uintptr_t PollServerFeatures = 0x140;
        inline constexpr uintptr_t RefreshClientFeatures = 0x170;
        inline constexpr uintptr_t ServerFeatures = 0x160;
        inline constexpr uintptr_t deviceMeetsRequirementsForFeature = 0x148;
    }

    namespace AvatarClothingRules {
        inline constexpr uintptr_t ClothingMode = 0x108;
        inline constexpr uintptr_t CustomClassicPantsAccessoryEnabled = 0x110;
        inline constexpr uintptr_t CustomClassicPantsAccessoryId = 0x118;
        inline constexpr uintptr_t CustomClassicShirtsAccessoryEnabled = 0x120;
        inline constexpr uintptr_t CustomClassicShirtsAccessoryId = 0x128;
        inline constexpr uintptr_t CustomClassicTShirtsAccessoryEnabled = 0x130;
        inline constexpr uintptr_t CustomClassicTShirtsAccessoryId = 0x138;
        inline constexpr uintptr_t CustomClothingMode = 0x140;
        inline constexpr uintptr_t CustomDressSkirtAccessoryEnabled = 0x148;
        inline constexpr uintptr_t CustomDressSkirtAccessoryId = 0x150;
        inline constexpr uintptr_t CustomJacketAccessoryEnabled = 0x158;
        inline constexpr uintptr_t CustomJacketAccessoryId = 0x160;
        inline constexpr uintptr_t CustomLeftShoesAccessoryEnabled = 0x168;
        inline constexpr uintptr_t CustomLeftShoesAccessoryId = 0x170;
        inline constexpr uintptr_t CustomPantsAccessoryEnabled = 0x178;
        inline constexpr uintptr_t CustomPantsAccessoryId = 0x180;
        inline constexpr uintptr_t CustomRightShoesAccessoryEnabled = 0x188;
        inline constexpr uintptr_t CustomRightShoesAccessoryId = 0x190;
        inline constexpr uintptr_t CustomShirtAccessoryEnabled = 0x198;
        inline constexpr uintptr_t CustomShirtAccessoryId = 0x1a0;
        inline constexpr uintptr_t CustomShortsAccessoryEnabled = 0x1a8;
        inline constexpr uintptr_t CustomShortsAccessoryId = 0x1b0;
        inline constexpr uintptr_t CustomSweaterAccessoryEnabled = 0x1b8;
        inline constexpr uintptr_t CustomSweaterAccessoryId = 0x1c0;
        inline constexpr uintptr_t CustomTShirtAccessoryEnabled = 0x1c8;
        inline constexpr uintptr_t CustomTShirtAccessoryId = 0x1d0;
        inline constexpr uintptr_t LimitBounds = 0x1d8;
        inline constexpr uintptr_t WillLimitLayeredAccessoryAsync = 0x100;
    }

    namespace AvatarCollisionRules {
        inline constexpr uintptr_t CollisionMode = 0x100;
        inline constexpr uintptr_t HitAndTouchDetectionMode = 0x108;
        inline constexpr uintptr_t LegacyCollisionMode = 0x110;
        inline constexpr uintptr_t SingleColliderSize = 0x118;
    }

    namespace AvatarCreationService {
        inline constexpr uintptr_t AutoSetupAvatarAsync = 0x100;
        inline constexpr uintptr_t AvatarAssetModerationCompleted = 0x1a0;
        inline constexpr uintptr_t AvatarModerationCompleted = 0x1a8;
        inline constexpr uintptr_t AvatarOutfitModerationCompleted = 0x1b0;
        inline constexpr uintptr_t CreateCageMeshPartsWithScaleForExportAsync = 0x108;
        inline constexpr uintptr_t DeserializeAvatarModel = 0x180;
        inline constexpr uintptr_t GenerateAvatar2DPreviewAsync = 0x110;
        inline constexpr uintptr_t GenerateAvatarAsync = 0x118;
        inline constexpr uintptr_t GetBatchTokenDetailsAsync = 0x120;
        inline constexpr uintptr_t GetValidationRules = 0x188;
        inline constexpr uintptr_t HandleSelfieConsentResult = 0x190;
        inline constexpr uintptr_t HandleSelfieQRResult = 0x198;
        inline constexpr uintptr_t LoadAvatar2DPreviewAsync = 0x128;
        inline constexpr uintptr_t LoadGeneratedAvatarAsync = 0x130;
        inline constexpr uintptr_t OpenSelfieConsent = 0x1b8;
        inline constexpr uintptr_t OpenSelfieQRCode = 0x1c0;
        inline constexpr uintptr_t PrepareAvatarForPreviewAsync = 0x138;
        inline constexpr uintptr_t PromptCreateAvatarAssetAsync = 0x140;
        inline constexpr uintptr_t PromptCreateAvatarAsync = 0x148;
        inline constexpr uintptr_t PromptCreateMakeupAsync = 0x150;
        inline constexpr uintptr_t PromptSelectAvatarGenerationImageAsync = 0x158;
        inline constexpr uintptr_t ReplicateAvatarGenerationImageIdWithErrorType = 0x1c8;
        inline constexpr uintptr_t ReplicateAvatarModel = 0x1d0;
        inline constexpr uintptr_t ReplicateAvatarPreviewUrl = 0x1d8;
        inline constexpr uintptr_t RequestAvatarGenerationImage = 0x1e0;
        inline constexpr uintptr_t RequestAvatarGenerationSessionAsync = 0x160;
        inline constexpr uintptr_t RequestAvatarModel = 0x1e8;
        inline constexpr uintptr_t RequestAvatarPreviewUrl = 0x1f0;
        inline constexpr uintptr_t UgcValidationFailure = 0x1f8;
        inline constexpr uintptr_t UgcValidationSuccess = 0x200;
        inline constexpr uintptr_t ValidateUGCAccessoryAsync = 0x168;
        inline constexpr uintptr_t ValidateUGCBodyPartAsync = 0x170;
        inline constexpr uintptr_t ValidateUGCFullBodyAsync = 0x178;
    }

    namespace AvatarEditorService {
        inline constexpr uintptr_t BustAvatarFetchCache = 0x1d0;
        inline constexpr uintptr_t CheckApplyDefaultClothing = 0x100;
        inline constexpr uintptr_t CheckApplyDefaultClothingAsync = 0x108;
        inline constexpr uintptr_t ConformToAvatarRules = 0x110;
        inline constexpr uintptr_t ConformToAvatarRulesAsync = 0x118;
        inline constexpr uintptr_t GetAccessoryType = 0x1d8;
        inline constexpr uintptr_t GetAvatarRules = 0x120;
        inline constexpr uintptr_t GetAvatarRulesAsync = 0x128;
        inline constexpr uintptr_t GetBatchItemDetails = 0x130;
        inline constexpr uintptr_t GetBatchItemDetailsAsync = 0x138;
        inline constexpr uintptr_t GetBundlesByAssetIdAsync = 0x140;
        inline constexpr uintptr_t GetFavorite = 0x148;
        inline constexpr uintptr_t GetFavoriteAsync = 0x150;
        inline constexpr uintptr_t GetHeadShapesAsync = 0x158;
        inline constexpr uintptr_t GetInventory = 0x160;
        inline constexpr uintptr_t GetInventoryAsync = 0x168;
        inline constexpr uintptr_t GetItemDetails = 0x170;
        inline constexpr uintptr_t GetItemDetailsAsync = 0x178;
        inline constexpr uintptr_t GetOutfitDetails = 0x180;
        inline constexpr uintptr_t GetOutfitDetailsAsync = 0x188;
        inline constexpr uintptr_t GetOutfits = 0x190;
        inline constexpr uintptr_t GetOutfitsAsync = 0x198;
        inline constexpr uintptr_t GetRecommendedAssets = 0x1a0;
        inline constexpr uintptr_t GetRecommendedAssetsAsync = 0x1a8;
        inline constexpr uintptr_t GetRecommendedBundles = 0x1b0;
        inline constexpr uintptr_t GetRecommendedBundlesAsync = 0x1b8;
        inline constexpr uintptr_t NoPromptApplyProfileConfiguration = 0x1e0;
        inline constexpr uintptr_t NoPromptCreateOutfit = 0x1e8;
        inline constexpr uintptr_t NoPromptDeleteOutfit = 0x1f0;
        inline constexpr uintptr_t NoPromptRenameOutfit = 0x1f8;
        inline constexpr uintptr_t NoPromptSaveAvatar = 0x200;
        inline constexpr uintptr_t NoPromptSaveAvatarThumbnailCustomization = 0x208;
        inline constexpr uintptr_t NoPromptSetFavorite = 0x210;
        inline constexpr uintptr_t NoPromptUpdateOutfit = 0x218;
        inline constexpr uintptr_t NotifyBustAvatarFetchCache = 0x2f8;
        inline constexpr uintptr_t OpenAllowInventoryReadAccess = 0x300;
        inline constexpr uintptr_t OpenPromptCreateOufit = 0x308;
        inline constexpr uintptr_t OpenPromptDeleteOutfit = 0x310;
        inline constexpr uintptr_t OpenPromptRenameOutfit = 0x318;
        inline constexpr uintptr_t OpenPromptSaveAvatar = 0x320;
        inline constexpr uintptr_t OpenPromptSetFavorite = 0x328;
        inline constexpr uintptr_t OpenPromptUpdateOutfit = 0x330;
        inline constexpr uintptr_t PerformCreateOutfitWithDescription = 0x220;
        inline constexpr uintptr_t PerformDeleteOutfit = 0x228;
        inline constexpr uintptr_t PerformRenameOutfit = 0x230;
        inline constexpr uintptr_t PerformSaveAvatarWithDescription = 0x238;
        inline constexpr uintptr_t PerformSetFavorite = 0x240;
        inline constexpr uintptr_t PerformUpdateOutfit = 0x248;
        inline constexpr uintptr_t PromptAllowInventoryReadAccess = 0x250;
        inline constexpr uintptr_t PromptAllowInventoryReadAccessCompleted = 0x338;
        inline constexpr uintptr_t PromptApplyProfileConfigurationCompleted = 0x340;
        inline constexpr uintptr_t PromptCreateOutfit = 0x258;
        inline constexpr uintptr_t PromptCreateOutfitCompleted = 0x348;
        inline constexpr uintptr_t PromptDeleteOutfit = 0x260;
        inline constexpr uintptr_t PromptDeleteOutfitCompleted = 0x350;
        inline constexpr uintptr_t PromptRenameOutfit = 0x268;
        inline constexpr uintptr_t PromptRenameOutfitCompleted = 0x358;
        inline constexpr uintptr_t PromptSaveAvatar = 0x270;
        inline constexpr uintptr_t PromptSaveAvatarCompleted = 0x360;
        inline constexpr uintptr_t PromptSaveAvatarThumbnailCustomizationCompleted = 0x368;
        inline constexpr uintptr_t PromptSetFavorite = 0x278;
        inline constexpr uintptr_t PromptSetFavoriteCompleted = 0x370;
        inline constexpr uintptr_t PromptUpdateOutfit = 0x280;
        inline constexpr uintptr_t PromptUpdateOutfitCompleted = 0x378;
        inline constexpr uintptr_t SearchCatalog = 0x1c0;
        inline constexpr uintptr_t SearchCatalogAsync = 0x1c8;
        inline constexpr uintptr_t SetAllowInventoryReadAccess = 0x288;
        inline constexpr uintptr_t SignalCreateOutfitFailed = 0x290;
        inline constexpr uintptr_t SignalCreateOutfitPermissionDenied = 0x298;
        inline constexpr uintptr_t SignalDeleteOutfitFailed = 0x2a0;
        inline constexpr uintptr_t SignalDeleteOutfitPermissionDenied = 0x2a8;
        inline constexpr uintptr_t SignalRenameOutfitFailed = 0x2b0;
        inline constexpr uintptr_t SignalRenameOutfitPermissionDenied = 0x2b8;
        inline constexpr uintptr_t SignalSaveAvatarFailed = 0x2c0;
        inline constexpr uintptr_t SignalSaveAvatarPermissionDenied = 0x2c8;
        inline constexpr uintptr_t SignalSetFavoriteFailed = 0x2d0;
        inline constexpr uintptr_t SignalSetFavoritePermissionDenied = 0x2d8;
        inline constexpr uintptr_t SignalUpdateOutfitFailed = 0x2e0;
        inline constexpr uintptr_t SignalUpdateOutfitPermissionDenied = 0x2e8;
        inline constexpr uintptr_t refreshAvatarThumbnails = 0x2f0;
    }

    namespace AvatarRules {
        inline constexpr uintptr_t AvatarType = 0x100;
    }

    namespace AvatarSettings {
        inline constexpr uintptr_t Discard = 0x100;
        inline constexpr uintptr_t DiscardRequested = 0x118;
        inline constexpr uintptr_t Loaded = 0x110;
        inline constexpr uintptr_t Publish = 0x108;
        inline constexpr uintptr_t RefreshPluginState = 0x120;
    }

    namespace Axis {
        inline constexpr uintptr_t Attachment = 0x100;
        inline constexpr uintptr_t DragDetector = 0x108;
    }

    namespace BackgroundColor3 {
        inline constexpr uintptr_t BubbleChatConfiguration = 0x100;
        inline constexpr uintptr_t BubbleChatMessageProperties = 0x108;
        inline constexpr uintptr_t ChannelTabsConfiguration = 0x110;
        inline constexpr uintptr_t ChatInputBarConfiguration = 0x118;
        inline constexpr uintptr_t ChatWindowConfiguration = 0x120;
        inline constexpr uintptr_t GuiObject = 0x128;
    }

    namespace BackgroundTransparency {
        inline constexpr uintptr_t BubbleChatConfiguration = 0x100;
        inline constexpr uintptr_t BubbleChatMessageProperties = 0x108;
        inline constexpr uintptr_t ChannelTabsConfiguration = 0x110;
        inline constexpr uintptr_t ChatInputBarConfiguration = 0x118;
        inline constexpr uintptr_t ChatWindowConfiguration = 0x120;
        inline constexpr uintptr_t GuiObject = 0x128;
    }

    namespace BackpackItem {
        inline constexpr uintptr_t TextureContent = 0x100;
        inline constexpr uintptr_t TextureId = 0x108;
    }

    namespace BadgeService {
        inline constexpr uintptr_t AwardBadge = 0x100;
        inline constexpr uintptr_t AwardBadgeAsync = 0x108;
        inline constexpr uintptr_t BadgeAwarded = 0x148;
        inline constexpr uintptr_t CheckUserBadgesAsync = 0x110;
        inline constexpr uintptr_t GetBadgeInfoAsync = 0x118;
        inline constexpr uintptr_t GetUserBadgesAsync = 0x120;
        inline constexpr uintptr_t IsDisabled = 0x128;
        inline constexpr uintptr_t IsLegal = 0x130;
        inline constexpr uintptr_t OnBadgeAwarded = 0x150;
        inline constexpr uintptr_t UserHasBadge = 0x138;
        inline constexpr uintptr_t UserHasBadgeAsync = 0x140;
    }

    namespace BalanceMaxTorque {
        inline constexpr uintptr_t AirController = 0x100;
        inline constexpr uintptr_t ClimbController = 0x108;
        inline constexpr uintptr_t GroundController = 0x110;
    }

    namespace BalanceSpeed {
        inline constexpr uintptr_t AirController = 0x100;
        inline constexpr uintptr_t ClimbController = 0x108;
        inline constexpr uintptr_t GroundController = 0x110;
    }

    namespace BallSocketConstraint {
        inline constexpr uintptr_t EnableSkinning = 0x100;
        inline constexpr uintptr_t LimitsEnabled = 0x108;
        inline constexpr uintptr_t MaxFrictionTorque = 0x110;
        inline constexpr uintptr_t MaxFrictionTorqueXml = 0x118;
        inline constexpr uintptr_t Radius = 0x120;
        inline constexpr uintptr_t Restitution = 0x128;
        inline constexpr uintptr_t TwistLimitsEnabled = 0x130;
        inline constexpr uintptr_t TwistLowerAngle = 0x138;
        inline constexpr uintptr_t TwistUpperAngle = 0x140;
        inline constexpr uintptr_t UpperAngle = 0x148;
    }

    namespace BaseCoreGuiConfiguration {
        inline constexpr uintptr_t Enabled = 0x100;
    }

    namespace BasePart {
        inline constexpr uintptr_t Anchored = 0x208;
        inline constexpr uintptr_t AngularAccelerationToTorque = 0x118;
        inline constexpr uintptr_t ApplyAngularImpulse = 0x120;
        inline constexpr uintptr_t ApplyImpulse = 0x128;
        inline constexpr uintptr_t ApplyImpulseAtPosition = 0x130;
        inline constexpr uintptr_t AssemblyAngularVelocity = 0x210;
        inline constexpr uintptr_t AssemblyCenterOfMass = 0x218;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0x220;
        inline constexpr uintptr_t AssemblyMass = 0x228;
        inline constexpr uintptr_t AssemblyRootPart = 0x230;
        inline constexpr uintptr_t AudioCanCollide = 0x238;
        inline constexpr uintptr_t BackParamA = 0x240;
        inline constexpr uintptr_t BackParamB = 0x248;
        inline constexpr uintptr_t BackSurface = 0x250;
        inline constexpr uintptr_t BackSurfaceInput = 0x258;
        inline constexpr uintptr_t BindToCollisionSummaries = 0x138;
        inline constexpr uintptr_t BottomParamA = 0x260;
        inline constexpr uintptr_t BottomParamB = 0x268;
        inline constexpr uintptr_t BottomSurface = 0x270;
        inline constexpr uintptr_t BottomSurfaceInput = 0x278;
        inline constexpr uintptr_t BreakJoints = 0x140;
        inline constexpr uintptr_t BrickColor = 0x280;
        inline constexpr uintptr_t CFrame = 0x288;
        inline constexpr uintptr_t CanCollide = 0x290;
        inline constexpr uintptr_t CanCollideWith = 0x148;
        inline constexpr uintptr_t CanQuery = 0x298;
        inline constexpr uintptr_t CanSetNetworkOwnership = 0x150;
        inline constexpr uintptr_t CanTouch = 0x2a0;
        inline constexpr uintptr_t CastShadow = 0x125;
        inline constexpr uintptr_t CenterOfMass = 0x2b0;
        inline constexpr uintptr_t ClusterNode = 0xe0;
        inline constexpr uintptr_t CollisionGroup = 0x2b8;
        inline constexpr uintptr_t CollisionGroupId = 0x2c0;
        inline constexpr uintptr_t CollisionGroupReplicate = 0x2c8;
        inline constexpr uintptr_t Color = 0x2d0;
        inline constexpr uintptr_t Color3 = 0x198;
        inline constexpr uintptr_t Color3uint8 = 0x2d8;
        inline constexpr uintptr_t CurrentPhysicalProperties = 0x2e0;
        inline constexpr uintptr_t CustomPhysicalProperties = 0x2e8;
        inline constexpr uintptr_t DraggingV1 = 0x2f0;
        inline constexpr uintptr_t Elasticity = 0x2f8;
        inline constexpr uintptr_t EnableFluidForces = 0x300;
        inline constexpr uintptr_t ExtentsCFrame = 0x308;
        inline constexpr uintptr_t ExtentsSize = 0x310;
        inline constexpr uintptr_t Friction = 0x318;
        inline constexpr uintptr_t FrontParamA = 0x320;
        inline constexpr uintptr_t FrontParamB = 0x328;
        inline constexpr uintptr_t FrontSurface = 0x330;
        inline constexpr uintptr_t FrontSurfaceInput = 0x338;
        inline constexpr uintptr_t GetClosestPointOnSurface = 0x158;
        inline constexpr uintptr_t GetConnectedParts = 0x160;
        inline constexpr uintptr_t GetJoints = 0x168;
        inline constexpr uintptr_t GetMass = 0x170;
        inline constexpr uintptr_t GetNetworkOwner = 0x178;
        inline constexpr uintptr_t GetNetworkOwnershipAuto = 0x180;
        inline constexpr uintptr_t GetNoCollisionConstraints = 0x188;
        inline constexpr uintptr_t GetPhysicsCost = 0x190;
        inline constexpr uintptr_t GetRenderCFrame = 0x198;
        inline constexpr uintptr_t GetRootPart = 0x1a0;
        inline constexpr uintptr_t GetTouchingParts = 0x1a8;
        inline constexpr uintptr_t GetVelocityAtPosition = 0x1b0;
        inline constexpr uintptr_t IntersectAsync = 0x100;
        inline constexpr uintptr_t IsGrounded = 0x1b8;
        inline constexpr uintptr_t LeftParamA = 0x340;
        inline constexpr uintptr_t LeftParamB = 0x348;
        inline constexpr uintptr_t LeftSurface = 0x350;
        inline constexpr uintptr_t LeftSurfaceInput = 0x358;
        inline constexpr uintptr_t LocalSimulationTouched = 0x490;
        inline constexpr uintptr_t LocalTransparencyModifier = 0x360;
        inline constexpr uintptr_t Locked = 0x126;
        inline constexpr uintptr_t MakeJoints = 0x1c0;
        inline constexpr uintptr_t Mass = 0x370;
        inline constexpr uintptr_t Massless = 0x127;
        inline constexpr uintptr_t Material = 0x380;
        inline constexpr uintptr_t MaterialVariant = 0x388;
        inline constexpr uintptr_t MaterialVariantSerialized = 0x390;
        inline constexpr uintptr_t NetworkIsSleeping = 0x398;
        inline constexpr uintptr_t NetworkOwnerChanged = 0x498;
        inline constexpr uintptr_t NetworkOwnerV3 = 0x3a0;
        inline constexpr uintptr_t NetworkOwnershipRule = 0x3a8;
        inline constexpr uintptr_t Orientation = 0x3b0;
        inline constexpr uintptr_t OutfitChanged = 0x4a0;
        inline constexpr uintptr_t PhysicsRepRootPart = 0x3b8;
        inline constexpr uintptr_t PhysicsRepRootRef = 0x3c0;
        inline constexpr uintptr_t PivotOffset = 0x3c8;
        inline constexpr uintptr_t Position = 0x3d0;
        inline constexpr uintptr_t Primitive = 0x178;
        inline constexpr uintptr_t ReceiveAge = 0x3d8;
        inline constexpr uintptr_t Reflectance = 0xfc;
        inline constexpr uintptr_t ReplicationPV = 0x3e8;
        inline constexpr uintptr_t Resize = 0x1c8;
        inline constexpr uintptr_t ResizeIncrement = 0x3f0;
        inline constexpr uintptr_t ResizeableFaces = 0x3f8;
        inline constexpr uintptr_t RightParamA = 0x400;
        inline constexpr uintptr_t RightParamB = 0x408;
        inline constexpr uintptr_t RightSurface = 0x410;
        inline constexpr uintptr_t RightSurfaceInput = 0x418;
        inline constexpr uintptr_t RootPriority = 0x420;
        inline constexpr uintptr_t RotVelocity = 0x428;
        inline constexpr uintptr_t Rotation = 0x430;
        inline constexpr uintptr_t SetNetworkOwner = 0x1d0;
        inline constexpr uintptr_t SetNetworkOwnershipAuto = 0x1d8;
        inline constexpr uintptr_t Shape = 0x1a8;
        inline constexpr uintptr_t Size = 0x438;
        inline constexpr uintptr_t SpecificGravity = 0x440;
        inline constexpr uintptr_t StoppedTouching = 0x4a8;
        inline constexpr uintptr_t SubtractAsync = 0x108;
        inline constexpr uintptr_t TopParamA = 0x448;
        inline constexpr uintptr_t TopParamB = 0x450;
        inline constexpr uintptr_t TopSurface = 0x458;
        inline constexpr uintptr_t TopSurfaceInput = 0x460;
        inline constexpr uintptr_t TorqueToAngularAcceleration = 0x1e0;
        inline constexpr uintptr_t TouchEnded = 0x4b0;
        inline constexpr uintptr_t Touched = 0x4b8;
        inline constexpr uintptr_t Transparency = 0x120;
        inline constexpr uintptr_t UnionAsync = 0x110;
        inline constexpr uintptr_t Velocity = 0x470;
        inline constexpr uintptr_t breakJoints = 0x1e8;
        inline constexpr uintptr_t brickColor = 0x478;
        inline constexpr uintptr_t getMass = 0x1f0;
        inline constexpr uintptr_t makeJoints = 0x1f8;
        inline constexpr uintptr_t resize = 0x200;
        inline constexpr uintptr_t siz = 0x480;
        inline constexpr uintptr_t size = 0x488;
    }

    namespace BasePlayerGui {
        inline constexpr uintptr_t GetGuiObjectsAtPosition = 0x100;
        inline constexpr uintptr_t GetGuiObjectsInCircle = 0x108;
    }

    namespace BaseScript {
        inline constexpr uintptr_t Disabled = 0x100;
        inline constexpr uintptr_t Enabled = 0x108;
        inline constexpr uintptr_t LinkedSource = 0x110;
        inline constexpr uintptr_t RunContext = 0x118;
    }

    namespace BaseWrap {
        inline constexpr uintptr_t CageMeshContent = 0x130;
        inline constexpr uintptr_t CageMeshId = 0x138;
        inline constexpr uintptr_t CageOrigin = 0x140;
        inline constexpr uintptr_t CageOriginWorld = 0x148;
        inline constexpr uintptr_t GetCageOffset = 0x100;
        inline constexpr uintptr_t GetFaces = 0x108;
        inline constexpr uintptr_t GetUVs = 0x110;
        inline constexpr uintptr_t GetVertices = 0x118;
        inline constexpr uintptr_t HSRAssetId = 0x150;
        inline constexpr uintptr_t HSRContent = 0x158;
        inline constexpr uintptr_t HSRData = 0x160;
        inline constexpr uintptr_t HSRMeshIdData = 0x168;
        inline constexpr uintptr_t ImportInProcess = 0x170;
        inline constexpr uintptr_t ImportOrigin = 0x178;
        inline constexpr uintptr_t ImportOriginWorld = 0x180;
        inline constexpr uintptr_t IsHSRReady = 0x120;
        inline constexpr uintptr_t ModifyVertices = 0x128;
        inline constexpr uintptr_t TemporaryCageMeshContent = 0x188;
        inline constexpr uintptr_t TemporaryCageMeshId = 0x190;
        inline constexpr uintptr_t VerticesModified = 0x198;
    }

    namespace Beam {
        inline constexpr uintptr_t Attachment0 = 0x150;
        inline constexpr uintptr_t Attachment1 = 0x160;
        inline constexpr uintptr_t Brightness = 0x170;
        inline constexpr uintptr_t Color = 0x120;
        inline constexpr uintptr_t CurveSize0 = 0x174;
        inline constexpr uintptr_t CurveSize1 = 0x178;
        inline constexpr uintptr_t Enabled = 0x138;
        inline constexpr uintptr_t FaceCamera = 0x140;
        inline constexpr uintptr_t LightEmission = 0x17c;
        inline constexpr uintptr_t LightInfluence = 0x180;
        inline constexpr uintptr_t LocalTransparencyModifier = 0x158;
        inline constexpr uintptr_t Segments = 0x160;
        inline constexpr uintptr_t SetTextureOffset = 0x100;
        inline constexpr uintptr_t Texture = 0x130;
        inline constexpr uintptr_t TextureContent = 0x170;
        inline constexpr uintptr_t TextureLength = 0x18c;
        inline constexpr uintptr_t TextureMode = 0x180;
        inline constexpr uintptr_t TextureSpeed = 0x194;
        inline constexpr uintptr_t Transparency = 0x190;
        inline constexpr uintptr_t Width0 = 0x198;
        inline constexpr uintptr_t Width1 = 0x19c;
        inline constexpr uintptr_t ZOffset = 0x1a0;
    }

    namespace BevelMesh {
        inline constexpr uintptr_t Bevel = 0x100;
        inline constexpr uintptr_t Bulge = 0x108;
    }

    namespace BillboardGui {
        inline constexpr uintptr_t Active = 0x108;
        inline constexpr uintptr_t Adornee = 0x110;
        inline constexpr uintptr_t AlwaysOnTop = 0x118;
        inline constexpr uintptr_t Brightness = 0x120;
        inline constexpr uintptr_t ClipsDescendants = 0x128;
        inline constexpr uintptr_t CurrentDistance = 0x130;
        inline constexpr uintptr_t DistanceLowerLimit = 0x138;
        inline constexpr uintptr_t DistanceStep = 0x140;
        inline constexpr uintptr_t DistanceUpperLimit = 0x148;
        inline constexpr uintptr_t ExtentsOffset = 0x150;
        inline constexpr uintptr_t ExtentsOffsetWorldSpace = 0x158;
        inline constexpr uintptr_t GetScreenSpaceBounds = 0x100;
        inline constexpr uintptr_t LightInfluence = 0x160;
        inline constexpr uintptr_t MaxDistance = 0x168;
        inline constexpr uintptr_t PlayerToHideFrom = 0x170;
        inline constexpr uintptr_t Size = 0x178;
        inline constexpr uintptr_t SizeOffset = 0x180;
        inline constexpr uintptr_t StudsOffset = 0x188;
        inline constexpr uintptr_t StudsOffsetWorldSpace = 0x190;
        inline constexpr uintptr_t rectId = 0x198;
    }

    namespace BinaryStringValue {
        inline constexpr uintptr_t Changed = 0x108;
        inline constexpr uintptr_t Value = 0x100;
    }

    namespace BindToClose {
        inline constexpr uintptr_t DataModel = 0x100;
        inline constexpr uintptr_t PluginGui = 0x108;
    }

    namespace BindableEvent {
        inline constexpr uintptr_t Event = 0x108;
        inline constexpr uintptr_t Fire = 0x100;
    }

    namespace BindableFunction {
        inline constexpr uintptr_t Invoke = 0x100;
        inline constexpr uintptr_t OnInvoke = 0x108;
    }

    namespace BloomEffect {
        inline constexpr uintptr_t Enabled = 0xa0;
        inline constexpr uintptr_t Intensity = 0xa8;
        inline constexpr uintptr_t Size = 0xac;
        inline constexpr uintptr_t Threshold = 0xb0;
    }

    namespace BlurEffect {
        inline constexpr uintptr_t Enabled = 0xa0;
        inline constexpr uintptr_t Size = 0xa8;
    }

    namespace BodyAngularVelocity {
        inline constexpr uintptr_t AngularVelocity = 0x100;
        inline constexpr uintptr_t BodyForce = 0x128;
        inline constexpr uintptr_t MaxTorque = 0x108;
        inline constexpr uintptr_t P = 0x110;
        inline constexpr uintptr_t angularvelocity = 0x118;
        inline constexpr uintptr_t maxTorque = 0x120;
    }

    namespace BodyColors {
        inline constexpr uintptr_t HeadColor = 0x100;
        inline constexpr uintptr_t HeadColor3 = 0x108;
        inline constexpr uintptr_t LeftArmColor = 0x110;
        inline constexpr uintptr_t LeftArmColor3 = 0x118;
        inline constexpr uintptr_t LeftLegColor = 0x120;
        inline constexpr uintptr_t LeftLegColor3 = 0x128;
        inline constexpr uintptr_t RightArmColor = 0x130;
        inline constexpr uintptr_t RightArmColor3 = 0x138;
        inline constexpr uintptr_t RightLegColor = 0x140;
        inline constexpr uintptr_t RightLegColor3 = 0x148;
        inline constexpr uintptr_t TorsoColor = 0x150;
        inline constexpr uintptr_t TorsoColor3 = 0x158;
    }

    namespace BodyForce {
        inline constexpr uintptr_t BodyPosition = 0x110;
        inline constexpr uintptr_t Force = 0x100;
        inline constexpr uintptr_t force = 0x108;
    }

    namespace BodyGyro {
        inline constexpr uintptr_t BodyAngularVelocity = 0x130;
        inline constexpr uintptr_t CFrame = 0x100;
        inline constexpr uintptr_t D = 0x108;
        inline constexpr uintptr_t MaxTorque = 0x110;
        inline constexpr uintptr_t P = 0x118;
        inline constexpr uintptr_t cframe = 0x120;
        inline constexpr uintptr_t maxTorque = 0x128;
    }

    namespace BodyPartDescription {
        inline constexpr uintptr_t AssetId = 0x100;
        inline constexpr uintptr_t BodyPart = 0x108;
        inline constexpr uintptr_t Color = 0x110;
        inline constexpr uintptr_t HeadShape = 0x118;
        inline constexpr uintptr_t Instance = 0x120;
    }

    namespace BodyPosition {
        inline constexpr uintptr_t D = 0x110;
        inline constexpr uintptr_t GetLastForce = 0x100;
        inline constexpr uintptr_t MaxForce = 0x118;
        inline constexpr uintptr_t P = 0x120;
        inline constexpr uintptr_t PackageContentProviderInvalidInstance = 0x148;
        inline constexpr uintptr_t Position = 0x128;
        inline constexpr uintptr_t ReachedTarget = 0x140;
        inline constexpr uintptr_t lastForce = 0x108;
        inline constexpr uintptr_t maxForce = 0x130;
        inline constexpr uintptr_t position = 0x138;
    }

    namespace BodyThrust {
        inline constexpr uintptr_t Force = 0x100;
        inline constexpr uintptr_t Location = 0x108;
        inline constexpr uintptr_t RocketPropulsion = 0x120;
        inline constexpr uintptr_t force = 0x110;
        inline constexpr uintptr_t location = 0x118;
    }

    namespace BodyVelocity {
        inline constexpr uintptr_t BodyGyro = 0x138;
        inline constexpr uintptr_t GetLastForce = 0x100;
        inline constexpr uintptr_t MaxForce = 0x110;
        inline constexpr uintptr_t P = 0x118;
        inline constexpr uintptr_t Velocity = 0x120;
        inline constexpr uintptr_t lastForce = 0x108;
        inline constexpr uintptr_t maxForce = 0x128;
        inline constexpr uintptr_t velocity = 0x130;
    }

    namespace Bone {
        inline constexpr uintptr_t Transform = 0x100;
        inline constexpr uintptr_t TransformedCFrame = 0x108;
        inline constexpr uintptr_t TransformedWorldCFrame = 0x110;
    }

    namespace BoolValue {
        inline constexpr uintptr_t Changed = 0x108;
        inline constexpr uintptr_t Value = 0x100;
        inline constexpr uintptr_t changed = 0x110;
    }

    namespace BoxHandleAdornment {
        inline constexpr uintptr_t Shading = 0x100;
        inline constexpr uintptr_t Size = 0x108;
    }

    namespace BreakJoints {
        inline constexpr uintptr_t BasePart = 0x100;
        inline constexpr uintptr_t Model = 0x108;
        inline constexpr uintptr_t Workspace = 0x110;
    }

    namespace BrickColorValue {
        inline constexpr uintptr_t Changed = 0x108;
        inline constexpr uintptr_t Value = 0x100;
        inline constexpr uintptr_t changed = 0x110;
    }

    namespace Brightness {
        inline constexpr uintptr_t Beam = 0x100;
        inline constexpr uintptr_t BillboardGui = 0x108;
        inline constexpr uintptr_t ColorCorrectionEffect = 0x110;
        inline constexpr uintptr_t Light = 0x118;
        inline constexpr uintptr_t Lighting = 0x120;
        inline constexpr uintptr_t ParticleEmitter = 0x128;
        inline constexpr uintptr_t SurfaceGui = 0x130;
        inline constexpr uintptr_t Trail = 0x138;
    }

    namespace BrowserService {
        inline constexpr uintptr_t AuthCookieCopiedToEngine = 0x148;
        inline constexpr uintptr_t BrowserWindowClosed = 0x150;
        inline constexpr uintptr_t BrowserWindowWillNavigate = 0x158;
        inline constexpr uintptr_t CloseBrowserWindow = 0x100;
        inline constexpr uintptr_t CopyAuthCookieFromBrowserToEngine = 0x108;
        inline constexpr uintptr_t EmitHybridEvent = 0x110;
        inline constexpr uintptr_t ExecuteJavaScript = 0x118;
        inline constexpr uintptr_t JavaScriptCallback = 0x160;
        inline constexpr uintptr_t OpenBrowserWindow = 0x120;
        inline constexpr uintptr_t OpenNativeOverlay = 0x128;
        inline constexpr uintptr_t OpenWeChatAuthWindow = 0x130;
        inline constexpr uintptr_t ReturnToJavaScript = 0x138;
        inline constexpr uintptr_t SendCommand = 0x140;
    }

    namespace BubbleChatConfiguration {
        inline constexpr uintptr_t AdorneeName = 0x100;
        inline constexpr uintptr_t BackgroundColor3 = 0x108;
        inline constexpr uintptr_t BackgroundTransparency = 0x110;
        inline constexpr uintptr_t BubbleDuration = 0x118;
        inline constexpr uintptr_t BubblesSpacing = 0x120;
        inline constexpr uintptr_t Enabled = 0x128;
        inline constexpr uintptr_t Font = 0x130;
        inline constexpr uintptr_t FontFace = 0x138;
        inline constexpr uintptr_t LocalPlayerStudsOffset = 0x140;
        inline constexpr uintptr_t MaxBubbles = 0x148;
        inline constexpr uintptr_t MaxDistance = 0x150;
        inline constexpr uintptr_t MinimizeDistance = 0x158;
        inline constexpr uintptr_t TailVisible = 0x160;
        inline constexpr uintptr_t TextColor3 = 0x168;
        inline constexpr uintptr_t TextSize = 0x170;
        inline constexpr uintptr_t VerticalStudsOffset = 0x178;
    }

    namespace BubbleChatMessageProperties {
        inline constexpr uintptr_t BackgroundColor3 = 0x100;
        inline constexpr uintptr_t BackgroundTransparency = 0x108;
        inline constexpr uintptr_t FontFace = 0x110;
        inline constexpr uintptr_t TailVisible = 0x118;
        inline constexpr uintptr_t TextChatMessage = 0x130;
        inline constexpr uintptr_t TextColor3 = 0x120;
        inline constexpr uintptr_t TextSize = 0x128;
    }

    namespace BugReporterService {
        inline constexpr uintptr_t BugReportRequested = 0x108;
        inline constexpr uintptr_t IsAvailable = 0x100;
    }

    namespace BuoyancySensor {
        inline constexpr uintptr_t FullySubmerged = 0x100;
        inline constexpr uintptr_t TouchingSurface = 0x108;
    }

    namespace Button1Down {
        inline constexpr uintptr_t Mouse = 0x108;
        inline constexpr uintptr_t VirtualUser = 0x100;
    }

    namespace Button1Up {
        inline constexpr uintptr_t Mouse = 0x108;
        inline constexpr uintptr_t VirtualUser = 0x100;
    }

    namespace Button2Down {
        inline constexpr uintptr_t Mouse = 0x108;
        inline constexpr uintptr_t VirtualUser = 0x100;
    }

    namespace Button2Up {
        inline constexpr uintptr_t Mouse = 0x108;
        inline constexpr uintptr_t VirtualUser = 0x100;
    }

    namespace Bypass {
        inline constexpr uintptr_t AudioChorus = 0x100;
        inline constexpr uintptr_t AudioCompressor = 0x108;
        inline constexpr uintptr_t AudioDistortion = 0x110;
        inline constexpr uintptr_t AudioEcho = 0x118;
        inline constexpr uintptr_t AudioEqualizer = 0x120;
        inline constexpr uintptr_t AudioFader = 0x128;
        inline constexpr uintptr_t AudioFilter = 0x130;
        inline constexpr uintptr_t AudioFlanger = 0x138;
        inline constexpr uintptr_t AudioGate = 0x140;
        inline constexpr uintptr_t AudioLimiter = 0x148;
        inline constexpr uintptr_t AudioPitchShifter = 0x150;
        inline constexpr uintptr_t AudioReverb = 0x158;
        inline constexpr uintptr_t AudioTremolo = 0x160;
    }

    namespace ByteCode {
        inline constexpr uintptr_t Pointer = 0x10;
        inline constexpr uintptr_t Size = 0x28;
    }

    namespace C0 {
        inline constexpr uintptr_t AnimationConstraint = 0x100;
        inline constexpr uintptr_t JointInstance = 0x108;
    }

    namespace C1 {
        inline constexpr uintptr_t AnimationConstraint = 0x100;
        inline constexpr uintptr_t JointInstance = 0x108;
    }

    namespace CFrame {
        inline constexpr uintptr_t AlignOrientation = 0x100;
        inline constexpr uintptr_t Attachment = 0x108;
        inline constexpr uintptr_t BasePart = 0x110;
        inline constexpr uintptr_t BodyGyro = 0x118;
        inline constexpr uintptr_t Camera = 0x120;
        inline constexpr uintptr_t HandleAdornment = 0x128;
        inline constexpr uintptr_t Pose = 0x130;
        inline constexpr uintptr_t RenderingTest = 0x138;
    }

    namespace CFrameValue {
        inline constexpr uintptr_t Changed = 0x108;
        inline constexpr uintptr_t Value = 0x100;
        inline constexpr uintptr_t changed = 0x110;
    }

    namespace CJKFallbackInit {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace CachedItem {
        inline constexpr uintptr_t FileMeshData = 0x28;
    }

    namespace Call {
        inline constexpr uintptr_t MemStorageService = 0x100;
        inline constexpr uintptr_t MessageBusService = 0x108;
    }

    namespace CallingService {
        inline constexpr uintptr_t AnswerIncomingCall = 0x108;
        inline constexpr uintptr_t CreateCallAsync = 0x100;
        inline constexpr uintptr_t EndCall = 0x110;
        inline constexpr uintptr_t GetCallingState = 0x118;
        inline constexpr uintptr_t OnCallingRemoved = 0x120;
        inline constexpr uintptr_t OnCallingStateChange = 0x128;
    }

    namespace Camera {
        inline constexpr uintptr_t CFrame = 0xc8;
        inline constexpr uintptr_t CameraSubject = 0xb8;
        inline constexpr uintptr_t CameraType = 0x128;
        inline constexpr uintptr_t CoordinateFrame = 0x1a8;
        inline constexpr uintptr_t DiagonalFieldOfView = 0x1b0;
        inline constexpr uintptr_t FieldOfView = 0x130;
        inline constexpr uintptr_t FieldOfViewMode = 0x1c0;
        inline constexpr uintptr_t FirstPersonTransition = 0x208;
        inline constexpr uintptr_t Focus = 0x1c8;
        inline constexpr uintptr_t GetLargestCutoffDistance = 0x100;
        inline constexpr uintptr_t GetPanSpeed = 0x108;
        inline constexpr uintptr_t GetPartsObscuringTarget = 0x110;
        inline constexpr uintptr_t GetRenderCFrame = 0x118;
        inline constexpr uintptr_t GetRoll = 0x120;
        inline constexpr uintptr_t GetTiltSpeed = 0x128;
        inline constexpr uintptr_t HeadLocked = 0x1d0;
        inline constexpr uintptr_t HeadScale = 0x1d8;
        inline constexpr uintptr_t ImagePlaneDepth = 0x2c4;
        inline constexpr uintptr_t Interpolate = 0x130;
        inline constexpr uintptr_t InterpolationFinished = 0x210;
        inline constexpr uintptr_t MaxAxisFieldOfView = 0x1e0;
        inline constexpr uintptr_t NearPlaneZ = 0x1e8;
        inline constexpr uintptr_t PanUnits = 0x138;
        inline constexpr uintptr_t Position = 0xec;
        inline constexpr uintptr_t Rotation = 0xc8;
        inline constexpr uintptr_t ScreenPointToRay = 0x140;
        inline constexpr uintptr_t SetCameraPanMode = 0x148;
        inline constexpr uintptr_t SetImageServerView = 0x150;
        inline constexpr uintptr_t SetRoll = 0x158;
        inline constexpr uintptr_t TiltUnits = 0x160;
        inline constexpr uintptr_t VRTiltAndRollEnabled = 0x1f0;
        inline constexpr uintptr_t Viewport = 0x27c;
        inline constexpr uintptr_t ViewportInt16 = 0x27c;
        inline constexpr uintptr_t ViewportPointToRay = 0x168;
        inline constexpr uintptr_t ViewportSize = 0x2bc;
        inline constexpr uintptr_t WorldToScreenPoint = 0x170;
        inline constexpr uintptr_t WorldToViewportPoint = 0x178;
        inline constexpr uintptr_t Zoom = 0x180;
        inline constexpr uintptr_t ZoomToExtents = 0x188;
        inline constexpr uintptr_t focus = 0x200;
    }

    namespace CameraMode {
        inline constexpr uintptr_t Humanoid = 0x100;
        inline constexpr uintptr_t Player = 0x108;
        inline constexpr uintptr_t StarterPlayer = 0x110;
        inline constexpr uintptr_t UserGameSettings = 0x118;
    }

    namespace CanUserChatAsync {
        inline constexpr uintptr_t Chat = 0x100;
        inline constexpr uintptr_t TextChatService = 0x108;
    }

    namespace CanUsersChatAsync {
        inline constexpr uintptr_t Chat = 0x100;
        inline constexpr uintptr_t TextChatService = 0x108;
    }

    namespace Cancel {
        inline constexpr uintptr_t AudioPlayer = 0x108;
        inline constexpr uintptr_t Cleanup = 0x100;
        inline constexpr uintptr_t HttpRequest = 0x110;
        inline constexpr uintptr_t SmoothVoxelsUpgraderService = 0x118;
        inline constexpr uintptr_t TweenBase = 0x120;
    }

    namespace CanvasGroup {
        inline constexpr uintptr_t GroupColor3 = 0x100;
        inline constexpr uintptr_t GroupTransparency = 0x108;
        inline constexpr uintptr_t ResolutionScale = 0x110;
    }

    namespace Capture {
        inline constexpr uintptr_t CaptureTime = 0x100;
        inline constexpr uintptr_t CaptureType = 0x108;
        inline constexpr uintptr_t FilePathString = 0x110;
        inline constexpr uintptr_t LocalId = 0x118;
        inline constexpr uintptr_t SourcePlaceId = 0x120;
        inline constexpr uintptr_t SourceUniverseId = 0x128;
    }

    namespace CaptureService {
        inline constexpr uintptr_t CanCaptureVideo = 0x1b8;
        inline constexpr uintptr_t CaptureBegan = 0x2a0;
        inline constexpr uintptr_t CaptureEnded = 0x2a8;
        inline constexpr uintptr_t CaptureObjectSavedInternal = 0x2b0;
        inline constexpr uintptr_t CaptureSaved = 0x2b8;
        inline constexpr uintptr_t CaptureSavedInternal = 0x2c0;
        inline constexpr uintptr_t CaptureScreenshot = 0x1c0;
        inline constexpr uintptr_t CheckMomentTextStatusAsync = 0x100;
        inline constexpr uintptr_t CheckUploadCaptureStatusAsync = 0x108;
        inline constexpr uintptr_t CheckUploadCaptureStatusForSupportTicketAsync = 0x110;
        inline constexpr uintptr_t CreatePostAsync = 0x118;
        inline constexpr uintptr_t DeleteCapture = 0x1c8;
        inline constexpr uintptr_t DeleteCapturesAsync = 0x120;
        inline constexpr uintptr_t DeleteVideoCapture = 0x1d0;
        inline constexpr uintptr_t DeleteVideoCaptureAsync = 0x128;
        inline constexpr uintptr_t GenerateMomentTextAsync = 0x130;
        inline constexpr uintptr_t GetCaptureFilePathAsync = 0x138;
        inline constexpr uintptr_t GetCaptureSizeAsync = 0x140;
        inline constexpr uintptr_t GetCaptureStorageSizeAsync = 0x148;
        inline constexpr uintptr_t GetCaptureUploadDataAsync = 0x150;
        inline constexpr uintptr_t GetDeviceInfo = 0x1d8;
        inline constexpr uintptr_t GetScreenshotCaptureObject = 0x1e0;
        inline constexpr uintptr_t InternalCheckPlayabilityAsync = 0x158;
        inline constexpr uintptr_t InternalGetStartPlaceIdAsync = 0x160;
        inline constexpr uintptr_t IsCapturingVideo = 0x1e8;
        inline constexpr uintptr_t OnCaptureAndMetadataSignatureResult = 0x2c8;
        inline constexpr uintptr_t OnCaptureBegan = 0x1f0;
        inline constexpr uintptr_t OnCaptureEnded = 0x1f8;
        inline constexpr uintptr_t OnCaptureObjectShared = 0x200;
        inline constexpr uintptr_t OnCapturePermissionsPromptFinished = 0x208;
        inline constexpr uintptr_t OnCaptureShared = 0x210;
        inline constexpr uintptr_t OnSavePromptFinished = 0x218;
        inline constexpr uintptr_t OnSharePromptFinished = 0x220;
        inline constexpr uintptr_t OnVideoCaptureShared = 0x228;
        inline constexpr uintptr_t OpenCapturePermissionsPrompt = 0x2d0;
        inline constexpr uintptr_t OpenSaveCapturesPrompt = 0x2d8;
        inline constexpr uintptr_t OpenShareCapturePrompt = 0x2e0;
        inline constexpr uintptr_t PreCaptureShared = 0x230;
        inline constexpr uintptr_t PreVideoCaptureShared = 0x238;
        inline constexpr uintptr_t PromptCaptureGalleryPermissionAsync = 0x168;
        inline constexpr uintptr_t PromptSaveCapturesToGallery = 0x240;
        inline constexpr uintptr_t PromptShareCapture = 0x248;
        inline constexpr uintptr_t ReadCapturesFromGalleryAsync = 0x170;
        inline constexpr uintptr_t RequestCaptureAndMetadataSignature = 0x2e8;
        inline constexpr uintptr_t RetrieveCaptures = 0x250;
        inline constexpr uintptr_t SaveCaptureObjectToExternalStorage = 0x258;
        inline constexpr uintptr_t SaveCaptureToExternalStorage = 0x260;
        inline constexpr uintptr_t SaveCapturesToExternalStorageAsync = 0x178;
        inline constexpr uintptr_t SaveScreenshotCapture = 0x268;
        inline constexpr uintptr_t SaveVideoCaptureToExternalStorage = 0x270;
        inline constexpr uintptr_t StartUploadCaptureAsync = 0x180;
        inline constexpr uintptr_t StartUploadCaptureForSupportTicketAsync = 0x188;
        inline constexpr uintptr_t StartVideoCaptureAsync = 0x190;
        inline constexpr uintptr_t StartVideoCaptureForMCPAsync = 0x198;
        inline constexpr uintptr_t StartVideoCaptureInternalAsync = 0x1a0;
        inline constexpr uintptr_t StopVideoCapture = 0x278;
        inline constexpr uintptr_t StopVideoCaptureForMCP = 0x280;
        inline constexpr uintptr_t StopVideoCaptureInternal = 0x288;
        inline constexpr uintptr_t TakeScreenshotCaptureAsync = 0x290;
        inline constexpr uintptr_t UploadCaptureAndPostMoment = 0x298;
        inline constexpr uintptr_t UploadCaptureAsync = 0x1a8;
        inline constexpr uintptr_t UploadPostAsync = 0x1b0;
        inline constexpr uintptr_t UserCaptureSaved = 0x2f0;
        inline constexpr uintptr_t UserVideoCaptureFailed = 0x2f8;
        inline constexpr uintptr_t UserVideoCaptureStartFailed = 0x300;
        inline constexpr uintptr_t VideoCaptureInProgress = 0x308;
    }

    namespace CapturesViewConfiguration {
        inline constexpr uintptr_t CoreGuiConfiguration = 0x108;
        inline constexpr uintptr_t Open = 0x100;
    }

    namespace ChangeHistoryService {
        inline constexpr uintptr_t FinishRecording = 0x100;
        inline constexpr uintptr_t GetCanRedo = 0x108;
        inline constexpr uintptr_t GetCanUndo = 0x110;
        inline constexpr uintptr_t IsRecordingInProgress = 0x118;
        inline constexpr uintptr_t OnAdded = 0x170;
        inline constexpr uintptr_t OnRecordingFinished = 0x150;
        inline constexpr uintptr_t OnRecordingStarted = 0x158;
        inline constexpr uintptr_t OnRedo = 0x160;
        inline constexpr uintptr_t OnUndo = 0x168;
        inline constexpr uintptr_t Redo = 0x120;
        inline constexpr uintptr_t ResetWaypoints = 0x128;
        inline constexpr uintptr_t SetEnabled = 0x130;
        inline constexpr uintptr_t SetWaypoint = 0x138;
        inline constexpr uintptr_t TryBeginRecording = 0x140;
        inline constexpr uintptr_t Undo = 0x148;
    }

    namespace Changed {
        inline constexpr uintptr_t BindableEvent = 0x100;
        inline constexpr uintptr_t BoolValue = 0x108;
        inline constexpr uintptr_t BrickColorValue = 0x110;
        inline constexpr uintptr_t CFrameValue = 0x118;
        inline constexpr uintptr_t Color3Value = 0x120;
        inline constexpr uintptr_t DoubleConstrainedValue = 0x128;
        inline constexpr uintptr_t IntConstrainedValue = 0x130;
        inline constexpr uintptr_t IntValue = 0x138;
        inline constexpr uintptr_t NumberValue = 0x140;
        inline constexpr uintptr_t ObjectValue = 0x148;
        inline constexpr uintptr_t PlayerDataRecord = 0x150;
        inline constexpr uintptr_t RayValue = 0x158;
        inline constexpr uintptr_t StringValue = 0x160;
        inline constexpr uintptr_t Vector3Value = 0x168;
    }

    namespace ChannelFetchFailure {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace ChannelSelectorSoundEffect {
        inline constexpr uintptr_t Channel = 0x100;
    }

    namespace ChannelTabsConfiguration {
        inline constexpr uintptr_t AbsolutePosition = 0x110;
        inline constexpr uintptr_t AbsoluteSize = 0x118;
        inline constexpr uintptr_t BackgroundColor3 = 0x120;
        inline constexpr uintptr_t BackgroundTransparency = 0x128;
        inline constexpr uintptr_t Enabled = 0x130;
        inline constexpr uintptr_t FontFace = 0x138;
        inline constexpr uintptr_t HoverBackgroundColor3 = 0x140;
        inline constexpr uintptr_t SelectedTabTextColor3 = 0x148;
        inline constexpr uintptr_t SetAbsolutePosition = 0x100;
        inline constexpr uintptr_t SetAbsoluteSize = 0x108;
        inline constexpr uintptr_t TextColor3 = 0x150;
        inline constexpr uintptr_t TextSize = 0x158;
        inline constexpr uintptr_t TextStrokeColor3 = 0x160;
        inline constexpr uintptr_t TextStrokeTransparency = 0x168;
    }

    namespace CharacterMesh {
        inline constexpr uintptr_t BaseTextureContent = 0x100;
        inline constexpr uintptr_t BaseTextureId = 0xb8;
        inline constexpr uintptr_t BodyPart = 0x138;
        inline constexpr uintptr_t MeshContent = 0x118;
        inline constexpr uintptr_t MeshId = 0xe8;
        inline constexpr uintptr_t OverlayTextureContent = 0x128;
        inline constexpr uintptr_t OverlayTextureId = 0x118;
        inline constexpr uintptr_t Status = 0x138;
    }

    namespace Chat {
        inline constexpr uintptr_t BubbleChatEnabled = 0x168;
        inline constexpr uintptr_t BubbleChatSettingsChanged = 0x188;
        inline constexpr uintptr_t CanUserChatAsync = 0x100;
        inline constexpr uintptr_t CanUsersChatAsync = 0x108;
        inline constexpr uintptr_t Chat = 0x128;
        inline constexpr uintptr_t ChatLocal = 0x130;
        inline constexpr uintptr_t Chatted = 0x190;
        inline constexpr uintptr_t ClientToServerFilterMessageSignalV2 = 0x198;
        inline constexpr uintptr_t ClientToServerReportUnfilteredSignal = 0x1a0;
        inline constexpr uintptr_t FilterStringAsync = 0x110;
        inline constexpr uintptr_t FilterStringForBroadcast = 0x118;
        inline constexpr uintptr_t FilterStringForPlayerAsync = 0x120;
        inline constexpr uintptr_t GetShouldUseLuaChat = 0x138;
        inline constexpr uintptr_t InvokeChatCallback = 0x140;
        inline constexpr uintptr_t IsAutoMigrated = 0x170;
        inline constexpr uintptr_t IsFocused = 0x154;
        inline constexpr uintptr_t LoadDefaultChat = 0x178;
        inline constexpr uintptr_t ModerationMode = 0x180;
        inline constexpr uintptr_t ModerationModeEnabledChanged = 0x1a8;
        inline constexpr uintptr_t PlayerChatAvailabilityStatusChanged = 0x1b0;
        inline constexpr uintptr_t Players = 0x1e0;
        inline constexpr uintptr_t ReconcileCommunicationAccess = 0x148;
        inline constexpr uintptr_t ReconcileCommunicationAccessCompleted = 0x1b8;
        inline constexpr uintptr_t ReconcileCommunicationAccessSignal = 0x1c0;
        inline constexpr uintptr_t RegisterChatCallback = 0x150;
        inline constexpr uintptr_t RequestModerationModeEnabled = 0x158;
        inline constexpr uintptr_t ServerToClientUnderOver13FilteredResponseSignal = 0x1c8;
        inline constexpr uintptr_t SetBubbleChatSettings = 0x160;
        inline constexpr uintptr_t TimeoutChatAttempt = 0x1d0;
    }

    namespace ChatInputBarConfiguration {
        inline constexpr uintptr_t AbsolutePosition = 0x100;
        inline constexpr uintptr_t AbsolutePositionWrite = 0x108;
        inline constexpr uintptr_t AbsoluteSize = 0x110;
        inline constexpr uintptr_t AbsoluteSizeWrite = 0x118;
        inline constexpr uintptr_t AutocompleteEnabled = 0x120;
        inline constexpr uintptr_t BackgroundColor3 = 0x128;
        inline constexpr uintptr_t BackgroundTransparency = 0x130;
        inline constexpr uintptr_t Enabled = 0x138;
        inline constexpr uintptr_t FontFace = 0x140;
        inline constexpr uintptr_t IsFocused = 0x148;
        inline constexpr uintptr_t IsFocusedWrite = 0x150;
        inline constexpr uintptr_t KeyboardKeyCode = 0x158;
        inline constexpr uintptr_t PlaceholderColor3 = 0x160;
        inline constexpr uintptr_t TargetTextChannel = 0x168;
        inline constexpr uintptr_t TextBox = 0x170;
        inline constexpr uintptr_t TextColor3 = 0x178;
        inline constexpr uintptr_t TextSize = 0x180;
        inline constexpr uintptr_t TextStrokeColor3 = 0x188;
        inline constexpr uintptr_t TextStrokeTransparency = 0x190;
    }

    namespace ChatServiceAmpStatusErrorCounter {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace ChatWindowConfiguration {
        inline constexpr uintptr_t AbsolutePosition = 0x108;
        inline constexpr uintptr_t AbsolutePositionWrite = 0x110;
        inline constexpr uintptr_t AbsoluteSize = 0x118;
        inline constexpr uintptr_t AbsoluteSizeWrite = 0x120;
        inline constexpr uintptr_t BackgroundColor3 = 0x128;
        inline constexpr uintptr_t BackgroundTransparency = 0x130;
        inline constexpr uintptr_t DeriveNewMessageProperties = 0x100;
        inline constexpr uintptr_t Enabled = 0x138;
        inline constexpr uintptr_t FontFace = 0x140;
        inline constexpr uintptr_t HeightScale = 0x148;
        inline constexpr uintptr_t HorizontalAlignment = 0x150;
        inline constexpr uintptr_t TextChannelDisplayMode = 0x158;
        inline constexpr uintptr_t TextColor3 = 0x160;
        inline constexpr uintptr_t TextSize = 0x168;
        inline constexpr uintptr_t TextStrokeColor3 = 0x170;
        inline constexpr uintptr_t TextStrokeTransparency = 0x178;
        inline constexpr uintptr_t VerticalAlignment = 0x180;
        inline constexpr uintptr_t WidthScale = 0x188;
    }

    namespace ChatWindowMessageProperties {
        inline constexpr uintptr_t FontFace = 0x100;
        inline constexpr uintptr_t PrefixTextProperties = 0x108;
        inline constexpr uintptr_t TextChatMessage = 0x130;
        inline constexpr uintptr_t TextColor3 = 0x110;
        inline constexpr uintptr_t TextSize = 0x118;
        inline constexpr uintptr_t TextStrokeColor3 = 0x120;
        inline constexpr uintptr_t TextStrokeTransparency = 0x128;
    }

    namespace CheckMomentTextStatusAsync {
        inline constexpr uintptr_t CaptureService = 0x100;
        inline constexpr uintptr_t MomentsService = 0x108;
    }

    namespace ChorusSoundEffect {
        inline constexpr uintptr_t Depth = 0x100;
        inline constexpr uintptr_t Mix = 0x108;
        inline constexpr uintptr_t Rate = 0x110;
    }

    namespace ClassDescriptor {
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t Creator = 0x230;
        inline constexpr uintptr_t EventDescriptors = 0x88;
        inline constexpr uintptr_t FunctionDescriptors = 0xd0;
        inline constexpr uintptr_t PropertyDescriptors = 0x40;
    }

    namespace Clear {
        inline constexpr uintptr_t AudioRecorder = 0x100;
        inline constexpr uintptr_t ClientStorageService = 0x108;
        inline constexpr uintptr_t EditableMesh = 0x110;
        inline constexpr uintptr_t ParticleEmitter = 0x118;
        inline constexpr uintptr_t PluginToolbar = 0x120;
        inline constexpr uintptr_t Terrain = 0x128;
        inline constexpr uintptr_t Translator = 0x130;
        inline constexpr uintptr_t Workspace = 0x138;
    }

    namespace ClickDetector {
        inline constexpr uintptr_t CursorIcon = 0x100;
        inline constexpr uintptr_t CursorIconContent = 0x108;
        inline constexpr uintptr_t MaxActivationDistance = 0xd8;
        inline constexpr uintptr_t MouseActionReplicated = 0x118;
        inline constexpr uintptr_t MouseClick = 0x120;
        inline constexpr uintptr_t MouseHoverEnter = 0x128;
        inline constexpr uintptr_t MouseHoverLeave = 0x130;
        inline constexpr uintptr_t MouseIcon = 0xb8;
        inline constexpr uintptr_t RightMouseClick = 0x138;
        inline constexpr uintptr_t mouseClick = 0x140;
    }

    namespace ClientLocalDnsServerConfigured {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace ClientNoLocalDnsServerConfigured {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace ClientPrimaryLocalDnsServerConfigured {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace ClientReplicator {
        inline constexpr uintptr_t IsStreamedOut = 0x100;
        inline constexpr uintptr_t RCCProfilerDataComplete = 0x118;
        inline constexpr uintptr_t RequestRCCProfilerData = 0x108;
        inline constexpr uintptr_t RequestServerStats = 0x110;
        inline constexpr uintptr_t StatsReceived = 0x120;
    }

    namespace ClientStorageService {
        inline constexpr uintptr_t Clear = 0x100;
        inline constexpr uintptr_t GetItem = 0x108;
        inline constexpr uintptr_t RemoveItem = 0x110;
        inline constexpr uintptr_t SetItem = 0x118;
    }

    namespace ClimbController {
        inline constexpr uintptr_t AccelerationTime = 0x100;
        inline constexpr uintptr_t BalanceMaxTorque = 0x108;
        inline constexpr uintptr_t BalanceSpeed = 0x110;
        inline constexpr uintptr_t MoveMaxForce = 0x118;
    }

    namespace ClipsDescendants {
        inline constexpr uintptr_t BillboardGui = 0x100;
        inline constexpr uintptr_t GuiObject = 0x108;
        inline constexpr uintptr_t SurfaceGui = 0x110;
    }

    namespace Close {
        inline constexpr uintptr_t CustomLog = 0x100;
        inline constexpr uintptr_t ServiceProvider = 0x120;
        inline constexpr uintptr_t WebSocketClient = 0x108;
        inline constexpr uintptr_t WebStreamClient = 0x110;
        inline constexpr uintptr_t WindowProtocolService = 0x118;
    }

    namespace Closed {
        inline constexpr uintptr_t Path2D = 0x100;
        inline constexpr uintptr_t WebSocketClient = 0x108;
        inline constexpr uintptr_t WebStreamClient = 0x110;
    }

    namespace Clothing {
        inline constexpr uintptr_t Color3 = 0x110;
        inline constexpr uintptr_t Outfit1 = 0x108;
        inline constexpr uintptr_t Outfit1Content = 0x110;
        inline constexpr uintptr_t Outfit2 = 0x118;
        inline constexpr uintptr_t Outfit2Content = 0x120;
        inline constexpr uintptr_t Template = 0xf0;
    }

    namespace Clouds {
        inline constexpr uintptr_t Color = 0x100;
        inline constexpr uintptr_t Cover = 0x108;
        inline constexpr uintptr_t Density = 0x110;
        inline constexpr uintptr_t Enabled = 0x118;
    }

    namespace CollectionService {
        inline constexpr uintptr_t AddTag = 0x100;
        inline constexpr uintptr_t CreateCollection = 0x108;
        inline constexpr uintptr_t GetAllTags = 0x110;
        inline constexpr uintptr_t GetCollection = 0x118;
        inline constexpr uintptr_t GetInstanceAddedSignal = 0x120;
        inline constexpr uintptr_t GetInstanceRemovedSignal = 0x128;
        inline constexpr uintptr_t GetTagAddedSignal = 0x130;
        inline constexpr uintptr_t GetTagRemovedSignal = 0x138;
        inline constexpr uintptr_t GetTagged = 0x140;
        inline constexpr uintptr_t GetTags = 0x148;
        inline constexpr uintptr_t HasTag = 0x150;
        inline constexpr uintptr_t ItemAdded = 0x160;
        inline constexpr uintptr_t ItemRemoved = 0x168;
        inline constexpr uintptr_t RemoveTag = 0x158;
        inline constexpr uintptr_t TagAdded = 0x170;
        inline constexpr uintptr_t TagRemoved = 0x178;
    }

    namespace CollisionGroupSetCollidable {
        inline constexpr uintptr_t PhysicsService = 0x100;
        inline constexpr uintptr_t WorldRoot = 0x108;
    }

    namespace CollisionGroupsAreCollidable {
        inline constexpr uintptr_t PhysicsService = 0x100;
        inline constexpr uintptr_t WorldRoot = 0x108;
    }

    namespace Color {
        inline constexpr uintptr_t Atmosphere = 0x100;
        inline constexpr uintptr_t BasePart = 0x108;
        inline constexpr uintptr_t Beam = 0x110;
        inline constexpr uintptr_t BodyPartDescription = 0x118;
        inline constexpr uintptr_t Clouds = 0x120;
        inline constexpr uintptr_t Constraint = 0x128;
        inline constexpr uintptr_t Fire = 0x130;
        inline constexpr uintptr_t GuiBase3d = 0x138;
        inline constexpr uintptr_t Light = 0x140;
        inline constexpr uintptr_t Normal = 0x198;
        inline constexpr uintptr_t ParticleEmitter = 0x148;
        inline constexpr uintptr_t Smoke = 0x150;
        inline constexpr uintptr_t Sparkles = 0x158;
        inline constexpr uintptr_t SurfaceAppearance = 0x160;
        inline constexpr uintptr_t Trail = 0x168;
        inline constexpr uintptr_t UIGradient = 0x170;
        inline constexpr uintptr_t UIShadow = 0x178;
        inline constexpr uintptr_t UIStroke = 0x180;
        inline constexpr uintptr_t WrapLayer = 0x188;
        inline constexpr uintptr_t WrapTarget = 0x190;
    }

    namespace Color3 {
        inline constexpr uintptr_t Clothing = 0x100;
        inline constexpr uintptr_t Decal = 0x108;
        inline constexpr uintptr_t GuiBase3d = 0x110;
        inline constexpr uintptr_t Path2D = 0x118;
        inline constexpr uintptr_t ShirtGraphic = 0x120;
    }

    namespace Color3Value {
        inline constexpr uintptr_t Changed = 0x108;
        inline constexpr uintptr_t Value = 0x100;
        inline constexpr uintptr_t changed = 0x110;
    }

    namespace ColorCorrectionEffect {
        inline constexpr uintptr_t Brightness = 0xb4;
        inline constexpr uintptr_t Contrast = 0xb8;
        inline constexpr uintptr_t Enabled = 0xa0;
        inline constexpr uintptr_t Saturation = 0x110;
        inline constexpr uintptr_t TintColor = 0xa8;
    }

    namespace ColorGradingEffect {
        inline constexpr uintptr_t Enabled = 0xa0;
        inline constexpr uintptr_t TonemapperPreset = 0xa8;
    }

    namespace ColorMap {
        inline constexpr uintptr_t Decal = 0x100;
        inline constexpr uintptr_t MaterialVariant = 0x108;
        inline constexpr uintptr_t NormalMap = 0x120;
        inline constexpr uintptr_t SurfaceAppearance = 0x110;
        inline constexpr uintptr_t TerrainDetail = 0x118;
    }

    namespace ColorMapContent {
        inline constexpr uintptr_t Decal = 0x100;
        inline constexpr uintptr_t MaterialVariant = 0x108;
        inline constexpr uintptr_t SurfaceAppearance = 0x110;
        inline constexpr uintptr_t TerrainDetail = 0x118;
    }

    namespace CommerceService {
        inline constexpr uintptr_t BenefitStatusReceived = 0x130;
        inline constexpr uintptr_t FetchReceipt = 0x138;
        inline constexpr uintptr_t GetCommerceProductInfoAsync = 0x100;
        inline constexpr uintptr_t InExperienceBrowserRequested = 0x140;
        inline constexpr uintptr_t PrepareCommerceProductPurchase = 0x108;
        inline constexpr uintptr_t PromptCommerceProductPurchase = 0x118;
        inline constexpr uintptr_t PromptCommerceProductPurchaseFinished = 0x148;
        inline constexpr uintptr_t PromptCommerceProductPurchaseRequested = 0x150;
        inline constexpr uintptr_t PromptRealWorldCommerceBrowser = 0x120;
        inline constexpr uintptr_t PurchaseBrowserClosed = 0x158;
        inline constexpr uintptr_t SignalPromptCommerceProductPurchaseFinished = 0x128;
        inline constexpr uintptr_t UserEligibleForRealWorldCommerceAsync = 0x110;
    }

    namespace CommitBlock {
        inline constexpr uintptr_t TerrainModifyOperation = 0x100;
        inline constexpr uintptr_t TerrainRegion = 0x108;
        inline constexpr uintptr_t TerrainWriteOperation = 0x110;
    }

    namespace ComposeDecalRateLimitDrop {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace CompositeValueCurve {
        inline constexpr uintptr_t CurveType = 0x110;
        inline constexpr uintptr_t GetComponentCurves = 0x100;
        inline constexpr uintptr_t GetValueAtTime = 0x108;
    }

    namespace CompressorSoundEffect {
        inline constexpr uintptr_t Attack = 0x100;
        inline constexpr uintptr_t GainMakeup = 0x108;
        inline constexpr uintptr_t Ratio = 0x110;
        inline constexpr uintptr_t Release = 0x118;
        inline constexpr uintptr_t SideChain = 0x120;
        inline constexpr uintptr_t Threshold = 0x128;
    }

    namespace ConeHandleAdornment {
        inline constexpr uintptr_t Height = 0x100;
        inline constexpr uintptr_t Hollow = 0x108;
        inline constexpr uintptr_t Radius = 0x110;
        inline constexpr uintptr_t Shading = 0x118;
    }

    namespace Confidential {
        inline constexpr uintptr_t ModuleScript = 0x100;
        inline constexpr uintptr_t TextBox = 0x108;
        inline constexpr uintptr_t TextButton = 0x110;
        inline constexpr uintptr_t TextLabel = 0x118;
    }

    namespace ConfigService {
        inline constexpr uintptr_t ClearTestingValue = 0x110;
        inline constexpr uintptr_t GetConfigAsync = 0x100;
        inline constexpr uintptr_t GetConfigForPlayerAsync = 0x108;
        inline constexpr uintptr_t SetTestingValue = 0x118;
    }

    namespace ConfigSnapshot {
        inline constexpr uintptr_t Error = 0x118;
        inline constexpr uintptr_t GetValue = 0x100;
        inline constexpr uintptr_t GetValueChangedSignal = 0x108;
        inline constexpr uintptr_t Outdated = 0x120;
        inline constexpr uintptr_t Refresh = 0x110;
        inline constexpr uintptr_t UpdateAvailable = 0x128;
    }

    namespace ConnectAsync {
        inline constexpr uintptr_t GenerationService = 0x100;
        inline constexpr uintptr_t RecommendationService = 0x108;
    }

    namespace Constraint {
        inline constexpr uintptr_t Active = 0x110;
        inline constexpr uintptr_t Attachment0 = 0x118;
        inline constexpr uintptr_t Attachment1 = 0x120;
        inline constexpr uintptr_t Color = 0x128;
        inline constexpr uintptr_t Enabled = 0x130;
        inline constexpr uintptr_t GetDebugAppliedForce = 0x100;
        inline constexpr uintptr_t GetDebugAppliedTorque = 0x108;
        inline constexpr uintptr_t Visible = 0x138;
    }

    namespace Content {
        inline constexpr uintptr_t AnimatedImage = 0x100;
        inline constexpr uintptr_t PartOperation = 0x108;
    }

    namespace ContentProvider {
        inline constexpr uintptr_t AssetFetchFailed = 0x188;
        inline constexpr uintptr_t BaseUrl = 0x178;
        inline constexpr uintptr_t GetAssetFetchStatus = 0x108;
        inline constexpr uintptr_t GetAssetFetchStatusChangedSignal = 0x110;
        inline constexpr uintptr_t GetDependencyContentIds = 0x118;
        inline constexpr uintptr_t GetDetailedFailedRequests = 0x120;
        inline constexpr uintptr_t GetFailedRequests = 0x128;
        inline constexpr uintptr_t ListEncryptedAssets = 0x130;
        inline constexpr uintptr_t Preload = 0x138;
        inline constexpr uintptr_t PreloadAsync = 0x100;
        inline constexpr uintptr_t RegisterDefaultEncryptionKey = 0x140;
        inline constexpr uintptr_t RegisterDefaultSessionKey = 0x148;
        inline constexpr uintptr_t RegisterEncryptedAsset = 0x150;
        inline constexpr uintptr_t RegisterSessionEncryptedAsset = 0x158;
        inline constexpr uintptr_t RequestQueueSize = 0x180;
        inline constexpr uintptr_t SetBaseUrl = 0x160;
        inline constexpr uintptr_t UnregisterDefaultEncryptionKey = 0x168;
        inline constexpr uintptr_t UnregisterEncryptedAsset = 0x170;
    }

    namespace ContentText {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace Context {
        inline constexpr uintptr_t PrimitivePoolPtr = 0x1a0;
    }

    namespace ContextActionService {
        inline constexpr uintptr_t BindAction = 0x108;
        inline constexpr uintptr_t BindActionAtPriority = 0x110;
        inline constexpr uintptr_t BindActionToInputTypes = 0x118;
        inline constexpr uintptr_t BindActivate = 0x120;
        inline constexpr uintptr_t BindCoreAction = 0x128;
        inline constexpr uintptr_t BindCoreActionAtPriority = 0x130;
        inline constexpr uintptr_t BindCoreActivate = 0x138;
        inline constexpr uintptr_t BoundActionAdded = 0x1d0;
        inline constexpr uintptr_t BoundActionChanged = 0x1d8;
        inline constexpr uintptr_t BoundActionRemoved = 0x1e0;
        inline constexpr uintptr_t CallFunction = 0x140;
        inline constexpr uintptr_t FireActionButtonFoundSignal = 0x148;
        inline constexpr uintptr_t GetActionButtonEvent = 0x1e8;
        inline constexpr uintptr_t GetAllBoundActionInfo = 0x150;
        inline constexpr uintptr_t GetAllBoundCoreActionInfo = 0x158;
        inline constexpr uintptr_t GetBoundActionInfo = 0x160;
        inline constexpr uintptr_t GetBoundCoreActionInfo = 0x168;
        inline constexpr uintptr_t GetButton = 0x100;
        inline constexpr uintptr_t GetCurrentLocalToolIcon = 0x170;
        inline constexpr uintptr_t GetInputContexts = 0x178;
        inline constexpr uintptr_t GetInputSchemaKeyCodeTree = 0x180;
        inline constexpr uintptr_t InputContextsChanged = 0x1f0;
        inline constexpr uintptr_t LocalToolEquipped = 0x1f8;
        inline constexpr uintptr_t LocalToolUnequipped = 0x200;
        inline constexpr uintptr_t SetDescription = 0x188;
        inline constexpr uintptr_t SetImage = 0x190;
        inline constexpr uintptr_t SetPosition = 0x198;
        inline constexpr uintptr_t SetTitle = 0x1a0;
        inline constexpr uintptr_t UnbindAction = 0x1a8;
        inline constexpr uintptr_t UnbindActivate = 0x1b0;
        inline constexpr uintptr_t UnbindAllActions = 0x1b8;
        inline constexpr uintptr_t UnbindCoreAction = 0x1c0;
        inline constexpr uintptr_t UnbindCoreActivate = 0x1c8;
    }

    namespace ControlState {
        inline constexpr uintptr_t AddBoolField = 0x100;
        inline constexpr uintptr_t AddCFrameField = 0x108;
        inline constexpr uintptr_t AddInstanceField = 0x110;
        inline constexpr uintptr_t AddIntField = 0x118;
        inline constexpr uintptr_t AddNumberField = 0x120;
        inline constexpr uintptr_t AddUnitVector3Field = 0x128;
        inline constexpr uintptr_t AddVector2Field = 0x130;
        inline constexpr uintptr_t AddVector3Field = 0x138;
        inline constexpr uintptr_t GetChangedState = 0x140;
        inline constexpr uintptr_t GetReplicationWeight = 0x148;
        inline constexpr uintptr_t GetState = 0x150;
        inline constexpr uintptr_t OnStateChanged = 0x178;
        inline constexpr uintptr_t Owner = 0x168;
        inline constexpr uintptr_t SetField = 0x158;
        inline constexpr uintptr_t StateSchema = 0x170;
        inline constexpr uintptr_t UpdateFields = 0x160;
    }

    namespace Controller {
        inline constexpr uintptr_t BindButton = 0x100;
        inline constexpr uintptr_t ButtonChanged = 0x128;
        inline constexpr uintptr_t GetButton = 0x108;
        inline constexpr uintptr_t SkateboardPlatform = 0x130;
        inline constexpr uintptr_t UnbindButton = 0x110;
        inline constexpr uintptr_t bindButton = 0x118;
        inline constexpr uintptr_t getButton = 0x120;
    }

    namespace ControllerBase {
        inline constexpr uintptr_t Active = 0x100;
        inline constexpr uintptr_t BalanceRigidityEnabled = 0x108;
        inline constexpr uintptr_t MoveSpeedFactor = 0x110;
    }

    namespace ControllerManager {
        inline constexpr uintptr_t ActiveController = 0x100;
        inline constexpr uintptr_t BaseMoveSpeed = 0x108;
        inline constexpr uintptr_t BaseTurnSpeed = 0x110;
        inline constexpr uintptr_t ClimbSensor = 0x118;
        inline constexpr uintptr_t FacingDirection = 0x120;
        inline constexpr uintptr_t GroundSensor = 0x128;
        inline constexpr uintptr_t MovingDirection = 0x130;
        inline constexpr uintptr_t RootPart = 0x138;
        inline constexpr uintptr_t UpDirection = 0x140;
    }

    namespace ControllerPartSensor {
        inline constexpr uintptr_t HitFrame = 0x100;
        inline constexpr uintptr_t HitNormal = 0x108;
        inline constexpr uintptr_t LadderSearchHeight = 0x110;
        inline constexpr uintptr_t LadderSearchOffset = 0x118;
        inline constexpr uintptr_t SearchDistance = 0x120;
        inline constexpr uintptr_t SensedMaterial = 0x128;
        inline constexpr uintptr_t SensedPart = 0x130;
        inline constexpr uintptr_t SensorMode = 0x138;
    }

    namespace ConvertToSmooth {
        inline constexpr uintptr_t Terrain = 0x100;
        inline constexpr uintptr_t TerrainRegion = 0x108;
    }

    namespace CoreGui {
        inline constexpr uintptr_t SelectionImageObject = 0x118;
        inline constexpr uintptr_t SetUserGuiRendering = 0x100;
        inline constexpr uintptr_t StarterGui = 0x130;
        inline constexpr uintptr_t TakeScreenshot = 0x108;
        inline constexpr uintptr_t ToggleRecording = 0x110;
        inline constexpr uintptr_t UserGuiRenderingChanged = 0x128;
        inline constexpr uintptr_t Version = 0x120;
    }

    namespace CoreGuiConfiguration {
        inline constexpr uintptr_t CapturesViewConfiguration = 0x100;
        inline constexpr uintptr_t PlayerListConfiguration = 0x108;
        inline constexpr uintptr_t SelfViewConfiguration = 0x110;
    }

    namespace CoreScriptSyncService {
        inline constexpr uintptr_t GetScriptFilePath = 0x100;
    }

    namespace CreateEditableMeshAsync {
        inline constexpr uintptr_t AssetService = 0x100;
        inline constexpr uintptr_t WrapDeformer = 0x108;
    }

    namespace CreateMeshPartAsync {
        inline constexpr uintptr_t AssetService = 0x100;
        inline constexpr uintptr_t InsertService = 0x108;
    }

    namespace CreatePlugin {
        inline constexpr uintptr_t PluginManager = 0x100;
        inline constexpr uintptr_t PluginManagerInterface = 0x108;
    }

    namespace CreatePostAsync {
        inline constexpr uintptr_t CaptureService = 0x100;
        inline constexpr uintptr_t MomentsService = 0x108;
    }

    namespace CreatedTime {
        inline constexpr uintptr_t DataStoreInfo = 0x100;
        inline constexpr uintptr_t DataStoreKeyInfo = 0x108;
        inline constexpr uintptr_t DataStoreObjectVersionInfo = 0x110;
        inline constexpr uintptr_t PlayerDataRecord = 0x118;
    }

    namespace Creator {
        inline constexpr uintptr_t MapEnd = 0x857df78;
        inline constexpr uintptr_t MapStart = 0x857df70;
    }

    namespace CreatorStoreService {
        inline constexpr uintptr_t GetAssetInfoAsync = 0x100;
        inline constexpr uintptr_t GetCreatorStoreProductInfoAsync = 0x108;
        inline constexpr uintptr_t PerformCreatorStorePurchase = 0x110;
    }

    namespace CsmAckSuccessfully {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace CsmAckTerminated {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace CurrentAngle {
        inline constexpr uintptr_t CylindricalConstraint = 0x100;
        inline constexpr uintptr_t HingeConstraint = 0x108;
        inline constexpr uintptr_t Motor = 0x110;
        inline constexpr uintptr_t TorsionSpringConstraint = 0x118;
        inline constexpr uintptr_t VelocityMotor = 0x120;
    }

    namespace CurrentDistance {
        inline constexpr uintptr_t BillboardGui = 0x100;
        inline constexpr uintptr_t RodConstraint = 0x108;
        inline constexpr uintptr_t RopeConstraint = 0x110;
    }

    namespace CustomEvent {
        inline constexpr uintptr_t CorePackages = 0x128;
        inline constexpr uintptr_t GetAttachedReceivers = 0x100;
        inline constexpr uintptr_t PersistedCurrentValue = 0x110;
        inline constexpr uintptr_t ReceiverConnected = 0x118;
        inline constexpr uintptr_t ReceiverDisconnected = 0x120;
        inline constexpr uintptr_t SetValue = 0x108;
    }

    namespace CustomEventReceiver {
        inline constexpr uintptr_t CustomEvent = 0x128;
        inline constexpr uintptr_t EventConnected = 0x110;
        inline constexpr uintptr_t EventDisconnected = 0x118;
        inline constexpr uintptr_t GetCurrentValue = 0x100;
        inline constexpr uintptr_t Source = 0x108;
        inline constexpr uintptr_t SourceValueChanged = 0x120;
    }

    namespace CustomLog {
        inline constexpr uintptr_t Close = 0x100;
        inline constexpr uintptr_t GetLogPath = 0x108;
        inline constexpr uintptr_t Open = 0x110;
        inline constexpr uintptr_t WriteAppend = 0x118;
    }

    namespace CustomPhysicalProperties {
        inline constexpr uintptr_t BasePart = 0x100;
        inline constexpr uintptr_t MaterialVariant = 0x108;
    }

    namespace CylinderHandleAdornment {
        inline constexpr uintptr_t Angle = 0x100;
        inline constexpr uintptr_t Height = 0x108;
        inline constexpr uintptr_t InnerRadius = 0x110;
        inline constexpr uintptr_t Radius = 0x118;
        inline constexpr uintptr_t Shading = 0x120;
    }

    namespace CylindricalConstraint {
        inline constexpr uintptr_t AngularActuatorType = 0x100;
        inline constexpr uintptr_t AngularLimitsEnabled = 0x108;
        inline constexpr uintptr_t AngularResponsiveness = 0x110;
        inline constexpr uintptr_t AngularRestitution = 0x118;
        inline constexpr uintptr_t AngularSpeed = 0x120;
        inline constexpr uintptr_t AngularVelocity = 0x128;
        inline constexpr uintptr_t CurrentAngle = 0x130;
        inline constexpr uintptr_t InclinationAngle = 0x138;
        inline constexpr uintptr_t LowerAngle = 0x140;
        inline constexpr uintptr_t MotorMaxAngularAcceleration = 0x148;
        inline constexpr uintptr_t MotorMaxTorque = 0x150;
        inline constexpr uintptr_t RotationAxisVisible = 0x158;
        inline constexpr uintptr_t ServoMaxTorque = 0x160;
        inline constexpr uintptr_t SoftlockAngularServoUponReachingTarget = 0x168;
        inline constexpr uintptr_t TargetAngle = 0x170;
        inline constexpr uintptr_t UpperAngle = 0x178;
        inline constexpr uintptr_t WorldRotationAxis = 0x180;
    }

    namespace DMRecorderStopRequested {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Data {
        inline constexpr uintptr_t Behavior = 0x100;
        inline constexpr uintptr_t PluginDragEvent = 0x108;
        inline constexpr uintptr_t RocketPropulsion = 0x110;
    }

    namespace DataModel {
        inline constexpr uintptr_t AllowedGearTypeChanged = 0x2b8;
        inline constexpr uintptr_t BindToClose = 0x118;
        inline constexpr uintptr_t CreatorId = 0x178;
        inline constexpr uintptr_t CreatorType = 0x1f8;
        inline constexpr uintptr_t DebugSettings = 0x340;
        inline constexpr uintptr_t DefineFastFlag = 0x120;
        inline constexpr uintptr_t DefineFastInt = 0x128;
        inline constexpr uintptr_t DefineFastString = 0x130;
        inline constexpr uintptr_t Environment = 0x200;
        inline constexpr uintptr_t ForceR15 = 0x208;
        inline constexpr uintptr_t GameAvatarType = 0x210;
        inline constexpr uintptr_t GameId = 0x180;
        inline constexpr uintptr_t GameLoaded = 0x5d0;
        inline constexpr uintptr_t GearGenreSetting = 0x220;
        inline constexpr uintptr_t Genre = 0x228;
        inline constexpr uintptr_t GetEngineFeature = 0x138;
        inline constexpr uintptr_t GetFastFlag = 0x140;
        inline constexpr uintptr_t GetFastInt = 0x148;
        inline constexpr uintptr_t GetFastString = 0x150;
        inline constexpr uintptr_t GetJobsInfo = 0x158;
        inline constexpr uintptr_t GetMessage = 0x160;
        inline constexpr uintptr_t GetPioneerRootPlaceId = 0x168;
        inline constexpr uintptr_t GetPioneerSource = 0x170;
        inline constexpr uintptr_t GetPlaySessionId = 0x178;
        inline constexpr uintptr_t GetRemoteBuildMode = 0x180;
        inline constexpr uintptr_t GraphicsQualityChangeRequest = 0x2c0;
        inline constexpr uintptr_t HttpGetAsync = 0x100;
        inline constexpr uintptr_t HttpPostAsync = 0x108;
        inline constexpr uintptr_t IsContentLoaded = 0x188;
        inline constexpr uintptr_t IsGearTypeAllowed = 0x190;
        inline constexpr uintptr_t IsLoaded = 0x198;
        inline constexpr uintptr_t IsPioneerApp = 0x1a0;
        inline constexpr uintptr_t IsPioneerBuild = 0x230;
        inline constexpr uintptr_t IsSFFlagsLoaded = 0x238;
        inline constexpr uintptr_t IsUniverseMetadataLoaded = 0x1a8;
        inline constexpr uintptr_t ItemChanged = 0x2c8;
        inline constexpr uintptr_t JobId = 0x110;
        inline constexpr uintptr_t Load = 0x1b0;
        inline constexpr uintptr_t Loaded = 0x2d0;
        inline constexpr uintptr_t MatchmakingType = 0x248;
        inline constexpr uintptr_t OnClose = 0x2b0;
        inline constexpr uintptr_t OpenLogsFolder = 0x1b8;
        inline constexpr uintptr_t OpenScreenshotsFolder = 0x1c0;
        inline constexpr uintptr_t OpenVideosFolder = 0x1c8;
        inline constexpr uintptr_t PioneerSource = 0x250;
        inline constexpr uintptr_t PlaceId = 0x188;
        inline constexpr uintptr_t PlaceVersion = 0x1a4;
        inline constexpr uintptr_t PrimitiveCount = 0x418;
        inline constexpr uintptr_t PrivateServerId = 0x268;
        inline constexpr uintptr_t PrivateServerOwnerId = 0x270;
        inline constexpr uintptr_t R15CollisionType = 0x278;
        inline constexpr uintptr_t RunService = 0x280;
        inline constexpr uintptr_t SavePlace = 0x110;
        inline constexpr uintptr_t ScreenshotReady = 0x2d8;
        inline constexpr uintptr_t ScreenshotSavedToAlbum = 0x2e0;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t ServerIP = 0x5b8;
        inline constexpr uintptr_t ServerLifecycleChanged = 0x2e8;
        inline constexpr uintptr_t ServerLowMemoryWarning = 0x2f0;
        inline constexpr uintptr_t ServerRestartScheduled = 0x2f8;
        inline constexpr uintptr_t SetFlagVersion = 0x1d0;
        inline constexpr uintptr_t SetIsLoaded = 0x1d8;
        inline constexpr uintptr_t Shutdown = 0x1e0;
        inline constexpr uintptr_t ToRenderView1 = 0x1c0;
        inline constexpr uintptr_t ToRenderView2 = 0x8;
        inline constexpr uintptr_t ToRenderView3 = 0x28;
        inline constexpr uintptr_t UniverseMetadataLoaded = 0x300;
        inline constexpr uintptr_t VIPServerId = 0x288;
        inline constexpr uintptr_t VIPServerOwnerId = 0x290;
        inline constexpr uintptr_t Workspace = 0x150;
        inline constexpr uintptr_t getGameTime = 0x1e8;
        inline constexpr uintptr_t lighting = 0x2a0;
        inline constexpr uintptr_t workspace = 0x2a8;
    }

    namespace DataModelAnalysisServiceTelemetry {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace DataModelDiff {
        inline constexpr uintptr_t GetChangeType = 0x100;
        inline constexpr uintptr_t GetIdentities = 0x108;
        inline constexpr uintptr_t GetPropertyNames = 0x110;
    }

    namespace DataModelMesh {
        inline constexpr uintptr_t Offset = 0x100;
        inline constexpr uintptr_t Scale = 0x108;
        inline constexpr uintptr_t VertexColor = 0x110;
    }

    namespace DataModelSession {
        inline constexpr uintptr_t CurrentDataModelType = 0x100;
        inline constexpr uintptr_t CurrentDataModelTypeAboutToChange = 0x110;
        inline constexpr uintptr_t CurrentDataModelTypeChanged = 0x118;
        inline constexpr uintptr_t SessionId = 0x108;
    }

    namespace DataStore {
        inline constexpr uintptr_t GetVersionAsync = 0x100;
        inline constexpr uintptr_t GetVersionAtTimeAsync = 0x108;
        inline constexpr uintptr_t ListKeysAsync = 0x110;
        inline constexpr uintptr_t ListVersionsAsync = 0x118;
        inline constexpr uintptr_t RemoveVersionAsync = 0x120;
    }

    namespace DataStoreGetOptions {
        inline constexpr uintptr_t UseCache = 0x100;
    }

    namespace DataStoreIncrementOptions {
        inline constexpr uintptr_t GetMetadata = 0x100;
        inline constexpr uintptr_t SetMetadata = 0x108;
    }

    namespace DataStoreInfo {
        inline constexpr uintptr_t CreatedTime = 0x100;
        inline constexpr uintptr_t DataStoreName = 0x108;
        inline constexpr uintptr_t UpdatedTime = 0x110;
    }

    namespace DataStoreKey {
        inline constexpr uintptr_t KeyName = 0x100;
    }

    namespace DataStoreKeyInfo {
        inline constexpr uintptr_t CreatedTime = 0x110;
        inline constexpr uintptr_t GetMetadata = 0x100;
        inline constexpr uintptr_t GetUserIds = 0x108;
        inline constexpr uintptr_t UpdatedTime = 0x118;
        inline constexpr uintptr_t Version = 0x120;
    }

    namespace DataStoreKeyPages {
        inline constexpr uintptr_t Cursor = 0x100;
    }

    namespace DataStoreListingPages {
        inline constexpr uintptr_t Cursor = 0x100;
    }

    namespace DataStoreObjectVersionInfo {
        inline constexpr uintptr_t CreatedTime = 0x100;
        inline constexpr uintptr_t IsDeleted = 0x108;
        inline constexpr uintptr_t Version = 0x110;
    }

    namespace DataStoreOptions {
        inline constexpr uintptr_t AllScopes = 0x108;
        inline constexpr uintptr_t SetExperimentalFeatures = 0x100;
    }

    namespace DataStorePagesAdvanceAsyncFailureCounter {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace DataStoreService {
        inline constexpr uintptr_t AutomaticRetry = 0x130;
        inline constexpr uintptr_t GetDataStore = 0x108;
        inline constexpr uintptr_t GetGlobalDataStore = 0x110;
        inline constexpr uintptr_t GetOrderedDataStore = 0x118;
        inline constexpr uintptr_t GetRequestBudgetForRequestType = 0x120;
        inline constexpr uintptr_t LegacyNamingScheme = 0x138;
        inline constexpr uintptr_t ListDataStoresAsync = 0x100;
        inline constexpr uintptr_t SetRateLimitForRequestType = 0x128;
    }

    namespace DataStoreSetOptions {
        inline constexpr uintptr_t GetMetadata = 0x100;
        inline constexpr uintptr_t SetMetadata = 0x108;
    }

    namespace DatamodelError {
        inline constexpr uintptr_t ConfigurationError = 0x110;
        inline constexpr uintptr_t InvalidJson = 0x100;
        inline constexpr uintptr_t ManagerGone = 0x118;
        inline constexpr uintptr_t NoFeatures = 0x108;
    }

    namespace Deactivate {
        inline constexpr uintptr_t Plugin = 0x100;
        inline constexpr uintptr_t TracerService = 0x108;
    }

    namespace Debris {
        inline constexpr uintptr_t AddItem = 0x100;
        inline constexpr uintptr_t MaxItems = 0x118;
        inline constexpr uintptr_t SetLegacyMaxItems = 0x108;
        inline constexpr uintptr_t addItem = 0x110;
    }

    namespace DebugSettings {
        inline constexpr uintptr_t DataModel = 0x100;
        inline constexpr uintptr_t InstanceCount = 0x108;
        inline constexpr uintptr_t IsScriptStackTracingEnabled = 0x110;
        inline constexpr uintptr_t JobCount = 0x118;
        inline constexpr uintptr_t PlayerCount = 0x120;
        inline constexpr uintptr_t ReportSoundWarnings = 0x128;
        inline constexpr uintptr_t RobloxVersion = 0x130;
        inline constexpr uintptr_t TickCountPreciseOverride = 0x138;
    }

    namespace DebuggerBreakpoint {
        inline constexpr uintptr_t Condition = 0x100;
        inline constexpr uintptr_t ContinueExecution = 0x108;
        inline constexpr uintptr_t IsEnabled = 0x110;
        inline constexpr uintptr_t Line = 0x118;
        inline constexpr uintptr_t LogExpression = 0x120;
        inline constexpr uintptr_t isContextDependentBreakpoint = 0x128;
        inline constexpr uintptr_t line = 0x130;
    }

    namespace DebuggerManager {
        inline constexpr uintptr_t AddDebugger = 0x100;
        inline constexpr uintptr_t DebuggerAdded = 0x140;
        inline constexpr uintptr_t DebuggerRemoved = 0x148;
        inline constexpr uintptr_t DebuggingEnabled = 0x138;
        inline constexpr uintptr_t EnableDebugging = 0x108;
        inline constexpr uintptr_t GetDebuggers = 0x110;
        inline constexpr uintptr_t Resume = 0x118;
        inline constexpr uintptr_t StepIn = 0x120;
        inline constexpr uintptr_t StepOut = 0x128;
        inline constexpr uintptr_t StepOver = 0x130;
    }

    namespace DebuggerWatch {
        inline constexpr uintptr_t DebuggerManager = 0x108;
        inline constexpr uintptr_t Expression = 0x100;
    }

    namespace Dec {
        inline constexpr uintptr_t False = 0x118;
        inline constexpr uintptr_t January = 0x100;
        inline constexpr uintptr_t Monday = 0x108;
        inline constexpr uintptr_t Sun = 0x110;
    }

    namespace Decal {
        inline constexpr uintptr_t AutoLocalize = 0x100;
        inline constexpr uintptr_t Cloud = 0x1d8;
        inline constexpr uintptr_t Color3 = 0x108;
        inline constexpr uintptr_t ColorMap = 0x110;
        inline constexpr uintptr_t ColorMapContent = 0x118;
        inline constexpr uintptr_t EmissiveMaskContent = 0x120;
        inline constexpr uintptr_t EmissiveStrength = 0x128;
        inline constexpr uintptr_t EmissiveTint = 0x130;
        inline constexpr uintptr_t LocalTransparencyModifier = 0x138;
        inline constexpr uintptr_t LocalizedTextureContent = 0x140;
        inline constexpr uintptr_t MetalnessMap = 0x148;
        inline constexpr uintptr_t MetalnessMapContent = 0x150;
        inline constexpr uintptr_t NormalMap = 0x158;
        inline constexpr uintptr_t NormalMapContent = 0x160;
        inline constexpr uintptr_t Rotation = 0x168;
        inline constexpr uintptr_t RoughnessMap = 0x170;
        inline constexpr uintptr_t RoughnessMapContent = 0x178;
        inline constexpr uintptr_t Shiny = 0x180;
        inline constexpr uintptr_t Specular = 0x188;
        inline constexpr uintptr_t Texture = 0x190;
        inline constexpr uintptr_t TextureContent = 0x198;
        inline constexpr uintptr_t TexturePack = 0x1a0;
        inline constexpr uintptr_t TexturePackContent = 0x1a8;
        inline constexpr uintptr_t TexturePackMetadata = 0x1b0;
        inline constexpr uintptr_t Transparency = 0x1b8;
        inline constexpr uintptr_t UVOffset = 0x1c0;
        inline constexpr uintptr_t UVScale = 0x1c8;
        inline constexpr uintptr_t ZIndex = 0x1d0;
    }

    namespace DecayTime {
        inline constexpr uintptr_t AudioReverb = 0x100;
        inline constexpr uintptr_t ReverbSoundEffect = 0x108;
    }

    namespace December {
        inline constexpr uintptr_t AM = 0x100;
        inline constexpr uintptr_t Sun = 0x108;
    }

    namespace DedupDrop {
        inline constexpr uintptr_t Coalesced = 0x100;
    }

    namespace Default {
        inline constexpr uintptr_t Render = 0x118;
        inline constexpr uintptr_t ServerStorage = 0x110;
        inline constexpr uintptr_t Teammate = 0x100;
        inline constexpr uintptr_t TestService = 0x108;
    }

    namespace DeferredAssetManagerService {
        inline constexpr uintptr_t CancelPrefetch = 0x100;
        inline constexpr uintptr_t GetPrefetchDownloadStatus = 0x108;
        inline constexpr uintptr_t JoiningPlaceId = 0x110;
        inline constexpr uintptr_t JoiningUniverseId = 0x118;
        inline constexpr uintptr_t PrefetchDownloadStatusChanged = 0x128;
        inline constexpr uintptr_t PregameLoadingScreenOnly = 0x120;
    }

    namespace Density {
        inline constexpr uintptr_t Atmosphere = 0x100;
        inline constexpr uintptr_t AudioReverb = 0x108;
        inline constexpr uintptr_t Clouds = 0x110;
        inline constexpr uintptr_t ReverbSoundEffect = 0x118;
    }

    namespace DeprecatedEventIngestStat {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace DeprecatedGAArgsStat {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace DeprecatedGAUserTimingStat {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Depth {
        inline constexpr uintptr_t AudioChorus = 0x100;
        inline constexpr uintptr_t AudioFlanger = 0x108;
        inline constexpr uintptr_t AudioTremolo = 0x110;
        inline constexpr uintptr_t ChorusSoundEffect = 0x118;
        inline constexpr uintptr_t FlangeSoundEffect = 0x120;
        inline constexpr uintptr_t TremoloSoundEffect = 0x128;
    }

    namespace DepthOfFieldEffect {
        inline constexpr uintptr_t Enabled = 0xa0;
        inline constexpr uintptr_t FarIntensity = 0xa8;
        inline constexpr uintptr_t FocusDistance = 0xac;
        inline constexpr uintptr_t InFocusRadius = 0xb0;
        inline constexpr uintptr_t NearIntensity = 0xb4;
    }

    namespace Description {
        inline constexpr uintptr_t FunctionalTest = 0x100;
        inline constexpr uintptr_t RenderingTest = 0x108;
        inline constexpr uintptr_t TestService = 0x110;
    }

    namespace Descriptor {
        inline constexpr uintptr_t Name = 0x8;
    }

    namespace DesignFoundationsService {
        inline constexpr uintptr_t ClearTokens = 0x100;
        inline constexpr uintptr_t SetTokens = 0x108;
    }

    namespace Destroy {
        inline constexpr uintptr_t EditableImage = 0x100;
        inline constexpr uintptr_t EditableMesh = 0x108;
        inline constexpr uintptr_t Instance = 0x110;
    }

    namespace DeveloperVideoCaptureInitiated {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace DeviceD3D11Gfx {
        inline constexpr uintptr_t ContextObj = 0x188;
        inline constexpr uintptr_t ContextPtr = 0x170;
        inline constexpr uintptr_t DevicePtr = 0x80;
        inline constexpr uintptr_t SwapChainPtr = 0x178;
        inline constexpr uintptr_t VTableRva = 0x6cf09b0;
    }

    namespace DeviceDisplayService {
        inline constexpr uintptr_t AcquireWakeLock = 0x100;
    }

    namespace DeviceIdService {
        inline constexpr uintptr_t Debris = 0x108;
        inline constexpr uintptr_t GetDeviceId = 0x100;
    }

    namespace Dialog {
        inline constexpr uintptr_t BehaviorType = 0x120;
        inline constexpr uintptr_t ConversationDistance = 0x128;
        inline constexpr uintptr_t DialogChoice = 0x178;
        inline constexpr uintptr_t DialogChoiceSelected = 0x170;
        inline constexpr uintptr_t GetCurrentPlayers = 0x100;
        inline constexpr uintptr_t GoodbyeChoiceActive = 0x130;
        inline constexpr uintptr_t GoodbyeDialog = 0x138;
        inline constexpr uintptr_t InUse = 0x140;
        inline constexpr uintptr_t InitialPrompt = 0x148;
        inline constexpr uintptr_t Purpose = 0x150;
        inline constexpr uintptr_t SetGuiObject = 0x108;
        inline constexpr uintptr_t SetPlayerIsUsing = 0x110;
        inline constexpr uintptr_t SignalDialogChoiceSelected = 0x118;
        inline constexpr uintptr_t Tone = 0x158;
        inline constexpr uintptr_t TriggerDistance = 0x160;
        inline constexpr uintptr_t TriggerOffset = 0x168;
    }

    namespace DialogChoice {
        inline constexpr uintptr_t DeviceIdService = 0x120;
        inline constexpr uintptr_t GoodbyeChoiceActive = 0x100;
        inline constexpr uintptr_t GoodbyeDialog = 0x108;
        inline constexpr uintptr_t ResponseDialog = 0x110;
        inline constexpr uintptr_t UserDialog = 0x118;
    }

    namespace DictationEnabled {
        inline constexpr uintptr_t AudioDeviceInput = 0x100;
        inline constexpr uintptr_t AudioSpeechToText = 0x108;
    }

    namespace DidLoop {
        inline constexpr uintptr_t AnimationTrack = 0x100;
        inline constexpr uintptr_t Sound = 0x108;
        inline constexpr uintptr_t VideoFrame = 0x110;
        inline constexpr uintptr_t VideoPlayer = 0x118;
    }

    namespace DiffractionEnabled {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioListener = 0x108;
        inline constexpr uintptr_t SoundService = 0x110;
    }

    namespace Diffusion {
        inline constexpr uintptr_t AudioReverb = 0x100;
        inline constexpr uintptr_t ReverbSoundEffect = 0x108;
    }

    namespace DigitsRigDescription {
        inline constexpr uintptr_t GetFingerControl = 0x100;
        inline constexpr uintptr_t GetFingerTip = 0x108;
        inline constexpr uintptr_t GetJoint = 0x110;
        inline constexpr uintptr_t GetJointLabels = 0x118;
        inline constexpr uintptr_t GetTposeAdjustment = 0x120;
        inline constexpr uintptr_t Index1 = 0x148;
        inline constexpr uintptr_t Index1TposeAdjustment = 0x150;
        inline constexpr uintptr_t Index2 = 0x158;
        inline constexpr uintptr_t Index2TposeAdjustment = 0x160;
        inline constexpr uintptr_t Index3 = 0x168;
        inline constexpr uintptr_t Index3TposeAdjustment = 0x170;
        inline constexpr uintptr_t IndexRange = 0x178;
        inline constexpr uintptr_t IndexSize = 0x180;
        inline constexpr uintptr_t Middle1 = 0x188;
        inline constexpr uintptr_t Middle1TposeAdjustment = 0x190;
        inline constexpr uintptr_t Middle2 = 0x198;
        inline constexpr uintptr_t Middle2TposeAdjustment = 0x1a0;
        inline constexpr uintptr_t Middle3 = 0x1a8;
        inline constexpr uintptr_t Middle3TposeAdjustment = 0x1b0;
        inline constexpr uintptr_t MiddleRange = 0x1b8;
        inline constexpr uintptr_t MiddleSize = 0x1c0;
        inline constexpr uintptr_t Pinky1 = 0x1c8;
        inline constexpr uintptr_t Pinky1TposeAdjustment = 0x1d0;
        inline constexpr uintptr_t Pinky2 = 0x1d8;
        inline constexpr uintptr_t Pinky2TposeAdjustment = 0x1e0;
        inline constexpr uintptr_t Pinky3 = 0x1e8;
        inline constexpr uintptr_t Pinky3TposeAdjustment = 0x1f0;
        inline constexpr uintptr_t PinkyRange = 0x1f8;
        inline constexpr uintptr_t PinkySize = 0x200;
        inline constexpr uintptr_t Ring1 = 0x208;
        inline constexpr uintptr_t Ring1TposeAdjustment = 0x210;
        inline constexpr uintptr_t Ring2 = 0x218;
        inline constexpr uintptr_t Ring2TposeAdjustment = 0x220;
        inline constexpr uintptr_t Ring3 = 0x228;
        inline constexpr uintptr_t Ring3TposeAdjustment = 0x230;
        inline constexpr uintptr_t RingRange = 0x238;
        inline constexpr uintptr_t RingSize = 0x240;
        inline constexpr uintptr_t SetFingerControl = 0x128;
        inline constexpr uintptr_t SetFingerTip = 0x130;
        inline constexpr uintptr_t SetJoint = 0x138;
        inline constexpr uintptr_t SetTposeAdjustment = 0x140;
        inline constexpr uintptr_t Side = 0x248;
        inline constexpr uintptr_t Thumb1 = 0x250;
        inline constexpr uintptr_t Thumb1TposeAdjustment = 0x258;
        inline constexpr uintptr_t Thumb2 = 0x260;
        inline constexpr uintptr_t Thumb2TposeAdjustment = 0x268;
        inline constexpr uintptr_t Thumb3 = 0x270;
        inline constexpr uintptr_t Thumb3TposeAdjustment = 0x278;
        inline constexpr uintptr_t ThumbRange = 0x280;
        inline constexpr uintptr_t ThumbSize = 0x288;
    }

    namespace Disabled {
        inline constexpr uintptr_t BaseScript = 0x100;
        inline constexpr uintptr_t Seat = 0x108;
        inline constexpr uintptr_t VehicleSeat = 0x110;
    }

    namespace Disconnect {
        inline constexpr uintptr_t MemStorageService = 0x100;
        inline constexpr uintptr_t MessageBusService = 0x108;
        inline constexpr uintptr_t RealtimeMedia = 0x110;
    }

    namespace DiskUsage {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace DiskUsageNegativeExperimentTelemetry {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace DisplayName {
        inline constexpr uintptr_t Humanoid = 0x100;
        inline constexpr uintptr_t InputAction = 0x108;
        inline constexpr uintptr_t InputBinding = 0x110;
        inline constexpr uintptr_t Player = 0x118;
        inline constexpr uintptr_t StringValue = 0x120;
        inline constexpr uintptr_t TextSource = 0x128;
    }

    namespace DistanceAttenuation {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioListener = 0x108;
    }

    namespace DistortionSoundEffect {
        inline constexpr uintptr_t Level = 0x100;
    }

    namespace DockWidgetPluginGui {
        inline constexpr uintptr_t HostWidgetWasRestored = 0x108;
        inline constexpr uintptr_t RequestRaise = 0x100;
    }

    namespace DoubleConstrainedValue {
        inline constexpr uintptr_t Changed = 0x128;
        inline constexpr uintptr_t ConstrainedValue = 0x100;
        inline constexpr uintptr_t MaxValue = 0x108;
        inline constexpr uintptr_t MinValue = 0x110;
        inline constexpr uintptr_t Value = 0x118;
        inline constexpr uintptr_t changed = 0x130;
        inline constexpr uintptr_t value = 0x120;
    }

    namespace DragDetector {
        inline constexpr uintptr_t ActivatedCursorIcon = 0x1b0;
        inline constexpr uintptr_t ActivatedCursorIconContent = 0x130;
        inline constexpr uintptr_t AddConstraintFunction = 0x100;
        inline constexpr uintptr_t ApplyAtCenterOfMass = 0x138;
        inline constexpr uintptr_t Axis = 0x140;
        inline constexpr uintptr_t CursorIcon = 0xb8;
        inline constexpr uintptr_t DragContinue = 0x220;
        inline constexpr uintptr_t DragContinueReplicate = 0x228;
        inline constexpr uintptr_t DragEnd = 0x230;
        inline constexpr uintptr_t DragEndReplicate = 0x238;
        inline constexpr uintptr_t DragFrame = 0x148;
        inline constexpr uintptr_t DragStart = 0x240;
        inline constexpr uintptr_t DragStartReplicate = 0x248;
        inline constexpr uintptr_t DragStyle = 0x150;
        inline constexpr uintptr_t Enabled = 0x158;
        inline constexpr uintptr_t GamepadModeSwitchKeyCode = 0x160;
        inline constexpr uintptr_t GetReferenceFrame = 0x108;
        inline constexpr uintptr_t KeyboardModeSwitchKeyCode = 0x168;
        inline constexpr uintptr_t MaxActivationDistance = 0xd8;
        inline constexpr uintptr_t MaxDragAngle = 0x298;
        inline constexpr uintptr_t MaxDragTranslation = 0x25c;
        inline constexpr uintptr_t MaxForce = 0x29c;
        inline constexpr uintptr_t MaxTorque = 0x2a0;
        inline constexpr uintptr_t MinDragAngle = 0x2a4;
        inline constexpr uintptr_t MinDragTranslation = 0x268;
        inline constexpr uintptr_t Orientation = 0x1a0;
        inline constexpr uintptr_t PermissionPolicy = 0x1a8;
        inline constexpr uintptr_t PhysicalDragClickedPart = 0x1b0;
        inline constexpr uintptr_t PhysicalDragHitPoint = 0x1b8;
        inline constexpr uintptr_t PhysicalDragIsInVR = 0x1c0;
        inline constexpr uintptr_t PhysicalDragTargetFrame = 0x1c8;
        inline constexpr uintptr_t ReferenceInstance = 0x1e0;
        inline constexpr uintptr_t ResponseStyle = 0x1d8;
        inline constexpr uintptr_t Responsiveness = 0x2b0;
        inline constexpr uintptr_t RestartDrag = 0x110;
        inline constexpr uintptr_t RestartPhysicalDragReplicate = 0x250;
        inline constexpr uintptr_t RunLocally = 0x1e8;
        inline constexpr uintptr_t SecondaryAxis = 0x1f0;
        inline constexpr uintptr_t SetDragStyleFunction = 0x118;
        inline constexpr uintptr_t SetPermissionPolicyFunction = 0x120;
        inline constexpr uintptr_t TrackballRadialPullFactor = 0x1f8;
        inline constexpr uintptr_t TrackballRollFactor = 0x200;
        inline constexpr uintptr_t VRSwitchKeyCode = 0x208;
        inline constexpr uintptr_t WorldAxis = 0x210;
        inline constexpr uintptr_t WorldSecondaryAxis = 0x218;
    }

    namespace Dragger {
        inline constexpr uintptr_t AdvancedDragger = 0x120;
        inline constexpr uintptr_t AxisRotate = 0x100;
        inline constexpr uintptr_t MouseDown = 0x108;
        inline constexpr uintptr_t MouseMove = 0x110;
        inline constexpr uintptr_t MouseUp = 0x118;
    }

    namespace DrawBufferAsync {
        inline constexpr uintptr_t Terrain = 0x100;
        inline constexpr uintptr_t VoxelBuffer = 0x108;
    }

    namespace DryLevel {
        inline constexpr uintptr_t AudioEcho = 0x100;
        inline constexpr uintptr_t AudioReverb = 0x108;
        inline constexpr uintptr_t EchoSoundEffect = 0x110;
        inline constexpr uintptr_t ReverbSoundEffect = 0x118;
    }

    namespace Dump {
        inline constexpr uintptr_t AnimationRigData = 0x100;
        inline constexpr uintptr_t VirtualInputManager = 0x108;
    }

    namespace Duration {
        inline constexpr uintptr_t AnimatedImageTrack = 0x100;
        inline constexpr uintptr_t SpawnLocation = 0x108;
    }

    namespace Duty {
        inline constexpr uintptr_t AudioTremolo = 0x100;
        inline constexpr uintptr_t TremoloSoundEffect = 0x108;
    }

    namespace DynamicRotate {
        inline constexpr uintptr_t BaseAngle = 0x100;
    }

    namespace ERROR {
        inline constexpr uintptr_t ASSERT = 0x128;
        inline constexpr uintptr_t CRITICAL = 0x120;
        inline constexpr uintptr_t ERROR_REPORT = 0x100;
        inline constexpr uintptr_t WARNING = 0x130;
        inline constexpr uintptr_t double = 0x118;
        inline constexpr uintptr_t int32 = 0x108;
        inline constexpr uintptr_t optional = 0x110;
    }

    namespace EchoSoundEffect {
        inline constexpr uintptr_t Delay = 0x100;
        inline constexpr uintptr_t DryLevel = 0x108;
        inline constexpr uintptr_t Feedback = 0x110;
        inline constexpr uintptr_t WetLevel = 0x118;
    }

    namespace EditableImage {
        inline constexpr uintptr_t Destroy = 0x100;
        inline constexpr uintptr_t DrawCircle = 0x108;
        inline constexpr uintptr_t DrawImage = 0x110;
        inline constexpr uintptr_t DrawImageProjected = 0x118;
        inline constexpr uintptr_t DrawImageTransformed = 0x120;
        inline constexpr uintptr_t DrawLine = 0x128;
        inline constexpr uintptr_t DrawRectangle = 0x130;
        inline constexpr uintptr_t DrawTriangle = 0x138;
        inline constexpr uintptr_t ImageData = 0x158;
        inline constexpr uintptr_t ImageHolder = 0x160;
        inline constexpr uintptr_t IsReplicatedCopy = 0x168;
        inline constexpr uintptr_t ReadPixelsBuffer = 0x140;
        inline constexpr uintptr_t SampleImageProjected = 0x148;
        inline constexpr uintptr_t Size = 0x170;
        inline constexpr uintptr_t WritePixelsBuffer = 0x150;
    }

    namespace EditableMesh {
        inline constexpr uintptr_t AddBone = 0x100;
        inline constexpr uintptr_t AddColor = 0x108;
        inline constexpr uintptr_t AddFace = 0x110;
        inline constexpr uintptr_t AddNormal = 0x118;
        inline constexpr uintptr_t AddTriangle = 0x120;
        inline constexpr uintptr_t AddUV = 0x128;
        inline constexpr uintptr_t AddVertex = 0x130;
        inline constexpr uintptr_t BatchAdd = 0x138;
        inline constexpr uintptr_t BatchGetFaceAttributes = 0x140;
        inline constexpr uintptr_t BatchGetValues = 0x148;
        inline constexpr uintptr_t BatchGetVertexAttributes = 0x150;
        inline constexpr uintptr_t BatchGetVertexFaceAttributes = 0x158;
        inline constexpr uintptr_t BatchRemove = 0x160;
        inline constexpr uintptr_t BatchSetFaceAttributes = 0x168;
        inline constexpr uintptr_t BatchSetValues = 0x170;
        inline constexpr uintptr_t BatchSetVertexFaceAttributes = 0x178;
        inline constexpr uintptr_t Clear = 0x180;
        inline constexpr uintptr_t Destroy = 0x188;
        inline constexpr uintptr_t EditableMeshDataHolder = 0x3f8;
        inline constexpr uintptr_t FindClosestPointOnSurface = 0x190;
        inline constexpr uintptr_t FindClosestVertex = 0x198;
        inline constexpr uintptr_t FindVerticesWithinSphere = 0x1a0;
        inline constexpr uintptr_t FixedSize = 0x400;
        inline constexpr uintptr_t GetAdjacentFaces = 0x1a8;
        inline constexpr uintptr_t GetAdjacentVertices = 0x1b0;
        inline constexpr uintptr_t GetBoneByName = 0x1b8;
        inline constexpr uintptr_t GetBoneCFrame = 0x1c0;
        inline constexpr uintptr_t GetBoneIsVirtual = 0x1c8;
        inline constexpr uintptr_t GetBoneName = 0x1d0;
        inline constexpr uintptr_t GetBoneParent = 0x1d8;
        inline constexpr uintptr_t GetBones = 0x1e0;
        inline constexpr uintptr_t GetCenter = 0x1e8;
        inline constexpr uintptr_t GetColor = 0x1f0;
        inline constexpr uintptr_t GetColorAlpha = 0x1f8;
        inline constexpr uintptr_t GetColors = 0x200;
        inline constexpr uintptr_t GetFaceColors = 0x208;
        inline constexpr uintptr_t GetFaceNormals = 0x210;
        inline constexpr uintptr_t GetFaceUVs = 0x218;
        inline constexpr uintptr_t GetFaceVertices = 0x220;
        inline constexpr uintptr_t GetFaces = 0x228;
        inline constexpr uintptr_t GetFacesWithAttribute = 0x230;
        inline constexpr uintptr_t GetFacesWithColor = 0x238;
        inline constexpr uintptr_t GetFacesWithNormal = 0x240;
        inline constexpr uintptr_t GetFacesWithUV = 0x248;
        inline constexpr uintptr_t GetFacsCorrectivePose = 0x250;
        inline constexpr uintptr_t GetFacsCorrectivePoses = 0x258;
        inline constexpr uintptr_t GetFacsPose = 0x260;
        inline constexpr uintptr_t GetFacsPoses = 0x268;
        inline constexpr uintptr_t GetNormal = 0x270;
        inline constexpr uintptr_t GetNormals = 0x278;
        inline constexpr uintptr_t GetPosition = 0x280;
        inline constexpr uintptr_t GetSize = 0x288;
        inline constexpr uintptr_t GetUV = 0x290;
        inline constexpr uintptr_t GetUVs = 0x298;
        inline constexpr uintptr_t GetVertexBoneWeights = 0x2a0;
        inline constexpr uintptr_t GetVertexBones = 0x2a8;
        inline constexpr uintptr_t GetVertexColors = 0x2b0;
        inline constexpr uintptr_t GetVertexFaceColor = 0x2b8;
        inline constexpr uintptr_t GetVertexFaceNormal = 0x2c0;
        inline constexpr uintptr_t GetVertexFaceUV = 0x2c8;
        inline constexpr uintptr_t GetVertexFaces = 0x2d0;
        inline constexpr uintptr_t GetVertexNormals = 0x2d8;
        inline constexpr uintptr_t GetVertexUVs = 0x2e0;
        inline constexpr uintptr_t GetVertices = 0x2e8;
        inline constexpr uintptr_t GetVerticesWithAttribute = 0x2f0;
        inline constexpr uintptr_t GetVerticesWithColor = 0x2f8;
        inline constexpr uintptr_t GetVerticesWithNormal = 0x300;
        inline constexpr uintptr_t GetVerticesWithUV = 0x308;
        inline constexpr uintptr_t IdDebugString = 0x310;
        inline constexpr uintptr_t IsReplicatedCopy = 0x408;
        inline constexpr uintptr_t MergeVertices = 0x318;
        inline constexpr uintptr_t MeshData = 0x410;
        inline constexpr uintptr_t RaycastLocal = 0x320;
        inline constexpr uintptr_t RemoveBone = 0x328;
        inline constexpr uintptr_t RemoveFace = 0x330;
        inline constexpr uintptr_t RemoveUnused = 0x338;
        inline constexpr uintptr_t ResetNormal = 0x340;
        inline constexpr uintptr_t SetBoneCFrame = 0x348;
        inline constexpr uintptr_t SetBoneIsVirtual = 0x350;
        inline constexpr uintptr_t SetBoneName = 0x358;
        inline constexpr uintptr_t SetBoneParent = 0x360;
        inline constexpr uintptr_t SetColor = 0x368;
        inline constexpr uintptr_t SetColorAlpha = 0x370;
        inline constexpr uintptr_t SetFaceColors = 0x378;
        inline constexpr uintptr_t SetFaceNormals = 0x380;
        inline constexpr uintptr_t SetFaceUVs = 0x388;
        inline constexpr uintptr_t SetFaceVertices = 0x390;
        inline constexpr uintptr_t SetFacsBonePose = 0x398;
        inline constexpr uintptr_t SetFacsCorrectivePose = 0x3a0;
        inline constexpr uintptr_t SetFacsPose = 0x3a8;
        inline constexpr uintptr_t SetNormal = 0x3b0;
        inline constexpr uintptr_t SetPosition = 0x3b8;
        inline constexpr uintptr_t SetUV = 0x3c0;
        inline constexpr uintptr_t SetVertexBoneWeights = 0x3c8;
        inline constexpr uintptr_t SetVertexBones = 0x3d0;
        inline constexpr uintptr_t SetVertexFaceColor = 0x3d8;
        inline constexpr uintptr_t SetVertexFaceNormal = 0x3e0;
        inline constexpr uintptr_t SetVertexFaceUV = 0x3e8;
        inline constexpr uintptr_t Triangulate = 0x3f0;
    }

    namespace EditableMeshPublishAttemptCounter {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace EditableMeshUnpublishFailedCounter2 {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace EditablePermissionCheckError {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace EditableService {
        inline constexpr uintptr_t EditableStatus = 0x100;
    }

    namespace Editor {
        inline constexpr uintptr_t AudioCompressor = 0x100;
        inline constexpr uintptr_t AudioEqualizer = 0x108;
        inline constexpr uintptr_t AudioFilter = 0x110;
        inline constexpr uintptr_t AudioLimiter = 0x118;
    }

    namespace EmissiveMaskContent {
        inline constexpr uintptr_t Decal = 0x100;
        inline constexpr uintptr_t MaterialVariant = 0x108;
        inline constexpr uintptr_t SurfaceAppearance = 0x110;
        inline constexpr uintptr_t TerrainDetail = 0x118;
    }

    namespace EmissiveStrength {
        inline constexpr uintptr_t Decal = 0x100;
        inline constexpr uintptr_t MaterialVariant = 0x108;
        inline constexpr uintptr_t SurfaceAppearance = 0x110;
        inline constexpr uintptr_t TerrainDetail = 0x118;
    }

    namespace EmissiveTint {
        inline constexpr uintptr_t Decal = 0x100;
        inline constexpr uintptr_t MaterialVariant = 0x108;
        inline constexpr uintptr_t SurfaceAppearance = 0x110;
        inline constexpr uintptr_t TerrainDetail = 0x118;
    }

    namespace EnableSkinning {
        inline constexpr uintptr_t AnimationConstraint = 0x100;
        inline constexpr uintptr_t BallSocketConstraint = 0x108;
        inline constexpr uintptr_t Motor6D = 0x110;
        inline constexpr uintptr_t RobloxSerializableInstance = 0x118;
        inline constexpr uintptr_t WeldConstraint = 0x120;
    }

    namespace Enabled {
        inline constexpr uintptr_t AudioSpeechToText = 0x108;
        inline constexpr uintptr_t AudioWindSynthesizer = 0x110;
        inline constexpr uintptr_t BasePart = 0x118;
        inline constexpr uintptr_t BaseScript = 0x120;
        inline constexpr uintptr_t Beam = 0x128;
        inline constexpr uintptr_t BubbleChatConfiguration = 0x130;
        inline constexpr uintptr_t ChannelTabsConfiguration = 0x138;
        inline constexpr uintptr_t ChatInputBarConfiguration = 0x140;
        inline constexpr uintptr_t ChatWindowConfiguration = 0x148;
        inline constexpr uintptr_t Color3Value = 0x150;
        inline constexpr uintptr_t Constraint = 0x158;
        inline constexpr uintptr_t DragDetector = 0x160;
        inline constexpr uintptr_t Fire = 0x168;
        inline constexpr uintptr_t Highlight = 0x170;
        inline constexpr uintptr_t IKControl = 0x178;
        inline constexpr uintptr_t InputAction = 0x180;
        inline constexpr uintptr_t InputContext = 0x188;
        inline constexpr uintptr_t InternalSyncItem = 0x190;
        inline constexpr uintptr_t JointInstance = 0x198;
        inline constexpr uintptr_t LayerCollector = 0x1a0;
        inline constexpr uintptr_t Light = 0x1a8;
        inline constexpr uintptr_t NoCollisionConstraint = 0x1b0;
        inline constexpr uintptr_t ParticleEmitter = 0x1b8;
        inline constexpr uintptr_t PluginAction = 0x1c0;
        inline constexpr uintptr_t PluginToolbarButton = 0x1c8;
        inline constexpr uintptr_t ProceduralModel = 0x1d0;
        inline constexpr uintptr_t ProximityPrompt = 0x1d8;
        inline constexpr uintptr_t ProximityPromptService = 0x1e0;
        inline constexpr uintptr_t Smoke = 0x1e8;
        inline constexpr uintptr_t SoundEffect = 0x1f0;
        inline constexpr uintptr_t Sparkles = 0x1f8;
        inline constexpr uintptr_t SpawnLocation = 0x200;
        inline constexpr uintptr_t TestService = 0x208;
        inline constexpr uintptr_t TextChatCommand = 0x210;
        inline constexpr uintptr_t Tool = 0x218;
        inline constexpr uintptr_t Trail = 0x220;
        inline constexpr uintptr_t UIDragDetector = 0x228;
        inline constexpr uintptr_t UIGradient = 0x230;
        inline constexpr uintptr_t UIShadow = 0x238;
        inline constexpr uintptr_t UIStroke = 0x240;
        inline constexpr uintptr_t VisualizationMode = 0x248;
        inline constexpr uintptr_t VisualizationModeCategory = 0x250;
        inline constexpr uintptr_t WeldConstraint = 0x258;
        inline constexpr uintptr_t WrapLayer = 0x260;
        inline constexpr uintptr_t categories = 0x100;
    }

    namespace EncodingService {
        inline constexpr uintptr_t Base64Decode = 0x100;
        inline constexpr uintptr_t Base64Encode = 0x108;
        inline constexpr uintptr_t CompressBuffer = 0x110;
        inline constexpr uintptr_t ComputeBufferHash = 0x118;
        inline constexpr uintptr_t ComputeStringHash = 0x120;
        inline constexpr uintptr_t DecompressBuffer = 0x128;
        inline constexpr uintptr_t GetDecompressedBufferSize = 0x130;
    }

    namespace Ended {
        inline constexpr uintptr_t AnimationTrack = 0x100;
        inline constexpr uintptr_t AudioPlayer = 0x108;
        inline constexpr uintptr_t AudioTextToSpeech = 0x110;
        inline constexpr uintptr_t HeapProfilerService = 0x118;
        inline constexpr uintptr_t Sound = 0x120;
        inline constexpr uintptr_t VideoFrame = 0x128;
    }

    namespace EngineContextValidationFailure {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace EqualizerSoundEffect {
        inline constexpr uintptr_t HighGain = 0x100;
        inline constexpr uintptr_t LowGain = 0x108;
        inline constexpr uintptr_t MidGain = 0x110;
    }

    namespace Error {
        inline constexpr uintptr_t ConfigSnapshot = 0x120;
        inline constexpr uintptr_t FriendsCallingParticipant = 0x128;
        inline constexpr uintptr_t FunctionalTest = 0x100;
        inline constexpr uintptr_t LogService = 0x108;
        inline constexpr uintptr_t Logger = 0x110;
        inline constexpr uintptr_t PlayerDataRecord = 0x130;
        inline constexpr uintptr_t ScriptContext = 0x138;
        inline constexpr uintptr_t TestService = 0x118;
        inline constexpr uintptr_t VideoCaptureService = 0x140;
        inline constexpr uintptr_t WebStreamClient = 0x148;
    }

    namespace EulerRotationCurve {
        inline constexpr uintptr_t GetAnglesAtTime = 0x100;
        inline constexpr uintptr_t GetRotationAtTime = 0x108;
        inline constexpr uintptr_t RotationOrder = 0x128;
        inline constexpr uintptr_t X = 0x110;
        inline constexpr uintptr_t Y = 0x118;
        inline constexpr uintptr_t Z = 0x120;
    }

    namespace Evaluate {
        inline constexpr uintptr_t LuauExpression = 0x100;
        inline constexpr uintptr_t ScriptDebuggerService = 0x108;
    }

    namespace EventIngestService {
        inline constexpr uintptr_t SendEventDeferred = 0x100;
        inline constexpr uintptr_t SendEventImmediately = 0x108;
        inline constexpr uintptr_t SetRBXEvent = 0x110;
        inline constexpr uintptr_t SetRBXEventStream = 0x118;
    }

    namespace ExampleV2Service {
        inline constexpr uintptr_t OnPolo = 0x108;
        inline constexpr uintptr_t PrintHello = 0x100;
    }

    namespace ExperienceAuthService {
        inline constexpr uintptr_t OpenAuthPrompt = 0x108;
        inline constexpr uintptr_t ScopeCheckResult = 0x110;
        inline constexpr uintptr_t ScopeCheckUIComplete = 0x100;
    }

    namespace ExperienceInviteOptions {
        inline constexpr uintptr_t InviteMessageId = 0x100;
        inline constexpr uintptr_t InviteUser = 0x108;
        inline constexpr uintptr_t LaunchData = 0x110;
        inline constexpr uintptr_t PromptMessage = 0x118;
    }

    namespace ExperienceNotificationService {
        inline constexpr uintptr_t CanPromptOptInAsync = 0x100;
        inline constexpr uintptr_t InvokeOptInPromptClosed = 0x108;
        inline constexpr uintptr_t OptInPromptClosed = 0x118;
        inline constexpr uintptr_t PromptOptIn = 0x110;
        inline constexpr uintptr_t PromptOptInRequested = 0x120;
    }

    namespace ExperienceService {
        inline constexpr uintptr_t ConsumePendingExperienceLeaveWithReason = 0x100;
        inline constexpr uintptr_t ExecuteCrossExperienceCall = 0x108;
        inline constexpr uintptr_t GetFollowUserId = 0x110;
        inline constexpr uintptr_t GetPendingJoinAttempt = 0x118;
        inline constexpr uintptr_t GetPlaceJoinState = 0x120;
        inline constexpr uintptr_t GetQueuePosition = 0x128;
        inline constexpr uintptr_t LaunchExperience = 0x130;
        inline constexpr uintptr_t LaunchExperienceFromSource = 0x138;
        inline constexpr uintptr_t LaunchExperienceFromSourceWithCallback = 0x140;
        inline constexpr uintptr_t LeaveExperienceWithReason = 0x148;
        inline constexpr uintptr_t OnCrossExperienceStarted = 0x170;
        inline constexpr uintptr_t OnCrossExperienceStopped = 0x178;
        inline constexpr uintptr_t OnNewJoinAttempt = 0x180;
        inline constexpr uintptr_t PlaceJoinStateChanged = 0x188;
        inline constexpr uintptr_t QueuePositionChanged = 0x190;
        inline constexpr uintptr_t RegisterForExperienceJoin = 0x150;
        inline constexpr uintptr_t RegisterForExperienceLeave = 0x158;
        inline constexpr uintptr_t StartCrossExperience = 0x160;
        inline constexpr uintptr_t StopCrossExperience = 0x168;
    }

    namespace ExperienceStateCaptureService {
        inline constexpr uintptr_t CanEnterCaptureMode = 0x100;
        inline constexpr uintptr_t HiddenSelectionEnabled = 0x118;
        inline constexpr uintptr_t IsInBackground = 0x120;
        inline constexpr uintptr_t IsInCaptureMode = 0x128;
        inline constexpr uintptr_t ItemSelectedInCaptureMode = 0x138;
        inline constexpr uintptr_t ResetHighlight = 0x108;
        inline constexpr uintptr_t SelectionMode = 0x130;
        inline constexpr uintptr_t ToggleCaptureMode = 0x110;
    }

    namespace ExperienceStateRecordingService {
        inline constexpr uintptr_t ExitPlayback = 0x108;
        inline constexpr uintptr_t GetCurrentPlaybackRestartFrames = 0x110;
        inline constexpr uintptr_t GetPlaybackCurrentFrame = 0x118;
        inline constexpr uintptr_t GetPlaybackMode = 0x120;
        inline constexpr uintptr_t IsServerDataModelRecorderActive = 0x140;
        inline constexpr uintptr_t LoadPlaybackAsync = 0x100;
        inline constexpr uintptr_t PlaybackStatusUpdated = 0x148;
        inline constexpr uintptr_t SetPlaybackFrame = 0x128;
        inline constexpr uintptr_t SetPlaybackMode = 0x130;
        inline constexpr uintptr_t SetPlaybackPercentage = 0x138;
    }

    namespace Explosion {
        inline constexpr uintptr_t BlastPressure = 0x100;
        inline constexpr uintptr_t BlastRadius = 0x108;
        inline constexpr uintptr_t DestroyJointRadiusPercent = 0x110;
        inline constexpr uintptr_t ExplosionType = 0x118;
        inline constexpr uintptr_t Hit = 0x140;
        inline constexpr uintptr_t LocalTransparencyModifier = 0x120;
        inline constexpr uintptr_t Position = 0x128;
        inline constexpr uintptr_t TimeScale = 0x130;
        inline constexpr uintptr_t Visible = 0x138;
    }

    namespace ExportPlace {
        inline constexpr uintptr_t PluginManager = 0x100;
        inline constexpr uintptr_t PluginManagerInterface = 0x108;
    }

    namespace ExportSelection {
        inline constexpr uintptr_t PluginManagerInterface = 0x100;
        inline constexpr uintptr_t PluginMenu = 0x108;
    }

    namespace ExternalIdentityService {
        inline constexpr uintptr_t AcquireProofAsync = 0x100;
        inline constexpr uintptr_t CancelActiveOperation = 0x110;
        inline constexpr uintptr_t GetCapabilitiesAsync = 0x108;
    }

    namespace FFlag {
        inline constexpr uintptr_t RenderFastClusterOcclusionCulling = 0x862bc90;
    }

    namespace Face {
        inline constexpr uintptr_t FacialAnimationStreamingServiceV2 = 0x100;
        inline constexpr uintptr_t HumanoidDescription = 0x108;
        inline constexpr uintptr_t SpotLight = 0x110;
        inline constexpr uintptr_t SurfaceLight = 0x118;
        inline constexpr uintptr_t TerrainDetail = 0x120;
    }

    namespace FaceAnimatorService {
        inline constexpr uintptr_t AudioAnimationEnabled = 0x130;
        inline constexpr uintptr_t DefaultAvatarRules = 0x160;
        inline constexpr uintptr_t FaceTrackingStatusEnum = 0x138;
        inline constexpr uintptr_t FlipHeadOrientation = 0x140;
        inline constexpr uintptr_t GetTrackerLodController = 0x100;
        inline constexpr uintptr_t Init = 0x108;
        inline constexpr uintptr_t IsStarted = 0x110;
        inline constexpr uintptr_t Start = 0x118;
        inline constexpr uintptr_t Step = 0x120;
        inline constexpr uintptr_t Stop = 0x128;
        inline constexpr uintptr_t TrackerError = 0x150;
        inline constexpr uintptr_t TrackerPrompt = 0x158;
        inline constexpr uintptr_t VideoAnimationEnabled = 0x148;
    }

    namespace FaceCamera {
        inline constexpr uintptr_t Beam = 0x100;
        inline constexpr uintptr_t Trail = 0x108;
    }

    namespace FaceControls {
        inline constexpr uintptr_t ChinRaiser = 0x108;
        inline constexpr uintptr_t ChinRaiserUpperLip = 0x110;
        inline constexpr uintptr_t Corrugator = 0x118;
        inline constexpr uintptr_t EyesLookDown = 0x120;
        inline constexpr uintptr_t EyesLookLeft = 0x128;
        inline constexpr uintptr_t EyesLookRight = 0x130;
        inline constexpr uintptr_t EyesLookUp = 0x138;
        inline constexpr uintptr_t FlatPucker = 0x140;
        inline constexpr uintptr_t Funneler = 0x148;
        inline constexpr uintptr_t HasOverrideFACSData = 0x100;
        inline constexpr uintptr_t InternalFacsOverrideChanged = 0x2a0;
        inline constexpr uintptr_t InternalOverrideFACSData = 0x150;
        inline constexpr uintptr_t JawDrop = 0x158;
        inline constexpr uintptr_t JawLeft = 0x160;
        inline constexpr uintptr_t JawRight = 0x168;
        inline constexpr uintptr_t LeftBrowLowerer = 0x170;
        inline constexpr uintptr_t LeftCheekPuff = 0x178;
        inline constexpr uintptr_t LeftCheekRaiser = 0x180;
        inline constexpr uintptr_t LeftDimpler = 0x188;
        inline constexpr uintptr_t LeftEyeClosed = 0x190;
        inline constexpr uintptr_t LeftEyeUpperLidRaiser = 0x198;
        inline constexpr uintptr_t LeftInnerBrowRaiser = 0x1a0;
        inline constexpr uintptr_t LeftLipCornerDown = 0x1a8;
        inline constexpr uintptr_t LeftLipCornerPuller = 0x1b0;
        inline constexpr uintptr_t LeftLipStretcher = 0x1b8;
        inline constexpr uintptr_t LeftLowerLipDepressor = 0x1c0;
        inline constexpr uintptr_t LeftNoseWrinkler = 0x1c8;
        inline constexpr uintptr_t LeftOuterBrowRaiser = 0x1d0;
        inline constexpr uintptr_t LeftUpperLipRaiser = 0x1d8;
        inline constexpr uintptr_t LipPresser = 0x1e0;
        inline constexpr uintptr_t LipsTogether = 0x1e8;
        inline constexpr uintptr_t LowerLipSuck = 0x1f0;
        inline constexpr uintptr_t MouthLeft = 0x1f8;
        inline constexpr uintptr_t MouthRight = 0x200;
        inline constexpr uintptr_t Pucker = 0x208;
        inline constexpr uintptr_t RightBrowLowerer = 0x210;
        inline constexpr uintptr_t RightCheekPuff = 0x218;
        inline constexpr uintptr_t RightCheekRaiser = 0x220;
        inline constexpr uintptr_t RightDimpler = 0x228;
        inline constexpr uintptr_t RightEyeClosed = 0x230;
        inline constexpr uintptr_t RightEyeUpperLidRaiser = 0x238;
        inline constexpr uintptr_t RightInnerBrowRaiser = 0x240;
        inline constexpr uintptr_t RightLipCornerDown = 0x248;
        inline constexpr uintptr_t RightLipCornerPuller = 0x250;
        inline constexpr uintptr_t RightLipStretcher = 0x258;
        inline constexpr uintptr_t RightLowerLipDepressor = 0x260;
        inline constexpr uintptr_t RightNoseWrinkler = 0x268;
        inline constexpr uintptr_t RightOuterBrowRaiser = 0x270;
        inline constexpr uintptr_t RightUpperLipRaiser = 0x278;
        inline constexpr uintptr_t TongueDown = 0x280;
        inline constexpr uintptr_t TongueOut = 0x288;
        inline constexpr uintptr_t TongueUp = 0x290;
        inline constexpr uintptr_t UpperLipSuck = 0x298;
    }

    namespace FaceInstance {
        inline constexpr uintptr_t Face = 0x100;
    }

    namespace FacialAgeEstimationService {
        inline constexpr uintptr_t InquiryAsync = 0x100;
        inline constexpr uintptr_t IsAvailable = 0x108;
    }

    namespace FacialAnimationStreamingServiceStats {
        inline constexpr uintptr_t Get = 0x100;
        inline constexpr uintptr_t GetWithPlayerId = 0x108;
    }

    namespace FacialAnimationStreamingServiceV2 {
        inline constexpr uintptr_t FacialAnimationStreamingServiceStats = 0x138;
        inline constexpr uintptr_t GetStats = 0x108;
        inline constexpr uintptr_t IsAudioEnabled = 0x110;
        inline constexpr uintptr_t IsPlaceEnabled = 0x118;
        inline constexpr uintptr_t IsServerEnabled = 0x120;
        inline constexpr uintptr_t IsVideoEnabled = 0x128;
        inline constexpr uintptr_t ResolveStateForUser = 0x100;
        inline constexpr uintptr_t ServiceState = 0x130;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t Pointer = 0x8ee1728;
        inline constexpr uintptr_t RealDataModel = 0x1f8;
    }

    namespace FastCluster {
        inline constexpr uintptr_t BindingSubobject = 0x90;
        inline constexpr uintptr_t EntityBegin = 0x48;
        inline constexpr uintptr_t EntityEnd = 0x50;
        inline constexpr uintptr_t VTableRva = 0x6d5bc50;
        inline constexpr uintptr_t VTableRvaSub = 0x6d5bc70;
    }

    namespace FastClusterBinding {
        inline constexpr uintptr_t Owner = 0x60;
        inline constexpr uintptr_t VTableRva = 0x6d5cd60;
    }

    namespace FastClusterEntity {
        inline constexpr uintptr_t AlphaByte = 0x14;
        inline constexpr uintptr_t BBoxMaxX = 0xa4;
        inline constexpr uintptr_t BBoxMaxY = 0xa8;
        inline constexpr uintptr_t BBoxMaxZ = 0xac;
        inline constexpr uintptr_t BBoxMinX = 0x98;
        inline constexpr uintptr_t BBoxMinY = 0x9c;
        inline constexpr uintptr_t BBoxMinZ = 0xa0;
        inline constexpr uintptr_t ContextPtr = 0x8;
        inline constexpr uintptr_t DecalMaterialPtr = 0x48;
        inline constexpr uintptr_t MaterialPtr = 0x20;
        inline constexpr uintptr_t PrimitiveIndexArrayPtr = 0x80;
        inline constexpr uintptr_t RenderQueueId = 0x10;
        inline constexpr uintptr_t TechniqueArrayPtr = 0x70;
        inline constexpr uintptr_t VTableRva = 0x6d5ce38;
    }

    namespace FastForward {
        inline constexpr uintptr_t FloatCurve = 0x100;
        inline constexpr uintptr_t PartyEmulatorService = 0x108;
        inline constexpr uintptr_t SmoothVoxelsUpgraderService = 0x110;
        inline constexpr uintptr_t StarterGui = 0x118;
    }

    namespace Feature {
        inline constexpr uintptr_t FaceId = 0x100;
        inline constexpr uintptr_t InOut = 0x108;
        inline constexpr uintptr_t LeftRight = 0x110;
        inline constexpr uintptr_t TopBottom = 0x118;
    }

    namespace FeatureRestrictionManager {
        inline constexpr uintptr_t FeatureTimeoutAttempt = 0x100;
        inline constexpr uintptr_t FeatureTimeoutRestored = 0x108;
        inline constexpr uintptr_t RefreshFeatureRestrictions = 0x110;
        inline constexpr uintptr_t ShowFeatureInterventionDetails = 0x118;
        inline constexpr uintptr_t ShowFeatureInterventionDetailsV2 = 0x120;
        inline constexpr uintptr_t TimeoutChatAttempt = 0x128;
        inline constexpr uintptr_t UpdateClientFeatureTimeout = 0x130;
        inline constexpr uintptr_t acknowledgeable = 0x138;
    }

    namespace Feedback {
        inline constexpr uintptr_t AudioEcho = 0x100;
        inline constexpr uintptr_t EchoSoundEffect = 0x108;
    }

    namespace FileManagerService {
        inline constexpr uintptr_t ListFilesInFolderAsync = 0x100;
        inline constexpr uintptr_t OpenFileInWebBrowser = 0x108;
        inline constexpr uintptr_t OpenFolder = 0x110;
        inline constexpr uintptr_t RevealFileInFolder = 0x118;
    }

    namespace FileMesh {
        inline constexpr uintptr_t MeshContent = 0x100;
        inline constexpr uintptr_t MeshId = 0x108;
        inline constexpr uintptr_t TextureContent = 0x110;
        inline constexpr uintptr_t TextureId = 0x118;
    }

    namespace FileMeshData {
        inline constexpr uintptr_t AABBMax = 0x18c;
        inline constexpr uintptr_t AABBMin = 0x180;
        inline constexpr uintptr_t AabbMax = 0x18c;
        inline constexpr uintptr_t AabbMin = 0x180;
        inline constexpr uintptr_t Faces = 0x30;
        inline constexpr uintptr_t FacesEnd = 0x38;
        inline constexpr uintptr_t Vertices = 0x0;
        inline constexpr uintptr_t VerticesEnd = 0x8;
    }

    namespace FilterStringAsync {
        inline constexpr uintptr_t Chat = 0x100;
        inline constexpr uintptr_t TextService = 0x108;
    }

    namespace FilteredText {
        inline constexpr uintptr_t FilteredAudio = 0x100;
        inline constexpr uintptr_t ModelServerError = 0x108;
    }

    namespace Fire {
        inline constexpr uintptr_t BodyPosition = 0x160;
        inline constexpr uintptr_t Color = 0x108;
        inline constexpr uintptr_t Enabled = 0x110;
        inline constexpr uintptr_t FastForward = 0x100;
        inline constexpr uintptr_t FireProximityPrompt = 0x31bd800;
        inline constexpr uintptr_t Heat = 0x118;
        inline constexpr uintptr_t InputAction = 0x168;
        inline constexpr uintptr_t InputContext = 0x170;
        inline constexpr uintptr_t LocalTransparencyModifier = 0x120;
        inline constexpr uintptr_t MemStorageService = 0x178;
        inline constexpr uintptr_t RocketPropulsion = 0x180;
        inline constexpr uintptr_t SecondaryColor = 0x128;
        inline constexpr uintptr_t Size = 0x130;
        inline constexpr uintptr_t TimeScale = 0x138;
        inline constexpr uintptr_t heat_xml = 0x140;
        inline constexpr uintptr_t size = 0x148;
        inline constexpr uintptr_t size_xml = 0x150;
    }

    namespace FireAllClients {
        inline constexpr uintptr_t RemoteEvent = 0x100;
        inline constexpr uintptr_t UnreliableRemoteEvent = 0x108;
    }

    namespace FireClient {
        inline constexpr uintptr_t RemoteEvent = 0x100;
        inline constexpr uintptr_t UnreliableRemoteEvent = 0x108;
    }

    namespace FireServer {
        inline constexpr uintptr_t RenderSettings = 0x100;
        inline constexpr uintptr_t UnvalidatedAssetService = 0x108;
    }

    namespace Flag {
        inline constexpr uintptr_t TeamColor = 0x100;
    }

    namespace FlagStand {
        inline constexpr uintptr_t BodyThrust = 0x110;
        inline constexpr uintptr_t FlagCaptured = 0x108;
        inline constexpr uintptr_t TeamColor = 0x100;
    }

    namespace FlangeSoundEffect {
        inline constexpr uintptr_t Depth = 0x100;
        inline constexpr uintptr_t Mix = 0x108;
        inline constexpr uintptr_t Rate = 0x110;
    }

    namespace FloatCurve {
        inline constexpr uintptr_t GetKeyAtIndex = 0x100;
        inline constexpr uintptr_t GetKeyIndicesAtTime = 0x108;
        inline constexpr uintptr_t GetKeys = 0x110;
        inline constexpr uintptr_t GetValueAtTime = 0x118;
        inline constexpr uintptr_t InsertKey = 0x120;
        inline constexpr uintptr_t Length = 0x138;
        inline constexpr uintptr_t RemoveKeyAtIndex = 0x128;
        inline constexpr uintptr_t SetKeys = 0x130;
        inline constexpr uintptr_t ValuesAndTimes = 0x140;
    }

    namespace FloorWire {
        inline constexpr uintptr_t CycleOffset = 0x100;
        inline constexpr uintptr_t FlagStandService = 0x140;
        inline constexpr uintptr_t From = 0x108;
        inline constexpr uintptr_t StudsBetweenTextures = 0x110;
        inline constexpr uintptr_t Texture = 0x118;
        inline constexpr uintptr_t TextureSize = 0x120;
        inline constexpr uintptr_t To = 0x128;
        inline constexpr uintptr_t Velocity = 0x130;
        inline constexpr uintptr_t WireRadius = 0x138;
    }

    namespace FluidForceSensor {
        inline constexpr uintptr_t CenterOfPressure = 0x108;
        inline constexpr uintptr_t EvaluateAsync = 0x100;
        inline constexpr uintptr_t Force = 0x110;
        inline constexpr uintptr_t Torque = 0x118;
    }

    namespace Folder {
        inline constexpr uintptr_t IconTint = 0x100;
        inline constexpr uintptr_t ReplicatedGuiInsertionOrder = 0x108;
    }

    namespace Font {
        inline constexpr uintptr_t BubbleChatConfiguration = 0x100;
        inline constexpr uintptr_t GetTextBoundsParams = 0x108;
        inline constexpr uintptr_t TextBox = 0x110;
        inline constexpr uintptr_t TextButton = 0x118;
        inline constexpr uintptr_t TextLabel = 0x120;
    }

    namespace FontFace {
        inline constexpr uintptr_t BubbleChatConfiguration = 0x100;
        inline constexpr uintptr_t BubbleChatMessageProperties = 0x108;
        inline constexpr uintptr_t ChannelTabsConfiguration = 0x110;
        inline constexpr uintptr_t ChatInputBarConfiguration = 0x118;
        inline constexpr uintptr_t ChatWindowConfiguration = 0x120;
        inline constexpr uintptr_t ChatWindowMessageProperties = 0x128;
        inline constexpr uintptr_t InputActionLabel = 0x130;
        inline constexpr uintptr_t TextBox = 0x138;
        inline constexpr uintptr_t TextButton = 0x140;
        inline constexpr uintptr_t TextChannelWindow = 0x148;
        inline constexpr uintptr_t TextLabel = 0x150;
    }

    namespace FontSize {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace Force {
        inline constexpr uintptr_t BodyForce = 0x100;
        inline constexpr uintptr_t BodyThrust = 0x108;
        inline constexpr uintptr_t FluidForceSensor = 0x110;
        inline constexpr uintptr_t VectorForce = 0x118;
    }

    namespace ForceField {
        inline constexpr uintptr_t Visible = 0x100;
    }

    namespace ForceLimitMode {
        inline constexpr uintptr_t AlignPosition = 0x100;
        inline constexpr uintptr_t LinearVelocity = 0x108;
    }

    namespace FormFactorPart {
        inline constexpr uintptr_t FormFactor = 0x100;
        inline constexpr uintptr_t formFactor = 0x108;
        inline constexpr uintptr_t formFactorRaw = 0x110;
    }

    namespace FormatContentIdResultCounter {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Frame {
        inline constexpr uintptr_t Style = 0x100;
    }

    namespace Frequency {
        inline constexpr uintptr_t AudioFilter = 0x100;
        inline constexpr uintptr_t AudioTremolo = 0x108;
        inline constexpr uintptr_t TriangleMeshPart = 0x110;
    }

    namespace Friction {
        inline constexpr uintptr_t BasePart = 0x100;
        inline constexpr uintptr_t GroundController = 0x108;
    }

    namespace FriendService {
        inline constexpr uintptr_t FriendsUpdated = 0x108;
        inline constexpr uintptr_t GetPlatformFriends = 0x100;
        inline constexpr uintptr_t RemoteFriendEventSignal = 0x110;
        inline constexpr uintptr_t RemoteFriendStatusSignal = 0x118;
    }

    namespace FriendsCallingInstance {
        inline constexpr uintptr_t CallId = 0x100;
        inline constexpr uintptr_t ConversationId = 0x108;
        inline constexpr uintptr_t EndReason = 0x110;
        inline constexpr uintptr_t InitiatorUserId = 0x118;
        inline constexpr uintptr_t IsDeafened = 0x120;
        inline constexpr uintptr_t Phase = 0x128;
        inline constexpr uintptr_t Volume = 0x130;
    }

    namespace FriendsCallingParticipant {
        inline constexpr uintptr_t Error = 0x100;
        inline constexpr uintptr_t IsLocalMuted = 0x108;
        inline constexpr uintptr_t IsSpeaking = 0x110;
        inline constexpr uintptr_t LeaveReason = 0x118;
        inline constexpr uintptr_t Status = 0x120;
        inline constexpr uintptr_t UserId = 0x128;
        inline constexpr uintptr_t Volume = 0x130;
    }

    namespace FunctionDescriptor {
        inline constexpr uintptr_t Function = 0x80;
    }

    namespace FunctionalTest {
        inline constexpr uintptr_t AllowSleep = 0x128;
        inline constexpr uintptr_t Description = 0x130;
        inline constexpr uintptr_t Error = 0x100;
        inline constexpr uintptr_t Failed = 0x108;
        inline constexpr uintptr_t HasMigratedSettingsToTestService = 0x138;
        inline constexpr uintptr_t Is30FpsThrottleEnabled = 0x140;
        inline constexpr uintptr_t Pass = 0x110;
        inline constexpr uintptr_t Passed = 0x118;
        inline constexpr uintptr_t PhysicsEnvironmentalThrottle = 0x148;
        inline constexpr uintptr_t Timeout = 0x150;
        inline constexpr uintptr_t Warn = 0x120;
    }

    namespace Functions {
        inline constexpr uintptr_t Clone = 0x156b000;
        inline constexpr uintptr_t Destroy = 0x156b020;
        inline constexpr uintptr_t FindPartOnRay = 0xdde010;
        inline constexpr uintptr_t FindPartOnRayWithIgnoreList = 0xdde090;
        inline constexpr uintptr_t FindPartOnRayWithWhitelist = 0xdde120;
        inline constexpr uintptr_t FireServer = 0xbb5f80;
        inline constexpr uintptr_t Print = 0x1cfa0d0;
        inline constexpr uintptr_t RaisePropertyChanged = 0xf84350;
        inline constexpr uintptr_t Raycast = 0xdd5640;
        inline constexpr uintptr_t SetParent = 0xdcfd00;
        inline constexpr uintptr_t SetParentInternal = 0x1d41210;
        inline constexpr uintptr_t SetParent_User = 0x1cd37f0;
        inline constexpr uintptr_t Shapecast = 0xdd7000;
    }

    namespace GamePassService {
        inline constexpr uintptr_t PlayerHasPass = 0x100;
    }

    namespace GameSettings {
        inline constexpr uintptr_t VideoCaptureEnabled = 0x100;
        inline constexpr uintptr_t VideoRecordingChangeRequest = 0x108;
    }

    namespace GamepadService {
        inline constexpr uintptr_t AutoSelectGui = 0x100;
        inline constexpr uintptr_t DisableGamepadCursor = 0x108;
        inline constexpr uintptr_t EnableGamepadCursor = 0x110;
        inline constexpr uintptr_t GamepadCursorEnabled = 0x128;
        inline constexpr uintptr_t GamepadThumbstick1Changed = 0x130;
        inline constexpr uintptr_t GetGamepadCursorPosition = 0x118;
        inline constexpr uintptr_t SetGamepadCursorPosition = 0x120;
    }

    namespace GenerateMomentTextAsync {
        inline constexpr uintptr_t CaptureService = 0x100;
        inline constexpr uintptr_t NotificationService = 0x108;
    }

    namespace GeneratedFolder {
        inline constexpr uintptr_t SetPrimaryPart = 0x100;
    }

    namespace GenerationService {
        inline constexpr uintptr_t ConnectAsync = 0x100;
        inline constexpr uintptr_t DisconnectAsync = 0x108;
        inline constexpr uintptr_t ExportInstanceToGlbAsync = 0x110;
        inline constexpr uintptr_t ExportMeshToGlbAsync = 0x118;
        inline constexpr uintptr_t GenerateMeshAsync = 0x120;
        inline constexpr uintptr_t GenerateModelAsync = 0x128;
        inline constexpr uintptr_t GetVideoGenSessionAsync = 0x130;
        inline constexpr uintptr_t GetVideoGenTriggersAsync = 0x138;
        inline constexpr uintptr_t InternalGenerateMeshAsync = 0x140;
        inline constexpr uintptr_t LoadGeneratedMeshAsync = 0x148;
        inline constexpr uintptr_t LoadModelFromGlbAsync = 0x150;
        inline constexpr uintptr_t LoadModelFromUrlAsync = 0x158;
        inline constexpr uintptr_t ReplicateGeneration = 0x180;
        inline constexpr uintptr_t RequestGenerationReplication = 0x188;
        inline constexpr uintptr_t SegmentMeshAsync = 0x160;
        inline constexpr uintptr_t StartVideoGenSessionAsync = 0x168;
        inline constexpr uintptr_t UpdateVideoGenSessionPromptAsync = 0x170;
        inline constexpr uintptr_t UpdateVideoGenSessionTriggersAsync = 0x178;
    }

    namespace GenericChallengeService {
        inline constexpr uintptr_t ChallengeAbandonedEvent = 0x128;
        inline constexpr uintptr_t ChallengeCompletedEvent = 0x130;
        inline constexpr uintptr_t ChallengeInvalidatedEvent = 0x138;
        inline constexpr uintptr_t ChallengeLoadedEvent = 0x140;
        inline constexpr uintptr_t ChallengeRequiredEvent = 0x148;
        inline constexpr uintptr_t SignalChallengeAbandoned = 0x100;
        inline constexpr uintptr_t SignalChallengeCompleted = 0x108;
        inline constexpr uintptr_t SignalChallengeInvalidated = 0x110;
        inline constexpr uintptr_t SignalChallengeLoaded = 0x118;
        inline constexpr uintptr_t SignalChallengeRequired = 0x120;
    }

    namespace GeometryD3D11 {
        inline constexpr uintptr_t VTableRva = 0x6cf1120;
    }

    namespace GeometryService {
        inline constexpr uintptr_t CalculateConstraintsToPreserve = 0x130;
        inline constexpr uintptr_t CreateBasicMeshPart = 0x138;
        inline constexpr uintptr_t FragmentAsync = 0x100;
        inline constexpr uintptr_t GenerateFragmentSites = 0x140;
        inline constexpr uintptr_t HashMeshAsync = 0x108;
        inline constexpr uintptr_t IntersectAsync = 0x110;
        inline constexpr uintptr_t SubtractAsync = 0x118;
        inline constexpr uintptr_t SweepPartAsync = 0x120;
        inline constexpr uintptr_t TranscodeMesh = 0x148;
        inline constexpr uintptr_t TranscodeModel = 0x150;
        inline constexpr uintptr_t UnionAsync = 0x128;
    }

    namespace Get {
        inline constexpr uintptr_t FacialAnimationStreamingServiceStats = 0x100;
        inline constexpr uintptr_t Selection = 0x108;
    }

    namespace GetAccessories {
        inline constexpr uintptr_t Humanoid = 0x100;
        inline constexpr uintptr_t HumanoidDescription = 0x108;
    }

    namespace GetAngleAttenuation {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioListener = 0x108;
    }

    namespace GetAnimations {
        inline constexpr uintptr_t AnimationClipProvider = 0x100;
        inline constexpr uintptr_t KeyframeSequenceProvider = 0x108;
    }

    namespace GetAnimationsAsync {
        inline constexpr uintptr_t AnimationClipProvider = 0x100;
        inline constexpr uintptr_t KeyframeSequenceProvider = 0x108;
    }

    namespace GetAppliedInstance {
        inline constexpr uintptr_t AchievementService = 0x100;
        inline constexpr uintptr_t MarkerCurve = 0x108;
    }

    namespace GetAsync {
        inline constexpr uintptr_t GlobalDataStore = 0x100;
        inline constexpr uintptr_t HttpRbxApiService = 0x108;
        inline constexpr uintptr_t HttpService = 0x110;
        inline constexpr uintptr_t MemoryStoreDistributedCounter = 0x118;
        inline constexpr uintptr_t MemoryStoreHashMap = 0x120;
        inline constexpr uintptr_t MemoryStoreSortedMap = 0x128;
    }

    namespace GetAudibilityFor {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioListener = 0x108;
    }

    namespace GetButton {
        inline constexpr uintptr_t Controller = 0x108;
        inline constexpr uintptr_t CreatorStoreService = 0x100;
    }

    namespace GetCollection {
        inline constexpr uintptr_t CollectionService = 0x108;
        inline constexpr uintptr_t InsertService = 0x100;
    }

    namespace GetConnectedWires {
        inline constexpr uintptr_t AudioAnalyzer = 0x100;
        inline constexpr uintptr_t AudioChannelMixer = 0x108;
        inline constexpr uintptr_t AudioChannelSplitter = 0x110;
        inline constexpr uintptr_t AudioChorus = 0x118;
        inline constexpr uintptr_t AudioCompressor = 0x120;
        inline constexpr uintptr_t AudioDeviceInput = 0x128;
        inline constexpr uintptr_t AudioDeviceOutput = 0x130;
        inline constexpr uintptr_t AudioDistortion = 0x138;
        inline constexpr uintptr_t AudioEcho = 0x140;
        inline constexpr uintptr_t AudioEmitter = 0x148;
        inline constexpr uintptr_t AudioEqualizer = 0x150;
        inline constexpr uintptr_t AudioFader = 0x158;
        inline constexpr uintptr_t AudioFilter = 0x160;
        inline constexpr uintptr_t AudioFlanger = 0x168;
        inline constexpr uintptr_t AudioGate = 0x170;
        inline constexpr uintptr_t AudioLimiter = 0x178;
        inline constexpr uintptr_t AudioListener = 0x180;
        inline constexpr uintptr_t AudioPitchShifter = 0x188;
        inline constexpr uintptr_t AudioPlayer = 0x190;
        inline constexpr uintptr_t AudioRecorder = 0x198;
        inline constexpr uintptr_t AudioReverb = 0x1a0;
        inline constexpr uintptr_t AudioSpeechToText = 0x1a8;
        inline constexpr uintptr_t AudioTextToSpeech = 0x1b0;
        inline constexpr uintptr_t AudioTremolo = 0x1b8;
        inline constexpr uintptr_t AudioWindSynthesizer = 0x1c0;
        inline constexpr uintptr_t RealtimeMedia = 0x1c8;
        inline constexpr uintptr_t VideoDisplay = 0x1d0;
        inline constexpr uintptr_t VideoPlayer = 0x1d8;
    }

    namespace GetContentMemoryData {
        inline constexpr uintptr_t MeshPart = 0x100;
        inline constexpr uintptr_t SlimDebugSettings = 0x108;
    }

    namespace GetControlPoint {
        inline constexpr uintptr_t Path2D = 0x100;
        inline constexpr uintptr_t Path3D = 0x108;
    }

    namespace GetControlPoints {
        inline constexpr uintptr_t Path2D = 0x100;
        inline constexpr uintptr_t Path3D = 0x108;
    }

    namespace GetCurrentState {
        inline constexpr uintptr_t AppLifecycleObserverService = 0x100;
        inline constexpr uintptr_t AuroraScriptObject = 0x108;
    }

    namespace GetDistanceAttenuation {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioListener = 0x108;
    }

    namespace GetFaces {
        inline constexpr uintptr_t BaseWrap = 0x100;
        inline constexpr uintptr_t EditableMesh = 0x108;
    }

    namespace GetFrameNames {
        inline constexpr uintptr_t AnimatedImageService = 0x100;
        inline constexpr uintptr_t AnimationClipProvider = 0x108;
    }

    namespace GetGuiObjectsAtPosition {
        inline constexpr uintptr_t BasePlayerGui = 0x100;
        inline constexpr uintptr_t LayerCollector = 0x108;
    }

    namespace GetInputPins {
        inline constexpr uintptr_t AudioAnalyzer = 0x100;
        inline constexpr uintptr_t AudioChannelMixer = 0x108;
        inline constexpr uintptr_t AudioChannelSplitter = 0x110;
        inline constexpr uintptr_t AudioChorus = 0x118;
        inline constexpr uintptr_t AudioCompressor = 0x120;
        inline constexpr uintptr_t AudioDeviceInput = 0x128;
        inline constexpr uintptr_t AudioDeviceOutput = 0x130;
        inline constexpr uintptr_t AudioDistortion = 0x138;
        inline constexpr uintptr_t AudioEcho = 0x140;
        inline constexpr uintptr_t AudioEmitter = 0x148;
        inline constexpr uintptr_t AudioEqualizer = 0x150;
        inline constexpr uintptr_t AudioFader = 0x158;
        inline constexpr uintptr_t AudioFilter = 0x160;
        inline constexpr uintptr_t AudioFlanger = 0x168;
        inline constexpr uintptr_t AudioGate = 0x170;
        inline constexpr uintptr_t AudioLimiter = 0x178;
        inline constexpr uintptr_t AudioListener = 0x180;
        inline constexpr uintptr_t AudioPitchShifter = 0x188;
        inline constexpr uintptr_t AudioPlayer = 0x190;
        inline constexpr uintptr_t AudioRecorder = 0x198;
        inline constexpr uintptr_t AudioReverb = 0x1a0;
        inline constexpr uintptr_t AudioSpeechToText = 0x1a8;
        inline constexpr uintptr_t AudioTextToSpeech = 0x1b0;
        inline constexpr uintptr_t AudioTremolo = 0x1b8;
        inline constexpr uintptr_t AudioWindSynthesizer = 0x1c0;
        inline constexpr uintptr_t RealtimeMedia = 0x1c8;
        inline constexpr uintptr_t VideoDisplay = 0x1d0;
        inline constexpr uintptr_t VideoPlayer = 0x1d8;
    }

    namespace GetItem {
        inline constexpr uintptr_t ClientStorageService = 0x100;
        inline constexpr uintptr_t LocalStorageService = 0x108;
        inline constexpr uintptr_t MemStorageService = 0x110;
        inline constexpr uintptr_t Plugin = 0x118;
    }

    namespace GetJoint {
        inline constexpr uintptr_t DigitsRigDescription = 0x100;
        inline constexpr uintptr_t HumanoidRigDescription = 0x108;
    }

    namespace GetJointLabels {
        inline constexpr uintptr_t DigitsRigDescription = 0x100;
        inline constexpr uintptr_t HumanoidRigDescription = 0x108;
    }

    namespace GetKeyAtIndex {
        inline constexpr uintptr_t FloatCurve = 0x100;
        inline constexpr uintptr_t RotationCurve = 0x108;
        inline constexpr uintptr_t ValueCurve = 0x110;
    }

    namespace GetKeyIndicesAtTime {
        inline constexpr uintptr_t FloatCurve = 0x100;
        inline constexpr uintptr_t RotationCurve = 0x108;
        inline constexpr uintptr_t ValueCurve = 0x110;
    }

    namespace GetKeys {
        inline constexpr uintptr_t FloatCurve = 0x100;
        inline constexpr uintptr_t RotationCurve = 0x108;
        inline constexpr uintptr_t ValueCurve = 0x110;
    }

    namespace GetLastForce {
        inline constexpr uintptr_t BodyPosition = 0x100;
        inline constexpr uintptr_t BodyVelocity = 0x108;
    }

    namespace GetLength {
        inline constexpr uintptr_t Path2D = 0x100;
        inline constexpr uintptr_t Path3D = 0x108;
    }

    namespace GetLogger {
        inline constexpr uintptr_t LogService = 0x100;
        inline constexpr uintptr_t Logger = 0x108;
    }

    namespace GetMarkers {
        inline constexpr uintptr_t Keyframe = 0x100;
        inline constexpr uintptr_t MarkerCurve = 0x108;
    }

    namespace GetMaxCollisionGroups {
        inline constexpr uintptr_t PhysicsService = 0x100;
        inline constexpr uintptr_t WorldRoot = 0x108;
    }

    namespace GetMaxControlPoints {
        inline constexpr uintptr_t Path2D = 0x100;
        inline constexpr uintptr_t Path3D = 0x108;
    }

    namespace GetMemStats {
        inline constexpr uintptr_t AnimationClipProvider = 0x100;
        inline constexpr uintptr_t KeyframeSequenceProvider = 0x108;
    }

    namespace GetMetadata {
        inline constexpr uintptr_t DataStoreIncrementOptions = 0x100;
        inline constexpr uintptr_t DataStoreKeyInfo = 0x108;
        inline constexpr uintptr_t DataStoreSetOptions = 0x110;
        inline constexpr uintptr_t SessionService = 0x118;
    }

    namespace GetMouse {
        inline constexpr uintptr_t Player = 0x100;
        inline constexpr uintptr_t Plugin = 0x108;
    }

    namespace GetOutputPins {
        inline constexpr uintptr_t AudioAnalyzer = 0x100;
        inline constexpr uintptr_t AudioChannelSplitter = 0x108;
        inline constexpr uintptr_t AudioChorus = 0x110;
        inline constexpr uintptr_t AudioCompressor = 0x118;
        inline constexpr uintptr_t AudioDeviceInput = 0x120;
        inline constexpr uintptr_t AudioDistortion = 0x128;
        inline constexpr uintptr_t AudioEcho = 0x130;
        inline constexpr uintptr_t AudioEmitter = 0x138;
        inline constexpr uintptr_t AudioFader = 0x140;
        inline constexpr uintptr_t AudioFilter = 0x148;
        inline constexpr uintptr_t AudioFlanger = 0x150;
        inline constexpr uintptr_t AudioFocusService = 0x158;
        inline constexpr uintptr_t AudioGate = 0x160;
        inline constexpr uintptr_t AudioListener = 0x168;
        inline constexpr uintptr_t AudioPlayer = 0x170;
        inline constexpr uintptr_t AudioRecorder = 0x178;
        inline constexpr uintptr_t AudioReverb = 0x180;
        inline constexpr uintptr_t AudioTextToSpeech = 0x188;
        inline constexpr uintptr_t AudioWindSynthesizer = 0x190;
        inline constexpr uintptr_t AuroraScript = 0x198;
        inline constexpr uintptr_t RealtimeMedia = 0x1a0;
        inline constexpr uintptr_t VideoFrame = 0x1a8;
        inline constexpr uintptr_t VideoPlayer = 0x1b0;
    }

    namespace GetPlaySessionId {
        inline constexpr uintptr_t DataModel = 0x100;
        inline constexpr uintptr_t RbxAnalyticsService = 0x108;
    }

    namespace GetPlayer {
        inline constexpr uintptr_t NetworkServer = 0x100;
        inline constexpr uintptr_t PlayerDataRecord = 0x108;
    }

    namespace GetPlayers {
        inline constexpr uintptr_t Players = 0x100;
        inline constexpr uintptr_t Teams = 0x108;
    }

    namespace GetPlayingAnimationTracks {
        inline constexpr uintptr_t AnimationController = 0x100;
        inline constexpr uintptr_t Animator = 0x108;
        inline constexpr uintptr_t Humanoid = 0x110;
    }

    namespace GetPositionOnCurve {
        inline constexpr uintptr_t Path2D = 0x100;
        inline constexpr uintptr_t Path3D = 0x108;
    }

    namespace GetPositionOnCurveArcLength {
        inline constexpr uintptr_t Path2D = 0x100;
        inline constexpr uintptr_t Path3D = 0x108;
    }

    namespace GetPropertyNames {
        inline constexpr uintptr_t DataStoreIncrementOptions = 0x100;
        inline constexpr uintptr_t ReflectionService = 0x108;
    }

    namespace GetRegisteredCollisionGroups {
        inline constexpr uintptr_t PhysicsService = 0x100;
        inline constexpr uintptr_t WorldRoot = 0x108;
    }

    namespace GetRenderCFrame {
        inline constexpr uintptr_t BasePart = 0x100;
        inline constexpr uintptr_t Camera = 0x108;
    }

    namespace GetSegmentCount {
        inline constexpr uintptr_t Path2D = 0x100;
        inline constexpr uintptr_t Path3D = 0x108;
    }

    namespace GetSessionId {
        inline constexpr uintptr_t OmniRecommendationsService = 0x100;
        inline constexpr uintptr_t RbxAnalyticsService = 0x108;
    }

    namespace GetSizeAsync {
        inline constexpr uintptr_t MemoryStoreQueue = 0x100;
        inline constexpr uintptr_t MemoryStoreSortedMap = 0x108;
    }

    namespace GetState {
        inline constexpr uintptr_t ControlState = 0x100;
        inline constexpr uintptr_t Humanoid = 0x108;
        inline constexpr uintptr_t InputBinding = 0x110;
    }

    namespace GetTags {
        inline constexpr uintptr_t CollectionService = 0x100;
        inline constexpr uintptr_t Instance = 0x108;
    }

    namespace GetTangentOnCurve {
        inline constexpr uintptr_t Path2D = 0x100;
        inline constexpr uintptr_t Path3D = 0x108;
    }

    namespace GetTangentOnCurveArcLength {
        inline constexpr uintptr_t Path2D = 0x100;
        inline constexpr uintptr_t Path3D = 0x108;
    }

    namespace GetTextBoundsParams {
        inline constexpr uintptr_t Font = 0x100;
        inline constexpr uintptr_t RichText = 0x108;
        inline constexpr uintptr_t Size = 0x110;
        inline constexpr uintptr_t Text = 0x118;
        inline constexpr uintptr_t Width = 0x120;
    }

    namespace GetTposeAdjustment {
        inline constexpr uintptr_t DigitsRigDescription = 0x100;
        inline constexpr uintptr_t HumanoidRigDescription = 0x108;
    }

    namespace GetUVs {
        inline constexpr uintptr_t BaseWrap = 0x100;
        inline constexpr uintptr_t EditableMesh = 0x108;
    }

    namespace GetUserCFrame {
        inline constexpr uintptr_t UserInputService = 0x100;
        inline constexpr uintptr_t VRService = 0x108;
    }

    namespace GetValue {
        inline constexpr uintptr_t ConfigSnapshot = 0x100;
        inline constexpr uintptr_t PlayerDataRecord = 0x108;
        inline constexpr uintptr_t StatsItem = 0x110;
        inline constexpr uintptr_t TweenService = 0x118;
    }

    namespace GetValueAtTime {
        inline constexpr uintptr_t ConfigService = 0x100;
        inline constexpr uintptr_t FloatCurve = 0x108;
        inline constexpr uintptr_t RotationCurve = 0x110;
        inline constexpr uintptr_t ValueCurve = 0x118;
        inline constexpr uintptr_t Vector3Curve = 0x120;
    }

    namespace GetValueChangedSignal {
        inline constexpr uintptr_t ConfigSnapshot = 0x100;
        inline constexpr uintptr_t PlayerDataRecord = 0x108;
    }

    namespace GetVertices {
        inline constexpr uintptr_t BaseWrap = 0x100;
        inline constexpr uintptr_t EditableMesh = 0x108;
    }

    namespace GetWaveformAsync {
        inline constexpr uintptr_t AudioRecorder = 0x100;
        inline constexpr uintptr_t AudioTextToSpeech = 0x108;
    }

    namespace GlobalDataStore {
        inline constexpr uintptr_t BatchGetAsync = 0x100;
        inline constexpr uintptr_t GetAsync = 0x108;
        inline constexpr uintptr_t IncrementAsync = 0x110;
        inline constexpr uintptr_t OnUpdate = 0x130;
        inline constexpr uintptr_t RemoveAsync = 0x118;
        inline constexpr uintptr_t SetAsync = 0x120;
        inline constexpr uintptr_t UpdateAsync = 0x128;
    }

    namespace GlobalSettings {
        inline constexpr uintptr_t GetFFlag = 0x100;
        inline constexpr uintptr_t GetFFlagOverrides = 0x108;
        inline constexpr uintptr_t GetFFlags = 0x110;
        inline constexpr uintptr_t GetFVariable = 0x118;
        inline constexpr uintptr_t SetFFlagOverrides = 0x120;
    }

    namespace Glue {
        inline constexpr uintptr_t F0 = 0x100;
        inline constexpr uintptr_t F1 = 0x108;
        inline constexpr uintptr_t F2 = 0x110;
        inline constexpr uintptr_t F3 = 0x118;
    }

    namespace GothamMedium {
        inline constexpr uintptr_t GothamSemibold = 0x100;
        inline constexpr uintptr_t MontserratBold = 0x108;
    }

    namespace GothamSemibold {
        inline constexpr uintptr_t GothamMedium = 0x100;
        inline constexpr uintptr_t MontserratMedium = 0x108;
    }

    namespace GraphicsFeatureLevelEx {
        inline constexpr uintptr_t TelemetryMigration = 0x100;
    }

    namespace GroundController {
        inline constexpr uintptr_t AccelerationLean = 0x100;
        inline constexpr uintptr_t AccelerationTime = 0x108;
        inline constexpr uintptr_t BalanceMaxTorque = 0x110;
        inline constexpr uintptr_t BalanceSpeed = 0x118;
        inline constexpr uintptr_t DecelerationTime = 0x120;
        inline constexpr uintptr_t Friction = 0x128;
        inline constexpr uintptr_t FrictionWeight = 0x130;
        inline constexpr uintptr_t GroundOffset = 0x138;
        inline constexpr uintptr_t StandForce = 0x140;
        inline constexpr uintptr_t StandSpeed = 0x148;
        inline constexpr uintptr_t TurnSpeedFactor = 0x150;
    }

    namespace GroupService {
        inline constexpr uintptr_t GetAlliesAsync = 0x100;
        inline constexpr uintptr_t GetEnemiesAsync = 0x108;
        inline constexpr uintptr_t GetGroupInfoAsync = 0x110;
        inline constexpr uintptr_t GetGroupsAsync = 0x118;
        inline constexpr uintptr_t GetRolesInGroupAsync = 0x120;
        inline constexpr uintptr_t PromptJoinAsync = 0x128;
        inline constexpr uintptr_t PromptJoinCompleted = 0x130;
        inline constexpr uintptr_t ShowJoinPrompt = 0x138;
    }

    namespace GuiBase2D {
        inline constexpr uintptr_t AbsolutePosition = 0xfc;
        inline constexpr uintptr_t AbsoluteRotation = 0xd8;
        inline constexpr uintptr_t AbsoluteSize = 0x0;
    }

    namespace GuiBase2d {
        inline constexpr uintptr_t AbsolutePosition = 0x100;
        inline constexpr uintptr_t AbsoluteRotation = 0x108;
        inline constexpr uintptr_t AbsoluteSize = 0x110;
        inline constexpr uintptr_t ActiveQueryNames = 0x118;
        inline constexpr uintptr_t AutoLocalize = 0x120;
        inline constexpr uintptr_t ClippedRect = 0x128;
        inline constexpr uintptr_t IsNotOccluded = 0x130;
        inline constexpr uintptr_t Localize = 0x138;
        inline constexpr uintptr_t RawRect2D = 0x140;
        inline constexpr uintptr_t ReplicatedInsertionOrder = 0x148;
        inline constexpr uintptr_t RootLocalizationTable = 0x150;
        inline constexpr uintptr_t SelectionBehaviorDown = 0x158;
        inline constexpr uintptr_t SelectionBehaviorLeft = 0x160;
        inline constexpr uintptr_t SelectionBehaviorRight = 0x168;
        inline constexpr uintptr_t SelectionBehaviorUp = 0x170;
        inline constexpr uintptr_t SelectionChanged = 0x188;
        inline constexpr uintptr_t SelectionGroup = 0x178;
        inline constexpr uintptr_t TotalGroupScale = 0x180;
    }

    namespace GuiBase3d {
        inline constexpr uintptr_t Color = 0x100;
        inline constexpr uintptr_t Color3 = 0x108;
        inline constexpr uintptr_t Transparency = 0x110;
        inline constexpr uintptr_t Visible = 0x118;
    }

    namespace GuiButton {
        inline constexpr uintptr_t Activated = 0x160;
        inline constexpr uintptr_t AutoButtonColor = 0x100;
        inline constexpr uintptr_t HoverHapticEffect = 0x108;
        inline constexpr uintptr_t Modal = 0x110;
        inline constexpr uintptr_t MouseButton1Click = 0x168;
        inline constexpr uintptr_t MouseButton1ClickConnectionCount = 0x118;
        inline constexpr uintptr_t MouseButton1Down = 0x170;
        inline constexpr uintptr_t MouseButton1DownConnectionCount = 0x120;
        inline constexpr uintptr_t MouseButton1Up = 0x178;
        inline constexpr uintptr_t MouseButton1UpConnectionCount = 0x128;
        inline constexpr uintptr_t MouseButton2Click = 0x180;
        inline constexpr uintptr_t MouseButton2ClickConnectionCount = 0x130;
        inline constexpr uintptr_t MouseButton2Down = 0x188;
        inline constexpr uintptr_t MouseButton2DownConnectionCount = 0x138;
        inline constexpr uintptr_t MouseButton2Up = 0x190;
        inline constexpr uintptr_t MouseButton2UpConnectionCount = 0x140;
        inline constexpr uintptr_t PressHapticEffect = 0x148;
        inline constexpr uintptr_t SecondaryActivated = 0x198;
        inline constexpr uintptr_t Selected = 0x150;
        inline constexpr uintptr_t Style = 0x158;
    }

    namespace GuiObject {
        inline constexpr uintptr_t Active = 0x598;
        inline constexpr uintptr_t AnchorPoint = 0x548;
        inline constexpr uintptr_t AutomaticSize = 0x550;
        inline constexpr uintptr_t BackgroundColor = 0x148;
        inline constexpr uintptr_t BackgroundColor3 = 0x530;
        inline constexpr uintptr_t BackgroundTransparency = 0x53c;
        inline constexpr uintptr_t BorderColor = 0x160;
        inline constexpr uintptr_t BorderColor3 = 0x53c;
        inline constexpr uintptr_t BorderMode = 0x558;
        inline constexpr uintptr_t BorderSizePixel = 0x55c;
        inline constexpr uintptr_t ClipsDescendants = 0x599;
        inline constexpr uintptr_t DragBegin = 0x268;
        inline constexpr uintptr_t DragBeginConnectionCount = 0x188;
        inline constexpr uintptr_t DragStopped = 0x270;
        inline constexpr uintptr_t DragStoppedConnectionCount = 0x190;
        inline constexpr uintptr_t Draggable = 0x198;
        inline constexpr uintptr_t GuiState = 0x568;
        inline constexpr uintptr_t Image = 0x990;
        inline constexpr uintptr_t InputBegan = 0x278;
        inline constexpr uintptr_t InputChanged = 0x280;
        inline constexpr uintptr_t InputEnded = 0x288;
        inline constexpr uintptr_t InputSink = 0x1a8;
        inline constexpr uintptr_t Interactable = 0x59b;
        inline constexpr uintptr_t LayoutOrder = 0x56c;
        inline constexpr uintptr_t MouseEnter = 0x290;
        inline constexpr uintptr_t MouseEnterConnectionCount = 0x1c0;
        inline constexpr uintptr_t MouseLeave = 0x298;
        inline constexpr uintptr_t MouseLeaveConnectionCount = 0x1c8;
        inline constexpr uintptr_t MouseMoved = 0x2a0;
        inline constexpr uintptr_t MouseMovedConnectionCount = 0x1d0;
        inline constexpr uintptr_t MouseWheelBackward = 0x2a8;
        inline constexpr uintptr_t MouseWheelBackwardConnectionCount = 0x1d8;
        inline constexpr uintptr_t MouseWheelForward = 0x2b0;
        inline constexpr uintptr_t MouseWheelForwardConnectionCount = 0x1e0;
        inline constexpr uintptr_t NextSelectionDown = 0x1e8;
        inline constexpr uintptr_t NextSelectionLeft = 0x1f0;
        inline constexpr uintptr_t NextSelectionRight = 0x1f8;
        inline constexpr uintptr_t NextSelectionUp = 0x200;
        inline constexpr uintptr_t Position = 0x500;
        inline constexpr uintptr_t RichText = 0xb88;
        inline constexpr uintptr_t Rotation = 0xd8;
        inline constexpr uintptr_t ScreenGui_Enabled = 0x4b4;
        inline constexpr uintptr_t Selectable = 0x59c;
        inline constexpr uintptr_t SelectionGained = 0x2b8;
        inline constexpr uintptr_t SelectionImageObject = 0x220;
        inline constexpr uintptr_t SelectionLost = 0x2c0;
        inline constexpr uintptr_t SelectionOrder = 0x588;
        inline constexpr uintptr_t SelectionRect2D = 0x230;
        inline constexpr uintptr_t Sink = 0x238;
        inline constexpr uintptr_t Size = 0x520;
        inline constexpr uintptr_t SizeConstraint = 0x590;
        inline constexpr uintptr_t Text = 0xdf0;
        inline constexpr uintptr_t TextColor3 = 0xea0;
        inline constexpr uintptr_t TouchLongPress = 0x2c8;
        inline constexpr uintptr_t TouchPan = 0x2d0;
        inline constexpr uintptr_t TouchPinch = 0x2d8;
        inline constexpr uintptr_t TouchRotate = 0x2e0;
        inline constexpr uintptr_t TouchSwipe = 0x2e8;
        inline constexpr uintptr_t TouchTap = 0x2f0;
        inline constexpr uintptr_t Transparency = 0x250;
        inline constexpr uintptr_t TweenPosition = 0x100;
        inline constexpr uintptr_t TweenPositionInternal = 0x108;
        inline constexpr uintptr_t TweenSize = 0x110;
        inline constexpr uintptr_t TweenSizeAndPosition = 0x118;
        inline constexpr uintptr_t TweenSizeAndPositionInternal = 0x120;
        inline constexpr uintptr_t TweenSizeInternal = 0x128;
        inline constexpr uintptr_t Visible = 0x59d;
        inline constexpr uintptr_t ZIndex = 0x1b7;
    }

    namespace GuiService {
        inline constexpr uintptr_t AddCenterDialog = 0x108;
        inline constexpr uintptr_t AddKey = 0x110;
        inline constexpr uintptr_t AddSelectionParent = 0x118;
        inline constexpr uintptr_t AddSelectionTuple = 0x120;
        inline constexpr uintptr_t AddSpecialKey = 0x128;
        inline constexpr uintptr_t AutoSelectGuiEnabled = 0x300;
        inline constexpr uintptr_t BroadcastNotification = 0x130;
        inline constexpr uintptr_t BrowserWindowClosed = 0x398;
        inline constexpr uintptr_t ClearError = 0x138;
        inline constexpr uintptr_t CloseInspectMenu = 0x140;
        inline constexpr uintptr_t CloseInspectMenuRequest = 0x3a0;
        inline constexpr uintptr_t CloseStatsBasedOnInputString = 0x148;
        inline constexpr uintptr_t CoreEffectFolder = 0x308;
        inline constexpr uintptr_t CoreGuiFolder = 0x310;
        inline constexpr uintptr_t CoreGuiNavigationEnabled = 0x318;
        inline constexpr uintptr_t CoreGuiRenderOverflowed = 0x3a8;
        inline constexpr uintptr_t DismissNotification = 0x150;
        inline constexpr uintptr_t DisplayScalingMode = 0x320;
        inline constexpr uintptr_t EmotesMenuOpenChanged = 0x3b0;
        inline constexpr uintptr_t ErrorMessageChanged = 0x3b8;
        inline constexpr uintptr_t ForceTenFootInterface = 0x158;
        inline constexpr uintptr_t GetAutoUIScaleHundredths = 0x160;
        inline constexpr uintptr_t GetBrickCount = 0x168;
        inline constexpr uintptr_t GetClosestDialogToPosition = 0x170;
        inline constexpr uintptr_t GetClosestVisibleDialogToPosition = 0x178;
        inline constexpr uintptr_t GetEffectiveUIScaleHundredths = 0x180;
        inline constexpr uintptr_t GetEmotesMenuOpen = 0x188;
        inline constexpr uintptr_t GetErrorCode = 0x190;
        inline constexpr uintptr_t GetErrorDetails = 0x198;
        inline constexpr uintptr_t GetErrorMessage = 0x1a0;
        inline constexpr uintptr_t GetErrorType = 0x1a8;
        inline constexpr uintptr_t GetGameplayPausedNotificationEnabled = 0x1b0;
        inline constexpr uintptr_t GetGuiInset = 0x1b8;
        inline constexpr uintptr_t GetGuiIsVisible = 0x1c0;
        inline constexpr uintptr_t GetHardwareSafeViewport = 0x1c8;
        inline constexpr uintptr_t GetInsetArea = 0x1d0;
        inline constexpr uintptr_t GetInspectMenuEnabled = 0x1d8;
        inline constexpr uintptr_t GetNotificationTypeList = 0x1e0;
        inline constexpr uintptr_t GetRawScreenScale = 0x1e8;
        inline constexpr uintptr_t GetResolutionScale = 0x1f0;
        inline constexpr uintptr_t GetSafeZoneOffsets = 0x1f8;
        inline constexpr uintptr_t GetScreenResolution = 0x100;
        inline constexpr uintptr_t GetUiMessage = 0x200;
        inline constexpr uintptr_t GuiNavigationEnabled = 0x328;
        inline constexpr uintptr_t GuiVisibilityChangedSignal = 0x3c0;
        inline constexpr uintptr_t InspectMenuEnabledChangedSignal = 0x3c8;
        inline constexpr uintptr_t InspectPlayerFromHumanoidDescription = 0x208;
        inline constexpr uintptr_t InspectPlayerFromHumanoidDescriptionRequest = 0x3d0;
        inline constexpr uintptr_t InspectPlayerFromUserId = 0x210;
        inline constexpr uintptr_t InspectPlayerFromUserIdWithCtx = 0x218;
        inline constexpr uintptr_t InspectPlayerFromUserIdWithCtxRequest = 0x3d8;
        inline constexpr uintptr_t IsMemoryTrackerEnabled = 0x220;
        inline constexpr uintptr_t IsModalDialog = 0x330;
        inline constexpr uintptr_t IsTenFootInterface = 0x228;
        inline constexpr uintptr_t IsWindows = 0x338;
        inline constexpr uintptr_t KeyPressed = 0x3e0;
        inline constexpr uintptr_t MenuClosed = 0x3e8;
        inline constexpr uintptr_t MenuIsOpen = 0x340;
        inline constexpr uintptr_t MenuOpened = 0x3f0;
        inline constexpr uintptr_t NativeClose = 0x3f8;
        inline constexpr uintptr_t NetworkPausedEnabledChanged = 0x400;
        inline constexpr uintptr_t OnNotificationDisplayed = 0x230;
        inline constexpr uintptr_t OnNotificationInteraction = 0x238;
        inline constexpr uintptr_t Open9SliceEditor = 0x408;
        inline constexpr uintptr_t OpenBrowserWindow = 0x240;
        inline constexpr uintptr_t OpenNativeOverlay = 0x248;
        inline constexpr uintptr_t OpenStyleEditor = 0x410;
        inline constexpr uintptr_t PreferredTextSize = 0x348;
        inline constexpr uintptr_t PreferredTransparency = 0x350;
        inline constexpr uintptr_t PurchasePromptShown = 0x418;
        inline constexpr uintptr_t ReducedMotionEnabled = 0x358;
        inline constexpr uintptr_t RemoveCenterDialog = 0x250;
        inline constexpr uintptr_t RemoveKey = 0x258;
        inline constexpr uintptr_t RemoveSelectionGroup = 0x260;
        inline constexpr uintptr_t RemoveSpecialKey = 0x268;
        inline constexpr uintptr_t SafeZoneOffsetsChanged = 0x420;
        inline constexpr uintptr_t ScrollStateChanged = 0x428;
        inline constexpr uintptr_t Select = 0x270;
        inline constexpr uintptr_t SelectedCoreObject = 0x360;
        inline constexpr uintptr_t SelectedObject = 0x368;
        inline constexpr uintptr_t SendCoreUiNotification = 0x390;
        inline constexpr uintptr_t SendNotification = 0x278;
        inline constexpr uintptr_t SendUIOcclusionMetricsForQueryRegion = 0x280;
        inline constexpr uintptr_t SetEmotesMenuOpen = 0x288;
        inline constexpr uintptr_t SetGameplayPausedNotificationEnabled = 0x290;
        inline constexpr uintptr_t SetGlobalGuiInset = 0x298;
        inline constexpr uintptr_t SetHardwareSafeAreaInsets = 0x2a0;
        inline constexpr uintptr_t SetInspectMenuEnabled = 0x2a8;
        inline constexpr uintptr_t SetMenuIsOpen = 0x2b0;
        inline constexpr uintptr_t SetPurchasePromptIsShown = 0x2b8;
        inline constexpr uintptr_t SetSafeZoneOffsets = 0x2c0;
        inline constexpr uintptr_t SetTopbarInset = 0x2c8;
        inline constexpr uintptr_t SetUIScaleMultiplier = 0x2d0;
        inline constexpr uintptr_t SetUiMessage = 0x2d8;
        inline constexpr uintptr_t ShowLeaveConfirmation = 0x430;
        inline constexpr uintptr_t ShowStatsBasedOnInputString = 0x2e0;
        inline constexpr uintptr_t SpecialKeyPressed = 0x438;
        inline constexpr uintptr_t ToggleFullscreen = 0x2e8;
        inline constexpr uintptr_t ToggleGuiIsVisibleForCaptures = 0x2f0;
        inline constexpr uintptr_t ToggleGuiIsVisibleIfAllowed = 0x2f8;
        inline constexpr uintptr_t TopbarInset = 0x370;
        inline constexpr uintptr_t TouchControlsEnabled = 0x378;
        inline constexpr uintptr_t UiMessageChanged = 0x440;
        inline constexpr uintptr_t ViewportDisplaySize = 0x380;
        inline constexpr uintptr_t ViewportSizeInMM = 0x388;
    }

    namespace HSRData {
        inline constexpr uintptr_t BaseWrap = 0x100;
        inline constexpr uintptr_t HiddenSurfaceRemovalAsset = 0x108;
    }

    namespace HSRMeshIdData {
        inline constexpr uintptr_t BaseWrap = 0x100;
        inline constexpr uintptr_t Highlight = 0x108;
    }

    namespace HandleAdornment {
        inline constexpr uintptr_t AdornCullingMode = 0x100;
        inline constexpr uintptr_t AlwaysOnTop = 0x108;
        inline constexpr uintptr_t CFrame = 0x110;
        inline constexpr uintptr_t GizmoReference = 0x118;
        inline constexpr uintptr_t MouseButton1Down = 0x130;
        inline constexpr uintptr_t MouseButton1Up = 0x138;
        inline constexpr uintptr_t MouseEnter = 0x140;
        inline constexpr uintptr_t MouseLeave = 0x148;
        inline constexpr uintptr_t SizeRelativeOffset = 0x120;
        inline constexpr uintptr_t ZIndex = 0x128;
    }

    namespace Handles {
        inline constexpr uintptr_t Faces = 0x100;
        inline constexpr uintptr_t MouseButton1Down = 0x138;
        inline constexpr uintptr_t MouseButton1DownConnectionCount = 0x108;
        inline constexpr uintptr_t MouseButton1Up = 0x140;
        inline constexpr uintptr_t MouseButton1UpConnectionCount = 0x110;
        inline constexpr uintptr_t MouseDrag = 0x148;
        inline constexpr uintptr_t MouseDragConnectionCount = 0x118;
        inline constexpr uintptr_t MouseEnter = 0x150;
        inline constexpr uintptr_t MouseEnterConnectionCount = 0x120;
        inline constexpr uintptr_t MouseLeave = 0x158;
        inline constexpr uintptr_t MouseLeaveConnectionCount = 0x128;
        inline constexpr uintptr_t Style = 0x130;
    }

    namespace HapticEffect {
        inline constexpr uintptr_t Ended = 0x140;
        inline constexpr uintptr_t Looped = 0x118;
        inline constexpr uintptr_t Play = 0x100;
        inline constexpr uintptr_t Position = 0x120;
        inline constexpr uintptr_t Radius = 0x128;
        inline constexpr uintptr_t SetWaveformKeys = 0x108;
        inline constexpr uintptr_t Stop = 0x110;
        inline constexpr uintptr_t Type = 0x130;
        inline constexpr uintptr_t WaveformData = 0x138;
    }

    namespace HapticService {
        inline constexpr uintptr_t GetMotor = 0x100;
        inline constexpr uintptr_t IsMotorSupported = 0x108;
        inline constexpr uintptr_t IsVibrationSupported = 0x110;
        inline constexpr uintptr_t NetworkSettings = 0x120;
        inline constexpr uintptr_t SetMotor = 0x118;
    }

    namespace HasTag {
        inline constexpr uintptr_t CollectionService = 0x100;
        inline constexpr uintptr_t Instance = 0x108;
    }

    namespace HeadColor {
        inline constexpr uintptr_t BodyColors = 0x100;
        inline constexpr uintptr_t HumanoidDescription = 0x108;
    }

    namespace HealthDisplayDistance {
        inline constexpr uintptr_t Humanoid = 0x100;
        inline constexpr uintptr_t Player = 0x108;
        inline constexpr uintptr_t StarterPlayer = 0x110;
    }

    namespace HeapProfilerService {
        inline constexpr uintptr_t ClientRequestDataAsync = 0x100;
        inline constexpr uintptr_t OnNewData = 0x110;
        inline constexpr uintptr_t RequestData = 0x118;
        inline constexpr uintptr_t ServerRequestDataAsync = 0x108;
    }

    namespace HeartbeatForStreamingEnabledGames {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Heartbeat_NonStreamingEnabled {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Height {
        inline constexpr uintptr_t ConeHandleAdornment = 0x100;
        inline constexpr uintptr_t CylinderHandleAdornment = 0x108;
        inline constexpr uintptr_t PyramidHandleAdornment = 0x110;
    }

    namespace HeightmapImporterService {
        inline constexpr uintptr_t CancelImportHeightmap = 0x118;
        inline constexpr uintptr_t ColormapHasUnknownPixels = 0x138;
        inline constexpr uintptr_t GetHeightmapPreviewAsync = 0x100;
        inline constexpr uintptr_t ImportHeightmap = 0x108;
        inline constexpr uintptr_t ImportHeightmapWithMaterialSlotsAsync = 0x110;
        inline constexpr uintptr_t IsValidColormap = 0x120;
        inline constexpr uintptr_t IsValidHeightmap = 0x128;
        inline constexpr uintptr_t ProgressUpdate = 0x140;
        inline constexpr uintptr_t SetImportHeightmapPaused = 0x130;
    }

    namespace HiddenSurfaceRemovalAsset {
        inline constexpr uintptr_t HSRData = 0x100;
        inline constexpr uintptr_t HSRMeshIdData = 0x108;
    }

    namespace HighGain {
        inline constexpr uintptr_t AudioEqualizer = 0x100;
        inline constexpr uintptr_t EqualizerSoundEffect = 0x108;
    }

    namespace Highlight {
        inline constexpr uintptr_t Adornee = 0xa8;
        inline constexpr uintptr_t DepthMode = 0xd0;
        inline constexpr uintptr_t Effect = 0xf8;
        inline constexpr uintptr_t Enabled = 0xe4;
        inline constexpr uintptr_t FillColor = 0xb8;
        inline constexpr uintptr_t FillColor_User = 0xd0;
        inline constexpr uintptr_t FillTransparency = 0xd4;
        inline constexpr uintptr_t LineThickness = 0xf0;
        inline constexpr uintptr_t ModelModifier = 0x100;
        inline constexpr uintptr_t OutlineColor = 0xc4;
        inline constexpr uintptr_t OutlineColor_User = 0xdc;
        inline constexpr uintptr_t OutlineTransparency = 0xdc;
        inline constexpr uintptr_t Prop = 0xb0;
        inline constexpr uintptr_t ReservedId = 0xf4;
        inline constexpr uintptr_t SetEnabled = 0x1d7b4d0;
    }

    namespace HingeConstraint {
        inline constexpr uintptr_t ActuatorType = 0x100;
        inline constexpr uintptr_t AngularResponsiveness = 0x108;
        inline constexpr uintptr_t AngularSpeed = 0x110;
        inline constexpr uintptr_t AngularVelocity = 0x118;
        inline constexpr uintptr_t CurrentAngle = 0x120;
        inline constexpr uintptr_t LimitsEnabled = 0x128;
        inline constexpr uintptr_t LowerAngle = 0x130;
        inline constexpr uintptr_t MotorMaxAcceleration = 0x138;
        inline constexpr uintptr_t MotorMaxTorque = 0x140;
        inline constexpr uintptr_t Radius = 0x148;
        inline constexpr uintptr_t Restitution = 0x150;
        inline constexpr uintptr_t ServoMaxTorque = 0x158;
        inline constexpr uintptr_t SoftlockServoUponReachingTarget = 0x160;
        inline constexpr uintptr_t TargetAngle = 0x168;
        inline constexpr uintptr_t UpperAngle = 0x170;
    }

    namespace HopperBin {
        inline constexpr uintptr_t Active = 0x110;
        inline constexpr uintptr_t BinType = 0x458;
        inline constexpr uintptr_t Command = 0x120;
        inline constexpr uintptr_t Deselected = 0x130;
        inline constexpr uintptr_t Disable = 0x100;
        inline constexpr uintptr_t ReplicatedSelected = 0x138;
        inline constexpr uintptr_t Selected = 0x140;
        inline constexpr uintptr_t TextureName = 0x128;
        inline constexpr uintptr_t ToggleSelect = 0x108;
    }

    namespace HttpBatchAssetCallbacksSizeAboveOne {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace HttpCache_HitRate {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace HttpError {
        inline constexpr uintptr_t EligibleForThirdPartySummary = 0x108;
        inline constexpr uintptr_t FeatureRestrictionManager = 0x100;
        inline constexpr uintptr_t ParsingError = 0x110;
    }

    namespace HttpErrorCode {
        inline constexpr uintptr_t PublishReason = 0x108;
        inline constexpr uintptr_t gender = 0x100;
    }

    namespace HttpRbxApiService {
        inline constexpr uintptr_t GetAsync = 0x100;
        inline constexpr uintptr_t GetAsyncFullUrl = 0x108;
        inline constexpr uintptr_t GetDocumentationUrl = 0x130;
        inline constexpr uintptr_t PostAsync = 0x110;
        inline constexpr uintptr_t PostAsyncFullUrl = 0x118;
        inline constexpr uintptr_t RequestAsync = 0x120;
        inline constexpr uintptr_t RequestLimitedAsync = 0x128;
    }

    namespace HttpRequest {
        inline constexpr uintptr_t Cancel = 0x100;
        inline constexpr uintptr_t Start = 0x108;
    }

    namespace HttpService {
        inline constexpr uintptr_t CreateWebStreamClient = 0x130;
        inline constexpr uintptr_t CreateWebStreamClientInternal = 0x138;
        inline constexpr uintptr_t GenerateGUID = 0x140;
        inline constexpr uintptr_t GetAsync = 0x100;
        inline constexpr uintptr_t GetHttpEnabled = 0x148;
        inline constexpr uintptr_t GetSecret = 0x150;
        inline constexpr uintptr_t GetUserAgent = 0x158;
        inline constexpr uintptr_t HttpEnabled = 0x188;
        inline constexpr uintptr_t JSONDecode = 0x160;
        inline constexpr uintptr_t JSONDecodeAsync = 0x108;
        inline constexpr uintptr_t JSONEncode = 0x168;
        inline constexpr uintptr_t JSONEncodeAsync = 0x110;
        inline constexpr uintptr_t PostAsync = 0x118;
        inline constexpr uintptr_t RequestAccessTokenScopesAsync = 0x120;
        inline constexpr uintptr_t RequestAsync = 0x128;
        inline constexpr uintptr_t RequestInternal = 0x170;
        inline constexpr uintptr_t SetHttpEnabled = 0x178;
        inline constexpr uintptr_t UrlEncode = 0x180;
    }

    namespace Humanoid {
        inline constexpr uintptr_t AddAccessory = 0x140;
        inline constexpr uintptr_t AddCustomStatus = 0x148;
        inline constexpr uintptr_t AddStatus = 0x150;
        inline constexpr uintptr_t AnimationPlayed = 0x410;
        inline constexpr uintptr_t ApplyAvatarRules = 0x100;
        inline constexpr uintptr_t ApplyDescription = 0x108;
        inline constexpr uintptr_t ApplyDescriptionAsync = 0x110;
        inline constexpr uintptr_t ApplyDescriptionFinished = 0x418;
        inline constexpr uintptr_t ApplyDescriptionReset = 0x118;
        inline constexpr uintptr_t ApplyDescriptionResetAsync = 0x120;
        inline constexpr uintptr_t AutoJumpEnabled = 0x1c4;
        inline constexpr uintptr_t AutoRotate = 0x1c5;
        inline constexpr uintptr_t AutomaticScalingEnabled = 0x1c6;
        inline constexpr uintptr_t BreakJointsOnDeath = 0x1c7;
        inline constexpr uintptr_t BuildRigFromAttachments = 0x158;
        inline constexpr uintptr_t CameraMaxDistance = 0x270;
        inline constexpr uintptr_t CameraMinDistance = 0x278;
        inline constexpr uintptr_t CameraMode = 0x280;
        inline constexpr uintptr_t CameraOffset = 0x118;
        inline constexpr uintptr_t ChangeState = 0x160;
        inline constexpr uintptr_t Climbing = 0x420;
        inline constexpr uintptr_t ClusterCompositionFinished = 0x428;
        inline constexpr uintptr_t CollisionType = 0x290;
        inline constexpr uintptr_t ComputeOriginalSizeForPart = 0x168;
        inline constexpr uintptr_t ComputeR15BodyBoundingBox = 0x170;
        inline constexpr uintptr_t CustomStatusAdded = 0x430;
        inline constexpr uintptr_t CustomStatusRemoved = 0x438;
        inline constexpr uintptr_t Died = 0x440;
        inline constexpr uintptr_t DisplayDistanceType = 0x170;
        inline constexpr uintptr_t DisplayName = 0xa8;
        inline constexpr uintptr_t EmoteTriggered = 0x448;
        inline constexpr uintptr_t EquipTool = 0x178;
        inline constexpr uintptr_t EvaluateStateMachine = 0x1c8;
        inline constexpr uintptr_t FallingDown = 0x450;
        inline constexpr uintptr_t FinishedState = 0x2b0;
        inline constexpr uintptr_t FloorMaterial = 0x174;
        inline constexpr uintptr_t FreeFalling = 0x458;
        inline constexpr uintptr_t GetAccessories = 0x180;
        inline constexpr uintptr_t GetAccessoryHandleScale = 0x188;
        inline constexpr uintptr_t GetAppliedDescription = 0x190;
        inline constexpr uintptr_t GetBodyPartR15 = 0x198;
        inline constexpr uintptr_t GetLimb = 0x1a0;
        inline constexpr uintptr_t GetMoveVelocity = 0x1a8;
        inline constexpr uintptr_t GetPlayingAnimationTracks = 0x1b0;
        inline constexpr uintptr_t GetRelativeVelocityAtFloor = 0x1b8;
        inline constexpr uintptr_t GetState = 0x1c0;
        inline constexpr uintptr_t GetStateEnabled = 0x1c8;
        inline constexpr uintptr_t GetStatuses = 0x1d0;
        inline constexpr uintptr_t GettingUp = 0x460;
        inline constexpr uintptr_t HasCustomStatus = 0x1d8;
        inline constexpr uintptr_t HasStatus = 0x1e0;
        inline constexpr uintptr_t Health = 0x180;
        inline constexpr uintptr_t HealthChanged = 0x468;
        inline constexpr uintptr_t HealthDisplayDistance = 0x178;
        inline constexpr uintptr_t HealthDisplayType = 0x17c;
        inline constexpr uintptr_t Health_XML = 0x2d8;
        inline constexpr uintptr_t HipHeight = 0x184;
        inline constexpr uintptr_t HumanoidRootPart = 0x458;
        inline constexpr uintptr_t HumanoidState = 0x8a0;
        inline constexpr uintptr_t HumanoidStateID = 0x20;
        inline constexpr uintptr_t InternalBodyScale = 0x2e8;
        inline constexpr uintptr_t InternalDisplayName = 0x2f0;
        inline constexpr uintptr_t InternalHeadScale = 0x2f8;
        inline constexpr uintptr_t InternalOriginalHipHeight = 0x300;
        inline constexpr uintptr_t IsWalking = 0xa1f;
        inline constexpr uintptr_t Jump = 0x1ca;
        inline constexpr uintptr_t JumpHeight = 0x190;
        inline constexpr uintptr_t JumpPower = 0x194;
        inline constexpr uintptr_t JumpReplicate = 0x320;
        inline constexpr uintptr_t Jumping = 0x470;
        inline constexpr uintptr_t LeftLeg = 0x328;
        inline constexpr uintptr_t LoadAnimation = 0x1e8;
        inline constexpr uintptr_t MaxHealth = 0x198;
        inline constexpr uintptr_t MaxSlopeAngle = 0x19c;
        inline constexpr uintptr_t Move = 0x1f0;
        inline constexpr uintptr_t MoveDirection = 0x130;
        inline constexpr uintptr_t MoveDirectionInternal = 0x348;
        inline constexpr uintptr_t MoveTo = 0x1f8;
        inline constexpr uintptr_t MoveToFinished = 0x478;
        inline constexpr uintptr_t MoveToPart = 0x108;
        inline constexpr uintptr_t MoveToPoint = 0x154;
        inline constexpr uintptr_t NameDisplayDistance = 0x1a0;
        inline constexpr uintptr_t NameOcclusion = 0x1a4;
        inline constexpr uintptr_t NetworkHumanoidState = 0x360;
        inline constexpr uintptr_t NoFloorTimerState = 0x368;
        inline constexpr uintptr_t OverrideDefaultCollisions = 0x370;
        inline constexpr uintptr_t PlatformStand = 0x1cc;
        inline constexpr uintptr_t PlatformStanding = 0x480;
        inline constexpr uintptr_t PlatformStatePointer = 0x5ab900cc;
        inline constexpr uintptr_t PlayEmote = 0x128;
        inline constexpr uintptr_t PlayEmoteAndGetAnimTrackById = 0x130;
        inline constexpr uintptr_t PlayEmoteAsync = 0x138;
        inline constexpr uintptr_t Ragdoll = 0x488;
        inline constexpr uintptr_t RemoveAccessories = 0x200;
        inline constexpr uintptr_t RemoveCustomStatus = 0x208;
        inline constexpr uintptr_t RemoveStatus = 0x210;
        inline constexpr uintptr_t ReplaceBodyPartR15 = 0x218;
        inline constexpr uintptr_t RequiresNeck = 0x1cd;
        inline constexpr uintptr_t RigType = 0x1b0;
        inline constexpr uintptr_t RightLeg = 0x390;
        inline constexpr uintptr_t RootPart = 0x398;
        inline constexpr uintptr_t RotationType = 0x3a0;
        inline constexpr uintptr_t Running = 0x490;
        inline constexpr uintptr_t SeatPart = 0xf8;
        inline constexpr uintptr_t Seated = 0x498;
        inline constexpr uintptr_t SelectionPartLasso = 0x550;
        inline constexpr uintptr_t ServerApplyDescription = 0x4a0;
        inline constexpr uintptr_t ServerBreakJoints = 0x4a8;
        inline constexpr uintptr_t ServerEquipTool = 0x4b0;
        inline constexpr uintptr_t ServerResetCharacter = 0x4b8;
        inline constexpr uintptr_t SetClickToWalkEnabled = 0x220;
        inline constexpr uintptr_t SetStateEnabled = 0x228;
        inline constexpr uintptr_t Sit = 0x1cd;
        inline constexpr uintptr_t StateChanged = 0x4c0;
        inline constexpr uintptr_t StateEnabledChanged = 0x4c8;
        inline constexpr uintptr_t StatusAdded = 0x4d0;
        inline constexpr uintptr_t StatusRemoved = 0x4d8;
        inline constexpr uintptr_t Strafe = 0x3b8;
        inline constexpr uintptr_t Strafing = 0x4e0;
        inline constexpr uintptr_t Swimming = 0x4e8;
        inline constexpr uintptr_t TakeDamage = 0x230;
        inline constexpr uintptr_t TargetPoint = 0x13c;
        inline constexpr uintptr_t TimerState = 0x3c8;
        inline constexpr uintptr_t Torso = 0x3d0;
        inline constexpr uintptr_t Touched = 0x4f0;
        inline constexpr uintptr_t UnequipTools = 0x238;
        inline constexpr uintptr_t UseJumpPower = 0x1d0;
        inline constexpr uintptr_t WalkAngleError = 0x3e0;
        inline constexpr uintptr_t WalkDirection = 0x3e8;
        inline constexpr uintptr_t WalkSpeed = 0x1c0;
        inline constexpr uintptr_t WalkSpeedCheck = 0x39c;
        inline constexpr uintptr_t WalkTimer = 0x0;
        inline constexpr uintptr_t WalkToPart = 0x3f8;
        inline constexpr uintptr_t WalkToPoint = 0x154;
        inline constexpr uintptr_t Walkspeed = 0x1c0;
        inline constexpr uintptr_t WalkspeedCheck = 0x39c;
        inline constexpr uintptr_t loadAnimation = 0x240;
        inline constexpr uintptr_t maxHealth = 0x408;
        inline constexpr uintptr_t takeDamage = 0x248;
    }

    namespace HumanoidDescription {
        inline constexpr uintptr_t AccessoryBlob = 0x140;
        inline constexpr uintptr_t AddEmote = 0x100;
        inline constexpr uintptr_t BackAccessory = 0x148;
        inline constexpr uintptr_t BodyTypeScale = 0x150;
        inline constexpr uintptr_t ClimbAnimation = 0x158;
        inline constexpr uintptr_t DepthScale = 0x160;
        inline constexpr uintptr_t EmotesChanged = 0x2a8;
        inline constexpr uintptr_t EmotesDataInternal = 0x168;
        inline constexpr uintptr_t EquippedEmotesChanged = 0x2b0;
        inline constexpr uintptr_t EquippedEmotesDataInternal = 0x170;
        inline constexpr uintptr_t Face = 0x178;
        inline constexpr uintptr_t FaceAccessory = 0x180;
        inline constexpr uintptr_t FallAnimation = 0x188;
        inline constexpr uintptr_t FrontAccessory = 0x190;
        inline constexpr uintptr_t GetAccessories = 0x108;
        inline constexpr uintptr_t GetEmotes = 0x110;
        inline constexpr uintptr_t GetEquippedEmotes = 0x118;
        inline constexpr uintptr_t GraphicTShirt = 0x198;
        inline constexpr uintptr_t HairAccessory = 0x1a0;
        inline constexpr uintptr_t HatAccessory = 0x1a8;
        inline constexpr uintptr_t Head = 0x1b0;
        inline constexpr uintptr_t HeadColor = 0x1b8;
        inline constexpr uintptr_t HeadScale = 0x1c0;
        inline constexpr uintptr_t HeightScale = 0x1c8;
        inline constexpr uintptr_t IdleAnimation = 0x1d0;
        inline constexpr uintptr_t JumpAnimation = 0x1d8;
        inline constexpr uintptr_t LeftArm = 0x1e0;
        inline constexpr uintptr_t LeftArmColor = 0x1e8;
        inline constexpr uintptr_t LeftLeg = 0x1f0;
        inline constexpr uintptr_t LeftLegColor = 0x1f8;
        inline constexpr uintptr_t MoodAnimation = 0x200;
        inline constexpr uintptr_t NeckAccessory = 0x208;
        inline constexpr uintptr_t NumberEmotesLoaded = 0x210;
        inline constexpr uintptr_t Pants = 0x218;
        inline constexpr uintptr_t ProportionScale = 0x220;
        inline constexpr uintptr_t RemoveEmote = 0x120;
        inline constexpr uintptr_t ResetIncludesBodyParts = 0x228;
        inline constexpr uintptr_t RightArm = 0x230;
        inline constexpr uintptr_t RightArmColor = 0x238;
        inline constexpr uintptr_t RightLeg = 0x240;
        inline constexpr uintptr_t RightLegColor = 0x248;
        inline constexpr uintptr_t RunAnimation = 0x250;
        inline constexpr uintptr_t SetAccessories = 0x128;
        inline constexpr uintptr_t SetEmotes = 0x130;
        inline constexpr uintptr_t SetEquippedEmotes = 0x138;
        inline constexpr uintptr_t Shirt = 0x258;
        inline constexpr uintptr_t ShouldersAccessory = 0x260;
        inline constexpr uintptr_t StaticFacialAnimation = 0x268;
        inline constexpr uintptr_t SwimAnimation = 0x270;
        inline constexpr uintptr_t Torso = 0x278;
        inline constexpr uintptr_t TorsoColor = 0x280;
        inline constexpr uintptr_t UseAvatarSettings = 0x288;
        inline constexpr uintptr_t WaistAccessory = 0x290;
        inline constexpr uintptr_t WalkAnimation = 0x298;
        inline constexpr uintptr_t WidthScale = 0x2a0;
    }

    namespace HumanoidRigDescription {
        inline constexpr uintptr_t AutoRig = 0x100;
        inline constexpr uintptr_t Chest = 0x1a0;
        inline constexpr uintptr_t ChestRangeMax = 0x1a8;
        inline constexpr uintptr_t ChestRangeMin = 0x1b0;
        inline constexpr uintptr_t ChestSize = 0x1b8;
        inline constexpr uintptr_t ChestTposeAdjustment = 0x1c0;
        inline constexpr uintptr_t GetContainedJointLabels = 0x108;
        inline constexpr uintptr_t GetJoint = 0x110;
        inline constexpr uintptr_t GetJointFromName = 0x118;
        inline constexpr uintptr_t GetJointLabels = 0x120;
        inline constexpr uintptr_t GetJointNames = 0x128;
        inline constexpr uintptr_t GetJointRangeMax = 0x130;
        inline constexpr uintptr_t GetJointRangeMin = 0x138;
        inline constexpr uintptr_t GetJointSize = 0x140;
        inline constexpr uintptr_t GetR15JointLabels = 0x148;
        inline constexpr uintptr_t GetR15JointNames = 0x150;
        inline constexpr uintptr_t GetR6JointLabels = 0x158;
        inline constexpr uintptr_t GetR6JointNames = 0x160;
        inline constexpr uintptr_t GetTposeAdjustment = 0x168;
        inline constexpr uintptr_t HeadBase = 0x1c8;
        inline constexpr uintptr_t HeadBaseRangeMax = 0x1d0;
        inline constexpr uintptr_t HeadBaseRangeMin = 0x1d8;
        inline constexpr uintptr_t HeadBaseSize = 0x1e0;
        inline constexpr uintptr_t HeadBaseTposeAdjustment = 0x1e8;
        inline constexpr uintptr_t LeftAnkle = 0x1f0;
        inline constexpr uintptr_t LeftAnkleRangeMax = 0x1f8;
        inline constexpr uintptr_t LeftAnkleRangeMin = 0x200;
        inline constexpr uintptr_t LeftAnkleSize = 0x208;
        inline constexpr uintptr_t LeftAnkleTposeAdjustment = 0x210;
        inline constexpr uintptr_t LeftClavicle = 0x218;
        inline constexpr uintptr_t LeftClavicleRangeMax = 0x220;
        inline constexpr uintptr_t LeftClavicleRangeMin = 0x228;
        inline constexpr uintptr_t LeftClavicleSize = 0x230;
        inline constexpr uintptr_t LeftClavicleTposeAdjustment = 0x238;
        inline constexpr uintptr_t LeftElbow = 0x240;
        inline constexpr uintptr_t LeftElbowRangeMax = 0x248;
        inline constexpr uintptr_t LeftElbowRangeMin = 0x250;
        inline constexpr uintptr_t LeftElbowSize = 0x258;
        inline constexpr uintptr_t LeftElbowTposeAdjustment = 0x260;
        inline constexpr uintptr_t LeftHip = 0x268;
        inline constexpr uintptr_t LeftHipRangeMax = 0x270;
        inline constexpr uintptr_t LeftHipRangeMin = 0x278;
        inline constexpr uintptr_t LeftHipSize = 0x280;
        inline constexpr uintptr_t LeftHipTposeAdjustment = 0x288;
        inline constexpr uintptr_t LeftKnee = 0x290;
        inline constexpr uintptr_t LeftKneeRangeMax = 0x298;
        inline constexpr uintptr_t LeftKneeRangeMin = 0x2a0;
        inline constexpr uintptr_t LeftKneeSize = 0x2a8;
        inline constexpr uintptr_t LeftKneeTposeAdjustment = 0x2b0;
        inline constexpr uintptr_t LeftShoulder = 0x2b8;
        inline constexpr uintptr_t LeftShoulderRangeMax = 0x2c0;
        inline constexpr uintptr_t LeftShoulderRangeMin = 0x2c8;
        inline constexpr uintptr_t LeftShoulderSize = 0x2d0;
        inline constexpr uintptr_t LeftShoulderTposeAdjustment = 0x2d8;
        inline constexpr uintptr_t LeftToeBase = 0x2e0;
        inline constexpr uintptr_t LeftToeBaseRangeMax = 0x2e8;
        inline constexpr uintptr_t LeftToeBaseRangeMin = 0x2f0;
        inline constexpr uintptr_t LeftToeBaseSize = 0x2f8;
        inline constexpr uintptr_t LeftToeBaseTposeAdjustment = 0x300;
        inline constexpr uintptr_t LeftWrist = 0x308;
        inline constexpr uintptr_t LeftWristRangeMax = 0x310;
        inline constexpr uintptr_t LeftWristRangeMin = 0x318;
        inline constexpr uintptr_t LeftWristSize = 0x320;
        inline constexpr uintptr_t LeftWristTposeAdjustment = 0x328;
        inline constexpr uintptr_t Neck = 0x330;
        inline constexpr uintptr_t NeckRangeMax = 0x338;
        inline constexpr uintptr_t NeckRangeMin = 0x340;
        inline constexpr uintptr_t NeckSize = 0x348;
        inline constexpr uintptr_t NeckTposeAdjustment = 0x350;
        inline constexpr uintptr_t OriginOffset = 0x358;
        inline constexpr uintptr_t RightAnkle = 0x360;
        inline constexpr uintptr_t RightAnkleRangeMax = 0x368;
        inline constexpr uintptr_t RightAnkleRangeMin = 0x370;
        inline constexpr uintptr_t RightAnkleSize = 0x378;
        inline constexpr uintptr_t RightAnkleTposeAdjustment = 0x380;
        inline constexpr uintptr_t RightClavicle = 0x388;
        inline constexpr uintptr_t RightClavicleRangeMax = 0x390;
        inline constexpr uintptr_t RightClavicleRangeMin = 0x398;
        inline constexpr uintptr_t RightClavicleSize = 0x3a0;
        inline constexpr uintptr_t RightClavicleTposeAdjustment = 0x3a8;
        inline constexpr uintptr_t RightElbow = 0x3b0;
        inline constexpr uintptr_t RightElbowRangeMax = 0x3b8;
        inline constexpr uintptr_t RightElbowRangeMin = 0x3c0;
        inline constexpr uintptr_t RightElbowSize = 0x3c8;
        inline constexpr uintptr_t RightElbowTposeAdjustment = 0x3d0;
        inline constexpr uintptr_t RightHip = 0x3d8;
        inline constexpr uintptr_t RightHipRangeMax = 0x3e0;
        inline constexpr uintptr_t RightHipRangeMin = 0x3e8;
        inline constexpr uintptr_t RightHipSize = 0x3f0;
        inline constexpr uintptr_t RightHipTposeAdjustment = 0x3f8;
        inline constexpr uintptr_t RightKnee = 0x400;
        inline constexpr uintptr_t RightKneeRangeMax = 0x408;
        inline constexpr uintptr_t RightKneeRangeMin = 0x410;
        inline constexpr uintptr_t RightKneeSize = 0x418;
        inline constexpr uintptr_t RightKneeTposeAdjustment = 0x420;
        inline constexpr uintptr_t RightShoulder = 0x428;
        inline constexpr uintptr_t RightShoulderRangeMax = 0x430;
        inline constexpr uintptr_t RightShoulderRangeMin = 0x438;
        inline constexpr uintptr_t RightShoulderSize = 0x440;
        inline constexpr uintptr_t RightShoulderTposeAdjustment = 0x448;
        inline constexpr uintptr_t RightToeBase = 0x450;
        inline constexpr uintptr_t RightToeBaseRangeMax = 0x458;
        inline constexpr uintptr_t RightToeBaseRangeMin = 0x460;
        inline constexpr uintptr_t RightToeBaseSize = 0x468;
        inline constexpr uintptr_t RightToeBaseTposeAdjustment = 0x470;
        inline constexpr uintptr_t RightWrist = 0x478;
        inline constexpr uintptr_t RightWristRangeMax = 0x480;
        inline constexpr uintptr_t RightWristRangeMin = 0x488;
        inline constexpr uintptr_t RightWristSize = 0x490;
        inline constexpr uintptr_t RightWristTposeAdjustment = 0x498;
        inline constexpr uintptr_t Root = 0x4a0;
        inline constexpr uintptr_t RootRangeMax = 0x4a8;
        inline constexpr uintptr_t RootRangeMin = 0x4b0;
        inline constexpr uintptr_t RootSize = 0x4b8;
        inline constexpr uintptr_t RootTposeAdjustment = 0x4c0;
        inline constexpr uintptr_t SetJoint = 0x170;
        inline constexpr uintptr_t SetJointRangeMax = 0x178;
        inline constexpr uintptr_t SetJointRangeMin = 0x180;
        inline constexpr uintptr_t SetJointSize = 0x188;
        inline constexpr uintptr_t SetTposeAdjustment = 0x190;
        inline constexpr uintptr_t ShowVolumes = 0x198;
        inline constexpr uintptr_t Spine = 0x4c8;
        inline constexpr uintptr_t SpineRangeMax = 0x4d0;
        inline constexpr uintptr_t SpineRangeMin = 0x4d8;
        inline constexpr uintptr_t SpineSize = 0x4e0;
        inline constexpr uintptr_t SpineTposeAdjustment = 0x4e8;
        inline constexpr uintptr_t Waist = 0x4f0;
        inline constexpr uintptr_t WaistRangeMax = 0x4f8;
        inline constexpr uintptr_t WaistRangeMin = 0x500;
        inline constexpr uintptr_t WaistSize = 0x508;
        inline constexpr uintptr_t WaistTposeAdjustment = 0x510;
    }

    namespace ICreator {
        inline constexpr uintptr_t Create = 0x0;
    }

    namespace IKControl {
        inline constexpr uintptr_t ChainRoot = 0x138;
        inline constexpr uintptr_t Enabled = 0x140;
        inline constexpr uintptr_t EndEffector = 0x148;
        inline constexpr uintptr_t EndEffectorOffset = 0x150;
        inline constexpr uintptr_t GetChainCount = 0x100;
        inline constexpr uintptr_t GetChainLength = 0x108;
        inline constexpr uintptr_t GetNodeLocalCFrame = 0x110;
        inline constexpr uintptr_t GetNodeWorldCFrame = 0x118;
        inline constexpr uintptr_t GetRawFinalTarget = 0x120;
        inline constexpr uintptr_t GetSmoothedFinalTarget = 0x128;
        inline constexpr uintptr_t Offset = 0x158;
        inline constexpr uintptr_t Pole = 0x160;
        inline constexpr uintptr_t Priority = 0x168;
        inline constexpr uintptr_t SmoothTime = 0x170;
        inline constexpr uintptr_t Solve = 0x130;
        inline constexpr uintptr_t Target = 0x178;
        inline constexpr uintptr_t Type = 0x180;
        inline constexpr uintptr_t Weight = 0x188;
    }

    namespace INFO {
        inline constexpr uintptr_t MESSAGE = 0x110;
        inline constexpr uintptr_t WARN = 0x108;
        inline constexpr uintptr_t WARNING = 0x100;
    }

    namespace IXPService {
        inline constexpr uintptr_t ClearCreatorLayers = 0x100;
        inline constexpr uintptr_t ClearUserLayers = 0x108;
        inline constexpr uintptr_t GenerateVoxels = 0x1c0;
        inline constexpr uintptr_t GetBrowserTrackerLayerLoadingStatus = 0x110;
        inline constexpr uintptr_t GetBrowserTrackerLayerVariables = 0x118;
        inline constexpr uintptr_t GetBrowserTrackerStatusForLayer = 0x120;
        inline constexpr uintptr_t GetCreatorLayerLoadingStatus = 0x128;
        inline constexpr uintptr_t GetCreatorLayerVariables = 0x130;
        inline constexpr uintptr_t GetCreatorStatusForLayer = 0x138;
        inline constexpr uintptr_t GetRegisteredCreatorLayersToStatus = 0x140;
        inline constexpr uintptr_t GetRegisteredUserLayersToStatus = 0x148;
        inline constexpr uintptr_t GetUserLayerLoadingStatus = 0x150;
        inline constexpr uintptr_t GetUserLayerVariables = 0x158;
        inline constexpr uintptr_t GetUserStatusForLayer = 0x160;
        inline constexpr uintptr_t InitializeCreatorLayers = 0x168;
        inline constexpr uintptr_t InitializeUserLayers = 0x170;
        inline constexpr uintptr_t LogBrowserTrackerLayerExposure = 0x178;
        inline constexpr uintptr_t LogCreatorLayerExposure = 0x180;
        inline constexpr uintptr_t LogFlagLinkedUserLayerExposure = 0x188;
        inline constexpr uintptr_t LogUserLayerExposure = 0x190;
        inline constexpr uintptr_t OnBrowserTrackerLayerLoadingStatusChanged = 0x1a8;
        inline constexpr uintptr_t OnCreatorLayerLoadingStatusChanged = 0x1b0;
        inline constexpr uintptr_t OnUserLayerLoadingStatusChanged = 0x1b8;
        inline constexpr uintptr_t RegisterCreatorLayers = 0x198;
        inline constexpr uintptr_t RegisterUserLayers = 0x1a0;
    }

    namespace Icon {
        inline constexpr uintptr_t Mouse = 0x100;
        inline constexpr uintptr_t PluginMenu = 0x108;
        inline constexpr uintptr_t PluginToolbarButton = 0x110;
    }

    namespace Image {
        inline constexpr uintptr_t ImageButton = 0x100;
        inline constexpr uintptr_t ImageHandleAdornment = 0x108;
        inline constexpr uintptr_t ImageLabel = 0x110;
    }

    namespace ImageButton {
        inline constexpr uintptr_t ContentImageSize = 0x108;
        inline constexpr uintptr_t HoverImage = 0x110;
        inline constexpr uintptr_t HoverImageContent = 0x118;
        inline constexpr uintptr_t Image = 0x120;
        inline constexpr uintptr_t ImageColor3 = 0x128;
        inline constexpr uintptr_t ImageContent = 0x130;
        inline constexpr uintptr_t ImageRectOffset = 0x138;
        inline constexpr uintptr_t ImageRectSize = 0x140;
        inline constexpr uintptr_t ImageTransparency = 0x148;
        inline constexpr uintptr_t IsLoaded = 0x150;
        inline constexpr uintptr_t LocalizedImageContent = 0x158;
        inline constexpr uintptr_t PressedImage = 0x160;
        inline constexpr uintptr_t PressedImageContent = 0x168;
        inline constexpr uintptr_t ResampleMode = 0x170;
        inline constexpr uintptr_t ScaleType = 0x178;
        inline constexpr uintptr_t SetEnableContentImageSizeChangedEvents = 0x100;
        inline constexpr uintptr_t SliceCenter = 0x180;
        inline constexpr uintptr_t SliceScale = 0x188;
        inline constexpr uintptr_t TileSize = 0x190;
    }

    namespace ImageColor3 {
        inline constexpr uintptr_t ImageButton = 0x100;
        inline constexpr uintptr_t ImageLabel = 0x108;
        inline constexpr uintptr_t InputActionLabel = 0x110;
        inline constexpr uintptr_t ViewportFrame = 0x118;
    }

    namespace ImageContent {
        inline constexpr uintptr_t ImageButton = 0x100;
        inline constexpr uintptr_t ImageHandleAdornment = 0x108;
        inline constexpr uintptr_t ImageLabel = 0x110;
    }

    namespace ImageHandleAdornment {
        inline constexpr uintptr_t Image = 0x100;
        inline constexpr uintptr_t ImageContent = 0x108;
        inline constexpr uintptr_t Size = 0x110;
    }

    namespace ImageLabel {
        inline constexpr uintptr_t ContentImageSize = 0x108;
        inline constexpr uintptr_t Image = 0x110;
        inline constexpr uintptr_t ImageColor3 = 0x118;
        inline constexpr uintptr_t ImageContent = 0x120;
        inline constexpr uintptr_t ImageRectOffset = 0x128;
        inline constexpr uintptr_t ImageRectSize = 0x130;
        inline constexpr uintptr_t ImageTransparency = 0x138;
        inline constexpr uintptr_t IsLoaded = 0x140;
        inline constexpr uintptr_t LocalizedImageContent = 0x148;
        inline constexpr uintptr_t ResampleMode = 0x150;
        inline constexpr uintptr_t ScaleType = 0x158;
        inline constexpr uintptr_t SetEnableContentImageSizeChangedEvents = 0x100;
        inline constexpr uintptr_t SliceCenter = 0x160;
        inline constexpr uintptr_t SliceScale = 0x168;
        inline constexpr uintptr_t TileSize = 0x170;
    }

    namespace ImageTransparency {
        inline constexpr uintptr_t ImageButton = 0x100;
        inline constexpr uintptr_t ImageLabel = 0x108;
        inline constexpr uintptr_t InputActionLabel = 0x110;
        inline constexpr uintptr_t ViewportFrame = 0x118;
    }

    namespace IncrementAsync {
        inline constexpr uintptr_t GlobalDataStore = 0x100;
        inline constexpr uintptr_t MemoryStoreHashMap = 0x108;
    }

    namespace IncrementalPatchBuilder {
        inline constexpr uintptr_t AddPathsToBundle = 0x100;
        inline constexpr uintptr_t BuildDebouncePeriod = 0x108;
        inline constexpr uintptr_t HighCompression = 0x110;
        inline constexpr uintptr_t SerializePatch = 0x118;
        inline constexpr uintptr_t UseFileLevelCompressionInsteadOfChunk = 0x120;
        inline constexpr uintptr_t ZstdCompression = 0x128;
    }

    namespace Info {
        inline constexpr uintptr_t LogService = 0x100;
        inline constexpr uintptr_t Logger = 0x108;
    }

    namespace InputAction {
        inline constexpr uintptr_t BoolState = 0x120;
        inline constexpr uintptr_t Direction1DState = 0x128;
        inline constexpr uintptr_t Direction2DState = 0x130;
        inline constexpr uintptr_t Direction3DState = 0x138;
        inline constexpr uintptr_t DisplayName = 0x140;
        inline constexpr uintptr_t Enabled = 0x148;
        inline constexpr uintptr_t Fire = 0x100;
        inline constexpr uintptr_t GetInputBindings = 0x108;
        inline constexpr uintptr_t GetPreferredBindingList = 0x110;
        inline constexpr uintptr_t GetState = 0x118;
        inline constexpr uintptr_t InputActionLabel = 0x188;
        inline constexpr uintptr_t InputBindingsChanged = 0x168;
        inline constexpr uintptr_t PreferredBinding = 0x150;
        inline constexpr uintptr_t Pressed = 0x170;
        inline constexpr uintptr_t Released = 0x178;
        inline constexpr uintptr_t StateChanged = 0x180;
        inline constexpr uintptr_t Type = 0x158;
        inline constexpr uintptr_t ViewportPositionState = 0x160;
    }

    namespace InputActionLabel {
        inline constexpr uintptr_t FontFace = 0x100;
        inline constexpr uintptr_t ImageColor3 = 0x108;
        inline constexpr uintptr_t ImageTransparency = 0x110;
        inline constexpr uintptr_t InputAction = 0x118;
        inline constexpr uintptr_t ResolvedImageContent = 0x120;
        inline constexpr uintptr_t ResolvedText = 0x128;
        inline constexpr uintptr_t TextColor3 = 0x130;
        inline constexpr uintptr_t TextSize = 0x138;
        inline constexpr uintptr_t TextTransparency = 0x140;
        inline constexpr uintptr_t TextWrapped = 0x148;
        inline constexpr uintptr_t TextXAlignment = 0x150;
        inline constexpr uintptr_t TextYAlignment = 0x158;
    }

    namespace InputBegan {
        inline constexpr uintptr_t GuiObject = 0x100;
        inline constexpr uintptr_t PluginGui = 0x108;
        inline constexpr uintptr_t UserInputService = 0x110;
    }

    namespace InputBinding {
        inline constexpr uintptr_t Backward = 0x108;
        inline constexpr uintptr_t ClampMagnitudeToOne = 0x110;
        inline constexpr uintptr_t DisplayImage = 0x118;
        inline constexpr uintptr_t DisplayName = 0x120;
        inline constexpr uintptr_t Down = 0x128;
        inline constexpr uintptr_t Fire = 0x100;
        inline constexpr uintptr_t Forward = 0x130;
        inline constexpr uintptr_t KeyCode = 0x138;
        inline constexpr uintptr_t Left = 0x140;
        inline constexpr uintptr_t PointerIndex = 0x148;
        inline constexpr uintptr_t PressedThreshold = 0x150;
        inline constexpr uintptr_t PrimaryModifier = 0x158;
        inline constexpr uintptr_t ReleasedThreshold = 0x160;
        inline constexpr uintptr_t ResponseCurve = 0x168;
        inline constexpr uintptr_t Right = 0x170;
        inline constexpr uintptr_t Scale = 0x178;
        inline constexpr uintptr_t SecondaryModifier = 0x180;
        inline constexpr uintptr_t Type = 0x188;
        inline constexpr uintptr_t UIButton = 0x190;
        inline constexpr uintptr_t UIModifier = 0x198;
        inline constexpr uintptr_t Up = 0x1a0;
        inline constexpr uintptr_t Vector2Scale = 0x1a8;
        inline constexpr uintptr_t Vector3Scale = 0x1b0;
    }

    namespace InputChanged {
        inline constexpr uintptr_t GuiObject = 0x100;
        inline constexpr uintptr_t PluginGui = 0x108;
        inline constexpr uintptr_t UserInputService = 0x110;
    }

    namespace InputContext {
        inline constexpr uintptr_t Enabled = 0x108;
        inline constexpr uintptr_t GetInputActions = 0x100;
        inline constexpr uintptr_t InputActionsChanged = 0x120;
        inline constexpr uintptr_t Priority = 0x110;
        inline constexpr uintptr_t Sink = 0x118;
    }

    namespace InputEnded {
        inline constexpr uintptr_t GuiObject = 0x100;
        inline constexpr uintptr_t PluginGui = 0x108;
        inline constexpr uintptr_t UserInputService = 0x110;
    }

    namespace InputObject {
        inline constexpr uintptr_t Delta = 0x108;
        inline constexpr uintptr_t IsModifierKeyDown = 0x100;
        inline constexpr uintptr_t KeyCode = 0x110;
        inline constexpr uintptr_t MousePosition = 0xd4;
        inline constexpr uintptr_t Position = 0x118;
        inline constexpr uintptr_t UserInputState = 0x120;
        inline constexpr uintptr_t UserInputType = 0x128;
    }

    namespace InsertControlPoint {
        inline constexpr uintptr_t Path2D = 0x100;
        inline constexpr uintptr_t Path3D = 0x108;
    }

    namespace InsertKey {
        inline constexpr uintptr_t FloatCurve = 0x100;
        inline constexpr uintptr_t RotationCurve = 0x108;
        inline constexpr uintptr_t ValueCurve = 0x110;
    }

    namespace InsertService {
        inline constexpr uintptr_t AllowInsertFreeModels = 0x1a8;
        inline constexpr uintptr_t ApproveAssetId = 0x180;
        inline constexpr uintptr_t ApproveAssetVersionId = 0x188;
        inline constexpr uintptr_t CreateMeshPartAsync = 0x100;
        inline constexpr uintptr_t CustomEventReceiver = 0x1b8;
        inline constexpr uintptr_t GetBaseCategories = 0x108;
        inline constexpr uintptr_t GetBaseSets = 0x110;
        inline constexpr uintptr_t GetCollection = 0x118;
        inline constexpr uintptr_t GetFreeDecals = 0x120;
        inline constexpr uintptr_t GetFreeDecalsAsync = 0x128;
        inline constexpr uintptr_t GetFreeModels = 0x130;
        inline constexpr uintptr_t GetFreeModelsAsync = 0x138;
        inline constexpr uintptr_t GetLatestAssetVersionAsync = 0x140;
        inline constexpr uintptr_t GetLocalFileContents = 0x190;
        inline constexpr uintptr_t GetUserCategories = 0x148;
        inline constexpr uintptr_t GetUserSets = 0x150;
        inline constexpr uintptr_t Insert = 0x198;
        inline constexpr uintptr_t InternalDelete = 0x1b0;
        inline constexpr uintptr_t LoadAsset = 0x158;
        inline constexpr uintptr_t LoadAssetVersion = 0x160;
        inline constexpr uintptr_t LoadAssetWithBytecodeAsync = 0x168;
        inline constexpr uintptr_t LoadAssetWithFormat = 0x170;
        inline constexpr uintptr_t LoadLocalAsset = 0x1a0;
        inline constexpr uintptr_t loadAsset = 0x178;
    }

    namespace Instance {
        inline constexpr uintptr_t AccessoryDescription = 0x3d0;
        inline constexpr uintptr_t AddTag = 0x100;
        inline constexpr uintptr_t AncestryChanged = 0x2e0;
        inline constexpr uintptr_t Archivable = 0x238;
        inline constexpr uintptr_t AttributeChanged = 0x2e8;
        inline constexpr uintptr_t AttributeContainer = 0x40;
        inline constexpr uintptr_t AttributeList = 0x10;
        inline constexpr uintptr_t AttributeToNext = 0x58;
        inline constexpr uintptr_t AttributeToValue = 0x18;
        inline constexpr uintptr_t Attributes = 0x240;
        inline constexpr uintptr_t AttributesReplicate = 0x248;
        inline constexpr uintptr_t AttributesSerialize = 0x250;
        inline constexpr uintptr_t BodyPosition = 0x3d8;
        inline constexpr uintptr_t Capabilities = 0x258;
        inline constexpr uintptr_t ChildAdded = 0x2f0;
        inline constexpr uintptr_t ChildRemoved = 0x2f8;
        inline constexpr uintptr_t ChildrenEnd = 0x8;
        inline constexpr uintptr_t ChildrenStart = 0x78;
        inline constexpr uintptr_t ChildrenStride = 0x10;
        inline constexpr uintptr_t ClassBase = 0x1b0;
        inline constexpr uintptr_t ClassByName = 0x4849190;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t ClearAllChildren = 0x108;
        inline constexpr uintptr_t Clone = 0x110;
        inline constexpr uintptr_t ComponentMap = 0x38;
        inline constexpr uintptr_t Creator_create = 0x0;
        inline constexpr uintptr_t Creator_isCreatable = 0x10;
        inline constexpr uintptr_t DataCost = 0x260;
        inline constexpr uintptr_t DefinesCapabilities = 0x268;
        inline constexpr uintptr_t DescendantAdded = 0x300;
        inline constexpr uintptr_t DescendantRemoving = 0x308;
        inline constexpr uintptr_t Destroy = 0x118;
        inline constexpr uintptr_t Destroying = 0x310;
        inline constexpr uintptr_t FindFirstAncestor = 0x120;
        inline constexpr uintptr_t FindFirstAncestorOfClass = 0x128;
        inline constexpr uintptr_t FindFirstAncestorWhichIsA = 0x130;
        inline constexpr uintptr_t FindFirstChild = 0x138;
        inline constexpr uintptr_t FindFirstChildOfClass = 0x140;
        inline constexpr uintptr_t FindFirstChildWhichIsA = 0x148;
        inline constexpr uintptr_t FindFirstDescendant = 0x150;
        inline constexpr uintptr_t FromExisting = 0x80f7c0;
        inline constexpr uintptr_t GetActor = 0x158;
        inline constexpr uintptr_t GetAttribute = 0x160;
        inline constexpr uintptr_t GetAttributeChangedSignal = 0x168;
        inline constexpr uintptr_t GetAttributes = 0x170;
        inline constexpr uintptr_t GetChildren = 0x178;
        inline constexpr uintptr_t GetDebugId = 0x180;
        inline constexpr uintptr_t GetDescendants = 0x188;
        inline constexpr uintptr_t GetFullName = 0x190;
        inline constexpr uintptr_t GetStyled = 0x198;
        inline constexpr uintptr_t GetStyledPropertyChangedSignal = 0x1a0;
        inline constexpr uintptr_t GetTags = 0x1a8;
        inline constexpr uintptr_t HasTag = 0x1b0;
        inline constexpr uintptr_t HistoryId = 0x270;
        inline constexpr uintptr_t IsAncestorOf = 0x1b8;
        inline constexpr uintptr_t IsDescendantOf = 0x1c0;
        inline constexpr uintptr_t IsInSandbox = 0x278;
        inline constexpr uintptr_t IsPropertyModified = 0x1c8;
        inline constexpr uintptr_t MakeupDescription = 0x3e0;
        inline constexpr uintptr_t Name = 0x8;
        inline constexpr uintptr_t NameContainer = 0x70;
        inline constexpr uintptr_t New = 0x36e5f60;
        inline constexpr uintptr_t Parent = 0x68;
        inline constexpr uintptr_t ParentLocked = 0x69;
        inline constexpr uintptr_t PredictionMode = 0x290;
        inline constexpr uintptr_t PropertyStatusStudio = 0x298;
        inline constexpr uintptr_t QueryDescendants = 0x1d0;
        inline constexpr uintptr_t Remove = 0x1d8;
        inline constexpr uintptr_t RemoveTag = 0x1e0;
        inline constexpr uintptr_t ResetPropertyToDefault = 0x1e8;
        inline constexpr uintptr_t RobloxLocked = 0x2a0;
        inline constexpr uintptr_t Sandboxed = 0x2a8;
        inline constexpr uintptr_t SerializedOverrides = 0x2b0;
        inline constexpr uintptr_t SetAttribute = 0x1f0;
        inline constexpr uintptr_t SetParent = 0x7e9d20;
        inline constexpr uintptr_t SourceAssetId = 0x2b8;
        inline constexpr uintptr_t StyledPropertiesChanged = 0x318;
        inline constexpr uintptr_t Tags = 0x2c0;
        inline constexpr uintptr_t This = 0x8;
        inline constexpr uintptr_t Tween = 0x3e8;
        inline constexpr uintptr_t UniqueId = 0x2c8;
        inline constexpr uintptr_t WaitForChild = 0x1f8;
        inline constexpr uintptr_t WhJobNopSlot = 0x10;
        inline constexpr uintptr_t archivable = 0x2d0;
        inline constexpr uintptr_t childAdded = 0x320;
        inline constexpr uintptr_t children = 0x200;
        inline constexpr uintptr_t clone = 0x208;
        inline constexpr uintptr_t destroy = 0x210;
        inline constexpr uintptr_t findFirstChild = 0x218;
        inline constexpr uintptr_t getChildren = 0x220;
        inline constexpr uintptr_t isDescendantOf = 0x228;
        inline constexpr uintptr_t numExpectedDirectChildren = 0x2d8;
        inline constexpr uintptr_t remove = 0x230;
    }

    namespace InstanceAdornment {
        inline constexpr uintptr_t Adornee = 0x100;
    }

    namespace InstanceExtensionsService {
        inline constexpr uintptr_t CountChildren = 0x100;
    }

    namespace IntConstrainedValue {
        inline constexpr uintptr_t Changed = 0x128;
        inline constexpr uintptr_t ConstrainedValue = 0x100;
        inline constexpr uintptr_t MaxValue = 0x108;
        inline constexpr uintptr_t MinValue = 0x110;
        inline constexpr uintptr_t Value = 0x118;
        inline constexpr uintptr_t changed = 0x130;
        inline constexpr uintptr_t value = 0x120;
    }

    namespace IntValue {
        inline constexpr uintptr_t Changed = 0x108;
        inline constexpr uintptr_t Value = 0x100;
        inline constexpr uintptr_t changed = 0x110;
    }

    namespace Intensity {
        inline constexpr uintptr_t BloomEffect = 0x100;
        inline constexpr uintptr_t SunRaysEffect = 0x108;
    }

    namespace Interface {
        inline constexpr uintptr_t AssetDeliveryProxy = 0x100;
        inline constexpr uintptr_t Hardware = 0x108;
    }

    namespace InternalError {
        inline constexpr uintptr_t AwardedDate = 0x100;
        inline constexpr uintptr_t TargetVersionNumberIsNotOne = 0x108;
    }

    namespace InternalSyncItem {
        inline constexpr uintptr_t AutoSync = 0x100;
        inline constexpr uintptr_t Enabled = 0x108;
        inline constexpr uintptr_t Path = 0x110;
        inline constexpr uintptr_t Target = 0x118;
    }

    namespace IntersectAsync {
        inline constexpr uintptr_t BasePart = 0x100;
        inline constexpr uintptr_t GeometryService = 0x108;
    }

    namespace Invalid {
        inline constexpr uintptr_t InExperienceTexture = 0x110;
        inline constexpr uintptr_t Production = 0x108;
        inline constexpr uintptr_t _HRP = 0x100;
    }

    namespace InvalidJson {
        inline constexpr uintptr_t ParsingError = 0x100;
        inline constexpr uintptr_t featureName = 0x108;
    }

    namespace InvalidToken {
        inline constexpr uintptr_t FeatureNotAvailable = 0x100;
    }

    namespace InvalidUniverse {
        inline constexpr uintptr_t Illegible = 0x100;
    }

    namespace InvalidUser {
        inline constexpr uintptr_t InvalidCodec = 0x100;
    }

    namespace Invoke {
        inline constexpr uintptr_t BugReporterService = 0x100;
        inline constexpr uintptr_t Plugin = 0x108;
    }

    namespace IsAvailable {
        inline constexpr uintptr_t Actor = 0x110;
        inline constexpr uintptr_t AppLifecycleObserverService = 0x118;
        inline constexpr uintptr_t CallingService = 0x100;
        inline constexpr uintptr_t FacialAnimationStreamingServiceStats = 0x120;
        inline constexpr uintptr_t PinShortcutService = 0x128;
        inline constexpr uintptr_t WindowProtocolService = 0x130;
        inline constexpr uintptr_t WrapDeformer = 0x108;
    }

    namespace IsCollisionGroupRegistered {
        inline constexpr uintptr_t PhysicsService = 0x100;
        inline constexpr uintptr_t WorldRoot = 0x108;
    }

    namespace IsEnabled {
        inline constexpr uintptr_t AvatarChatService = 0x100;
        inline constexpr uintptr_t DebuggerBreakpoint = 0x110;
        inline constexpr uintptr_t Pose = 0x108;
    }

    namespace IsFocused {
        inline constexpr uintptr_t ChatInputBarConfiguration = 0x108;
        inline constexpr uintptr_t TextBox = 0x100;
    }

    namespace IsLoaded {
        inline constexpr uintptr_t AudioTextToSpeech = 0x108;
        inline constexpr uintptr_t DataModel = 0x100;
        inline constexpr uintptr_t ImageButton = 0x110;
        inline constexpr uintptr_t ImageLabel = 0x118;
        inline constexpr uintptr_t Sound = 0x120;
        inline constexpr uintptr_t VideoFrame = 0x128;
        inline constexpr uintptr_t VideoPlayer = 0x130;
    }

    namespace IsPlaceEnabled {
        inline constexpr uintptr_t AvatarChatService = 0x100;
        inline constexpr uintptr_t FacialAnimationStreamingServiceV2 = 0x108;
    }

    namespace IsPlaying {
        inline constexpr uintptr_t AnimationStreamTrack = 0x100;
        inline constexpr uintptr_t AnimationTrack = 0x108;
        inline constexpr uintptr_t AudioPlayer = 0x110;
        inline constexpr uintptr_t AudioTextToSpeech = 0x118;
        inline constexpr uintptr_t Sound = 0x120;
        inline constexpr uintptr_t VideoPlayer = 0x128;
    }

    namespace IsReady {
        inline constexpr uintptr_t AudioDeviceInput = 0x100;
        inline constexpr uintptr_t AudioPlayer = 0x108;
        inline constexpr uintptr_t VideoDisplay = 0x110;
    }

    namespace JoinGamePlaceLauncherTimeoutRetry {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace JoinInvoked {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace JoinProfilingInitialPublish {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace JoinProfilingInitialPublishStat {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace JoinSuccess {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace JointInstance {
        inline constexpr uintptr_t Active = 0x100;
        inline constexpr uintptr_t C0 = 0x108;
        inline constexpr uintptr_t C1 = 0x110;
        inline constexpr uintptr_t Enabled = 0x118;
        inline constexpr uintptr_t Part0 = 0x120;
        inline constexpr uintptr_t Part1 = 0x128;
        inline constexpr uintptr_t part1 = 0x130;
    }

    namespace JointsService {
        inline constexpr uintptr_t ClearJoinAfterMoveJoints = 0x100;
        inline constexpr uintptr_t CreateJoinAfterMoveJoints = 0x108;
        inline constexpr uintptr_t SetJoinAfterMoveInstance = 0x110;
        inline constexpr uintptr_t SetJoinAfterMoveTarget = 0x118;
        inline constexpr uintptr_t ShowPermissibleJoints = 0x120;
    }

    namespace Keyframe {
        inline constexpr uintptr_t AddMarker = 0x100;
        inline constexpr uintptr_t AddPose = 0x108;
        inline constexpr uintptr_t GetMarkers = 0x110;
        inline constexpr uintptr_t GetPoses = 0x118;
        inline constexpr uintptr_t RemoveMarker = 0x120;
        inline constexpr uintptr_t RemovePose = 0x128;
        inline constexpr uintptr_t Time = 0x130;
    }

    namespace KeyframeMarker {
        inline constexpr uintptr_t Value = 0x100;
    }

    namespace KeyframeSequence {
        inline constexpr uintptr_t AddKeyframe = 0x100;
        inline constexpr uintptr_t AuthoredHipHeight = 0x118;
        inline constexpr uintptr_t GetKeyframes = 0x108;
        inline constexpr uintptr_t RemoveKeyframe = 0x110;
    }

    namespace KeyframeSequenceProvider {
        inline constexpr uintptr_t GetAnimations = 0x100;
        inline constexpr uintptr_t GetAnimationsAsync = 0x108;
        inline constexpr uintptr_t GetKeyframeSequence = 0x118;
        inline constexpr uintptr_t GetKeyframeSequenceAsync = 0x110;
        inline constexpr uintptr_t GetKeyframeSequenceById = 0x120;
        inline constexpr uintptr_t GetMemStats = 0x128;
        inline constexpr uintptr_t RegisterActiveKeyframeSequence = 0x130;
        inline constexpr uintptr_t RegisterKeyframeSequence = 0x138;
    }

    namespace LRUHolder {
        inline constexpr uintptr_t MemEnforcedLRUCache = 0x20;
    }

    namespace LRUNode {
        inline constexpr uintptr_t AssetID = 0x10;
        inline constexpr uintptr_t CachedItem = 0x38;
        inline constexpr uintptr_t Next = 0x0;
    }

    namespace LayerCollector {
        inline constexpr uintptr_t Enabled = 0x110;
        inline constexpr uintptr_t GetGuiObjectsAtPosition = 0x100;
        inline constexpr uintptr_t GetLayoutNodeTree = 0x108;
        inline constexpr uintptr_t ResetOnSpawn = 0x118;
        inline constexpr uintptr_t TabKeyboardNavigation = 0x120;
        inline constexpr uintptr_t ZIndexBehavior = 0x128;
    }

    namespace Layout {
        inline constexpr uintptr_t AudioChannelSplitter = 0x100;
        inline constexpr uintptr_t AudioChorus = 0x108;
    }

    namespace LeftArmColor {
        inline constexpr uintptr_t BodyColors = 0x100;
        inline constexpr uintptr_t HumanoidDescription = 0x108;
    }

    namespace LeftLegColor {
        inline constexpr uintptr_t BodyColors = 0x100;
        inline constexpr uintptr_t HumanoidDescription = 0x108;
    }

    namespace Length {
        inline constexpr uintptr_t AnimationClip = 0x100;
        inline constexpr uintptr_t AnimationTrack = 0x108;
        inline constexpr uintptr_t FloatCurve = 0x110;
        inline constexpr uintptr_t LineHandleAdornment = 0x118;
        inline constexpr uintptr_t MarkerCurve = 0x120;
        inline constexpr uintptr_t RodConstraint = 0x128;
        inline constexpr uintptr_t RopeConstraint = 0x130;
        inline constexpr uintptr_t RotationCurve = 0x138;
        inline constexpr uintptr_t ValueCurve = 0x140;
    }

    namespace Level {
        inline constexpr uintptr_t AudioEcho = 0x100;
        inline constexpr uintptr_t DockWidgetPluginGui = 0x108;
    }

    namespace Light {
        inline constexpr uintptr_t Brightness = 0x100;
        inline constexpr uintptr_t Color = 0x108;
        inline constexpr uintptr_t Enabled = 0x110;
        inline constexpr uintptr_t Shadows = 0x118;
    }

    namespace LightEmission {
        inline constexpr uintptr_t Beam = 0x100;
        inline constexpr uintptr_t ParticleEmitter = 0x108;
        inline constexpr uintptr_t Trail = 0x110;
    }

    namespace LightInfluence {
        inline constexpr uintptr_t Beam = 0x100;
        inline constexpr uintptr_t BillboardGui = 0x108;
        inline constexpr uintptr_t ParticleEmitter = 0x110;
        inline constexpr uintptr_t SurfaceGui = 0x118;
        inline constexpr uintptr_t Trail = 0x120;
    }

    namespace Lighting {
        inline constexpr uintptr_t AI = 0x238;
        inline constexpr uintptr_t Ambient = 0xc0;
        inline constexpr uintptr_t Atmosphere = 0x1c8;
        inline constexpr uintptr_t Brightness = 0x108;
        inline constexpr uintptr_t ClockTime = 0xb8;
        inline constexpr uintptr_t ColorShift_Bottom = 0xd8;
        inline constexpr uintptr_t ColorShift_Top = 0xcc;
        inline constexpr uintptr_t EnvironmentDiffuseScale = 0x10c;
        inline constexpr uintptr_t EnvironmentSpecularScale = 0x110;
        inline constexpr uintptr_t ExposureCompensation = 0x114;
        inline constexpr uintptr_t ExtendLightRangeTo120 = 0x178;
        inline constexpr uintptr_t FogColor = 0xe4;
        inline constexpr uintptr_t FogEnd = 0x11c;
        inline constexpr uintptr_t FogStart = 0x120;
        inline constexpr uintptr_t GeographicLatitude = 0x124;
        inline constexpr uintptr_t GetMinutesAfterMidnight = 0x100;
        inline constexpr uintptr_t GetMoonDirection = 0x108;
        inline constexpr uintptr_t GetMoonPhase = 0x110;
        inline constexpr uintptr_t GetSunDirection = 0x118;
        inline constexpr uintptr_t GlobalShadows = 0x134;
        inline constexpr uintptr_t GradientBottom = 0x180;
        inline constexpr uintptr_t GradientTop = 0x140;
        inline constexpr uintptr_t LightColor = 0x14c;
        inline constexpr uintptr_t LightDirection = 0x158;
        inline constexpr uintptr_t LightingChanged = 0x1e8;
        inline constexpr uintptr_t LightingStyle = 0x1a8;
        inline constexpr uintptr_t MoonPosition = 0x174;
        inline constexpr uintptr_t OutdoorAmbient = 0xf0;
        inline constexpr uintptr_t Outlines = 0x1b8;
        inline constexpr uintptr_t PrioritizeLightingQuality = 0x1c0;
        inline constexpr uintptr_t SetMinutesAfterMidnight = 0x120;
        inline constexpr uintptr_t ShadowColor = 0x1c8;
        inline constexpr uintptr_t ShadowSoftness = 0x12c;
        inline constexpr uintptr_t Sky = 0x1b8;
        inline constexpr uintptr_t Source = 0x164;
        inline constexpr uintptr_t SunPosition = 0x168;
        inline constexpr uintptr_t Technology = 0x1d8;
        inline constexpr uintptr_t TimeOfDay = 0x1e0;
        inline constexpr uintptr_t getMinutesAfterMidnight = 0x128;
        inline constexpr uintptr_t setMinutesAfterMidnight = 0x130;
    }

    namespace LightingParameters {
        inline constexpr uintptr_t GeographicLatitude = 0x124;
        inline constexpr uintptr_t LightColor = 0x14c;
        inline constexpr uintptr_t LightDirection = 0x158;
        inline constexpr uintptr_t SkyAmbient = 0x140;
        inline constexpr uintptr_t SkyAmbient2 = 0x128;
        inline constexpr uintptr_t Source = 0x164;
        inline constexpr uintptr_t TrueMoonPosition = 0x174;
        inline constexpr uintptr_t TrueSunPosition = 0x168;
    }

    namespace LimitBounds {
        inline constexpr uintptr_t AvatarAccessoryRules = 0x100;
        inline constexpr uintptr_t AvatarCollisionRules = 0x108;
    }

    namespace LimitsEnabled {
        inline constexpr uintptr_t BallSocketConstraint = 0x100;
        inline constexpr uintptr_t HingeConstraint = 0x108;
        inline constexpr uintptr_t RodConstraint = 0x110;
        inline constexpr uintptr_t SlidingBallConstraint = 0x118;
        inline constexpr uintptr_t SpringConstraint = 0x120;
        inline constexpr uintptr_t TorsionSpringConstraint = 0x128;
        inline constexpr uintptr_t UniversalConstraint = 0x130;
    }

    namespace LineForce {
        inline constexpr uintptr_t ApplyAtCenterOfMass = 0x100;
        inline constexpr uintptr_t InverseSquareLaw = 0x108;
        inline constexpr uintptr_t Magnitude = 0x110;
        inline constexpr uintptr_t MaxForce = 0x118;
        inline constexpr uintptr_t ReactionForceEnabled = 0x120;
    }

    namespace LineHandleAdornment {
        inline constexpr uintptr_t Length = 0x100;
        inline constexpr uintptr_t Thickness = 0x108;
    }

    namespace LineHeight {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace LinearVelocity {
        inline constexpr uintptr_t ForceLimitMode = 0x100;
        inline constexpr uintptr_t ForceLimitsEnabled = 0x108;
        inline constexpr uintptr_t LineDirection = 0x110;
        inline constexpr uintptr_t LineVelocity = 0x118;
        inline constexpr uintptr_t MaxAxesForce = 0x120;
        inline constexpr uintptr_t MaxForce = 0x128;
        inline constexpr uintptr_t MaxPlanarAxesForce = 0x130;
        inline constexpr uintptr_t PlaneVelocity = 0x138;
        inline constexpr uintptr_t PrimaryTangentAxis = 0x140;
        inline constexpr uintptr_t ReactionForceEnabled = 0x148;
        inline constexpr uintptr_t RelativeTo = 0x150;
        inline constexpr uintptr_t SecondaryTangentAxis = 0x158;
        inline constexpr uintptr_t VectorVelocity = 0x160;
        inline constexpr uintptr_t VelocityConstraintMode = 0x168;
    }

    namespace LinkedSource {
        inline constexpr uintptr_t BaseScript = 0x100;
        inline constexpr uintptr_t ModuleScript = 0x108;
    }

    namespace LinkingService {
        inline constexpr uintptr_t DetectUrl = 0x118;
        inline constexpr uintptr_t GetAndClearLastPendingUrl = 0x120;
        inline constexpr uintptr_t GetLastLuaUrl = 0x128;
        inline constexpr uintptr_t IsUrlRegistered = 0x130;
        inline constexpr uintptr_t OnLuaUrl = 0x150;
        inline constexpr uintptr_t OpenUrl = 0x100;
        inline constexpr uintptr_t RegisterLuaUrl = 0x138;
        inline constexpr uintptr_t StartLuaUrlDelivery = 0x140;
        inline constexpr uintptr_t StopLuaUrlDelivery = 0x148;
        inline constexpr uintptr_t SupportsSwitchToSettingsApp = 0x108;
        inline constexpr uintptr_t SwitchToSettingsApp = 0x110;
    }

    namespace ListenerClosedCounter {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace LoadAnimation {
        inline constexpr uintptr_t AnimationNodeDefinition = 0x100;
        inline constexpr uintptr_t Animator = 0x108;
        inline constexpr uintptr_t Humanoid = 0x110;
    }

    namespace LoadAsync {
        inline constexpr uintptr_t AudioTextToSpeech = 0x100;
        inline constexpr uintptr_t VideoSampler = 0x108;
    }

    namespace LoadCharacterAppearance {
        inline constexpr uintptr_t Player = 0x100;
        inline constexpr uintptr_t StarterPlayer = 0x108;
    }

    namespace Loaded {
        inline constexpr uintptr_t BackpackItem = 0x100;
        inline constexpr uintptr_t DataModel = 0x108;
        inline constexpr uintptr_t PlayerGui = 0x110;
        inline constexpr uintptr_t Sound = 0x118;
        inline constexpr uintptr_t VideoFrame = 0x120;
    }

    namespace LocalScript {
        inline constexpr uintptr_t ByteCode = 0x0;
        inline constexpr uintptr_t DebuggerWatch = 0x118;
        inline constexpr uintptr_t GUID = 0xc0;
        inline constexpr uintptr_t Hash = 0x190;
    }

    namespace LocalStorageService {
        inline constexpr uintptr_t Flush = 0x100;
        inline constexpr uintptr_t GetItem = 0x108;
        inline constexpr uintptr_t ItemWasSet = 0x120;
        inline constexpr uintptr_t SetItem = 0x110;
        inline constexpr uintptr_t StoreWasCleared = 0x128;
        inline constexpr uintptr_t WhenLoaded = 0x118;
    }

    namespace LocalTransparencyModifier {
        inline constexpr uintptr_t BasePart = 0x100;
        inline constexpr uintptr_t Beam = 0x108;
        inline constexpr uintptr_t Decal = 0x110;
        inline constexpr uintptr_t Explosion = 0x118;
        inline constexpr uintptr_t Fire = 0x120;
        inline constexpr uintptr_t ParticleEmitter = 0x128;
        inline constexpr uintptr_t Smoke = 0x130;
        inline constexpr uintptr_t Sparkles = 0x138;
        inline constexpr uintptr_t Trail = 0x140;
    }

    namespace LocalizationMatchIdentifier {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace LocalizationMatchedSourceText {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace LocalizationService {
        inline constexpr uintptr_t AutoTranslateWillRun = 0x1d8;
        inline constexpr uintptr_t DynamicTranslationServerToClientResponse = 0x1e0;
        inline constexpr uintptr_t ForcePlayModeGameLocaleId = 0x178;
        inline constexpr uintptr_t ForcePlayModeRobloxLocaleId = 0x180;
        inline constexpr uintptr_t GameSourceLanguageId = 0x188;
        inline constexpr uintptr_t GetCorescriptLocalizations = 0x138;
        inline constexpr uintptr_t GetCountryRegionForPlayerAsync = 0x100;
        inline constexpr uintptr_t GetIsLoadingInternalTranslations = 0x140;
        inline constexpr uintptr_t GetTableEntries = 0x148;
        inline constexpr uintptr_t GetTranslatorForLocaleAsync = 0x108;
        inline constexpr uintptr_t GetTranslatorForPlayer = 0x150;
        inline constexpr uintptr_t GetTranslatorForPlayerAsync = 0x110;
        inline constexpr uintptr_t IsImageCaptureEnabled = 0x190;
        inline constexpr uintptr_t IsLoadingInternalTranslationsSettingChanged = 0x158;
        inline constexpr uintptr_t IsTextScraperRunning = 0x198;
        inline constexpr uintptr_t LocaleManifest = 0x1a0;
        inline constexpr uintptr_t PromptDownloadGameTableToCSV = 0x118;
        inline constexpr uintptr_t PromptExportToCSVs = 0x120;
        inline constexpr uintptr_t PromptImportFromCSVs = 0x128;
        inline constexpr uintptr_t PromptUploadCSVToGameTable = 0x130;
        inline constexpr uintptr_t RobloxForcePlayModeGameLocaleId = 0x1a8;
        inline constexpr uintptr_t RobloxForcePlayModeRobloxLocaleId = 0x1b0;
        inline constexpr uintptr_t RobloxLocaleId = 0x1b8;
        inline constexpr uintptr_t SetRobloxLocaleId = 0x160;
        inline constexpr uintptr_t ShouldUseCloudTable = 0x1c0;
        inline constexpr uintptr_t ShouldUseImageLocalizationTable = 0x1c8;
        inline constexpr uintptr_t StartTextScraper = 0x168;
        inline constexpr uintptr_t StopTextScraper = 0x170;
        inline constexpr uintptr_t SystemLocaleId = 0x1d0;
        inline constexpr uintptr_t TextScraperClientMessageWithPlayerSignal = 0x1e8;
    }

    namespace LocalizationTable {
        inline constexpr uintptr_t Contents = 0x188;
        inline constexpr uintptr_t DevelopmentLanguage = 0x190;
        inline constexpr uintptr_t GetContents = 0x100;
        inline constexpr uintptr_t GetEntries = 0x108;
        inline constexpr uintptr_t GetString = 0x110;
        inline constexpr uintptr_t GetTranslator = 0x118;
        inline constexpr uintptr_t IsExemptFromUGCAnalytics = 0x198;
        inline constexpr uintptr_t RemoveEntry = 0x120;
        inline constexpr uintptr_t RemoveEntryValue = 0x128;
        inline constexpr uintptr_t RemoveKey = 0x130;
        inline constexpr uintptr_t RemoveTargetLocale = 0x138;
        inline constexpr uintptr_t Root = 0x1a0;
        inline constexpr uintptr_t SetContents = 0x140;
        inline constexpr uintptr_t SetEntries = 0x148;
        inline constexpr uintptr_t SetEntry = 0x150;
        inline constexpr uintptr_t SetEntryContext = 0x158;
        inline constexpr uintptr_t SetEntryExample = 0x160;
        inline constexpr uintptr_t SetEntryKey = 0x168;
        inline constexpr uintptr_t SetEntrySource = 0x170;
        inline constexpr uintptr_t SetEntryValue = 0x178;
        inline constexpr uintptr_t SetIsExemptFromUGCAnalytics = 0x180;
        inline constexpr uintptr_t SourceLocaleId = 0x1a8;
    }

    namespace LodDataEntity {
        inline constexpr uintptr_t EntityData = 0x100;
        inline constexpr uintptr_t EntityLodEnabled = 0x108;
        inline constexpr uintptr_t EntityModelSize = 0x110;
        inline constexpr uintptr_t EntityPosition = 0x118;
        inline constexpr uintptr_t EntityScale = 0x120;
        inline constexpr uintptr_t EntitySource = 0x128;
        inline constexpr uintptr_t EntityVisible = 0x130;
        inline constexpr uintptr_t IsSlimEnabled = 0x138;
        inline constexpr uintptr_t SlimAnimationSource = 0x140;
        inline constexpr uintptr_t SlimReplicationTimestampSec = 0x148;
        inline constexpr uintptr_t TranscoderFailureReason = 0x150;
        inline constexpr uintptr_t TranscoderStatus = 0x158;
    }

    namespace LodDataService {
        inline constexpr uintptr_t RequestTranscoderStatusTracking = 0x100;
    }

    namespace Log {
        inline constexpr uintptr_t LogService = 0x100;
        inline constexpr uintptr_t Logger = 0x108;
    }

    namespace LogReporterService {
        inline constexpr uintptr_t ReportLog = 0x100;
        inline constexpr uintptr_t ReportMultipleLogs = 0x108;
        inline constexpr uintptr_t SubmitStratusBugReport = 0x110;
    }

    namespace LogService {
        inline constexpr uintptr_t ClearOutput = 0x108;
        inline constexpr uintptr_t Error = 0x110;
        inline constexpr uintptr_t ExecuteScript = 0x118;
        inline constexpr uintptr_t GetHttpResultHistory = 0x120;
        inline constexpr uintptr_t GetLogHistory = 0x128;
        inline constexpr uintptr_t GetLogHistoryAsync = 0x100;
        inline constexpr uintptr_t GetLogger = 0x130;
        inline constexpr uintptr_t HttpResultOut = 0x170;
        inline constexpr uintptr_t Info = 0x138;
        inline constexpr uintptr_t Log = 0x140;
        inline constexpr uintptr_t MessageOut = 0x178;
        inline constexpr uintptr_t OnHttpResultApproved = 0x180;
        inline constexpr uintptr_t Output = 0x148;
        inline constexpr uintptr_t RequestHttpResultApproved = 0x150;
        inline constexpr uintptr_t RequestHttpResultApprovedSignal = 0x188;
        inline constexpr uintptr_t RequestScriptExecutionSignal = 0x190;
        inline constexpr uintptr_t RequestServerHttpResult = 0x158;
        inline constexpr uintptr_t RequestServerHttpResultSignal = 0x198;
        inline constexpr uintptr_t RequestServerOutput = 0x160;
        inline constexpr uintptr_t RequestServerOutputSignal = 0x1a0;
        inline constexpr uintptr_t RequestSettingsChange = 0x1a8;
        inline constexpr uintptr_t ServerContextOut = 0x1b0;
        inline constexpr uintptr_t ServerHttpResultOut = 0x1b8;
        inline constexpr uintptr_t ServerMessageOut = 0x1c0;
        inline constexpr uintptr_t ServerVariantMessageOut = 0x1c8;
        inline constexpr uintptr_t Warn = 0x168;
    }

    namespace Logger {
        inline constexpr uintptr_t Error = 0x100;
        inline constexpr uintptr_t FullPath = 0x130;
        inline constexpr uintptr_t GetLogger = 0x108;
        inline constexpr uintptr_t Info = 0x110;
        inline constexpr uintptr_t Log = 0x118;
        inline constexpr uintptr_t MessageOut = 0x140;
        inline constexpr uintptr_t Name = 0x138;
        inline constexpr uintptr_t Output = 0x120;
        inline constexpr uintptr_t Warn = 0x128;
    }

    namespace LoginService {
        inline constexpr uintptr_t LoginFailed = 0x110;
        inline constexpr uintptr_t LoginSucceeded = 0x118;
        inline constexpr uintptr_t Logout = 0x100;
        inline constexpr uintptr_t PromptLogin = 0x108;
    }

    namespace LoopRegion {
        inline constexpr uintptr_t AudioPlayer = 0x100;
        inline constexpr uintptr_t Sound = 0x108;
    }

    namespace Looped {
        inline constexpr uintptr_t AnimationTrack = 0x100;
        inline constexpr uintptr_t AudioPlayer = 0x120;
        inline constexpr uintptr_t AudioTextToSpeech = 0x128;
        inline constexpr uintptr_t HapticEffect = 0x108;
        inline constexpr uintptr_t Sound = 0x110;
        inline constexpr uintptr_t VideoFrame = 0x118;
    }

    namespace Looping {
        inline constexpr uintptr_t AudioPlayer = 0x100;
        inline constexpr uintptr_t AudioTextToSpeech = 0x108;
        inline constexpr uintptr_t VideoPlayer = 0x110;
    }

    namespace LowGain {
        inline constexpr uintptr_t AudioEqualizer = 0x100;
        inline constexpr uintptr_t EqualizerSoundEffect = 0x108;
    }

    namespace LruHolder {
        inline constexpr uintptr_t MemEnforcedLRUCache = 0x20;
    }

    namespace LruNode {
        inline constexpr uintptr_t CachedItem = 0x40;
        inline constexpr uintptr_t MeshId = 0x10;
        inline constexpr uintptr_t Next = 0x0;
    }

    namespace LuaSourceContainer {
        inline constexpr uintptr_t CachedRemoteSource = 0x100;
        inline constexpr uintptr_t CachedRemoteSourceLoadState = 0x108;
        inline constexpr uintptr_t HasAssociatedDrafts = 0x110;
        inline constexpr uintptr_t IsDifferentFromFileSystem = 0x118;
        inline constexpr uintptr_t SandboxedSource = 0x120;
        inline constexpr uintptr_t ScriptGuid = 0x128;
        inline constexpr uintptr_t isPlayerScript = 0x130;
    }

    namespace LuaState {
        inline constexpr uintptr_t Base = 0x28;
        inline constexpr uintptr_t Global = 0x20;
        inline constexpr uintptr_t Top = 0x8;
        inline constexpr uintptr_t TypeTag = 0x0;
    }

    namespace Luau {
        inline constexpr uintptr_t loadstring = 0x4266fb0;
        inline constexpr uintptr_t lua_getglobal = 0x0;
        inline constexpr uintptr_t print_wrap = 0x4267c60;
        inline constexpr uintptr_t require_impl = 0x0;
    }

    namespace LuauExpression {
        inline constexpr uintptr_t Evaluate = 0x100;
        inline constexpr uintptr_t References = 0x108;
    }

    namespace LuauExpressionService {
        inline constexpr uintptr_t CreateExpression = 0x100;
    }

    namespace LuauGlobal {
        inline constexpr uintptr_t GCthreshold = 0x48;
        inline constexpr uintptr_t currentwhite = 0x58;
        inline constexpr uintptr_t dummynode = 0x6de7da0;
        inline constexpr uintptr_t gcopages = 0x2f0;
        inline constexpr uintptr_t gcopages_end = 0x0;
        inline constexpr uintptr_t gcopages_large = 0x2f0;
        inline constexpr uintptr_t gcpause = 0x38;
        inline constexpr uintptr_t gcstate = 0x59;
        inline constexpr uintptr_t gcstepmul = 0x3c;
        inline constexpr uintptr_t gcstepsize = 0x40;
        inline constexpr uintptr_t gray = 0x10;
        inline constexpr uintptr_t grayagain = 0x18;
        inline constexpr uintptr_t page_next_all = 0x8;
        inline constexpr uintptr_t page_next_free = 0x18;
        inline constexpr uintptr_t strt_hash = 0x0;
        inline constexpr uintptr_t strt_size = 0xc;
        inline constexpr uintptr_t totalbytes = 0x50;
        inline constexpr uintptr_t weak = 0x20;
    }

    namespace LuauObject {
        inline constexpr uintptr_t marked = 0x2;
        inline constexpr uintptr_t page_block = 0x24;
        inline constexpr uintptr_t page_data = 0x40;
        inline constexpr uintptr_t page_next = 0x8;
        inline constexpr uintptr_t page_size = 0x20;
        inline constexpr uintptr_t table_array = 0x28;
        inline constexpr uintptr_t table_gclist = 0x20;
        inline constexpr uintptr_t table_lsz = 0x7;
        inline constexpr uintptr_t table_node = 0x18;
        inline constexpr uintptr_t table_sizearray = 0x8;
        inline constexpr uintptr_t tt = 0x0;
    }

    namespace MFTStopRequested {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace MLService {
        inline constexpr uintptr_t CreateSessionAsync = 0x100;
        inline constexpr uintptr_t IsPostProcessReady = 0x110;
        inline constexpr uintptr_t LoadPostProcessModelAsync = 0x108;
        inline constexpr uintptr_t SetPostProcessEnabled = 0x118;
    }

    namespace MLSession {
        inline constexpr uintptr_t ForwardAsync = 0x100;
    }

    namespace MakeJoints {
        inline constexpr uintptr_t BasePart = 0x100;
        inline constexpr uintptr_t Model = 0x108;
        inline constexpr uintptr_t Workspace = 0x110;
    }

    namespace MakeRequest {
        inline constexpr uintptr_t MessageBusService = 0x100;
        inline constexpr uintptr_t OpenCloudApiV1 = 0x108;
    }

    namespace MakeupDescription {
        inline constexpr uintptr_t AssetId = 0x108;
        inline constexpr uintptr_t GetAppliedInstance = 0x100;
        inline constexpr uintptr_t Instance = 0x110;
        inline constexpr uintptr_t MakeupType = 0x118;
        inline constexpr uintptr_t Order = 0x120;
    }

    namespace MarkerCurve {
        inline constexpr uintptr_t GetMarkerAtIndex = 0x100;
        inline constexpr uintptr_t GetMarkers = 0x108;
        inline constexpr uintptr_t InsertMarkerAtTime = 0x110;
        inline constexpr uintptr_t Length = 0x120;
        inline constexpr uintptr_t RemoveMarkerAtIndex = 0x118;
        inline constexpr uintptr_t ValuesAndTimes = 0x128;
    }

    namespace MarketplaceService {
        inline constexpr uintptr_t AssetTypePurchased = 0x338;
        inline constexpr uintptr_t BindReceiptHandler = 0x1e8;
        inline constexpr uintptr_t ClearProductInfoCaches = 0x1f0;
        inline constexpr uintptr_t ClientLuaDialogRequested = 0x340;
        inline constexpr uintptr_t ClientPurchaseSuccess = 0x348;
        inline constexpr uintptr_t ConfirmPlayerHasRobloxSubscription = 0x350;
        inline constexpr uintptr_t ConfirmPlayerMembership = 0x358;
        inline constexpr uintptr_t ConfirmUserSubscriptionPurchase = 0x360;
        inline constexpr uintptr_t GetAvailableSubscriptionProductsAsync = 0x100;
        inline constexpr uintptr_t GetDeveloperProductsAsync = 0x108;
        inline constexpr uintptr_t GetProductInfo = 0x110;
        inline constexpr uintptr_t GetProductInfoAsync = 0x118;
        inline constexpr uintptr_t GetRobloxSubscriptionDetailsAsync = 0x120;
        inline constexpr uintptr_t GetRobuxBalance = 0x128;
        inline constexpr uintptr_t GetSubscriptionProductInfoAsync = 0x130;
        inline constexpr uintptr_t GetSubscriptionPurchaseInfoAsync = 0x138;
        inline constexpr uintptr_t GetUserSubscriptionDetailsAsync = 0x140;
        inline constexpr uintptr_t GetUserSubscriptionDetailsInternalAsync = 0x148;
        inline constexpr uintptr_t GetUserSubscriptionPaymentHistoryAsync = 0x150;
        inline constexpr uintptr_t GetUserSubscriptionStatusAsync = 0x158;
        inline constexpr uintptr_t GetUsersPriceLevelsAsync = 0x160;
        inline constexpr uintptr_t IsPurchaseSimulated = 0x1f8;
        inline constexpr uintptr_t LuaDialogCallbackSignal = 0x368;
        inline constexpr uintptr_t MockConfirmUserSubscriptionPurchase = 0x370;
        inline constexpr uintptr_t MockPurchasePremium = 0x378;
        inline constexpr uintptr_t MockPurchaseRobloxSubscription = 0x380;
        inline constexpr uintptr_t NativePurchaseFinished = 0x388;
        inline constexpr uintptr_t NativePurchaseFinishedV2 = 0x390;
        inline constexpr uintptr_t NativePurchaseFinishedWithLocalPlayer = 0x398;
        inline constexpr uintptr_t NativePurchaseFinishedWithLocalPlayerV2 = 0x3a0;
        inline constexpr uintptr_t OpenShop = 0x200;
        inline constexpr uintptr_t OpenShopRequested = 0x3a8;
        inline constexpr uintptr_t PerformBulkPurchase = 0x168;
        inline constexpr uintptr_t PerformCancelSubscription = 0x170;
        inline constexpr uintptr_t PerformPurchase = 0x178;
        inline constexpr uintptr_t PerformPurchaseV2 = 0x180;
        inline constexpr uintptr_t PerformSubscriptionPurchase = 0x188;
        inline constexpr uintptr_t PerformSubscriptionPurchaseV2 = 0x190;
        inline constexpr uintptr_t PerformSubscriptionPurchaseV3Async = 0x198;
        inline constexpr uintptr_t PerformSubscriptionPurchaseWithRobuxAsync = 0x1a0;
        inline constexpr uintptr_t PlayerCanMakePurchases = 0x208;
        inline constexpr uintptr_t PlayerOwnsAsset = 0x1a8;
        inline constexpr uintptr_t PlayerOwnsAssetAsync = 0x1b0;
        inline constexpr uintptr_t PlayerOwnsBundle = 0x1b8;
        inline constexpr uintptr_t PlayerOwnsBundleAsync = 0x1c0;
        inline constexpr uintptr_t PrepareCollectiblesPurchase = 0x210;
        inline constexpr uintptr_t PrepareCollectiblesPurchaseRequested = 0x3b0;
        inline constexpr uintptr_t ProcessReceipt = 0x330;
        inline constexpr uintptr_t PromptBulkPurchase = 0x218;
        inline constexpr uintptr_t PromptBulkPurchaseFinished = 0x3b8;
        inline constexpr uintptr_t PromptBulkPurchaseRefreshed = 0x3c0;
        inline constexpr uintptr_t PromptBulkPurchaseRequested = 0x3c8;
        inline constexpr uintptr_t PromptBulkPurchaseRequestedV2 = 0x3d0;
        inline constexpr uintptr_t PromptBulkPurchaseRequestedV3 = 0x3d8;
        inline constexpr uintptr_t PromptBundlePurchase = 0x220;
        inline constexpr uintptr_t PromptBundlePurchaseFinished = 0x3e0;
        inline constexpr uintptr_t PromptBundlePurchaseRequested = 0x3e8;
        inline constexpr uintptr_t PromptCancelSubscription = 0x228;
        inline constexpr uintptr_t PromptCancelSubscriptionRequested = 0x3f0;
        inline constexpr uintptr_t PromptCollectibleBundlePurchaseRequested = 0x3f8;
        inline constexpr uintptr_t PromptCollectiblesPurchase = 0x230;
        inline constexpr uintptr_t PromptCollectiblesPurchaseRequested = 0x400;
        inline constexpr uintptr_t PromptGamePassPurchase = 0x238;
        inline constexpr uintptr_t PromptGamePassPurchaseFinished = 0x408;
        inline constexpr uintptr_t PromptGamePassPurchaseRequested = 0x410;
        inline constexpr uintptr_t PromptNativePurchase = 0x240;
        inline constexpr uintptr_t PromptNativePurchaseRequested = 0x418;
        inline constexpr uintptr_t PromptNativePurchaseRequestedWithLocalPlayer = 0x420;
        inline constexpr uintptr_t PromptNativePurchaseRequestedWithLocalPlayerWithPaymentSessionId = 0x428;
        inline constexpr uintptr_t PromptNativePurchaseRequestedWithPaymentSessionId = 0x430;
        inline constexpr uintptr_t PromptNativePurchaseWithLocalPlayer = 0x248;
        inline constexpr uintptr_t PromptNativePurchaseWithLocalPlayerWithPaymentSessionId = 0x250;
        inline constexpr uintptr_t PromptNativePurchaseWithPaymentSessionId = 0x258;
        inline constexpr uintptr_t PromptPremiumPurchase = 0x260;
        inline constexpr uintptr_t PromptPremiumPurchaseFinished = 0x438;
        inline constexpr uintptr_t PromptPremiumPurchaseRequested = 0x440;
        inline constexpr uintptr_t PromptProductPurchase = 0x268;
        inline constexpr uintptr_t PromptProductPurchaseFinished = 0x448;
        inline constexpr uintptr_t PromptProductPurchaseRequested = 0x450;
        inline constexpr uintptr_t PromptPurchase = 0x270;
        inline constexpr uintptr_t PromptPurchaseFinished = 0x458;
        inline constexpr uintptr_t PromptPurchaseRequested = 0x460;
        inline constexpr uintptr_t PromptPurchaseRequestedV2 = 0x468;
        inline constexpr uintptr_t PromptRobloxPurchase = 0x278;
        inline constexpr uintptr_t PromptRobloxPurchaseRequested = 0x470;
        inline constexpr uintptr_t PromptRobloxSubscriptionPurchase = 0x280;
        inline constexpr uintptr_t PromptRobloxSubscriptionPurchaseFinished = 0x478;
        inline constexpr uintptr_t PromptRobloxSubscriptionPurchaseRequested = 0x480;
        inline constexpr uintptr_t PromptRobuxTransferAsync = 0x1c8;
        inline constexpr uintptr_t PromptRobuxTransferRequested = 0x488;
        inline constexpr uintptr_t PromptRobuxTransferSubscriptionUpsellRequested = 0x490;
        inline constexpr uintptr_t PromptSubscriptionPurchase = 0x288;
        inline constexpr uintptr_t PromptSubscriptionPurchaseFinished = 0x498;
        inline constexpr uintptr_t PromptSubscriptionPurchaseRequested = 0x4a0;
        inline constexpr uintptr_t PromptThirdPartyPurchase = 0x290;
        inline constexpr uintptr_t PromptThirdPartyPurchaseRequested = 0x4a8;
        inline constexpr uintptr_t RankProductsAsync = 0x1d0;
        inline constexpr uintptr_t RecommendTopProductsAsync = 0x1d8;
        inline constexpr uintptr_t RefreshBulkPurchase = 0x298;
        inline constexpr uintptr_t RefreshBulkPurchaseRequested = 0x4b0;
        inline constexpr uintptr_t ReportAssetSale = 0x2a0;
        inline constexpr uintptr_t ReportRobuxUpsellStarted = 0x2a8;
        inline constexpr uintptr_t RobuxTransferCompleted = 0x4b8;
        inline constexpr uintptr_t ServerPurchaseVerification = 0x4c0;
        inline constexpr uintptr_t SignalAssetTypePurchased = 0x2b0;
        inline constexpr uintptr_t SignalCheckPlayerHasRobloxSubscription = 0x2b8;
        inline constexpr uintptr_t SignalClientPurchaseSuccess = 0x2c0;
        inline constexpr uintptr_t SignalMockPurchasePremium = 0x2c8;
        inline constexpr uintptr_t SignalMockPurchaseRobloxSubscription = 0x2d0;
        inline constexpr uintptr_t SignalPromptBulkPurchaseFinished = 0x2d8;
        inline constexpr uintptr_t SignalPromptBundlePurchaseFinished = 0x2e0;
        inline constexpr uintptr_t SignalPromptGamePassPurchaseFinished = 0x2e8;
        inline constexpr uintptr_t SignalPromptPremiumPurchaseFinished = 0x2f0;
        inline constexpr uintptr_t SignalPromptProductPurchaseFinished = 0x2f8;
        inline constexpr uintptr_t SignalPromptPurchaseFinished = 0x300;
        inline constexpr uintptr_t SignalPromptRobloxSubscriptionPurchaseFinished = 0x308;
        inline constexpr uintptr_t SignalPromptSubscriptionPurchaseFinished = 0x310;
        inline constexpr uintptr_t SignalRobuxTransferCompleted = 0x318;
        inline constexpr uintptr_t SignalServerLuaDialogClosed = 0x320;
        inline constexpr uintptr_t SignalUserSubscriptionStatusChanged = 0x328;
        inline constexpr uintptr_t ThirdPartyPurchaseFinished = 0x4c8;
        inline constexpr uintptr_t UserOwnsGamePassAsync = 0x1e0;
        inline constexpr uintptr_t UserSubscriptionStatusChanged = 0x4d0;
    }

    namespace MatchmakingService {
        inline constexpr uintptr_t GetServerAttribute = 0x100;
        inline constexpr uintptr_t InitializeServerAttributesForStudio = 0x108;
        inline constexpr uintptr_t SetServerAttribute = 0x110;
    }

    namespace MaterialColors {
        inline constexpr uintptr_t Asphalt = 0x30;
        inline constexpr uintptr_t Basalt = 0x27;
        inline constexpr uintptr_t Brick = 0xf;
        inline constexpr uintptr_t Cobblestone = 0x33;
        inline constexpr uintptr_t Concrete = 0xc;
        inline constexpr uintptr_t CrackedLava = 0x2d;
        inline constexpr uintptr_t Glacier = 0x1b;
        inline constexpr uintptr_t Grass = 0x6;
        inline constexpr uintptr_t Ground = 0x2a;
        inline constexpr uintptr_t Ice = 0x36;
        inline constexpr uintptr_t LeafyGrass = 0x39;
        inline constexpr uintptr_t Limestone = 0x3f;
        inline constexpr uintptr_t Mud = 0x24;
        inline constexpr uintptr_t Pavement = 0x42;
        inline constexpr uintptr_t Rock = 0x18;
        inline constexpr uintptr_t Salt = 0x3c;
        inline constexpr uintptr_t Sand = 0x12;
        inline constexpr uintptr_t Sandstone = 0x21;
        inline constexpr uintptr_t Slate = 0x9;
        inline constexpr uintptr_t Snow = 0x1e;
        inline constexpr uintptr_t Terrain = 0x1a8;
        inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace MaterialLayer {
        inline constexpr uintptr_t ColorData = 0x24;
        inline constexpr uintptr_t FillModeByte = 0x11;
        inline constexpr uintptr_t Flags2 = 0x20;
        inline constexpr uintptr_t MatFlags = 0x18;
        inline constexpr uintptr_t Param = 0x1c;
        inline constexpr uintptr_t Stride = 0x88;
    }

    namespace MaterialPicker_MaterialActionAsToolToggled {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace MaterialService {
        inline constexpr uintptr_t AsphaltName = 0x140;
        inline constexpr uintptr_t BasaltName = 0x148;
        inline constexpr uintptr_t BrickName = 0x150;
        inline constexpr uintptr_t CardboardName = 0x158;
        inline constexpr uintptr_t CarpetName = 0x160;
        inline constexpr uintptr_t CeramicTilesName = 0x168;
        inline constexpr uintptr_t ClayRoofTilesName = 0x170;
        inline constexpr uintptr_t CobblestoneName = 0x178;
        inline constexpr uintptr_t ConcreteName = 0x180;
        inline constexpr uintptr_t CorrodedMetalName = 0x188;
        inline constexpr uintptr_t CrackedLavaName = 0x190;
        inline constexpr uintptr_t DiamondPlateName = 0x198;
        inline constexpr uintptr_t FabricName = 0x1a0;
        inline constexpr uintptr_t FoilName = 0x1a8;
        inline constexpr uintptr_t GetBaseMaterialOverride = 0x100;
        inline constexpr uintptr_t GetIsMaterialActionAsToolEnabled = 0x108;
        inline constexpr uintptr_t GetMaterialOverrideChanged = 0x110;
        inline constexpr uintptr_t GetMaterialVariant = 0x118;
        inline constexpr uintptr_t GetOverrideStatus = 0x120;
        inline constexpr uintptr_t GlacierName = 0x1b0;
        inline constexpr uintptr_t GraniteName = 0x1b8;
        inline constexpr uintptr_t GrassName = 0x1c0;
        inline constexpr uintptr_t GroundName = 0x1c8;
        inline constexpr uintptr_t IceName = 0x1d0;
        inline constexpr uintptr_t LeafyGrassName = 0x1d8;
        inline constexpr uintptr_t LeatherName = 0x1e0;
        inline constexpr uintptr_t LimestoneName = 0x1e8;
        inline constexpr uintptr_t MarbleName = 0x1f0;
        inline constexpr uintptr_t MaterialFillToolEnabledChanged = 0x290;
        inline constexpr uintptr_t MetalName = 0x1f8;
        inline constexpr uintptr_t MudName = 0x200;
        inline constexpr uintptr_t OverrideStatusChanged = 0x298;
        inline constexpr uintptr_t PavementName = 0x208;
        inline constexpr uintptr_t PebbleName = 0x210;
        inline constexpr uintptr_t PlasterName = 0x218;
        inline constexpr uintptr_t PlasticName = 0x220;
        inline constexpr uintptr_t RockName = 0x228;
        inline constexpr uintptr_t RoofShinglesName = 0x230;
        inline constexpr uintptr_t RubberName = 0x238;
        inline constexpr uintptr_t SaltName = 0x240;
        inline constexpr uintptr_t SandName = 0x248;
        inline constexpr uintptr_t SandstoneName = 0x250;
        inline constexpr uintptr_t SetBaseMaterialOverride = 0x128;
        inline constexpr uintptr_t SetCurrentMaterial = 0x130;
        inline constexpr uintptr_t SlateName = 0x258;
        inline constexpr uintptr_t SmoothPlasticName = 0x260;
        inline constexpr uintptr_t SnowName = 0x268;
        inline constexpr uintptr_t ToggleMaterialFillToolEnabled = 0x138;
        inline constexpr uintptr_t Use2022Materials = 0x270;
        inline constexpr uintptr_t Use2022MaterialsXml = 0x278;
        inline constexpr uintptr_t WoodName = 0x280;
        inline constexpr uintptr_t WoodPlanksName = 0x288;
    }

    namespace MaterialVariant {
        inline constexpr uintptr_t AlphaMode = 0x100;
        inline constexpr uintptr_t AvgMetalness = 0x108;
        inline constexpr uintptr_t AvgRoughness = 0x110;
        inline constexpr uintptr_t BaseMaterial = 0x118;
        inline constexpr uintptr_t BasePart = 0x1a0;
        inline constexpr uintptr_t ColorMap = 0x120;
        inline constexpr uintptr_t ColorMapContent = 0x128;
        inline constexpr uintptr_t CustomPhysicalProperties = 0x130;
        inline constexpr uintptr_t EmissiveMaskContent = 0x138;
        inline constexpr uintptr_t EmissiveStrength = 0x140;
        inline constexpr uintptr_t EmissiveTint = 0x148;
        inline constexpr uintptr_t MaterialPattern = 0x150;
        inline constexpr uintptr_t MetalnessMap = 0x158;
        inline constexpr uintptr_t MetalnessMapContent = 0x160;
        inline constexpr uintptr_t NormalMap = 0x168;
        inline constexpr uintptr_t NormalMapContent = 0x170;
        inline constexpr uintptr_t RoughnessMap = 0x178;
        inline constexpr uintptr_t RoughnessMapContent = 0x180;
        inline constexpr uintptr_t StudsPerTile = 0x188;
        inline constexpr uintptr_t TexturePack = 0x190;
        inline constexpr uintptr_t TexturePackContent = 0x198;
    }

    namespace MaxAxesForce {
        inline constexpr uintptr_t AlignPosition = 0x100;
        inline constexpr uintptr_t LinearVelocity = 0x108;
    }

    namespace MaxDistance {
        inline constexpr uintptr_t BillboardGui = 0x100;
        inline constexpr uintptr_t BubbleChatConfiguration = 0x108;
        inline constexpr uintptr_t Sound = 0x110;
        inline constexpr uintptr_t SurfaceGui = 0x118;
    }

    namespace MaxForce {
        inline constexpr uintptr_t AlignPosition = 0x100;
        inline constexpr uintptr_t AnimationConstraint = 0x108;
        inline constexpr uintptr_t BodyPosition = 0x110;
        inline constexpr uintptr_t BodyVelocity = 0x118;
        inline constexpr uintptr_t DragDetector = 0x120;
        inline constexpr uintptr_t LineForce = 0x128;
        inline constexpr uintptr_t LinearVelocity = 0x130;
        inline constexpr uintptr_t SpringConstraint = 0x138;
    }

    namespace MaxSize {
        inline constexpr uintptr_t StyleQuery = 0x100;
        inline constexpr uintptr_t UISizeConstraint = 0x108;
        inline constexpr uintptr_t WrapLayer = 0x110;
    }

    namespace MaxTorque {
        inline constexpr uintptr_t AlignOrientation = 0x100;
        inline constexpr uintptr_t AngularVelocity = 0x108;
        inline constexpr uintptr_t AnimationConstraint = 0x110;
        inline constexpr uintptr_t BodyAngularVelocity = 0x118;
        inline constexpr uintptr_t BodyGyro = 0x120;
        inline constexpr uintptr_t DragDetector = 0x128;
        inline constexpr uintptr_t RocketPropulsion = 0x130;
        inline constexpr uintptr_t TorsionSpringConstraint = 0x138;
    }

    namespace MaxVelocity {
        inline constexpr uintptr_t AlignPosition = 0x100;
        inline constexpr uintptr_t Motor = 0x108;
        inline constexpr uintptr_t VersionControlService = 0x110;
    }

    namespace MaxVisibleGraphemes {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace May {
        inline constexpr uintptr_t Jun = 0x100;
        inline constexpr uintptr_t June = 0x108;
    }

    namespace MemEnforcedLRUCache {
        inline constexpr uintptr_t Head = 0x8;
    }

    namespace MemStorageConnection {
        inline constexpr uintptr_t Disconnect = 0x100;
    }

    namespace MemStorageService {
        inline constexpr uintptr_t Bind = 0x100;
        inline constexpr uintptr_t BindAndFire = 0x108;
        inline constexpr uintptr_t Call = 0x110;
        inline constexpr uintptr_t Fire = 0x118;
        inline constexpr uintptr_t GetItem = 0x120;
        inline constexpr uintptr_t HasItem = 0x128;
        inline constexpr uintptr_t RemoveItem = 0x130;
        inline constexpr uintptr_t SetItem = 0x138;
    }

    namespace MemoryMajorPageFaults {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace MemoryStoreDistributedCounter {
        inline constexpr uintptr_t GetAsync = 0x100;
        inline constexpr uintptr_t IncrementAsync = 0x108;
    }

    namespace MemoryStoreHashMap {
        inline constexpr uintptr_t GetAsync = 0x100;
        inline constexpr uintptr_t ListItemsAsync = 0x108;
        inline constexpr uintptr_t RemoveAsync = 0x110;
        inline constexpr uintptr_t SetAsync = 0x118;
        inline constexpr uintptr_t UpdateAsync = 0x120;
    }

    namespace MemoryStoreQueue {
        inline constexpr uintptr_t AddAsync = 0x100;
        inline constexpr uintptr_t GetSizeAsync = 0x108;
        inline constexpr uintptr_t ReadAsync = 0x110;
        inline constexpr uintptr_t RemoveAsync = 0x118;
    }

    namespace MemoryStoreService {
        inline constexpr uintptr_t GetDistributedCounter = 0x100;
        inline constexpr uintptr_t GetHashMap = 0x108;
        inline constexpr uintptr_t GetQueue = 0x110;
        inline constexpr uintptr_t GetSortedMap = 0x118;
    }

    namespace MemoryStoreSortedMap {
        inline constexpr uintptr_t GetAsync = 0x100;
        inline constexpr uintptr_t GetRangeAsync = 0x108;
        inline constexpr uintptr_t GetSizeAsync = 0x110;
        inline constexpr uintptr_t RemoveAsync = 0x118;
        inline constexpr uintptr_t SetAsync = 0x120;
        inline constexpr uintptr_t UpdateAsync = 0x128;
    }

    namespace MeshContent {
        inline constexpr uintptr_t CharacterMesh = 0x100;
        inline constexpr uintptr_t FileMesh = 0x108;
        inline constexpr uintptr_t MeshPart = 0x110;
    }

    namespace MeshContentProvider {
        inline constexpr uintptr_t AssetID = 0x10;
        inline constexpr uintptr_t Cache = 0xd8;
        inline constexpr uintptr_t GetContentMemoryData = 0x100;
        inline constexpr uintptr_t LRUCache = 0x20;
        inline constexpr uintptr_t LRUHolder = 0xc8;
        inline constexpr uintptr_t LruHolder = 0xc8;
        inline constexpr uintptr_t MeshData = 0x40;
        inline constexpr uintptr_t ToMeshData = 0x40;
    }

    namespace MeshData {
        inline constexpr uintptr_t EditableService = 0x120;
        inline constexpr uintptr_t FaceEnd = 0x38;
        inline constexpr uintptr_t FaceStart = 0x30;
        inline constexpr uintptr_t PartOperation = 0x128;
        inline constexpr uintptr_t ParticleEmitter = 0x130;
        inline constexpr uintptr_t VertexEnd = 0x8;
        inline constexpr uintptr_t VertexStart = 0x0;
    }

    namespace MeshId {
        inline constexpr uintptr_t CharacterMesh = 0x100;
        inline constexpr uintptr_t FileMesh = 0x108;
        inline constexpr uintptr_t MeshPart = 0x110;
    }

    namespace MeshPart {
        inline constexpr uintptr_t AlternateMeshHash = 0x108;
        inline constexpr uintptr_t ApplyMesh = 0x100;
        inline constexpr uintptr_t DoubleSided = 0x110;
        inline constexpr uintptr_t HasJointOffset = 0x118;
        inline constexpr uintptr_t HasSkinnedMesh = 0x120;
        inline constexpr uintptr_t InitialSize = 0x128;
        inline constexpr uintptr_t JointOffset = 0x130;
        inline constexpr uintptr_t MeshContent = 0x138;
        inline constexpr uintptr_t MeshID = 0x140;
        inline constexpr uintptr_t MeshId = 0x300;
        inline constexpr uintptr_t PhysicsData = 0x150;
        inline constexpr uintptr_t RenderFidelity = 0x158;
        inline constexpr uintptr_t RenderFidelityReplicate = 0x160;
        inline constexpr uintptr_t SolidMeshHolder = 0x168;
        inline constexpr uintptr_t Texture = 0x330;
        inline constexpr uintptr_t TextureContent = 0x170;
        inline constexpr uintptr_t TextureID = 0x178;
        inline constexpr uintptr_t TextureId = 0x330;
        inline constexpr uintptr_t VertexCount = 0x180;
    }

    namespace Message {
        inline constexpr uintptr_t TestCase = 0x118;
        inline constexpr uintptr_t TestService = 0x120;
        inline constexpr uintptr_t Text = 0x100;
        inline constexpr uintptr_t Type = 0x110;
        inline constexpr uintptr_t badgeId = 0x108;
    }

    namespace MessageBusConnection {
        inline constexpr uintptr_t Disconnect = 0x100;
    }

    namespace MessageBusService {
        inline constexpr uintptr_t Call = 0x100;
        inline constexpr uintptr_t GetLast = 0x108;
        inline constexpr uintptr_t GetMessageId = 0x110;
        inline constexpr uintptr_t GetProtocolMethodRequestMessageId = 0x118;
        inline constexpr uintptr_t GetProtocolMethodResponseMessageId = 0x120;
        inline constexpr uintptr_t MakeRequest = 0x128;
        inline constexpr uintptr_t Publish = 0x130;
        inline constexpr uintptr_t PublishProtocolMethodRequest = 0x138;
        inline constexpr uintptr_t PublishProtocolMethodResponse = 0x140;
        inline constexpr uintptr_t SetRequestHandler = 0x148;
        inline constexpr uintptr_t Subscribe = 0x150;
        inline constexpr uintptr_t SubscribeToProtocolMethodRequest = 0x158;
        inline constexpr uintptr_t SubscribeToProtocolMethodResponse = 0x160;
    }

    namespace MessageReceived {
        inline constexpr uintptr_t TextChatCommand = 0x100;
        inline constexpr uintptr_t TextChatService = 0x108;
        inline constexpr uintptr_t WebSocketClient = 0x110;
        inline constexpr uintptr_t WebStreamClient = 0x118;
    }

    namespace MessagingService {
        inline constexpr uintptr_t PublishAsync = 0x100;
        inline constexpr uintptr_t SubscribeAsync = 0x108;
    }

    namespace MetalnessMap {
        inline constexpr uintptr_t Decal = 0x100;
        inline constexpr uintptr_t MaterialVariant = 0x108;
        inline constexpr uintptr_t RoughnessMap = 0x120;
        inline constexpr uintptr_t SurfaceAppearance = 0x110;
        inline constexpr uintptr_t TerrainDetail = 0x118;
    }

    namespace MetalnessMapContent {
        inline constexpr uintptr_t Decal = 0x100;
        inline constexpr uintptr_t MaterialVariant = 0x108;
        inline constexpr uintptr_t SurfaceAppearance = 0x110;
        inline constexpr uintptr_t TerrainDetail = 0x118;
    }

    namespace MicroProfilerService {
        inline constexpr uintptr_t ContextLabel = 0x120;
        inline constexpr uintptr_t DataChanged = 0x128;
        inline constexpr uintptr_t DumpToFileAsync = 0x100;
        inline constexpr uintptr_t GetDataInRange = 0x108;
        inline constexpr uintptr_t GetDataSize = 0x110;
        inline constexpr uintptr_t ProcessCommand = 0x118;
    }

    namespace MidGain {
        inline constexpr uintptr_t AudioEqualizer = 0x100;
        inline constexpr uintptr_t EulerRotationCurve = 0x108;
    }

    namespace Misc {
        inline constexpr uintptr_t Adornee = 0xe0;
        inline constexpr uintptr_t AnimationId = 0xb0;
        inline constexpr uintptr_t StringLength = 0x10;
        inline constexpr uintptr_t Value = 0xa8;
    }

    namespace Mix {
        inline constexpr uintptr_t AudioChorus = 0x100;
        inline constexpr uintptr_t AudioFlanger = 0x108;
        inline constexpr uintptr_t ChorusSoundEffect = 0x110;
        inline constexpr uintptr_t FlangeSoundEffect = 0x118;
    }

    namespace Mode {
        inline constexpr uintptr_t AlignOrientation = 0x100;
        inline constexpr uintptr_t AlignPosition = 0x108;
        inline constexpr uintptr_t UIShadow = 0x110;
    }

    namespace Model {
        inline constexpr uintptr_t AddPersistentPlayer = 0x100;
        inline constexpr uintptr_t BreakJoints = 0x108;
        inline constexpr uintptr_t GetBoundingBox = 0x110;
        inline constexpr uintptr_t GetExtentsSize = 0x118;
        inline constexpr uintptr_t GetModelCFrame = 0x120;
        inline constexpr uintptr_t GetModelSize = 0x128;
        inline constexpr uintptr_t GetPersistentPlayers = 0x130;
        inline constexpr uintptr_t GetPrimaryPartCFrame = 0x138;
        inline constexpr uintptr_t GetScale = 0x140;
        inline constexpr uintptr_t LevelOfDetail = 0x1a8;
        inline constexpr uintptr_t LodEntity = 0x1b0;
        inline constexpr uintptr_t MakeJoints = 0x148;
        inline constexpr uintptr_t ModelMeshCFrame = 0x1b8;
        inline constexpr uintptr_t ModelMeshData = 0x1c0;
        inline constexpr uintptr_t ModelMeshSize = 0x1c8;
        inline constexpr uintptr_t ModelStreamingMode = 0x1d0;
        inline constexpr uintptr_t MoveTo = 0x150;
        inline constexpr uintptr_t NeedsPivotMigration = 0x1d8;
        inline constexpr uintptr_t PrimaryPart = 0x248;
        inline constexpr uintptr_t RemovePersistentPlayer = 0x158;
        inline constexpr uintptr_t ResetOrientationToIdentity = 0x160;
        inline constexpr uintptr_t Scale = 0x134;
        inline constexpr uintptr_t ScaleFactor = 0x1f0;
        inline constexpr uintptr_t ScaleTo = 0x168;
        inline constexpr uintptr_t SetIdentityOrientation = 0x170;
        inline constexpr uintptr_t SetPrimaryPartCFrame = 0x178;
        inline constexpr uintptr_t SlimAnimationTarget = 0x1f8;
        inline constexpr uintptr_t SlimHash = 0x200;
        inline constexpr uintptr_t TranslateBy = 0x180;
        inline constexpr uintptr_t WorldPivot = 0x208;
        inline constexpr uintptr_t WorldPivotData = 0x210;
        inline constexpr uintptr_t breakJoints = 0x188;
        inline constexpr uintptr_t makeJoints = 0x190;
        inline constexpr uintptr_t move = 0x198;
        inline constexpr uintptr_t moveTo = 0x1a0;
    }

    namespace ModelServerError {
        inline constexpr uintptr_t TextFilterServerError = 0x100;
    }

    namespace ModerationService {
        inline constexpr uintptr_t BindReviewableContentEventProcessor = 0x110;
        inline constexpr uintptr_t CreateReviewableContentAsync = 0x100;
        inline constexpr uintptr_t CreateReviewableContentKey = 0x118;
        inline constexpr uintptr_t InternalRequestReviewableContentReviewAsync = 0x108;
        inline constexpr uintptr_t TriggeredCaptureUpload = 0x120;
    }

    namespace ModuleScript {
        inline constexpr uintptr_t ByteCode = 0x0;
        inline constexpr uintptr_t Confidential = 0x100;
        inline constexpr uintptr_t GUID = 0xc0;
        inline constexpr uintptr_t Hash = 0x350;
        inline constexpr uintptr_t IsCoreScript = 0x0;
        inline constexpr uintptr_t IsRobloxScript = 0x158;
        inline constexpr uintptr_t LinkedSource = 0x108;
        inline constexpr uintptr_t Lua = 0x148;
        inline constexpr uintptr_t Source = 0x110;
        inline constexpr uintptr_t UnrestrictedRequireAllowed = 0x118;
    }

    namespace MomentsService {
        inline constexpr uintptr_t CheckMomentTextStatusAsync = 0x100;
        inline constexpr uintptr_t CreatePostAsync = 0x108;
        inline constexpr uintptr_t FetchPostAsync = 0x110;
        inline constexpr uintptr_t GenerateMomentTextAsync = 0x118;
    }

    namespace Montserrat {
        inline constexpr uintptr_t Gotham = 0x100;
        inline constexpr uintptr_t GothamSemibold = 0x108;
    }

    namespace MontserratBold {
        inline constexpr uintptr_t GothamBold = 0x100;
        inline constexpr uintptr_t MontserratBlack = 0x108;
    }

    namespace MontserratMedium {
        inline constexpr uintptr_t GothamMedium = 0x100;
        inline constexpr uintptr_t MontserratBold = 0x108;
    }

    namespace Motor {
        inline constexpr uintptr_t CurrentAngle = 0x108;
        inline constexpr uintptr_t DesiredAngle = 0x110;
        inline constexpr uintptr_t MaxVelocity = 0x118;
        inline constexpr uintptr_t ReplicateCurrentAngle = 0x120;
        inline constexpr uintptr_t SetDesiredAngle = 0x100;
    }

    namespace Motor6D {
        inline constexpr uintptr_t ChildName = 0x100;
        inline constexpr uintptr_t EnableSkinning = 0x108;
        inline constexpr uintptr_t ParentName = 0x110;
        inline constexpr uintptr_t ReplicateCurrentAngle6D = 0x118;
        inline constexpr uintptr_t ReplicateCurrentOffset6D = 0x120;
        inline constexpr uintptr_t Transform = 0x128;
    }

    namespace Mouse {
        inline constexpr uintptr_t Button1Down = 0x170;
        inline constexpr uintptr_t Button1Up = 0x178;
        inline constexpr uintptr_t Button2Down = 0x180;
        inline constexpr uintptr_t Button2Up = 0x188;
        inline constexpr uintptr_t Hit = 0x100;
        inline constexpr uintptr_t Icon = 0x108;
        inline constexpr uintptr_t IconContent = 0x110;
        inline constexpr uintptr_t Idle = 0x190;
        inline constexpr uintptr_t KeyDown = 0x198;
        inline constexpr uintptr_t KeyUp = 0x1a0;
        inline constexpr uintptr_t Move = 0x1a8;
        inline constexpr uintptr_t Origin = 0x118;
        inline constexpr uintptr_t Target = 0x120;
        inline constexpr uintptr_t TargetFilter = 0x128;
        inline constexpr uintptr_t TargetSurface = 0x130;
        inline constexpr uintptr_t UnitRay = 0x138;
        inline constexpr uintptr_t ViewSizeX = 0x140;
        inline constexpr uintptr_t ViewSizeY = 0x148;
        inline constexpr uintptr_t WheelBackward = 0x1b0;
        inline constexpr uintptr_t WheelForward = 0x1b8;
        inline constexpr uintptr_t X = 0x150;
        inline constexpr uintptr_t Y = 0x158;
        inline constexpr uintptr_t hit = 0x160;
        inline constexpr uintptr_t keyDown = 0x1c0;
        inline constexpr uintptr_t target = 0x168;
    }

    namespace MouseButton1Down {
        inline constexpr uintptr_t ArcHandles = 0x100;
        inline constexpr uintptr_t GuiButton = 0x108;
        inline constexpr uintptr_t HandleAdornment = 0x110;
        inline constexpr uintptr_t Handles = 0x118;
    }

    namespace MouseButton1DownConnectionCount {
        inline constexpr uintptr_t ArcHandles = 0x100;
        inline constexpr uintptr_t GuiButton = 0x108;
        inline constexpr uintptr_t Handles = 0x110;
    }

    namespace MouseButton1Up {
        inline constexpr uintptr_t ArcHandles = 0x100;
        inline constexpr uintptr_t GuiButton = 0x108;
        inline constexpr uintptr_t HandleAdornment = 0x110;
        inline constexpr uintptr_t Handles = 0x118;
    }

    namespace MouseButton1UpConnectionCount {
        inline constexpr uintptr_t ArcHandles = 0x100;
        inline constexpr uintptr_t GuiButton = 0x108;
        inline constexpr uintptr_t Handles = 0x110;
    }

    namespace MouseDragConnectionCount {
        inline constexpr uintptr_t ArcHandles = 0x100;
        inline constexpr uintptr_t Handles = 0x108;
    }

    namespace MouseEnter {
        inline constexpr uintptr_t ArcHandles = 0x100;
        inline constexpr uintptr_t GuiObject = 0x108;
        inline constexpr uintptr_t HandleAdornment = 0x110;
        inline constexpr uintptr_t Handles = 0x118;
        inline constexpr uintptr_t PluginGui = 0x120;
    }

    namespace MouseEnterConnectionCount {
        inline constexpr uintptr_t ArcHandles = 0x100;
        inline constexpr uintptr_t GuiObject = 0x108;
        inline constexpr uintptr_t Handles = 0x110;
    }

    namespace MouseLeave {
        inline constexpr uintptr_t AssetService = 0x100;
        inline constexpr uintptr_t GuiObject = 0x108;
        inline constexpr uintptr_t Handles = 0x110;
        inline constexpr uintptr_t HapticEffect = 0x118;
        inline constexpr uintptr_t PluginGui = 0x120;
    }

    namespace MouseLeaveConnectionCount {
        inline constexpr uintptr_t AssetDeliveryProxy = 0x100;
        inline constexpr uintptr_t GuiObject = 0x108;
        inline constexpr uintptr_t Handles = 0x110;
    }

    namespace MouseService {
        inline constexpr uintptr_t InputObject = 0xe0;
        inline constexpr uintptr_t InputObject2 = 0xf0;
        inline constexpr uintptr_t MouseEnterStudioViewport = 0x100;
        inline constexpr uintptr_t MouseLeaveStudioViewport = 0x108;
        inline constexpr uintptr_t MousePosition = 0xc4;
        inline constexpr uintptr_t SensitivityPointer = 0x0;
    }

    namespace Move {
        inline constexpr uintptr_t Humanoid = 0x100;
        inline constexpr uintptr_t Mouse = 0x118;
        inline constexpr uintptr_t Player = 0x108;
        inline constexpr uintptr_t ProjectService = 0x110;
    }

    namespace MoveMaxForce {
        inline constexpr uintptr_t AirController = 0x100;
        inline constexpr uintptr_t Clothing = 0x108;
    }

    namespace MoveTo {
        inline constexpr uintptr_t Humanoid = 0x100;
        inline constexpr uintptr_t Model = 0x108;
    }

    namespace MultipleDocumentInterfaceInstance {
        inline constexpr uintptr_t DataModelSessionEnded = 0x108;
        inline constexpr uintptr_t DataModelSessionStarted = 0x110;
        inline constexpr uintptr_t FocusedDataModelSession = 0x100;
        inline constexpr uintptr_t Plugin = 0x118;
    }

    namespace NORMAL {
        inline constexpr uintptr_t COLOR = 0x100;
        inline constexpr uintptr_t COLOR0 = 0x108;
    }

    namespace NameDisplayDistance {
        inline constexpr uintptr_t Humanoid = 0x100;
        inline constexpr uintptr_t Player = 0x108;
        inline constexpr uintptr_t StarterPlayer = 0x110;
    }

    namespace NegateOperation {
        inline constexpr uintptr_t PreviousOperation = 0x100;
    }

    namespace NetworkClient {
        inline constexpr uintptr_t ConnectionAccepted = 0x100;
        inline constexpr uintptr_t ConnectionFailed = 0x108;
    }

    namespace NetworkMarker {
        inline constexpr uintptr_t Received = 0x100;
    }

    namespace NetworkPeer {
        inline constexpr uintptr_t InitializeRemoteAllowList = 0x100;
        inline constexpr uintptr_t SetOutgoingKBPSLimit = 0x108;
    }

    namespace NetworkReplicator {
        inline constexpr uintptr_t GetPlayer = 0x100;
    }

    namespace NetworkServer {
        inline constexpr uintptr_t EncryptStringForPlayerId = 0x100;
    }

    namespace NetworkSettings {
        inline constexpr uintptr_t EmulatedTotalMemoryInMB = 0x100;
        inline constexpr uintptr_t FreeMemoryMBytes = 0x108;
        inline constexpr uintptr_t HttpProxyEnabled = 0x110;
        inline constexpr uintptr_t HttpProxyURL = 0x118;
        inline constexpr uintptr_t InboundNetworkJitterMs = 0x120;
        inline constexpr uintptr_t InboundNetworkLossPercent = 0x128;
        inline constexpr uintptr_t InboundNetworkMinDelayMs = 0x130;
        inline constexpr uintptr_t IncomingReplicationLag = 0x138;
        inline constexpr uintptr_t Network = 0x190;
        inline constexpr uintptr_t OpenCertManagerDialog = 0x140;
        inline constexpr uintptr_t OutboundNetworkJitterMs = 0x148;
        inline constexpr uintptr_t OutboundNetworkLossPercent = 0x150;
        inline constexpr uintptr_t OutboundNetworkMinDelayMs = 0x158;
        inline constexpr uintptr_t PrintJoinSizeBreakdown = 0x160;
        inline constexpr uintptr_t PrintPhysicsErrors = 0x168;
        inline constexpr uintptr_t PrintStreamInstanceQuota = 0x170;
        inline constexpr uintptr_t RandomizeJoinInstanceOrder = 0x178;
        inline constexpr uintptr_t RenderStreamedRegions = 0x180;
        inline constexpr uintptr_t ShowActiveAnimationAsset = 0x188;
    }

    namespace NetworkTraceA {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace NoCollisionConstraint {
        inline constexpr uintptr_t Enabled = 0x100;
        inline constexpr uintptr_t Part0 = 0x108;
        inline constexpr uintptr_t Part1 = 0x110;
    }

    namespace NoError {
        inline constexpr uintptr_t NullInput = 0x100;
    }

    namespace NodeId {
        inline constexpr uintptr_t AnimationNodeDefinition = 0x100;
        inline constexpr uintptr_t AnimationValueNodeDefinition = 0x108;
        inline constexpr uintptr_t StateMachineTransitionDefinition = 0x110;
    }

    namespace NodeType {
        inline constexpr uintptr_t AnimationRigData = 0x100;
        inline constexpr uintptr_t Animator = 0x108;
    }

    namespace Noise {
        inline constexpr uintptr_t NoiseType = 0x110;
        inline constexpr uintptr_t SampleDirectional = 0x100;
        inline constexpr uintptr_t SampleUniform = 0x108;
        inline constexpr uintptr_t Seed = 0x118;
    }

    namespace NormalMap {
        inline constexpr uintptr_t Decal = 0x100;
        inline constexpr uintptr_t MaterialVariant = 0x108;
        inline constexpr uintptr_t MetalnessMap = 0x120;
        inline constexpr uintptr_t SurfaceAppearance = 0x110;
        inline constexpr uintptr_t TerrainDetail = 0x118;
    }

    namespace NormalMapContent {
        inline constexpr uintptr_t Decal = 0x100;
        inline constexpr uintptr_t MaterialVariant = 0x108;
        inline constexpr uintptr_t SurfaceAppearance = 0x110;
        inline constexpr uintptr_t TerrainDetail = 0x118;
    }

    namespace NotificationService {
        inline constexpr uintptr_t ActionEnabled = 0x108;
        inline constexpr uintptr_t ActionTaken = 0x110;
        inline constexpr uintptr_t CancelAllNotification = 0x118;
        inline constexpr uintptr_t CancelNotification = 0x120;
        inline constexpr uintptr_t GetScheduledNotifications = 0x100;
        inline constexpr uintptr_t IsConnected = 0x150;
        inline constexpr uintptr_t IsLuaChatEnabled = 0x158;
        inline constexpr uintptr_t IsLuaGameDetailsEnabled = 0x160;
        inline constexpr uintptr_t RT_ = 0x1a8;
        inline constexpr uintptr_t RccConnectionChanged = 0x170;
        inline constexpr uintptr_t RccEventReceived = 0x178;
        inline constexpr uintptr_t Roblox17sConnectionChanged = 0x180;
        inline constexpr uintptr_t Roblox17sEventReceived = 0x188;
        inline constexpr uintptr_t RobloxConnectionChanged = 0x190;
        inline constexpr uintptr_t RobloxEventReceived = 0x198;
        inline constexpr uintptr_t ScheduleNotification = 0x128;
        inline constexpr uintptr_t SelectedTheme = 0x168;
        inline constexpr uintptr_t SubscribeToRccEventNamespace = 0x130;
        inline constexpr uintptr_t SubscribeToTopic = 0x138;
        inline constexpr uintptr_t SwitchedToAppShellFeature = 0x140;
        inline constexpr uintptr_t TopicNotificationReceived = 0x1a0;
        inline constexpr uintptr_t UnsubscribeFromTopic = 0x148;
    }

    namespace NullInput {
        inline constexpr uintptr_t InvalidText = 0x100;
        inline constexpr uintptr_t InvalidUser = 0x108;
    }

    namespace NumberPose {
        inline constexpr uintptr_t Value = 0x100;
    }

    namespace NumberValue {
        inline constexpr uintptr_t Changed = 0x108;
        inline constexpr uintptr_t Value = 0x100;
        inline constexpr uintptr_t changed = 0x110;
    }

    namespace Object {
        inline constexpr uintptr_t Changed = 0x128;
        inline constexpr uintptr_t ClassName = 0x118;
        inline constexpr uintptr_t GetPropertyChangedSignal = 0x100;
        inline constexpr uintptr_t IsA = 0x108;
        inline constexpr uintptr_t className = 0x120;
        inline constexpr uintptr_t isA = 0x110;
    }

    namespace ObjectValue {
        inline constexpr uintptr_t Changed = 0x108;
        inline constexpr uintptr_t Value = 0x100;
        inline constexpr uintptr_t changed = 0x110;
    }

    namespace OcclusionEnabled {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioListener = 0x108;
        inline constexpr uintptr_t SoundService = 0x110;
    }

    namespace Offset {
        inline constexpr uintptr_t AtmosphereSensor = 0x100;
        inline constexpr uintptr_t DataModelMesh = 0x108;
        inline constexpr uintptr_t IKControl = 0x110;
        inline constexpr uintptr_t UIGradient = 0x118;
        inline constexpr uintptr_t UIShadow = 0x120;
        inline constexpr uintptr_t WrapLayer = 0x128;
    }

    namespace OmniRecommendationsService {
        inline constexpr uintptr_t ClearSessionId = 0x100;
        inline constexpr uintptr_t GetSessionId = 0x108;
        inline constexpr uintptr_t MakeRequest = 0x110;
    }

    namespace OnInvoke {
        inline constexpr uintptr_t DataModel = 0x108;
        inline constexpr uintptr_t Plugin = 0x100;
    }

    namespace OnPlacePublishLargePropertiesInfo {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Open {
        inline constexpr uintptr_t ChannelSelectorSoundEffect = 0x108;
        inline constexpr uintptr_t CustomLog = 0x100;
        inline constexpr uintptr_t Players = 0x110;
        inline constexpr uintptr_t SensorBase = 0x118;
    }

    namespace OpenBrowserWindow {
        inline constexpr uintptr_t BrowserService = 0x100;
        inline constexpr uintptr_t GuiService = 0x108;
    }

    namespace OpenCloudApiV1 {
        inline constexpr uintptr_t CreateModel = 0x108;
        inline constexpr uintptr_t CreateUserNotificationAsync = 0x100;
    }

    namespace OpenCloudService {
        inline constexpr uintptr_t GetApiV1 = 0x110;
        inline constexpr uintptr_t HttpRequestAsync = 0x100;
        inline constexpr uintptr_t InvokeAsync = 0x108;
        inline constexpr uintptr_t RegisterOpenCloud = 0x118;
        inline constexpr uintptr_t RegistrationComplete = 0x120;
    }

    namespace OpenNativeOverlay {
        inline constexpr uintptr_t BrowserService = 0x100;
        inline constexpr uintptr_t GuiService = 0x108;
    }

    namespace OpenTypeFeatures {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace OpenTypeFeaturesError {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace Order {
        inline constexpr uintptr_t AccessoryDescription = 0x100;
        inline constexpr uintptr_t MarkerCurve = 0x108;
        inline constexpr uintptr_t WrapLayer = 0x110;
    }

    namespace OrderedDataStore {
        inline constexpr uintptr_t GetSortedAsync = 0x100;
    }

    namespace Orientation {
        inline constexpr uintptr_t Attachment = 0x100;
        inline constexpr uintptr_t BasePart = 0x108;
        inline constexpr uintptr_t DragDetector = 0x110;
        inline constexpr uintptr_t ParticleEmitter = 0x118;
        inline constexpr uintptr_t RenderingTest = 0x120;
    }

    namespace Output {
        inline constexpr uintptr_t LogService = 0x100;
        inline constexpr uintptr_t Logger = 0x108;
    }

    namespace PVAdornment {
        inline constexpr uintptr_t Adornee = 0x100;
    }

    namespace PVInstance {
        inline constexpr uintptr_t GetPivot = 0x100;
        inline constexpr uintptr_t Origin = 0x110;
        inline constexpr uintptr_t PivotTo = 0x108;
    }

    namespace PackageService {
        inline constexpr uintptr_t GetOverrides = 0x108;
        inline constexpr uintptr_t OverrideStateChanged = 0x110;
        inline constexpr uintptr_t OverridesCleared = 0x118;
        inline constexpr uintptr_t UpdateAsync = 0x100;
    }

    namespace Packages {
        inline constexpr uintptr_t IsDehydrated = 0x100;
        inline constexpr uintptr_t ShellPackagesCount = 0x108;
        inline constexpr uintptr_t SkippedInstancesCount = 0x110;
    }

    namespace Padding {
        inline constexpr uintptr_t UIListLayout = 0x100;
        inline constexpr uintptr_t UIPageLayout = 0x108;
        inline constexpr uintptr_t UITextSizeConstraint = 0x110;
    }

    namespace Pages {
        inline constexpr uintptr_t AdvanceToNextPageAsync = 0x100;
        inline constexpr uintptr_t GetCurrentPage = 0x108;
        inline constexpr uintptr_t IsFinished = 0x110;
    }

    namespace Pants {
        inline constexpr uintptr_t HumanoidDescription = 0x110;
        inline constexpr uintptr_t PantsTemplate = 0x100;
        inline constexpr uintptr_t PantsTemplateContent = 0x108;
    }

    namespace ParabolaAdornment {
        inline constexpr uintptr_t A = 0x108;
        inline constexpr uintptr_t B = 0x110;
        inline constexpr uintptr_t C = 0x118;
        inline constexpr uintptr_t FindPartOnParabola = 0x100;
        inline constexpr uintptr_t Range = 0x120;
        inline constexpr uintptr_t Thickness = 0x128;
        inline constexpr uintptr_t Url = 0x130;
    }

    namespace ParsingError {
        inline constexpr uintptr_t DatamodelError = 0x110;
        inline constexpr uintptr_t HttpError = 0x100;
        inline constexpr uintptr_t InvalidJson = 0x108;
    }

    namespace Part {
        inline constexpr uintptr_t SelectionPointLasso = 0x118;
        inline constexpr uintptr_t Shape = 0x100;
        inline constexpr uintptr_t shap = 0x108;
        inline constexpr uintptr_t shape = 0x110;
    }

    namespace Part0 {
        inline constexpr uintptr_t AnimationConstraint = 0x100;
        inline constexpr uintptr_t JointInstance = 0x108;
        inline constexpr uintptr_t NoCollisionConstraint = 0x110;
        inline constexpr uintptr_t WeldConstraint = 0x118;
    }

    namespace Part1 {
        inline constexpr uintptr_t AnimationConstraint = 0x100;
        inline constexpr uintptr_t JointInstance = 0x108;
        inline constexpr uintptr_t Noise = 0x110;
        inline constexpr uintptr_t WeldConstraint = 0x118;
    }

    namespace PartAdornment {
        inline constexpr uintptr_t Adornee = 0x100;
    }

    namespace PartOperation {
        inline constexpr uintptr_t AssetId = 0x108;
        inline constexpr uintptr_t ChildData = 0x110;
        inline constexpr uintptr_t ChildData2 = 0x118;
        inline constexpr uintptr_t ComponentIndex = 0x120;
        inline constexpr uintptr_t Content = 0x128;
        inline constexpr uintptr_t DCDPropertyData = 0x130;
        inline constexpr uintptr_t FormFactor = 0x138;
        inline constexpr uintptr_t InitialSize = 0x140;
        inline constexpr uintptr_t ManifoldMesh_DEPRECATED = 0x148;
        inline constexpr uintptr_t MeshData = 0x150;
        inline constexpr uintptr_t MeshData2 = 0x158;
        inline constexpr uintptr_t OffCentered = 0x160;
        inline constexpr uintptr_t PhysicsData = 0x168;
        inline constexpr uintptr_t RenderFidelity = 0x170;
        inline constexpr uintptr_t SmoothingAngle = 0x178;
        inline constexpr uintptr_t SolidMeshHolder = 0x180;
        inline constexpr uintptr_t SubstituteGeometry = 0x100;
        inline constexpr uintptr_t TriangleCount = 0x188;
        inline constexpr uintptr_t UsePartColor = 0x190;
    }

    namespace PartOperationAsset {
        inline constexpr uintptr_t ChildData = 0x100;
        inline constexpr uintptr_t MeshData = 0x108;
    }

    namespace ParticleEmitter {
        inline constexpr uintptr_t Acceleration = 0x1d0;
        inline constexpr uintptr_t Brightness = 0x20c;
        inline constexpr uintptr_t Clear = 0x100;
        inline constexpr uintptr_t Color = 0x128;
        inline constexpr uintptr_t Drag = 0x210;
        inline constexpr uintptr_t EmissionDirection = 0x138;
        inline constexpr uintptr_t Emit = 0x108;
        inline constexpr uintptr_t Enabled = 0x140;
        inline constexpr uintptr_t FastForward = 0x110;
        inline constexpr uintptr_t FlipbookBlendFrames = 0x148;
        inline constexpr uintptr_t FlipbookFramerate = 0x150;
        inline constexpr uintptr_t FlipbookIncompatible = 0x158;
        inline constexpr uintptr_t FlipbookLayout = 0x160;
        inline constexpr uintptr_t FlipbookMode = 0x168;
        inline constexpr uintptr_t FlipbookSizeX = 0x170;
        inline constexpr uintptr_t FlipbookSizeY = 0x178;
        inline constexpr uintptr_t FlipbookStartRandom = 0x180;
        inline constexpr uintptr_t Lifetime = 0x1e4;
        inline constexpr uintptr_t LightEmission = 0x228;
        inline constexpr uintptr_t LightInfluence = 0x22c;
        inline constexpr uintptr_t LocalTransparencyModifier = 0x1a0;
        inline constexpr uintptr_t LockedToPart = 0x1a8;
        inline constexpr uintptr_t OnClearRequested = 0x250;
        inline constexpr uintptr_t OnEmitRequested = 0x258;
        inline constexpr uintptr_t Orientation = 0x1b0;
        inline constexpr uintptr_t Rate = 0x238;
        inline constexpr uintptr_t RotSpeed = 0x1ec;
        inline constexpr uintptr_t Rotation = 0x1f4;
        inline constexpr uintptr_t Shape = 0x1d0;
        inline constexpr uintptr_t ShapeInOut = 0x1d8;
        inline constexpr uintptr_t ShapePartial = 0x1e0;
        inline constexpr uintptr_t ShapeStyle = 0x1e8;
        inline constexpr uintptr_t Size = 0x1f0;
        inline constexpr uintptr_t Speed = 0x1fc;
        inline constexpr uintptr_t SpreadAngle = 0x204;
        inline constexpr uintptr_t Squash = 0x208;
        inline constexpr uintptr_t Texture = 0x1b0;
        inline constexpr uintptr_t TextureContent = 0x218;
        inline constexpr uintptr_t TimeScale = 0x24c;
        inline constexpr uintptr_t Transparency = 0x228;
        inline constexpr uintptr_t VelocityInheritance = 0x250;
        inline constexpr uintptr_t VelocitySpread = 0x238;
        inline constexpr uintptr_t WindAffectsDrag = 0x240;
        inline constexpr uintptr_t ZOffset = 0x254;
    }

    namespace PartyEmulatorService {
        inline constexpr uintptr_t ConfigurationChanged = 0x148;
        inline constexpr uintptr_t CreateNewParty = 0x108;
        inline constexpr uintptr_t DeleteParty = 0x110;
        inline constexpr uintptr_t GetEmulatedPartyAsync = 0x100;
        inline constexpr uintptr_t GetEmulatedPartyConfiguration = 0x118;
        inline constexpr uintptr_t GetIsEmulationEnabled = 0x120;
        inline constexpr uintptr_t OnTestPlayerCountChanged = 0x128;
        inline constexpr uintptr_t SetIsEmulationEnabled = 0x130;
        inline constexpr uintptr_t SetPlayerPartyId = 0x138;
        inline constexpr uintptr_t applyPartyIdToPlayer = 0x140;
    }

    namespace Pass_TerrainVTFeedback {
        inline constexpr uintptr_t fcUpdateResult = 0x108;
        inline constexpr uintptr_t motionBufferFastClusterPS = 0x100;
    }

    namespace PatchId {
        inline constexpr uintptr_t AssetService = 0x100;
        inline constexpr uintptr_t PatchMapping = 0x108;
    }

    namespace PatchMapping {
        inline constexpr uintptr_t FlattenTree = 0x100;
        inline constexpr uintptr_t PatchId = 0x108;
        inline constexpr uintptr_t TargetPath = 0x110;
    }

    namespace Path {
        inline constexpr uintptr_t Blocked = 0x128;
        inline constexpr uintptr_t CheckOcclusionAsync = 0x100;
        inline constexpr uintptr_t ComputeAsync = 0x108;
        inline constexpr uintptr_t GetPointCoordinates = 0x110;
        inline constexpr uintptr_t GetWaypoints = 0x118;
        inline constexpr uintptr_t InternalSyncItem = 0x138;
        inline constexpr uintptr_t Status = 0x120;
        inline constexpr uintptr_t Unblocked = 0x130;
    }

    namespace Path2D {
        inline constexpr uintptr_t Closed = 0x170;
        inline constexpr uintptr_t Color3 = 0x178;
        inline constexpr uintptr_t ControlPointChanged = 0x1b8;
        inline constexpr uintptr_t GetBoundingRect = 0x100;
        inline constexpr uintptr_t GetControlPoint = 0x108;
        inline constexpr uintptr_t GetControlPoints = 0x110;
        inline constexpr uintptr_t GetLength = 0x118;
        inline constexpr uintptr_t GetMaxControlPoints = 0x120;
        inline constexpr uintptr_t GetPositionOnCurve = 0x128;
        inline constexpr uintptr_t GetPositionOnCurveArcLength = 0x130;
        inline constexpr uintptr_t GetSegmentCount = 0x138;
        inline constexpr uintptr_t GetTangentOnCurve = 0x140;
        inline constexpr uintptr_t GetTangentOnCurveArcLength = 0x148;
        inline constexpr uintptr_t InsertControlPoint = 0x150;
        inline constexpr uintptr_t PropertiesSerialize = 0x180;
        inline constexpr uintptr_t RemoveControlPoint = 0x158;
        inline constexpr uintptr_t SelectedControlPoint = 0x188;
        inline constexpr uintptr_t SelectedControlPointData = 0x190;
        inline constexpr uintptr_t SetControlPoints = 0x160;
        inline constexpr uintptr_t Thickness = 0x198;
        inline constexpr uintptr_t Transparency = 0x1a0;
        inline constexpr uintptr_t UpdateControlPoint = 0x168;
        inline constexpr uintptr_t Visible = 0x1a8;
        inline constexpr uintptr_t ZIndex = 0x1b0;
    }

    namespace Path3D {
        inline constexpr uintptr_t ControlPointChanged = 0x168;
        inline constexpr uintptr_t GetControlPoint = 0x100;
        inline constexpr uintptr_t GetControlPoints = 0x108;
        inline constexpr uintptr_t GetLength = 0x110;
        inline constexpr uintptr_t GetMaxControlPoints = 0x118;
        inline constexpr uintptr_t GetPositionOnCurve = 0x120;
        inline constexpr uintptr_t GetPositionOnCurveArcLength = 0x128;
        inline constexpr uintptr_t GetSegmentCount = 0x130;
        inline constexpr uintptr_t GetTangentOnCurve = 0x138;
        inline constexpr uintptr_t GetTangentOnCurveArcLength = 0x140;
        inline constexpr uintptr_t InsertControlPoint = 0x148;
        inline constexpr uintptr_t RemoveControlPoint = 0x150;
        inline constexpr uintptr_t SetControlPoints = 0x158;
        inline constexpr uintptr_t UpdateControlPoint = 0x160;
    }

    namespace PathfindingLink {
        inline constexpr uintptr_t Attachment0 = 0x100;
        inline constexpr uintptr_t Attachment1 = 0x108;
        inline constexpr uintptr_t IsBidirectional = 0x110;
        inline constexpr uintptr_t Label = 0x118;
    }

    namespace PathfindingModifier {
        inline constexpr uintptr_t Label = 0x100;
        inline constexpr uintptr_t PassThrough = 0x108;
    }

    namespace PathfindingService {
        inline constexpr uintptr_t ComputeRawPathAsync = 0x100;
        inline constexpr uintptr_t ComputeSmoothPathAsync = 0x108;
        inline constexpr uintptr_t CreatePath = 0x118;
        inline constexpr uintptr_t EmptyCutoff = 0x120;
        inline constexpr uintptr_t FindPathAsync = 0x110;
    }

    namespace Pause {
        inline constexpr uintptr_t AnimatedImage = 0x100;
        inline constexpr uintptr_t AudioTextToSpeech = 0x108;
        inline constexpr uintptr_t RunService = 0x110;
        inline constexpr uintptr_t ScriptDebuggerService = 0x118;
        inline constexpr uintptr_t Sound = 0x120;
        inline constexpr uintptr_t TweenBase = 0x128;
        inline constexpr uintptr_t VideoFrame = 0x130;
        inline constexpr uintptr_t VideoPlayer = 0x138;
    }

    namespace PerformanceControlService {
        inline constexpr uintptr_t IsCrossExperienceLaunchFeasible = 0x100;
        inline constexpr uintptr_t SetUserActivity = 0x108;
    }

    namespace PermissionsService {
        inline constexpr uintptr_t GetIsThirdPartyAssetAllowed = 0x100;
        inline constexpr uintptr_t GetIsThirdPartyPurchaseAllowed = 0x108;
        inline constexpr uintptr_t GetIsThirdPartyTeleportAllowed = 0x110;
        inline constexpr uintptr_t GetPermissions = 0x118;
        inline constexpr uintptr_t SetPermissions = 0x120;
    }

    namespace PhysicsService {
        inline constexpr uintptr_t CollisionGroupCollidableChanged = 0x188;
        inline constexpr uintptr_t CollisionGroupContainsPart = 0x100;
        inline constexpr uintptr_t CollisionGroupSetCollidable = 0x108;
        inline constexpr uintptr_t CollisionGroupsAreCollidable = 0x110;
        inline constexpr uintptr_t CreateCollisionGroup = 0x118;
        inline constexpr uintptr_t GetCollisionGroupId = 0x120;
        inline constexpr uintptr_t GetCollisionGroupName = 0x128;
        inline constexpr uintptr_t GetCollisionGroups = 0x130;
        inline constexpr uintptr_t GetMaxCollisionGroups = 0x138;
        inline constexpr uintptr_t GetRegisteredCollisionGroups = 0x140;
        inline constexpr uintptr_t IkSolve = 0x148;
        inline constexpr uintptr_t IsCollisionGroupRegistered = 0x150;
        inline constexpr uintptr_t LocalIkSolve = 0x158;
        inline constexpr uintptr_t RegisterCollisionGroup = 0x160;
        inline constexpr uintptr_t RemoveCollisionGroup = 0x168;
        inline constexpr uintptr_t RenameCollisionGroup = 0x170;
        inline constexpr uintptr_t SetPartCollisionGroup = 0x178;
        inline constexpr uintptr_t UnregisterCollisionGroup = 0x180;
    }

    namespace PhysicsSettings {
        inline constexpr uintptr_t AllowSleep = 0x100;
        inline constexpr uintptr_t AreAnchorsShown = 0x108;
        inline constexpr uintptr_t AreAssembliesShown = 0x110;
        inline constexpr uintptr_t AreAssemblyCentersOfMassShown = 0x118;
        inline constexpr uintptr_t AreAwakePartsHighlighted = 0x120;
        inline constexpr uintptr_t AreBodyTypesShown = 0x128;
        inline constexpr uintptr_t AreCollisionCostsShown = 0x130;
        inline constexpr uintptr_t AreConstraintForcesShownForSelectedOrHoveredInstances = 0x138;
        inline constexpr uintptr_t AreConstraintTorquesShownForSelectedOrHoveredInstances = 0x140;
        inline constexpr uintptr_t AreContactForcesShownForSelectedOrHoveredAssemblies = 0x148;
        inline constexpr uintptr_t AreContactIslandsShown = 0x150;
        inline constexpr uintptr_t AreContactPointsShown = 0x158;
        inline constexpr uintptr_t AreGravityForcesShownForSelectedOrHoveredAssemblies = 0x160;
        inline constexpr uintptr_t AreJointCoordinatesShown = 0x168;
        inline constexpr uintptr_t AreMagnitudesShownForDrawnForcesAndTorques = 0x170;
        inline constexpr uintptr_t AreMechanismsShown = 0x178;
        inline constexpr uintptr_t AreModelCoordsShown = 0x180;
        inline constexpr uintptr_t AreNonAnchorsShown = 0x188;
        inline constexpr uintptr_t AreOwnersShown = 0x190;
        inline constexpr uintptr_t ArePartCoordsShown = 0x198;
        inline constexpr uintptr_t AreRegionsShown = 0x1a0;
        inline constexpr uintptr_t AreSolverIslandsShown = 0x1a8;
        inline constexpr uintptr_t AreTerrainReplicationRegionsShown = 0x1b0;
        inline constexpr uintptr_t AreTimestepsShown = 0x1b8;
        inline constexpr uintptr_t AreUnalignedPartsShown = 0x1c0;
        inline constexpr uintptr_t AreWorldCoordsShown = 0x1c8;
        inline constexpr uintptr_t CollisionGeomDrawOriginalParts = 0x1d0;
        inline constexpr uintptr_t CollisionGeomMatchPartTransparency = 0x1d8;
        inline constexpr uintptr_t CollisionGeomOverlayTransparency = 0x1e0;
        inline constexpr uintptr_t CollisionGeomShowCollidableParts = 0x1e8;
        inline constexpr uintptr_t CollisionGeomShowCollisionGroup = 0x1f0;
        inline constexpr uintptr_t CollisionGeomShowQueryableParts = 0x1f8;
        inline constexpr uintptr_t CollisionGeomShowTouchableParts = 0x200;
        inline constexpr uintptr_t DisableCSGv2 = 0x208;
        inline constexpr uintptr_t DisableCSGv3ForPlugins = 0x210;
        inline constexpr uintptr_t DrawConstraintsNetForce = 0x218;
        inline constexpr uintptr_t DrawContactsNetForce = 0x220;
        inline constexpr uintptr_t DrawTotalNetForce = 0x228;
        inline constexpr uintptr_t EnableForceVisualizationSmoothing = 0x230;
        inline constexpr uintptr_t FluidForceDrawScale = 0x238;
        inline constexpr uintptr_t ForceCSGv2 = 0x240;
        inline constexpr uintptr_t ForceDrawScale = 0x248;
        inline constexpr uintptr_t ForceVisualizationSmoothingSteps = 0x250;
        inline constexpr uintptr_t IsInterpolationThrottleShown = 0x258;
        inline constexpr uintptr_t IsReceiveAgeShown = 0x260;
        inline constexpr uintptr_t IsTreeShown = 0x268;
        inline constexpr uintptr_t Physics = 0x2b8;
        inline constexpr uintptr_t PhysicsEnvironmentalThrottle = 0x270;
        inline constexpr uintptr_t ShowDecompositionGeometry = 0x278;
        inline constexpr uintptr_t ShowFluidForcesForSelectedOrHoveredMechanisms = 0x280;
        inline constexpr uintptr_t ShowInstanceNamesForDrawnForcesAndTorques = 0x288;
        inline constexpr uintptr_t SolverConvergenceMetricType = 0x290;
        inline constexpr uintptr_t SolverConvergenceVisualizationMode = 0x298;
        inline constexpr uintptr_t ThrottleAdjustTime = 0x2a0;
        inline constexpr uintptr_t TorqueDrawScale = 0x2a8;
        inline constexpr uintptr_t UseCSGv2 = 0x2b0;
    }

    namespace PinShortcutService {
        inline constexpr uintptr_t IsAvailable = 0x100;
        inline constexpr uintptr_t IsRevealPinnedExperienceAvailable = 0x108;
        inline constexpr uintptr_t OnPinExperienceCompleted = 0x128;
        inline constexpr uintptr_t PinExperience = 0x110;
        inline constexpr uintptr_t RevealPinnedExperience = 0x118;
        inline constexpr uintptr_t ShouldShowLuaNotificationOnPinExperienceCompleted = 0x120;
    }

    namespace Pitch {
        inline constexpr uintptr_t AudioPitchShifter = 0x100;
        inline constexpr uintptr_t AudioTextToSpeech = 0x108;
        inline constexpr uintptr_t Sound = 0x110;
    }

    namespace PitchShiftSoundEffect {
        inline constexpr uintptr_t Octave = 0x100;
    }

    namespace PlaceId {
        inline constexpr uintptr_t CSGPendingMigrationData = 0x100;
        inline constexpr uintptr_t DataModel = 0x108;
    }

    namespace Platform {
        inline constexpr uintptr_t RemoteCreateMotor6D = 0x100;
        inline constexpr uintptr_t RemoteDestroyMotor6D = 0x108;
    }

    namespace PlatformLibraries {
        inline constexpr uintptr_t RemoteRequireRequest = 0x100;
        inline constexpr uintptr_t RemoteRequireResponse = 0x108;
    }

    namespace Play {
        inline constexpr uintptr_t AnimationStreamTrack = 0x100;
        inline constexpr uintptr_t AnimationTrack = 0x108;
        inline constexpr uintptr_t AudioPlayer = 0x110;
        inline constexpr uintptr_t AudioTextToSpeech = 0x118;
        inline constexpr uintptr_t HapticEffect = 0x120;
        inline constexpr uintptr_t Sound = 0x128;
        inline constexpr uintptr_t TweenService = 0x130;
        inline constexpr uintptr_t VideoFrame = 0x138;
        inline constexpr uintptr_t VideoPlayer = 0x140;
    }

    namespace PlaybackRegion {
        inline constexpr uintptr_t AudioPlayer = 0x100;
        inline constexpr uintptr_t Sound = 0x108;
    }

    namespace PlaybackSpeed {
        inline constexpr uintptr_t AnimatedImageTrack = 0x100;
        inline constexpr uintptr_t AudioPlayer = 0x108;
        inline constexpr uintptr_t AudioTextToSpeech = 0x110;
        inline constexpr uintptr_t Sound = 0x118;
        inline constexpr uintptr_t VideoPlayer = 0x120;
    }

    namespace Player {
        inline constexpr uintptr_t AccountAge = 0x34c;
        inline constexpr uintptr_t AccountAgeReplicate = 0x3e8;
        inline constexpr uintptr_t AddReplicationFocus = 0x1d0;
        inline constexpr uintptr_t AddReplicationFocusPosition = 0x1d8;
        inline constexpr uintptr_t AddToBlockList = 0x1e0;
        inline constexpr uintptr_t AgeChecked = 0x3f0;
        inline constexpr uintptr_t AppearanceDidLoad = 0x3f8;
        inline constexpr uintptr_t AudioDeviceInput = 0x770;
        inline constexpr uintptr_t AudioDistortion = 0x778;
        inline constexpr uintptr_t AutoJumpEnabled = 0x400;
        inline constexpr uintptr_t BlockListChanged = 0x628;
        inline constexpr uintptr_t CameraFieldOfView = 0x408;
        inline constexpr uintptr_t CameraFrustumRequested = 0x410;
        inline constexpr uintptr_t CameraMaxZoomDistance = 0x418;
        inline constexpr uintptr_t CameraMinZoomDistance = 0x420;
        inline constexpr uintptr_t CameraMode = 0x360;
        inline constexpr uintptr_t CameraViewportSize = 0x430;
        inline constexpr uintptr_t CanLoadCharacterAppearance = 0x438;
        inline constexpr uintptr_t Character = 0x288;
        inline constexpr uintptr_t CharacterAdded = 0x630;
        inline constexpr uintptr_t CharacterAppearance = 0x448;
        inline constexpr uintptr_t CharacterAppearanceId = 0x450;
        inline constexpr uintptr_t CharacterAppearanceLoaded = 0x638;
        inline constexpr uintptr_t CharacterRemoving = 0x640;
        inline constexpr uintptr_t ChararacterRegionId = 0x458;
        inline constexpr uintptr_t ChatAvailabilityStatus = 0x460;
        inline constexpr uintptr_t ChatMode = 0x468;
        inline constexpr uintptr_t ChatPrivacyMode = 0x470;
        inline constexpr uintptr_t Chatted = 0x648;
        inline constexpr uintptr_t ClearCachedAvatarAppearance = 0x1e8;
        inline constexpr uintptr_t ClearCharacterAppearance = 0x1f0;
        inline constexpr uintptr_t CloudEditCameraCoordinateFrame = 0x478;
        inline constexpr uintptr_t CloudEditPlayerActive = 0x480;
        inline constexpr uintptr_t CloudEditSelectionChanged = 0x650;
        inline constexpr uintptr_t CountryRegionCodeReplicate = 0x488;
        inline constexpr uintptr_t DataComplexity = 0x490;
        inline constexpr uintptr_t DataComplexityLimit = 0x498;
        inline constexpr uintptr_t DataReady = 0x4a0;
        inline constexpr uintptr_t DevCameraOcclusionMode = 0x4a8;
        inline constexpr uintptr_t DevComputerCameraMode = 0x4b0;
        inline constexpr uintptr_t DevComputerMovementMode = 0x4b8;
        inline constexpr uintptr_t DevEnableMouseLock = 0x4c0;
        inline constexpr uintptr_t DevTouchCameraMode = 0x4c8;
        inline constexpr uintptr_t DevTouchMovementMode = 0x4d0;
        inline constexpr uintptr_t DisplayName = 0x128;
        inline constexpr uintptr_t DistanceFromCharacter = 0x1f8;
        inline constexpr uintptr_t FollowUserId = 0x4e0;
        inline constexpr uintptr_t FollowUserIdReplicated = 0x4e8;
        inline constexpr uintptr_t FriendStatusChanged = 0x658;
        inline constexpr uintptr_t FrustumStreaming = 0x4f0;
        inline constexpr uintptr_t GameplayPaused = 0x4f8;
        inline constexpr uintptr_t GetBlockListInitialized = 0x200;
        inline constexpr uintptr_t GetCameraState = 0x208;
        inline constexpr uintptr_t GetCanManageAsync = 0x100;
        inline constexpr uintptr_t GetData = 0x210;
        inline constexpr uintptr_t GetFriendStatus = 0x218;
        inline constexpr uintptr_t GetFriendsInServerAsync = 0x108;
        inline constexpr uintptr_t GetFriendsInUniverseAsync = 0x110;
        inline constexpr uintptr_t GetFriendsOnline = 0x118;
        inline constexpr uintptr_t GetFriendsOnlineAsync = 0x120;
        inline constexpr uintptr_t GetFriendsWhoPlayedAsync = 0x128;
        inline constexpr uintptr_t GetGameSessionID = 0x220;
        inline constexpr uintptr_t GetGlobalUserId = 0x228;
        inline constexpr uintptr_t GetJoinData = 0x230;
        inline constexpr uintptr_t GetMouse = 0x238;
        inline constexpr uintptr_t GetNetworkPing = 0x240;
        inline constexpr uintptr_t GetRankInGroup = 0x130;
        inline constexpr uintptr_t GetRankInGroupAsync = 0x138;
        inline constexpr uintptr_t GetRoleInGroup = 0x140;
        inline constexpr uintptr_t GetRoleInGroupAsync = 0x148;
        inline constexpr uintptr_t GetSeatRequested = 0x248;
        inline constexpr uintptr_t GetToolRequested = 0x250;
        inline constexpr uintptr_t GetUnder13 = 0x258;
        inline constexpr uintptr_t Guest = 0x500;
        inline constexpr uintptr_t HasAppearanceLoaded = 0x260;
        inline constexpr uintptr_t HasBlockedPlayer = 0x268;
        inline constexpr uintptr_t HasRobloxSubscription = 0x508;
        inline constexpr uintptr_t HasVerifiedBadge = 0x510;
        inline constexpr uintptr_t HealthDisplayDistance = 0x384;
        inline constexpr uintptr_t Idled = 0x660;
        inline constexpr uintptr_t InputLatency = 0x520;
        inline constexpr uintptr_t InstancePinned = 0x668;
        inline constexpr uintptr_t InstanceUnpinned = 0x670;
        inline constexpr uintptr_t InternalCharacterAppearanceLoaded = 0x528;
        inline constexpr uintptr_t IsBestFriendsWith = 0x150;
        inline constexpr uintptr_t IsFriendsWith = 0x158;
        inline constexpr uintptr_t IsFriendsWithAsync = 0x160;
        inline constexpr uintptr_t IsInGroup = 0x168;
        inline constexpr uintptr_t IsInGroupAsync = 0x170;
        inline constexpr uintptr_t IsVerified = 0x270;
        inline constexpr uintptr_t Kick = 0x278;
        inline constexpr uintptr_t Kill = 0x678;
        inline constexpr uintptr_t LoadBoolean = 0x280;
        inline constexpr uintptr_t LoadCharacter = 0x178;
        inline constexpr uintptr_t LoadCharacterAppearance = 0x288;
        inline constexpr uintptr_t LoadCharacterAsync = 0x180;
        inline constexpr uintptr_t LoadCharacterBlocking = 0x188;
        inline constexpr uintptr_t LoadCharacterWithAvatarRules = 0x190;
        inline constexpr uintptr_t LoadCharacterWithHumanoidDescription = 0x198;
        inline constexpr uintptr_t LoadCharacterWithHumanoidDescriptionAsync = 0x1a0;
        inline constexpr uintptr_t LoadData = 0x290;
        inline constexpr uintptr_t LoadInstance = 0x298;
        inline constexpr uintptr_t LoadNumber = 0x2a0;
        inline constexpr uintptr_t LoadString = 0x2a8;
        inline constexpr uintptr_t LocalPlayer = 0x120;
        inline constexpr uintptr_t LocaleId = 0x108;
        inline constexpr uintptr_t MaxSimulationRadius = 0x538;
        inline constexpr uintptr_t MaxZoomDistance = 0x358;
        inline constexpr uintptr_t MaximumSimulationRadius = 0x540;
        inline constexpr uintptr_t MembershipType = 0x548;
        inline constexpr uintptr_t MembershipTypeReplicate = 0x550;
        inline constexpr uintptr_t MinZoomDistance = 0x35c;
        inline constexpr uintptr_t ModelInstance = 0x288;
        inline constexpr uintptr_t Mouse = 0x1200;
        inline constexpr uintptr_t Move = 0x2b0;
        inline constexpr uintptr_t NameDisplayDistance = 0x394;
        inline constexpr uintptr_t NeedRegionalFallback = 0x560;
        inline constexpr uintptr_t Neutral = 0x568;
        inline constexpr uintptr_t NotifyAgeCheckPassed = 0x2b8;
        inline constexpr uintptr_t NotifyAgeCheckPassedReplicated = 0x680;
        inline constexpr uintptr_t NotifyStreamingUnpinned = 0x688;
        inline constexpr uintptr_t OnTeleport = 0x690;
        inline constexpr uintptr_t OnTeleportInternal = 0x698;
        inline constexpr uintptr_t OsPlatform = 0x570;
        inline constexpr uintptr_t OverrideStreamRadii = 0x6a0;
        inline constexpr uintptr_t OverrideStreamingRadii = 0x2c0;
        inline constexpr uintptr_t PartyId = 0x578;
        inline constexpr uintptr_t PauseTeleports = 0x6a8;
        inline constexpr uintptr_t PendingRequestedTool = 0x580;
        inline constexpr uintptr_t PinStreamingForInstance = 0x2c8;
        inline constexpr uintptr_t PinStreamingForInstanceByUniqueId = 0x2d0;
        inline constexpr uintptr_t PlatformName = 0x588;
        inline constexpr uintptr_t PlayerCharacterLoaded = 0x6b0;
        inline constexpr uintptr_t PlayerChatTranslationSettingsLocaleSetFromLua = 0x6b8;
        inline constexpr uintptr_t PlayerExperienceSettingsLocaleSetFromLua = 0x6c0;
        inline constexpr uintptr_t PromptAgeCheck = 0x2d8;
        inline constexpr uintptr_t PromptSecurityChallengeAsync = 0x1a8;
        inline constexpr uintptr_t RawJoinData = 0x590;
        inline constexpr uintptr_t RemoteFriendRequestSignal = 0x6c8;
        inline constexpr uintptr_t RemoteInsert = 0x6d0;
        inline constexpr uintptr_t RemoveCharacter = 0x2e0;
        inline constexpr uintptr_t RemoveReplicationFocus = 0x2e8;
        inline constexpr uintptr_t RemoveReplicationFocusPosition = 0x2f0;
        inline constexpr uintptr_t ReplicationFocus = 0x598;
        inline constexpr uintptr_t RequestFriendship = 0x2f8;
        inline constexpr uintptr_t RequestSeat = 0x300;
        inline constexpr uintptr_t RequestStreamAroundAsync = 0x1b0;
        inline constexpr uintptr_t RequestStreamingPin = 0x6d8;
        inline constexpr uintptr_t RequestStreamingPinByUniqueId = 0x6e0;
        inline constexpr uintptr_t RequestTool = 0x308;
        inline constexpr uintptr_t RespawnLocation = 0x5a0;
        inline constexpr uintptr_t RevokeFriendship = 0x310;
        inline constexpr uintptr_t SaveBoolean = 0x318;
        inline constexpr uintptr_t SaveData = 0x320;
        inline constexpr uintptr_t SaveInstance = 0x328;
        inline constexpr uintptr_t SaveNumber = 0x330;
        inline constexpr uintptr_t SaveString = 0x338;
        inline constexpr uintptr_t ScopeCheckInitiated = 0x6e8;
        inline constexpr uintptr_t ScriptSecurityError = 0x6f0;
        inline constexpr uintptr_t SendCameraFrustum = 0x6f8;
        inline constexpr uintptr_t SendMaxClientBandwidthBps = 0x700;
        inline constexpr uintptr_t ServerToClientUnfilteredChatReplicate = 0x708;
        inline constexpr uintptr_t ServerUpdatedHead = 0x710;
        inline constexpr uintptr_t SetAccountAge = 0x340;
        inline constexpr uintptr_t SetBlockListInitialized = 0x348;
        inline constexpr uintptr_t SetCharacterAppearanceJson = 0x350;
        inline constexpr uintptr_t SetChatTranslationSettingsLocaleId = 0x358;
        inline constexpr uintptr_t SetExperienceSettingsLocaleId = 0x360;
        inline constexpr uintptr_t SetHasRobloxSubscription = 0x368;
        inline constexpr uintptr_t SetMembershipType = 0x370;
        inline constexpr uintptr_t SetModerationAccessKey = 0x378;
        inline constexpr uintptr_t SetShutdownMessage = 0x718;
        inline constexpr uintptr_t SetSuperSafeChat = 0x380;
        inline constexpr uintptr_t SetUnder13 = 0x388;
        inline constexpr uintptr_t SimulationRadius = 0x5a8;
        inline constexpr uintptr_t SimulationRadiusChanged = 0x720;
        inline constexpr uintptr_t StatsAvailable = 0x728;
        inline constexpr uintptr_t StepIdOffset = 0x5b0;
        inline constexpr uintptr_t StreamingPinComplete = 0x730;
        inline constexpr uintptr_t SuperSafeChatReplicate = 0x5b8;
        inline constexpr uintptr_t Team = 0x2c8;
        inline constexpr uintptr_t TeamColor = 0x3a0;
        inline constexpr uintptr_t Teleported = 0x5d0;
        inline constexpr uintptr_t TeleportedIn = 0x5d8;
        inline constexpr uintptr_t ThirdPartyTextChatRestrictionStatus = 0x5e0;
        inline constexpr uintptr_t UnfilteredChat = 0x5e8;
        inline constexpr uintptr_t UnpinStreaming = 0x738;
        inline constexpr uintptr_t UnpinStreamingForInstance = 0x390;
        inline constexpr uintptr_t UpdatePlayerBlocked = 0x398;
        inline constexpr uintptr_t User = 0x5f0;
        inline constexpr uintptr_t UserId = 0xc0;
        inline constexpr uintptr_t UserIdModeReplicate = 0x600;
        inline constexpr uintptr_t VRDevice = 0x608;
        inline constexpr uintptr_t VREnabled = 0x610;
        inline constexpr uintptr_t VoiceChatVolume = 0x618;
        inline constexpr uintptr_t WaitForDataReady = 0x1b8;
        inline constexpr uintptr_t iradDebugServerReceivedIradRequest = 0x740;
        inline constexpr uintptr_t isFriendsWith = 0x1c0;
        inline constexpr uintptr_t loadBoolean = 0x3a0;
        inline constexpr uintptr_t loadInstance = 0x3a8;
        inline constexpr uintptr_t loadNumber = 0x3b0;
        inline constexpr uintptr_t loadString = 0x3b8;
        inline constexpr uintptr_t saveBoolean = 0x3c0;
        inline constexpr uintptr_t saveInstance = 0x3c8;
        inline constexpr uintptr_t saveNumber = 0x3d0;
        inline constexpr uintptr_t saveString = 0x3d8;
        inline constexpr uintptr_t userId = 0x620;
        inline constexpr uintptr_t waitForDataReady = 0x1c8;
    }

    namespace PlayerConfigurer {
        inline constexpr uintptr_t Pointer = 0x0;
    }

    namespace PlayerData {
        inline constexpr uintptr_t GetPlayer = 0x108;
        inline constexpr uintptr_t GetRecordAsync = 0x100;
    }

    namespace PlayerDataRecord {
        inline constexpr uintptr_t Changed = 0x190;
        inline constexpr uintptr_t CreatedTime = 0x138;
        inline constexpr uintptr_t DefaultRecordName = 0x140;
        inline constexpr uintptr_t Dirty = 0x148;
        inline constexpr uintptr_t Error = 0x150;
        inline constexpr uintptr_t Flushed = 0x198;
        inline constexpr uintptr_t FlushedTime = 0x158;
        inline constexpr uintptr_t GetPlayer = 0x110;
        inline constexpr uintptr_t GetValue = 0x118;
        inline constexpr uintptr_t GetValueChangedSignal = 0x120;
        inline constexpr uintptr_t Loaded = 0x1a0;
        inline constexpr uintptr_t LoadedTime = 0x160;
        inline constexpr uintptr_t ModifiedTime = 0x168;
        inline constexpr uintptr_t NewRecord = 0x170;
        inline constexpr uintptr_t Readable = 0x178;
        inline constexpr uintptr_t RecordName = 0x180;
        inline constexpr uintptr_t ReleaseAsync = 0x100;
        inline constexpr uintptr_t RemoveValue = 0x128;
        inline constexpr uintptr_t RequestFlushAsync = 0x108;
        inline constexpr uintptr_t SetValue = 0x130;
        inline constexpr uintptr_t Writable = 0x188;
    }

    namespace PlayerDataRecordConfig {
        inline constexpr uintptr_t GetDefaultValue = 0x100;
        inline constexpr uintptr_t RecordName = 0x110;
        inline constexpr uintptr_t SetDefaultValue = 0x108;
    }

    namespace PlayerDataService {
        inline constexpr uintptr_t GetRecordConfig = 0x100;
        inline constexpr uintptr_t LoadFailureBehavior = 0x108;
    }

    namespace PlayerEmulatorService {
        inline constexpr uintptr_t CustomPoliciesEnabled = 0x118;
        inline constexpr uintptr_t EmulatedCountryCode = 0x120;
        inline constexpr uintptr_t EmulatedGameLocale = 0x128;
        inline constexpr uintptr_t GetEmulatedPolicyInfo = 0x100;
        inline constexpr uintptr_t PlayerEmulationEnabled = 0x130;
        inline constexpr uintptr_t PseudolocalizationEnabled = 0x138;
        inline constexpr uintptr_t RegionCodeWillHaveAutomaticNonCustomPolicies = 0x108;
        inline constexpr uintptr_t SerializedEmulatedPolicyInfo = 0x140;
        inline constexpr uintptr_t SetEmulatedPolicyInfo = 0x110;
        inline constexpr uintptr_t TextElongationFactor = 0x148;
    }

    namespace PlayerGui {
        inline constexpr uintptr_t CurrentScreenOrientation = 0x110;
        inline constexpr uintptr_t GetTopbarTransparency = 0x100;
        inline constexpr uintptr_t InputBindingMappingsRaw = 0x118;
        inline constexpr uintptr_t ScreenOrientation = 0x120;
        inline constexpr uintptr_t SelectionImageObject = 0x128;
        inline constexpr uintptr_t SetTopbarTransparency = 0x108;
        inline constexpr uintptr_t TopbarTransparencyChangedSignal = 0x130;
    }

    namespace PlayerHydrationService {
        inline constexpr uintptr_t PlayerHydration = 0x100;
        inline constexpr uintptr_t bins = 0x108;
    }

    namespace PlayerInStreamingEnabledGames {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace PlayerIntegrity {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace PlayerListConfiguration {
        inline constexpr uintptr_t CoreGuiConfiguration = 0x108;
        inline constexpr uintptr_t Open = 0x100;
    }

    namespace PlayerMouse {
        inline constexpr uintptr_t Icon = 0xb8;
        inline constexpr uintptr_t Workspace = 0x140;
    }

    namespace PlayerScripts {
        inline constexpr uintptr_t ClearComputerCameraMovementModes = 0x100;
        inline constexpr uintptr_t ClearComputerMovementModes = 0x108;
        inline constexpr uintptr_t ClearTouchCameraMovementModes = 0x110;
        inline constexpr uintptr_t ClearTouchMovementModes = 0x118;
        inline constexpr uintptr_t ComputerCameraMovementModeRegistered = 0x160;
        inline constexpr uintptr_t ComputerMovementModeRegistered = 0x168;
        inline constexpr uintptr_t GetRegisteredComputerCameraMovementModes = 0x120;
        inline constexpr uintptr_t GetRegisteredComputerMovementModes = 0x128;
        inline constexpr uintptr_t GetRegisteredTouchCameraMovementModes = 0x130;
        inline constexpr uintptr_t GetRegisteredTouchMovementModes = 0x138;
        inline constexpr uintptr_t RegisterComputerCameraMovementMode = 0x140;
        inline constexpr uintptr_t RegisterComputerMovementMode = 0x148;
        inline constexpr uintptr_t RegisterTouchCameraMovementMode = 0x150;
        inline constexpr uintptr_t RegisterTouchMovementMode = 0x158;
        inline constexpr uintptr_t StarterPlayerScripts = 0x180;
        inline constexpr uintptr_t TouchCameraMovementModeRegistered = 0x170;
        inline constexpr uintptr_t TouchMovementModeRegistered = 0x178;
    }

    namespace PlayerViewService {
        inline constexpr uintptr_t GetDeviceCameraCFrame = 0x100;
        inline constexpr uintptr_t GetDeviceCameraCFrameForSelfView = 0x108;
        inline constexpr uintptr_t OnCameraCFrameReplicationRequest = 0x110;
        inline constexpr uintptr_t UpdateDeviceCFrame = 0x118;
    }

    namespace Players {
        inline constexpr uintptr_t BanAsync = 0x100;
        inline constexpr uintptr_t BanningEnabled = 0x220;
        inline constexpr uintptr_t BubbleChat = 0x228;
        inline constexpr uintptr_t CharacterAutoLoads = 0x230;
        inline constexpr uintptr_t Chat = 0x190;
        inline constexpr uintptr_t ClassicChat = 0x238;
        inline constexpr uintptr_t CloudEditApplyEditsMessage = 0x2a0;
        inline constexpr uintptr_t CreateHumanoidModelFromDescription = 0x108;
        inline constexpr uintptr_t CreateHumanoidModelFromDescriptionAsync = 0x110;
        inline constexpr uintptr_t CreateHumanoidModelFromUserId = 0x118;
        inline constexpr uintptr_t CreateHumanoidModelFromUserIdAsync = 0x120;
        inline constexpr uintptr_t CreateLocalPlayer = 0x198;
        inline constexpr uintptr_t CreateThumbnailPlayer = 0x1a0;
        inline constexpr uintptr_t FriendRequestEvent = 0x2a8;
        inline constexpr uintptr_t GetBanHistoryAsync = 0x128;
        inline constexpr uintptr_t GetCharacterAppearanceAsync = 0x130;
        inline constexpr uintptr_t GetCharacterAppearanceInfoAsync = 0x138;
        inline constexpr uintptr_t GetFriendsAsync = 0x140;
        inline constexpr uintptr_t GetHumanoidDescriptionFromOutfitId = 0x148;
        inline constexpr uintptr_t GetHumanoidDescriptionFromOutfitIdAsync = 0x150;
        inline constexpr uintptr_t GetHumanoidDescriptionFromUserId = 0x158;
        inline constexpr uintptr_t GetHumanoidDescriptionFromUserIdAsync = 0x160;
        inline constexpr uintptr_t GetNameFromUserIdAsync = 0x168;
        inline constexpr uintptr_t GetPlayerByUserId = 0x1a8;
        inline constexpr uintptr_t GetPlayerFromCharacter = 0x1b0;
        inline constexpr uintptr_t GetPlayers = 0x1b8;
        inline constexpr uintptr_t GetProfileConfigurationFromUserIdAsync = 0x170;
        inline constexpr uintptr_t GetUserIdFromNameAsync = 0x178;
        inline constexpr uintptr_t GetUserThumbnailAsync = 0x180;
        inline constexpr uintptr_t LocalPlayer = 0x120;
        inline constexpr uintptr_t MaxPlayers = 0x248;
        inline constexpr uintptr_t MaxPlayersInternal = 0x250;
        inline constexpr uintptr_t NumPlayers = 0x258;
        inline constexpr uintptr_t PlayerAdded = 0x2b0;
        inline constexpr uintptr_t PlayerChatted = 0x2b8;
        inline constexpr uintptr_t PlayerConnecting = 0x2c0;
        inline constexpr uintptr_t PlayerDisconnecting = 0x2c8;
        inline constexpr uintptr_t PlayerMembershipChanged = 0x2d0;
        inline constexpr uintptr_t PlayerRejoining = 0x2d8;
        inline constexpr uintptr_t PlayerRemoving = 0x2e0;
        inline constexpr uintptr_t PreferredPlayers = 0x260;
        inline constexpr uintptr_t PreferredPlayersInternal = 0x268;
        inline constexpr uintptr_t PromptAgeCheckRequested = 0x2e8;
        inline constexpr uintptr_t PromptGameServerAvatarReportEnrichment = 0x2f0;
        inline constexpr uintptr_t PromptGameServerReportEnrichment = 0x2f8;
        inline constexpr uintptr_t PromptGameServerTargetedChatReportEnrichment = 0x300;
        inline constexpr uintptr_t PromptReportServerEnrichmentAndScan = 0x308;
        inline constexpr uintptr_t ReportAbuse = 0x1c0;
        inline constexpr uintptr_t ReportAbuseV3 = 0x1c8;
        inline constexpr uintptr_t ReportAvatarAbuse = 0x1d0;
        inline constexpr uintptr_t ReportChatAbuse = 0x1d8;
        inline constexpr uintptr_t RequestCloudEditKick = 0x310;
        inline constexpr uintptr_t RequestCloudEditShutdown = 0x318;
        inline constexpr uintptr_t ResetLocalPlayer = 0x1e0;
        inline constexpr uintptr_t RespawnTime = 0x270;
        inline constexpr uintptr_t ServerGitHash = 0x278;
        inline constexpr uintptr_t ServerLogPrefix = 0x280;
        inline constexpr uintptr_t SetChatStyle = 0x1e8;
        inline constexpr uintptr_t SetLocalPlayerInfo = 0x1f0;
        inline constexpr uintptr_t TeamChat = 0x1f8;
        inline constexpr uintptr_t TeamCreateServerMessage = 0x320;
        inline constexpr uintptr_t UnbanAsync = 0x188;
        inline constexpr uintptr_t UseStrafingAnimations = 0x288;
        inline constexpr uintptr_t UserSubscriptionStatusChanged = 0x328;
        inline constexpr uintptr_t WhisperChat = 0x200;
        inline constexpr uintptr_t getPlayers = 0x208;
        inline constexpr uintptr_t localPlayer = 0x290;
        inline constexpr uintptr_t numPlayers = 0x298;
        inline constexpr uintptr_t playerFromCharacter = 0x210;
        inline constexpr uintptr_t players = 0x218;
    }

    namespace Plugin {
        inline constexpr uintptr_t Activate = 0x158;
        inline constexpr uintptr_t CollisionEnabled = 0x290;
        inline constexpr uintptr_t CreateDockWidgetPluginGui = 0x100;
        inline constexpr uintptr_t CreateDockWidgetPluginGuiAsync = 0x108;
        inline constexpr uintptr_t CreatePluginAction = 0x160;
        inline constexpr uintptr_t CreatePluginMenu = 0x168;
        inline constexpr uintptr_t CreateQWidgetPluginGui = 0x110;
        inline constexpr uintptr_t CreateToolbar = 0x170;
        inline constexpr uintptr_t Deactivate = 0x178;
        inline constexpr uintptr_t Deactivation = 0x2e0;
        inline constexpr uintptr_t DisableUIDragDetectorDrags = 0x298;
        inline constexpr uintptr_t FinishFullLoading = 0x180;
        inline constexpr uintptr_t GetItem = 0x188;
        inline constexpr uintptr_t GetJoinMode = 0x190;
        inline constexpr uintptr_t GetMouse = 0x198;
        inline constexpr uintptr_t GetPluginComponent = 0x1a0;
        inline constexpr uintptr_t GetPreinitPayload = 0x1a8;
        inline constexpr uintptr_t GetSelectedRibbonTool = 0x1b0;
        inline constexpr uintptr_t GetSetting = 0x1b8;
        inline constexpr uintptr_t GetStudioUserId = 0x1c0;
        inline constexpr uintptr_t GetUri = 0x1c8;
        inline constexpr uintptr_t GridSize = 0x2a0;
        inline constexpr uintptr_t HostDataModelType = 0x2a8;
        inline constexpr uintptr_t HostDataModelTypeIsCurrent = 0x2b0;
        inline constexpr uintptr_t ImportFbxAnimation = 0x118;
        inline constexpr uintptr_t ImportFbxAnimationAsync = 0x120;
        inline constexpr uintptr_t ImportFbxRig = 0x128;
        inline constexpr uintptr_t ImportFbxRigAsync = 0x130;
        inline constexpr uintptr_t Intersect = 0x1d0;
        inline constexpr uintptr_t Invoke = 0x1d8;
        inline constexpr uintptr_t IsActivated = 0x1e0;
        inline constexpr uintptr_t IsActivatedWithExclusiveMouse = 0x1e8;
        inline constexpr uintptr_t IsDebuggable = 0x2b8;
        inline constexpr uintptr_t IsLoadedFromProject = 0x1f0;
        inline constexpr uintptr_t MultipleDocumentInterfaceInstance = 0x2c0;
        inline constexpr uintptr_t Negate = 0x1f8;
        inline constexpr uintptr_t OnInvoke = 0x200;
        inline constexpr uintptr_t OnInvokeSuspendOverride = 0x208;
        inline constexpr uintptr_t OnSetItem = 0x210;
        inline constexpr uintptr_t OpenScript = 0x218;
        inline constexpr uintptr_t OpenWikiPage = 0x220;
        inline constexpr uintptr_t PauseSound = 0x228;
        inline constexpr uintptr_t PlaySound = 0x230;
        inline constexpr uintptr_t PluginGui = 0x310;
        inline constexpr uintptr_t ProcessAssetInsertionDrag = 0x2d0;
        inline constexpr uintptr_t ProcessAssetInsertionDrop = 0x2d8;
        inline constexpr uintptr_t PromptForExistingAssetId = 0x138;
        inline constexpr uintptr_t PromptForExistingAssetIdAsync = 0x140;
        inline constexpr uintptr_t PromptSaveSelection = 0x148;
        inline constexpr uintptr_t PromptSaveSelectionAsync = 0x150;
        inline constexpr uintptr_t Ready = 0x2e8;
        inline constexpr uintptr_t ResumeSound = 0x238;
        inline constexpr uintptr_t SaveSelectedToRoblox = 0x240;
        inline constexpr uintptr_t SelectRibbonTool = 0x248;
        inline constexpr uintptr_t Separate = 0x250;
        inline constexpr uintptr_t SetItem = 0x258;
        inline constexpr uintptr_t SetReady = 0x260;
        inline constexpr uintptr_t SetSetting = 0x268;
        inline constexpr uintptr_t StartDecalDrag = 0x270;
        inline constexpr uintptr_t StartDrag = 0x278;
        inline constexpr uintptr_t StopAllSounds = 0x280;
        inline constexpr uintptr_t Union = 0x288;
        inline constexpr uintptr_t Unloading = 0x2f0;
        inline constexpr uintptr_t UsesAssetInsertionDrag = 0x2c8;
        inline constexpr uintptr_t ViewportDragDropped = 0x2f8;
        inline constexpr uintptr_t ViewportDragEntered = 0x300;
        inline constexpr uintptr_t ViewportDragLeft = 0x308;
    }

    namespace PluginAction {
        inline constexpr uintptr_t ActionId = 0x100;
        inline constexpr uintptr_t AllowBinding = 0x108;
        inline constexpr uintptr_t Checked = 0x110;
        inline constexpr uintptr_t DefaultShortcut = 0x118;
        inline constexpr uintptr_t Enabled = 0x120;
        inline constexpr uintptr_t StatusTip = 0x128;
        inline constexpr uintptr_t Text = 0x130;
        inline constexpr uintptr_t Triggered = 0x140;
        inline constexpr uintptr_t Visible = 0x138;
    }

    namespace PluginCapabilities {
        inline constexpr uintptr_t Manifest = 0x100;
    }

    namespace PluginDragEvent {
        inline constexpr uintptr_t Data = 0x100;
        inline constexpr uintptr_t MimeType = 0x108;
        inline constexpr uintptr_t PluginDebugService = 0x120;
        inline constexpr uintptr_t Position = 0x110;
        inline constexpr uintptr_t Sender = 0x118;
    }

    namespace PluginGui {
        inline constexpr uintptr_t BindToClose = 0x100;
        inline constexpr uintptr_t GetRelativeMousePosition = 0x108;
        inline constexpr uintptr_t InputBegan = 0x120;
        inline constexpr uintptr_t InputChanged = 0x128;
        inline constexpr uintptr_t InputEnded = 0x130;
        inline constexpr uintptr_t MouseEnter = 0x138;
        inline constexpr uintptr_t MouseLeave = 0x140;
        inline constexpr uintptr_t Plugin = 0x110;
        inline constexpr uintptr_t PluginDragDropped = 0x148;
        inline constexpr uintptr_t PluginDragEntered = 0x150;
        inline constexpr uintptr_t PluginDragLeft = 0x158;
        inline constexpr uintptr_t PluginDragMoved = 0x160;
        inline constexpr uintptr_t PointerAction = 0x168;
        inline constexpr uintptr_t Title = 0x118;
        inline constexpr uintptr_t WindowFocusReleased = 0x170;
        inline constexpr uintptr_t WindowFocused = 0x178;
    }

    namespace PluginManager {
        inline constexpr uintptr_t CreatePlugin = 0x100;
        inline constexpr uintptr_t ExportPlace = 0x108;
        inline constexpr uintptr_t ExportSelection = 0x110;
    }

    namespace PluginManagerInterface {
        inline constexpr uintptr_t CreatePlugin = 0x100;
        inline constexpr uintptr_t ExportPlace = 0x108;
        inline constexpr uintptr_t ExportSelection = 0x110;
    }

    namespace PluginMenu {
        inline constexpr uintptr_t AddAction = 0x108;
        inline constexpr uintptr_t AddMenu = 0x110;
        inline constexpr uintptr_t AddNewAction = 0x118;
        inline constexpr uintptr_t AddSeparator = 0x120;
        inline constexpr uintptr_t Clear = 0x128;
        inline constexpr uintptr_t Icon = 0x130;
        inline constexpr uintptr_t ShowAsync = 0x100;
        inline constexpr uintptr_t Title = 0x138;
        inline constexpr uintptr_t Visible = 0x140;
    }

    namespace PluginMouse {
        inline constexpr uintptr_t DragEnter = 0x100;
    }

    namespace PluginToolbar {
        inline constexpr uintptr_t CreateButton = 0x100;
        inline constexpr uintptr_t CreatePopupButton = 0x108;
    }

    namespace PluginToolbarButton {
        inline constexpr uintptr_t Click = 0x130;
        inline constexpr uintptr_t ClickableWhenViewportHidden = 0x110;
        inline constexpr uintptr_t DropdownClick = 0x138;
        inline constexpr uintptr_t Enabled = 0x118;
        inline constexpr uintptr_t Icon = 0x120;
        inline constexpr uintptr_t IconContent = 0x128;
        inline constexpr uintptr_t SetActive = 0x100;
        inline constexpr uintptr_t SetDropdownActive = 0x108;
    }

    namespace PointLight {
        inline constexpr uintptr_t Range = 0x100;
    }

    namespace PointsService {
        inline constexpr uintptr_t AwardPoints = 0x100;
        inline constexpr uintptr_t GetAwardablePoints = 0x118;
        inline constexpr uintptr_t GetGamePointBalance = 0x108;
        inline constexpr uintptr_t GetPointBalance = 0x110;
        inline constexpr uintptr_t PointsAwarded = 0x120;
    }

    namespace PolicyService {
        inline constexpr uintptr_t CanViewBrandProjectAsync = 0x100;
        inline constexpr uintptr_t GetPolicyInfoForPlayerAsync = 0x108;
        inline constexpr uintptr_t GetPolicyInfoForServerRobloxOnlyAsync = 0x110;
        inline constexpr uintptr_t IsLuobuServer = 0x118;
        inline constexpr uintptr_t LuobuWhitelisted = 0x120;
    }

    namespace PolicyServiceDifferentResponseTelemetryCounter {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace PopLatencyService {
        inline constexpr uintptr_t GetSnapshot = 0x100;
        inline constexpr uintptr_t IsEnabled = 0x108;
    }

    namespace Pose {
        inline constexpr uintptr_t AddSubPose = 0x100;
        inline constexpr uintptr_t CFrame = 0x118;
        inline constexpr uintptr_t GetSubPoses = 0x108;
        inline constexpr uintptr_t MaskWeight = 0x120;
        inline constexpr uintptr_t RemoveSubPose = 0x110;
    }

    namespace PoseBase {
        inline constexpr uintptr_t EasingDirection = 0x100;
        inline constexpr uintptr_t EasingStyle = 0x108;
        inline constexpr uintptr_t Weight = 0x110;
    }

    namespace Position {
        inline constexpr uintptr_t AccessoryDescription = 0x100;
        inline constexpr uintptr_t AlignPosition = 0x108;
        inline constexpr uintptr_t Attachment = 0x110;
        inline constexpr uintptr_t BasePart = 0x118;
        inline constexpr uintptr_t BodyPosition = 0x120;
        inline constexpr uintptr_t Explosion = 0x128;
        inline constexpr uintptr_t GuiObject = 0x130;
        inline constexpr uintptr_t HapticEffect = 0x138;
        inline constexpr uintptr_t InputObject = 0x140;
        inline constexpr uintptr_t PluginDragEvent = 0x148;
        inline constexpr uintptr_t RenderingTest = 0x150;
    }

    namespace PositionInstance {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioListener = 0x108;
        inline constexpr uintptr_t AudioWindSynthesizer = 0x110;
    }

    namespace PositionType {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioListener = 0x108;
        inline constexpr uintptr_t AudioWindSynthesizer = 0x110;
    }

    namespace PostAsync {
        inline constexpr uintptr_t HttpRbxApiService = 0x100;
        inline constexpr uintptr_t HttpService = 0x108;
    }

    namespace PostEffect {
        inline constexpr uintptr_t Enabled = 0x100;
    }

    namespace PreferredTextSize {
        inline constexpr uintptr_t GuiService = 0x100;
        inline constexpr uintptr_t StyleQuery = 0x108;
        inline constexpr uintptr_t UserGameSettings = 0x110;
    }

    namespace Primitive {
        inline constexpr uintptr_t AssemblyAngularVelocity = 0xec;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0xe0;
        inline constexpr uintptr_t CFrame = 0xb0;
        inline constexpr uintptr_t Flags = 0x1b6;
        inline constexpr uintptr_t Material = 0x0;
        inline constexpr uintptr_t Orientation = 0xb0;
        inline constexpr uintptr_t Owner = 0x210;
        inline constexpr uintptr_t Part = 0x210;
        inline constexpr uintptr_t Position = 0xd4;
        inline constexpr uintptr_t PrimitiveFlags = 0x1b6;
        inline constexpr uintptr_t Rotation = 0xb0;
        inline constexpr uintptr_t Size = 0x1bc;
        inline constexpr uintptr_t Validate = 0x6;
    }

    namespace PrimitiveFlags {
        inline constexpr uintptr_t Anchored = 0x2;
        inline constexpr uintptr_t CanCollide = 0x8;
        inline constexpr uintptr_t CanQuery = 0x20;
        inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace PrimitivePool {
        inline constexpr uintptr_t ArrayBase = 0x20;
    }

    namespace PrimitiveRecord {
        inline constexpr uintptr_t Stride = 0x30;
        inline constexpr uintptr_t Translation = 0x24;
    }

    namespace Priority {
        inline constexpr uintptr_t AnimationConstraint = 0x100;
        inline constexpr uintptr_t AnimationStreamTrack = 0x108;
        inline constexpr uintptr_t AnimationTrack = 0x110;
        inline constexpr uintptr_t AuroraScript = 0x118;
        inline constexpr uintptr_t IKControl = 0x120;
        inline constexpr uintptr_t InputContext = 0x128;
        inline constexpr uintptr_t SoundGroup = 0x130;
        inline constexpr uintptr_t StateMachineTransitionDefinition = 0x138;
        inline constexpr uintptr_t StyleDerive = 0x140;
        inline constexpr uintptr_t StyleRule = 0x148;
    }

    namespace ProceduralModel {
        inline constexpr uintptr_t Dirty = 0x110;
        inline constexpr uintptr_t ForceGeneration = 0x108;
        inline constexpr uintptr_t GenerationError = 0x118;
        inline constexpr uintptr_t Generator = 0x120;
        inline constexpr uintptr_t Size = 0x128;
        inline constexpr uintptr_t WaitForGenerationAsync = 0x100;
    }

    namespace ProductInfoBatchingResponseValidationAnalytics {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace ProjectService {
        inline constexpr uintptr_t ContentMap = 0x160;
        inline constexpr uintptr_t ContentMapCreateFolderRequested = 0x168;
        inline constexpr uintptr_t ContentMapMoveRequested = 0x170;
        inline constexpr uintptr_t ContentMapMutationResult = 0x178;
        inline constexpr uintptr_t ContentMapRemovePathRequested = 0x180;
        inline constexpr uintptr_t ContentMapSetContentRequested = 0x188;
        inline constexpr uintptr_t CreateFolder = 0x108;
        inline constexpr uintptr_t EffectivePathsChanged = 0x190;
        inline constexpr uintptr_t Exists = 0x110;
        inline constexpr uintptr_t GetContentMapMemoryBytes = 0x118;
        inline constexpr uintptr_t GetMetaDataAsync = 0x100;
        inline constexpr uintptr_t GetOrphanPathSubscribers = 0x120;
        inline constexpr uintptr_t GetPathSubscribers = 0x128;
        inline constexpr uintptr_t GetPaths = 0x130;
        inline constexpr uintptr_t Move = 0x138;
        inline constexpr uintptr_t PathAdded = 0x198;
        inline constexpr uintptr_t PathChanged = 0x1a0;
        inline constexpr uintptr_t PathMoved = 0x1a8;
        inline constexpr uintptr_t PathRemoved = 0x1b0;
        inline constexpr uintptr_t RemovePath = 0x140;
        inline constexpr uintptr_t RemovePathSubscribers = 0x148;
        inline constexpr uintptr_t ResolveContent = 0x150;
        inline constexpr uintptr_t SetContent = 0x158;
    }

    namespace PropertyDescriptor {
        inline constexpr uintptr_t GetSetImpl = 0x90;
        inline constexpr uintptr_t TType = 0x68;
    }

    namespace ProximityPrompt {
        inline constexpr uintptr_t ActionText = 0xa0;
        inline constexpr uintptr_t AutoLocalize = 0x118;
        inline constexpr uintptr_t ButtonHoldBeganActionReplicated = 0x188;
        inline constexpr uintptr_t ButtonHoldEndedActionReplicated = 0x190;
        inline constexpr uintptr_t ClickablePrompt = 0x120;
        inline constexpr uintptr_t Enabled = 0x126;
        inline constexpr uintptr_t Exclusivity = 0x130;
        inline constexpr uintptr_t GamepadKeyCode = 0x10c;
        inline constexpr uintptr_t HoldDuration = 0x110;
        inline constexpr uintptr_t IndicatorHidden = 0x198;
        inline constexpr uintptr_t IndicatorShown = 0x1a0;
        inline constexpr uintptr_t InputHoldBegin = 0x100;
        inline constexpr uintptr_t InputHoldEnd = 0x108;
        inline constexpr uintptr_t KeyCode = 0x114;
        inline constexpr uintptr_t KeyboardKeyCode = 0x114;
        inline constexpr uintptr_t MaxActivationDistance = 0x118;
        inline constexpr uintptr_t MaxIndicatorDistance = 0x158;
        inline constexpr uintptr_t ObjectText = 0xc0;
        inline constexpr uintptr_t PromptButtonHoldBegan = 0x1a8;
        inline constexpr uintptr_t PromptButtonHoldEnded = 0x1b0;
        inline constexpr uintptr_t PromptHidden = 0x1b8;
        inline constexpr uintptr_t PromptShown = 0x1c0;
        inline constexpr uintptr_t RequiresLineOfSight = 0x127;
        inline constexpr uintptr_t RootLocalizationTable = 0x170;
        inline constexpr uintptr_t Style = 0x178;
        inline constexpr uintptr_t TriggerEnded = 0x1c8;
        inline constexpr uintptr_t TriggerEndedActionReplicated = 0x1d0;
        inline constexpr uintptr_t Triggered = 0x1d8;
        inline constexpr uintptr_t TriggeredActionReplicated = 0x1e0;
        inline constexpr uintptr_t UIOffset = 0x180;
    }

    namespace ProximityPromptService {
        inline constexpr uintptr_t Enabled = 0x100;
        inline constexpr uintptr_t IndicatorHidden = 0x118;
        inline constexpr uintptr_t IndicatorShown = 0x120;
        inline constexpr uintptr_t MaxIndicatorsVisible = 0x108;
        inline constexpr uintptr_t MaxPromptsVisible = 0x110;
        inline constexpr uintptr_t PreRehydrationBothAssetAndValueSet = 0x158;
        inline constexpr uintptr_t PromptButtonHoldBegan = 0x128;
        inline constexpr uintptr_t PromptButtonHoldEnded = 0x130;
        inline constexpr uintptr_t PromptHidden = 0x138;
        inline constexpr uintptr_t PromptShown = 0x140;
        inline constexpr uintptr_t PromptTriggerEnded = 0x148;
        inline constexpr uintptr_t PromptTriggered = 0x150;
    }

    namespace Publish {
        inline constexpr uintptr_t BasePart = 0x100;
        inline constexpr uintptr_t MessageBusService = 0x108;
    }

    namespace PublishAsync {
        inline constexpr uintptr_t MessagingService = 0x100;
        inline constexpr uintptr_t StandardQueue = 0x108;
    }

    namespace PublishService {
        inline constexpr uintptr_t CreateAssetAndWaitForAssetId = 0x100;
        inline constexpr uintptr_t CreateAssetOrAssetVersionAndPollAssetWithTelemetryAsync = 0x108;
        inline constexpr uintptr_t CreateAssetOrAssetVersionAndPollAssetWithTelemetryAsyncWithAddPa = 0x110;
        inline constexpr uintptr_t PublishCageMeshAsync = 0x118;
        inline constexpr uintptr_t PublishDescendantAssets = 0x128;
        inline constexpr uintptr_t PublishDescendantAssetsAsync = 0x120;
        inline constexpr uintptr_t TagEmoteAnimation = 0x130;
    }

    namespace Puffiness {
        inline constexpr uintptr_t AccessoryDescription = 0x100;
        inline constexpr uintptr_t WrapLayer = 0x108;
    }

    namespace PyramidHandleAdornment {
        inline constexpr uintptr_t Height = 0x100;
        inline constexpr uintptr_t Shading = 0x108;
        inline constexpr uintptr_t Sides = 0x110;
        inline constexpr uintptr_t Size = 0x118;
    }

    namespace QueueService {
        inline constexpr uintptr_t GetStandardQueue = 0x100;
    }

    namespace RCCRecordPlaceRuntimeRequestsReceived {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace REAL {
        inline constexpr uintptr_t ENUMERATED = 0x100;
        inline constexpr uintptr_t TEXT = 0x108;
    }

    namespace RTAnimationTracker {
        inline constexpr uintptr_t Active = 0x108;
        inline constexpr uintptr_t EnableFallbackAudioInput = 0x110;
        inline constexpr uintptr_t SessionName = 0x118;
        inline constexpr uintptr_t Step = 0x100;
        inline constexpr uintptr_t TrackerError = 0x130;
        inline constexpr uintptr_t TrackerMode = 0x120;
        inline constexpr uintptr_t TrackerPrompt = 0x138;
        inline constexpr uintptr_t TrackerType = 0x128;
    }

    namespace RTC {
        inline constexpr uintptr_t internal = 0x100;
    }

    namespace Radius {
        inline constexpr uintptr_t BallSocketConstraint = 0x100;
        inline constexpr uintptr_t ConeHandleAdornment = 0x108;
        inline constexpr uintptr_t CylinderHandleAdornment = 0x110;
        inline constexpr uintptr_t HapticEffect = 0x118;
        inline constexpr uintptr_t HingeConstraint = 0x120;
        inline constexpr uintptr_t SphereHandleAdornment = 0x128;
        inline constexpr uintptr_t SpringConstraint = 0x130;
        inline constexpr uintptr_t TorsionSpringConstraint = 0x138;
        inline constexpr uintptr_t UniversalConstraint = 0x140;
    }

    namespace RakNetJoinDataDownloadTimeMs {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace RakNetNonReTxJoinDataDownloadTimeMs {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace RaknetTotalTimeToLastJoinByte {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Range {
        inline constexpr uintptr_t ParabolaAdornment = 0x100;
        inline constexpr uintptr_t PolicyService = 0x108;
        inline constexpr uintptr_t SpringConstraint = 0x110;
        inline constexpr uintptr_t SurfaceSelection = 0x118;
    }

    namespace Rate {
        inline constexpr uintptr_t AudioCompressor = 0x100;
        inline constexpr uintptr_t AudioGate = 0x108;
        inline constexpr uintptr_t ClickDetector = 0x110;
        inline constexpr uintptr_t FloatCurve = 0x118;
        inline constexpr uintptr_t ParticleEmitter = 0x120;
    }

    namespace Ratio {
        inline constexpr uintptr_t AudioCompressor = 0x100;
        inline constexpr uintptr_t CompressorSoundEffect = 0x108;
    }

    namespace RayValue {
        inline constexpr uintptr_t Changed = 0x108;
        inline constexpr uintptr_t Value = 0x100;
        inline constexpr uintptr_t changed = 0x110;
    }

    namespace RbxAnalyticsService {
        inline constexpr uintptr_t AddGlobalPointsField = 0x100;
        inline constexpr uintptr_t AddGlobalPointsTag = 0x108;
        inline constexpr uintptr_t DEPRECATED_TrackEvent = 0x110;
        inline constexpr uintptr_t DEPRECATED_TrackEventWithArgs = 0x118;
        inline constexpr uintptr_t GetClientId = 0x120;
        inline constexpr uintptr_t GetPlaySessionId = 0x128;
        inline constexpr uintptr_t GetSessionId = 0x130;
        inline constexpr uintptr_t ReleaseRBXEventStream = 0x138;
        inline constexpr uintptr_t RemoveGlobalPointsField = 0x140;
        inline constexpr uintptr_t RemoveGlobalPointsTag = 0x148;
        inline constexpr uintptr_t ReportCounter = 0x150;
        inline constexpr uintptr_t ReportInfluxSeries = 0x158;
        inline constexpr uintptr_t ReportStats = 0x160;
        inline constexpr uintptr_t ReportToDiagByCountryCode = 0x168;
        inline constexpr uintptr_t SendEventDeferred = 0x170;
        inline constexpr uintptr_t SendEventImmediately = 0x178;
        inline constexpr uintptr_t SetRBXEvent = 0x180;
        inline constexpr uintptr_t SetRBXEventStream = 0x188;
        inline constexpr uintptr_t TrackEvent = 0x190;
        inline constexpr uintptr_t TrackEventWithArgs = 0x198;
        inline constexpr uintptr_t UpdateHeartbeatObject = 0x1a0;
    }

    namespace RbxTransportConnectionStatsReporting {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace RbxlChunkSizeStat {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace ReactionForceEnabled {
        inline constexpr uintptr_t AlignPosition = 0x100;
        inline constexpr uintptr_t LineHandleAdornment = 0x108;
        inline constexpr uintptr_t LinearVelocity = 0x110;
    }

    namespace ReactionTorqueEnabled {
        inline constexpr uintptr_t AlignOrientation = 0x100;
        inline constexpr uintptr_t AngularVelocity = 0x108;
    }

    namespace ReadOnly {
        inline constexpr uintptr_t Disabled = 0x108;
        inline constexpr uintptr_t Enabled = 0x100;
    }

    namespace ReadVoxels {
        inline constexpr uintptr_t Terrain = 0x100;
        inline constexpr uintptr_t VoxelBuffer = 0x108;
    }

    namespace Ready {
        inline constexpr uintptr_t Plugin = 0x100;
        inline constexpr uintptr_t TerrainModifyOperation = 0x108;
        inline constexpr uintptr_t TerrainReadOperation = 0x110;
        inline constexpr uintptr_t TestService = 0x118;
    }

    namespace RealtimeMedia {
        inline constexpr uintptr_t AudioInputActive = 0x130;
        inline constexpr uintptr_t AudioInputRequested = 0x148;
        inline constexpr uintptr_t ConnectAsync = 0x100;
        inline constexpr uintptr_t Disconnect = 0x108;
        inline constexpr uintptr_t ForwardInput = 0x138;
        inline constexpr uintptr_t GetConnectedWires = 0x110;
        inline constexpr uintptr_t GetInputPins = 0x118;
        inline constexpr uintptr_t GetOutputPins = 0x120;
        inline constexpr uintptr_t IsConnected = 0x140;
        inline constexpr uintptr_t OnMessage = 0x150;
        inline constexpr uintptr_t SendMessage = 0x128;
        inline constexpr uintptr_t WiringChanged = 0x158;
    }

    namespace RecenterUserHeadCFrame {
        inline constexpr uintptr_t UserInputService = 0x100;
        inline constexpr uintptr_t VRService = 0x108;
    }

    namespace RecommendationService {
        inline constexpr uintptr_t GenerateItemListAsync = 0x100;
        inline constexpr uintptr_t GetRecommendationItemAsync = 0x108;
        inline constexpr uintptr_t LogActionEvent = 0x128;
        inline constexpr uintptr_t LogImpressionEvent = 0x130;
        inline constexpr uintptr_t LogPreferenceEvent = 0x138;
        inline constexpr uintptr_t RegisterItemAsync = 0x110;
        inline constexpr uintptr_t RemoveItemAsync = 0x118;
        inline constexpr uintptr_t UpdateItemAsync = 0x120;
    }

    namespace RecvCollisionMeshes {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Reflection {
        inline constexpr uintptr_t ClassDescCreatable = 0x10;
        inline constexpr uintptr_t ClassDescFlags = 0x1bc;
        inline constexpr uintptr_t CreatorTable = 0x89c8388;
        inline constexpr uintptr_t EntryValue = 0x8;
        inline constexpr uintptr_t NameRegistry = 0x88bf5b8;
        inline constexpr uintptr_t NameTable = 0x50;
        inline constexpr uintptr_t TableEmpty = 0x20;
        inline constexpr uintptr_t TableEnd = 0x8;
        inline constexpr uintptr_t TableStart = 0x0;
        inline constexpr uintptr_t TableStride = 0x10;
    }

    namespace ReflectionService {
        inline constexpr uintptr_t GetClass = 0x100;
        inline constexpr uintptr_t GetClasses = 0x108;
        inline constexpr uintptr_t GetEventsOfClass = 0x110;
        inline constexpr uintptr_t GetMethodsOfClass = 0x118;
        inline constexpr uintptr_t GetPropertiesOfClass = 0x120;
        inline constexpr uintptr_t GetPropertyNames = 0x128;
        inline constexpr uintptr_t GetStyledPropertyNames = 0x130;
    }

    namespace ReflectionType {
        inline constexpr uintptr_t AdReward = 0x60;
        inline constexpr uintptr_t AnimTrackMetadata = 0x66;
        inline constexpr uintptr_t AnimTrackPlayState = 0x65;
        inline constexpr uintptr_t AnimTrackWeight = 0x67;
        inline constexpr uintptr_t AnimationContext = 0x54;
        inline constexpr uintptr_t AnimationMask = 0x4d;
        inline constexpr uintptr_t AnimationMaskModifier = 0x5b;
        inline constexpr uintptr_t AnimationPose = 0x4e;
        inline constexpr uintptr_t Array = 0x24;
        inline constexpr uintptr_t ArticulatedJoint = 0x53;
        inline constexpr uintptr_t AssetContentMap = 0x61;
        inline constexpr uintptr_t Axes = 0x16;
        inline constexpr uintptr_t BinaryString = 0x1e;
        inline constexpr uintptr_t Bool = 0x1;
        inline constexpr uintptr_t BrickColor = 0x1c;
        inline constexpr uintptr_t Buffer = 0x56;
        inline constexpr uintptr_t CSGPropertyData = 0x48;
        inline constexpr uintptr_t CatalogSearchParams = 0x46;
        inline constexpr uintptr_t CellId = 0x19;
        inline constexpr uintptr_t ClipEvaluator = 0x4f;
        inline constexpr uintptr_t CollectionHandle = 0x20;
        inline constexpr uintptr_t Color3 = 0x11;
        inline constexpr uintptr_t Color3uint8 = 0x12;
        inline constexpr uintptr_t ColorSequence = 0x2a;
        inline constexpr uintptr_t ColorSequenceKeypoint = 0x2b;
        inline constexpr uintptr_t Connection = 0x30;
        inline constexpr uintptr_t Content = 0x5c;
        inline constexpr uintptr_t ContentId = 0x31;
        inline constexpr uintptr_t CoordinateFrame = 0x10;
        inline constexpr uintptr_t DateTime = 0x40;
        inline constexpr uintptr_t DebugTable = 0x45;
        inline constexpr uintptr_t DescribedBase = 0x32;
        inline constexpr uintptr_t Dictionary = 0x25;
        inline constexpr uintptr_t DockWidgetPluginGuiInfo = 0x38;
        inline constexpr uintptr_t Double = 0x5;
        inline constexpr uintptr_t Enum = 0x21;
        inline constexpr uintptr_t EventInstance = 0x36;
        inline constexpr uintptr_t Faces = 0x15;
        inline constexpr uintptr_t FacsReplicationData = 0x5a;
        inline constexpr uintptr_t Float = 0x4;
        inline constexpr uintptr_t FloatCurveKey = 0x3c;
        inline constexpr uintptr_t Font = 0x4a;
        inline constexpr uintptr_t Function = 0x29;
        inline constexpr uintptr_t GenericFunction = 0x28;
        inline constexpr uintptr_t GuidData = 0x1a;
        inline constexpr uintptr_t Instance = 0x8;
        inline constexpr uintptr_t InstanceRef = 0x51;
        inline constexpr uintptr_t Instances = 0x9;
        inline constexpr uintptr_t Int = 0x2;
        inline constexpr uintptr_t Int64 = 0x3;
        inline constexpr uintptr_t Integer = 0x57;
        inline constexpr uintptr_t LazyTable = 0x44;
        inline constexpr uintptr_t Map = 0x26;
        inline constexpr uintptr_t NetAssetHandle = 0x5d;
        inline constexpr uintptr_t NetAssetRef = 0x5e;
        inline constexpr uintptr_t Null = 0x0;
        inline constexpr uintptr_t NumberRange = 0x2c;
        inline constexpr uintptr_t NumberSequence = 0x2d;
        inline constexpr uintptr_t NumberSequenceKeypoint = 0x2e;
        inline constexpr uintptr_t Object = 0x5f;
        inline constexpr uintptr_t OpenCloudModel = 0x50;
        inline constexpr uintptr_t OptionalCoordinateFrame = 0x47;
        inline constexpr uintptr_t OverlapParams = 0x43;
        inline constexpr uintptr_t Path2DControlPoint = 0x58;
        inline constexpr uintptr_t PathWaypoint = 0x3b;
        inline constexpr uintptr_t PhysicalProperties = 0x1b;
        inline constexpr uintptr_t PluginDrag = 0x39;
        inline constexpr uintptr_t Property = 0x22;
        inline constexpr uintptr_t ProtectedString = 0x7;
        inline constexpr uintptr_t Random = 0x3a;
        inline constexpr uintptr_t Ray = 0xa;
        inline constexpr uintptr_t RaycastParams = 0x41;
        inline constexpr uintptr_t RaycastResult = 0x42;
        inline constexpr uintptr_t Rect2D = 0xf;
        inline constexpr uintptr_t RefType = 0x33;
        inline constexpr uintptr_t Region3 = 0x17;
        inline constexpr uintptr_t Region3int16 = 0x18;
        inline constexpr uintptr_t ReplicationPV = 0x59;
        inline constexpr uintptr_t RotationCurveKey = 0x3d;
        inline constexpr uintptr_t ScopedInstanceIdentity = 0x68;
        inline constexpr uintptr_t Secret = 0x55;
        inline constexpr uintptr_t SecurityCapabilities = 0x52;
        inline constexpr uintptr_t SharedString = 0x3f;
        inline constexpr uintptr_t SharedTable = 0x4b;
        inline constexpr uintptr_t SharedTableIterator = 0x4c;
        inline constexpr uintptr_t SlimReplicationData = 0x62;
        inline constexpr uintptr_t String = 0x6;
        inline constexpr uintptr_t Surface = 0x1f;
        inline constexpr uintptr_t SystemAddress = 0x1d;
        inline constexpr uintptr_t Tuple = 0x23;
        inline constexpr uintptr_t TweenInfo = 0x37;
        inline constexpr uintptr_t UDim = 0x13;
        inline constexpr uintptr_t UDim2 = 0x14;
        inline constexpr uintptr_t UniqueId = 0x49;
        inline constexpr uintptr_t User = 0x63;
        inline constexpr uintptr_t ValueCurveKey = 0x3e;
        inline constexpr uintptr_t Variant = 0x27;
        inline constexpr uintptr_t Vector2 = 0xb;
        inline constexpr uintptr_t Vector2int16 = 0xd;
        inline constexpr uintptr_t Vector3 = 0xc;
        inline constexpr uintptr_t Vector3int16 = 0xe;
        inline constexpr uintptr_t WebViewParams = 0x64;
    }

    namespace RegisterCollisionGroup {
        inline constexpr uintptr_t PhysicsService = 0x100;
        inline constexpr uintptr_t WorldRoot = 0x108;
    }

    namespace RelativeTo {
        inline constexpr uintptr_t AnimatedImage = 0x100;
        inline constexpr uintptr_t LinearVelocity = 0x108;
        inline constexpr uintptr_t Torque = 0x110;
        inline constexpr uintptr_t VehicleSeat = 0x118;
    }

    namespace Release {
        inline constexpr uintptr_t AudioCompressor = 0x100;
        inline constexpr uintptr_t AudioGate = 0x108;
        inline constexpr uintptr_t AudioListener = 0x110;
        inline constexpr uintptr_t CompressorSoundEffect = 0x118;
    }

    namespace RemoteEvent {
        inline constexpr uintptr_t FireAllClients = 0x100;
        inline constexpr uintptr_t FireClient = 0x108;
        inline constexpr uintptr_t FireServer = 0x110;
        inline constexpr uintptr_t OnClientEvent = 0x118;
        inline constexpr uintptr_t OnRemoteServerEvent = 0x120;
        inline constexpr uintptr_t OnServerEvent = 0x128;
    }

    namespace RemoteFunction {
        inline constexpr uintptr_t InvokeClient = 0x100;
        inline constexpr uintptr_t InvokeServer = 0x108;
        inline constexpr uintptr_t OnClientInvoke = 0x110;
        inline constexpr uintptr_t OnServerInvoke = 0x118;
        inline constexpr uintptr_t RemoteOnInvokeClient = 0x120;
        inline constexpr uintptr_t RemoteOnInvokeError = 0x128;
        inline constexpr uintptr_t RemoteOnInvokeServer = 0x130;
        inline constexpr uintptr_t RemoteOnInvokeSuccess = 0x138;
    }

    namespace Remove {
        inline constexpr uintptr_t Instance = 0x100;
        inline constexpr uintptr_t Selection = 0x108;
    }

    namespace RemoveAsync {
        inline constexpr uintptr_t GlobalDataStore = 0x100;
        inline constexpr uintptr_t MemoryStoreHashMap = 0x108;
        inline constexpr uintptr_t MemoryStoreSortedMap = 0x110;
    }

    namespace RemoveControlPoint {
        inline constexpr uintptr_t Path2D = 0x100;
        inline constexpr uintptr_t Path3D = 0x108;
    }

    namespace RemoveItem {
        inline constexpr uintptr_t ClientStorageService = 0x100;
        inline constexpr uintptr_t MemStorageService = 0x108;
    }

    namespace RemoveKey {
        inline constexpr uintptr_t GuiService = 0x100;
        inline constexpr uintptr_t LocalizationTable = 0x108;
    }

    namespace RemoveKeyAtIndex {
        inline constexpr uintptr_t FloatCurve = 0x100;
        inline constexpr uintptr_t RotationCurve = 0x108;
        inline constexpr uintptr_t ValueCurve = 0x110;
    }

    namespace RemoveTag {
        inline constexpr uintptr_t CommerceService = 0x100;
        inline constexpr uintptr_t Instance = 0x108;
    }

    namespace RenameCollisionGroup {
        inline constexpr uintptr_t PhysicsService = 0x100;
        inline constexpr uintptr_t WorldRoot = 0x108;
    }

    namespace RenderJob {
        inline constexpr uintptr_t FakeDataModel = 0x38;
        inline constexpr uintptr_t FrameDt = 0xc0;
        inline constexpr uintptr_t FrameDtAlt = 0xb8;
        inline constexpr uintptr_t RealDataModel = 0x1f0;
        inline constexpr uintptr_t RenderView = 0x1d8;
    }

    namespace RenderQueue {
        inline constexpr uintptr_t AlwaysOnTop = 0xd;
        inline constexpr uintptr_t AlwaysOnTopAdorns = 0xe;
        inline constexpr uintptr_t Decals = 0x2;
        inline constexpr uintptr_t Glass = 0x8;
        inline constexpr uintptr_t GlassTint = 0x7;
        inline constexpr uintptr_t OnTopReadOnlyDepth = 0xc;
        inline constexpr uintptr_t OnTopWithDepth = 0xb;
        inline constexpr uintptr_t Opaque = 0x0;
        inline constexpr uintptr_t OpaqueAdorns = 0x4;
        inline constexpr uintptr_t OpaqueCasters = 0x3;
        inline constexpr uintptr_t OpaqueWithAlpha = 0x5;
        inline constexpr uintptr_t Screen = 0xf;
        inline constexpr uintptr_t ScreenOnTopOfBlur = 0x10;
        inline constexpr uintptr_t Terrain = 0x1;
        inline constexpr uintptr_t Transparent = 0x9;
        inline constexpr uintptr_t TransparentCasters = 0xa;
        inline constexpr uintptr_t Water = 0x6;
    }

    namespace RenderSettings {
        inline constexpr uintptr_t AutoFRMLevel = 0x108;
        inline constexpr uintptr_t EagerBulkExecution = 0x110;
        inline constexpr uintptr_t EditQualityLevel = 0x118;
        inline constexpr uintptr_t EnableFRM = 0x120;
        inline constexpr uintptr_t ExportMergeByMaterial = 0x128;
        inline constexpr uintptr_t FrameRateManager = 0x130;
        inline constexpr uintptr_t GetMaxQualityLevel = 0x100;
        inline constexpr uintptr_t GraphicsMode = 0x138;
        inline constexpr uintptr_t MeshCacheSize = 0x140;
        inline constexpr uintptr_t MeshPartDetailLevel = 0x148;
        inline constexpr uintptr_t QualityLevel = 0x150;
        inline constexpr uintptr_t ReloadAssets = 0x158;
        inline constexpr uintptr_t RenderCSGTrianglesDebug = 0x160;
        inline constexpr uintptr_t ShowBoundingBoxes = 0x168;
        inline constexpr uintptr_t ViewMode = 0x170;
        inline constexpr uintptr_t sfu_datacenter_name = 0x178;
    }

    namespace RenderView {
        inline constexpr uintptr_t DeviceD3D11 = 0x8;
        inline constexpr uintptr_t LightingValid = 0x0;
        inline constexpr uintptr_t SkyValid = 0x0;
        inline constexpr uintptr_t SkyboxValid = 0x28d;
        inline constexpr uintptr_t VisualEngine = 0x0;
    }

    namespace Rendering {
        inline constexpr uintptr_t RenderSettings = 0x100;
    }

    namespace RenderingTest {
        inline constexpr uintptr_t CFrame = 0x108;
        inline constexpr uintptr_t ComparisonDiffThreshold = 0x110;
        inline constexpr uintptr_t ComparisonMethod = 0x118;
        inline constexpr uintptr_t ComparisonPsnrThreshold = 0x120;
        inline constexpr uintptr_t Description = 0x128;
        inline constexpr uintptr_t FieldOfView = 0x130;
        inline constexpr uintptr_t Orientation = 0x138;
        inline constexpr uintptr_t PerfTest = 0x140;
        inline constexpr uintptr_t Position = 0x148;
        inline constexpr uintptr_t QualityAuto = 0x150;
        inline constexpr uintptr_t QualityLevel = 0x158;
        inline constexpr uintptr_t RenderdocTriggerCapture = 0x100;
        inline constexpr uintptr_t RenderingTestFrameCount = 0x160;
        inline constexpr uintptr_t ShouldSkip = 0x168;
        inline constexpr uintptr_t TestFramesCountdownAboutToStart = 0x180;
        inline constexpr uintptr_t Ticket = 0x170;
        inline constexpr uintptr_t Timeout = 0x178;
    }

    namespace ReplicatedFirst {
        inline constexpr uintptr_t DefaultLoadingGuiRemoved = 0x120;
        inline constexpr uintptr_t FinishedReplicating = 0x128;
        inline constexpr uintptr_t FirstBinary = 0x138;
        inline constexpr uintptr_t IsDefaultLoadingGuiRemoved = 0x100;
        inline constexpr uintptr_t IsFinishedReplicating = 0x108;
        inline constexpr uintptr_t RemoveDefaultLoadingGuiSignal = 0x130;
        inline constexpr uintptr_t RemoveDefaultLoadingScreen = 0x110;
        inline constexpr uintptr_t SetDefaultLoadingGuiRemoved = 0x118;
    }

    namespace ReportVideoTempFileCreate {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace RequestAsync {
        inline constexpr uintptr_t HttpRbxApiService = 0x100;
        inline constexpr uintptr_t Humanoid = 0x108;
    }

    namespace RequestContextError {
        inline constexpr uintptr_t AssetPublishError = 0x108;
        inline constexpr uintptr_t NotEnoughQuota = 0x100;
    }

    namespace RequestOrchestratorService {
        inline constexpr uintptr_t BatchCreated = 0x140;
        inline constexpr uintptr_t BatchExhausted = 0x148;
        inline constexpr uintptr_t BatchResponseReceived = 0x150;
        inline constexpr uintptr_t BatchRetrying = 0x158;
        inline constexpr uintptr_t BatchSent = 0x160;
        inline constexpr uintptr_t CacheHit = 0x168;
        inline constexpr uintptr_t CacheItemAdded = 0x170;
        inline constexpr uintptr_t ClearCache = 0x100;
        inline constexpr uintptr_t GetBatchWindowDelayMax = 0x108;
        inline constexpr uintptr_t GetBatchWindowDelayMin = 0x110;
        inline constexpr uintptr_t GetRegisteredOrchestrators = 0x118;
        inline constexpr uintptr_t GetResponseDelayMax = 0x120;
        inline constexpr uintptr_t GetResponseDelayMin = 0x128;
        inline constexpr uintptr_t JitterStarted = 0x178;
        inline constexpr uintptr_t OperationCoalesced = 0x180;
        inline constexpr uintptr_t OperationEnqueued = 0x188;
        inline constexpr uintptr_t SetBatchWindowDelay = 0x130;
        inline constexpr uintptr_t SetResponseDelay = 0x138;
    }

    namespace Require {
        inline constexpr uintptr_t TestCase = 0x100;
        inline constexpr uintptr_t TestService = 0x108;
    }

    namespace ResampleMode {
        inline constexpr uintptr_t ImageButton = 0x100;
        inline constexpr uintptr_t ImageLabel = 0x108;
        inline constexpr uintptr_t SurfaceAppearance = 0x110;
        inline constexpr uintptr_t VideoDisplay = 0x118;
    }

    namespace ReserveServer {
        inline constexpr uintptr_t ReservedServerId = 0x100;
        inline constexpr uintptr_t TeleportService = 0x108;
    }

    namespace ReservedServerAccessCode {
        inline constexpr uintptr_t ServerInstanceId = 0x100;
        inline constexpr uintptr_t TeleportOptions = 0x108;
    }

    namespace ReservedServerId {
        inline constexpr uintptr_t TeleportOptions = 0x108;
        inline constexpr uintptr_t VipServerId = 0x100;
    }

    namespace Reset {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioLimiter = 0x108;
        inline constexpr uintptr_t AudioListener = 0x110;
        inline constexpr uintptr_t AudioSpeechToText = 0x118;
        inline constexpr uintptr_t RunService = 0x120;
        inline constexpr uintptr_t UserSettings = 0x128;
    }

    namespace Responsiveness {
        inline constexpr uintptr_t AlignOrientation = 0x100;
        inline constexpr uintptr_t AlignPosition = 0x108;
        inline constexpr uintptr_t DragDetector = 0x110;
    }

    namespace Restitution {
        inline constexpr uintptr_t BallSocketConstraint = 0x100;
        inline constexpr uintptr_t HingeConstraint = 0x108;
        inline constexpr uintptr_t RopeConstraint = 0x110;
        inline constexpr uintptr_t SlidingBallConstraint = 0x118;
        inline constexpr uintptr_t TorsionSpringConstraint = 0x120;
        inline constexpr uintptr_t UnvalidatedAssetService = 0x128;
    }

    namespace Resume {
        inline constexpr uintptr_t AnimatedImageService = 0x100;
        inline constexpr uintptr_t DebuggerManager = 0x108;
        inline constexpr uintptr_t Sound = 0x110;
    }

    namespace ReverbEnabled {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioListener = 0x108;
        inline constexpr uintptr_t SoundService = 0x110;
    }

    namespace ReverbSoundEffect {
        inline constexpr uintptr_t DecayTime = 0x100;
        inline constexpr uintptr_t Density = 0x108;
        inline constexpr uintptr_t Diffusion = 0x110;
        inline constexpr uintptr_t DryLevel = 0x118;
        inline constexpr uintptr_t WetLevel = 0x120;
    }

    namespace RichText {
        inline constexpr uintptr_t GetTextBoundsParams = 0x100;
        inline constexpr uintptr_t TextBox = 0x108;
        inline constexpr uintptr_t TextButton = 0x110;
        inline constexpr uintptr_t TextLabel = 0x118;
    }

    namespace RightArmColor {
        inline constexpr uintptr_t BodyColors = 0x100;
        inline constexpr uintptr_t HumanoidDescription = 0x108;
    }

    namespace RigidConstraint {
        inline constexpr uintptr_t EnableSkinning = 0x100;
    }

    namespace RigidityEnabled {
        inline constexpr uintptr_t AlignOrientation = 0x100;
        inline constexpr uintptr_t AnalyticsService = 0x108;
    }

    namespace RobloxSerializableInstance {
        inline constexpr uintptr_t Data = 0x100;
    }

    namespace RobloxString {
        inline constexpr uintptr_t Size = 0x10;
        inline constexpr uintptr_t SsoCapacity = 0xf;
    }

    namespace RobloxTelemetryCounter {
        inline constexpr uintptr_t EphemeralStat = 0x108;
        inline constexpr uintptr_t addMemoryInfo = 0x100;
    }

    namespace RobloxTelemetryStat {
        inline constexpr uintptr_t RobloxTelemetryCounter = 0x100;
        inline constexpr uintptr_t addPlaceId = 0x108;
    }

    namespace RocketPropulsion {
        inline constexpr uintptr_t Abort = 0x100;
        inline constexpr uintptr_t Active = 0x118;
        inline constexpr uintptr_t BodyVelocity = 0x180;
        inline constexpr uintptr_t CartoonFactor = 0x120;
        inline constexpr uintptr_t Fire = 0x108;
        inline constexpr uintptr_t MaxSpeed = 0x128;
        inline constexpr uintptr_t MaxThrust = 0x130;
        inline constexpr uintptr_t MaxTorque = 0x138;
        inline constexpr uintptr_t ReachedTarget = 0x178;
        inline constexpr uintptr_t Target = 0x140;
        inline constexpr uintptr_t TargetOffset = 0x148;
        inline constexpr uintptr_t TargetRadius = 0x150;
        inline constexpr uintptr_t ThrustD = 0x158;
        inline constexpr uintptr_t ThrustP = 0x160;
        inline constexpr uintptr_t TurnD = 0x168;
        inline constexpr uintptr_t TurnP = 0x170;
        inline constexpr uintptr_t fire = 0x110;
    }

    namespace RodConstraint {
        inline constexpr uintptr_t CurrentDistance = 0x100;
        inline constexpr uintptr_t Length = 0x108;
        inline constexpr uintptr_t LimitAngle0 = 0x110;
        inline constexpr uintptr_t LimitAngle1 = 0x118;
        inline constexpr uintptr_t LimitsEnabled = 0x120;
        inline constexpr uintptr_t Thickness = 0x128;
    }

    namespace RolloutValidation {
        inline constexpr uintptr_t AdditionalFluffOne = 0x100;
        inline constexpr uintptr_t AdditionalFluffThree = 0x108;
        inline constexpr uintptr_t AdditionalFluffTwo = 0x110;
        inline constexpr uintptr_t CreationVersion = 0x118;
        inline constexpr uintptr_t FirstBinaryExpectedValue = 0x120;
        inline constexpr uintptr_t FirstBinaryString = 0x128;
        inline constexpr uintptr_t FirstSharedExpectedValue = 0x130;
        inline constexpr uintptr_t FirstSharedString = 0x138;
        inline constexpr uintptr_t GenerationStrategy = 0x140;
        inline constexpr uintptr_t SecondBinaryExpectedValue = 0x148;
        inline constexpr uintptr_t SecondBinaryString = 0x150;
        inline constexpr uintptr_t SecondSharedExpectedValue = 0x158;
        inline constexpr uintptr_t SecondSharedString = 0x160;
        inline constexpr uintptr_t ThirdBinaryExpectedValue = 0x168;
        inline constexpr uintptr_t ThirdBinaryString = 0x170;
        inline constexpr uintptr_t ThirdSharedExpectedValue = 0x178;
        inline constexpr uintptr_t ThirdSharedString = 0x180;
    }

    namespace RomarkService {
        inline constexpr uintptr_t EndRemoteRomarkTest = 0x100;
        inline constexpr uintptr_t RomarkEndOfTest = 0x108;
        inline constexpr uintptr_t RomarkRbxAnalyticsService = 0x110;
    }

    namespace Root {
        inline constexpr uintptr_t HumanoidRigDescription = 0x100;
        inline constexpr uintptr_t LeftHip = 0x110;
        inline constexpr uintptr_t LocalizationTable = 0x108;
    }

    namespace RopeConstraint {
        inline constexpr uintptr_t CurrentDistance = 0x100;
        inline constexpr uintptr_t Length = 0x108;
        inline constexpr uintptr_t Restitution = 0x110;
        inline constexpr uintptr_t Thickness = 0x118;
        inline constexpr uintptr_t WinchEnabled = 0x120;
        inline constexpr uintptr_t WinchForce = 0x128;
        inline constexpr uintptr_t WinchResponsiveness = 0x130;
        inline constexpr uintptr_t WinchSpeed = 0x138;
        inline constexpr uintptr_t WinchTarget = 0x140;
    }

    namespace Rotation {
        inline constexpr uintptr_t AccessoryDescription = 0x100;
        inline constexpr uintptr_t Attachment = 0x108;
        inline constexpr uintptr_t BasePart = 0x110;
        inline constexpr uintptr_t Decal = 0x118;
        inline constexpr uintptr_t GuiObject = 0x120;
        inline constexpr uintptr_t ParticleEmitter = 0x128;
        inline constexpr uintptr_t UIGradient = 0x130;
    }

    namespace RotationCurve {
        inline constexpr uintptr_t GetKeyAtIndex = 0x100;
        inline constexpr uintptr_t GetKeyIndicesAtTime = 0x108;
        inline constexpr uintptr_t GetKeys = 0x110;
        inline constexpr uintptr_t GetValueAtTime = 0x118;
        inline constexpr uintptr_t InsertKey = 0x120;
        inline constexpr uintptr_t Length = 0x138;
        inline constexpr uintptr_t RemoveKeyAtIndex = 0x128;
        inline constexpr uintptr_t SetKeys = 0x130;
        inline constexpr uintptr_t ValuesAndTimes = 0x140;
    }

    namespace RoughnessMap {
        inline constexpr uintptr_t Decal = 0x100;
        inline constexpr uintptr_t EmissiveMap = 0x120;
        inline constexpr uintptr_t MaterialVariant = 0x108;
        inline constexpr uintptr_t SurfaceAppearance = 0x110;
        inline constexpr uintptr_t TerrainDetail = 0x118;
    }

    namespace RoughnessMapContent {
        inline constexpr uintptr_t Decal = 0x100;
        inline constexpr uintptr_t MaterialVariant = 0x108;
        inline constexpr uintptr_t SurfaceAppearance = 0x110;
        inline constexpr uintptr_t TerrainDetail = 0x118;
    }

    namespace Run {
        inline constexpr uintptr_t RunService = 0x108;
        inline constexpr uintptr_t TestService = 0x100;
    }

    namespace RunService {
        inline constexpr uintptr_t BindToAnimation = 0x100;
        inline constexpr uintptr_t BindToRenderStep = 0x108;
        inline constexpr uintptr_t BindToSimulation = 0x110;
        inline constexpr uintptr_t ClientGitHash = 0x1f0;
        inline constexpr uintptr_t DataModel = 0x268;
        inline constexpr uintptr_t FrameNumber = 0x1f8;
        inline constexpr uintptr_t GetControlAndVariantRolloutFlags = 0x118;
        inline constexpr uintptr_t GetCoreScriptVersion = 0x120;
        inline constexpr uintptr_t GetPhysicsStepId = 0x128;
        inline constexpr uintptr_t GetPredictionStatus = 0x130;
        inline constexpr uintptr_t GetRobloxClientChannel = 0x138;
        inline constexpr uintptr_t GetRobloxClientIxpEnrolledExperiments = 0x140;
        inline constexpr uintptr_t GetRobloxGuiFocused = 0x148;
        inline constexpr uintptr_t GetRobloxVersion = 0x150;
        inline constexpr uintptr_t GetTotalScriptPlusExecutionTime = 0x158;
        inline constexpr uintptr_t Heartbeat = 0x208;
        inline constexpr uintptr_t HeartbeatFPS = 0xc0;
        inline constexpr uintptr_t HeartbeatTask = 0xe0;
        inline constexpr uintptr_t IsClient = 0x160;
        inline constexpr uintptr_t IsEdit = 0x168;
        inline constexpr uintptr_t IsResimulating = 0x170;
        inline constexpr uintptr_t IsRunMode = 0x178;
        inline constexpr uintptr_t IsRunning = 0x180;
        inline constexpr uintptr_t IsServer = 0x188;
        inline constexpr uintptr_t IsStudio = 0x190;
        inline constexpr uintptr_t IsTeamTest = 0x198;
        inline constexpr uintptr_t Misprediction = 0x210;
        inline constexpr uintptr_t Pause = 0x1a0;
        inline constexpr uintptr_t PostSimulation = 0x218;
        inline constexpr uintptr_t PreAnimation = 0x220;
        inline constexpr uintptr_t PreRender = 0x228;
        inline constexpr uintptr_t PreSimulation = 0x230;
        inline constexpr uintptr_t RenderStepped = 0x238;
        inline constexpr uintptr_t Reset = 0x1a8;
        inline constexpr uintptr_t RobloxGuiFocusedChanged = 0x240;
        inline constexpr uintptr_t Rollback = 0x248;
        inline constexpr uintptr_t Run = 0x1b0;
        inline constexpr uintptr_t RunState = 0x200;
        inline constexpr uintptr_t Set3dRenderingEnabled = 0x1b8;
        inline constexpr uintptr_t SetPredictionMode = 0x1c0;
        inline constexpr uintptr_t SetRobloxGuiFocused = 0x1c8;
        inline constexpr uintptr_t Stepped = 0x250;
        inline constexpr uintptr_t Stop = 0x1d0;
        inline constexpr uintptr_t UnbindFromRenderStep = 0x1d8;
        inline constexpr uintptr_t getThrottleFramerateEnabled = 0x1e0;
        inline constexpr uintptr_t setThrottleFramerateEnabled = 0x1e8;
    }

    namespace RuntimeContentService {
        inline constexpr uintptr_t RuntimeContentFail = 0x100;
        inline constexpr uintptr_t RuntimeContentQuery = 0x108;
        inline constexpr uintptr_t RuntimeContentShare = 0x110;
    }

    namespace RuppDeserializationFailureKibana {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace SYSTEM {
        inline constexpr uintptr_t AUDIO = 0x100;
        inline constexpr uintptr_t Software = 0x108;
    }

    namespace SafetyService {
        inline constexpr uintptr_t DecodeAvatarMovementProto = 0x100;
        inline constexpr uintptr_t FSTriggeredSignal = 0x178;
        inline constexpr uintptr_t IsCaptureModeForReport = 0x170;
        inline constexpr uintptr_t ReportBuildUIClose = 0x108;
        inline constexpr uintptr_t ReportBuildUIOpen = 0x110;
        inline constexpr uintptr_t ReportCapturesUIClose = 0x118;
        inline constexpr uintptr_t ReportCapturesUIOpen = 0x120;
        inline constexpr uintptr_t ReportChatLineReportingClose = 0x128;
        inline constexpr uintptr_t ReportChatLineReportingOpen = 0x130;
        inline constexpr uintptr_t ReportChatSuspensionDialogClose = 0x138;
        inline constexpr uintptr_t ReportChatSuspensionDialogOpen = 0x140;
        inline constexpr uintptr_t ReportMenuTabClose = 0x148;
        inline constexpr uintptr_t ReportMenuTabOpen = 0x150;
        inline constexpr uintptr_t ReportPartyChatWindowClose = 0x158;
        inline constexpr uintptr_t ReportPartyChatWindowOpen = 0x160;
        inline constexpr uintptr_t ScreenshotContentReady = 0x180;
        inline constexpr uintptr_t ScreenshotUploaded = 0x188;
        inline constexpr uintptr_t TakeScreenshot = 0x168;
    }

    namespace Sat {
        inline constexpr uintptr_t Sun = 0x108;
        inline constexpr uintptr_t Sunday = 0x100;
    }

    namespace Saturday {
        inline constexpr uintptr_t Jan = 0x100;
        inline constexpr uintptr_t January = 0x110;
        inline constexpr uintptr_t Sunday = 0x108;
    }

    namespace Scale {
        inline constexpr uintptr_t Accoutrement = 0x100;
        inline constexpr uintptr_t DataModelMesh = 0x108;
        inline constexpr uintptr_t InputBinding = 0x110;
        inline constexpr uintptr_t Model = 0x118;
        inline constexpr uintptr_t UIGradient = 0x120;
        inline constexpr uintptr_t UIShadow = 0x128;
        inline constexpr uintptr_t WireframeHandleAdornment = 0x130;
    }

    namespace ScaleType {
        inline constexpr uintptr_t ImageButton = 0x100;
        inline constexpr uintptr_t ImageLabel = 0x108;
        inline constexpr uintptr_t VideoDisplay = 0x110;
    }

    namespace SceneAnalysisService {
        inline constexpr uintptr_t GetAnimationMemoryAsync = 0x100;
        inline constexpr uintptr_t GetAudioMemoryAsync = 0x108;
        inline constexpr uintptr_t GetInstanceCompositionAsync = 0x110;
        inline constexpr uintptr_t GetScriptMemoryAsync = 0x118;
        inline constexpr uintptr_t GetTriangleCompositionAsync = 0x120;
        inline constexpr uintptr_t GetUnparentedInstancesAsync = 0x128;
    }

    namespace ScreenGui {
        inline constexpr uintptr_t ClipToDeviceSafeArea = 0x100;
        inline constexpr uintptr_t DisplayOrder = 0x108;
        inline constexpr uintptr_t GuiMain = 0x138;
        inline constexpr uintptr_t IgnoreGuiInset = 0x110;
        inline constexpr uintptr_t IgnoresTitleBarReservation = 0x118;
        inline constexpr uintptr_t OnTopOfCoreBlur = 0x120;
        inline constexpr uintptr_t SafeAreaCompatibility = 0x128;
        inline constexpr uintptr_t ScreenInsets = 0x130;
    }

    namespace ScreenshotHud {
        inline constexpr uintptr_t CameraButtonIcon = 0x100;
        inline constexpr uintptr_t CameraButtonIconContent = 0x108;
        inline constexpr uintptr_t CameraButtonPosition = 0x110;
        inline constexpr uintptr_t CloseButtonPosition = 0x118;
        inline constexpr uintptr_t CloseWhenScreenshotTaken = 0x120;
        inline constexpr uintptr_t ExperienceNameOverlayEnabled = 0x128;
        inline constexpr uintptr_t HideCoreGuiForCaptures = 0x130;
        inline constexpr uintptr_t HidePlayerGuiForCaptures = 0x138;
        inline constexpr uintptr_t OverlayFont = 0x140;
        inline constexpr uintptr_t UsernameOverlayEnabled = 0x148;
        inline constexpr uintptr_t Visible = 0x150;
    }

    namespace Script {
        inline constexpr uintptr_t ByteCode = 0x0;
        inline constexpr uintptr_t GUID = 0xc0;
        inline constexpr uintptr_t GetHash = 0x100;
        inline constexpr uintptr_t Hash = 0x190;
        inline constexpr uintptr_t Instance = 0x128;
        inline constexpr uintptr_t ScriptDebugger = 0x130;
        inline constexpr uintptr_t Source = 0x108;
    }

    namespace ScriptContext {
        inline constexpr uintptr_t AddCoreScriptLocal = 0x100;
        inline constexpr uintptr_t CompressLuaApp = 0x108;
        inline constexpr uintptr_t EnableCoverage = 0x110;
        inline constexpr uintptr_t Error = 0x148;
        inline constexpr uintptr_t ErrorDetailed = 0x150;
        inline constexpr uintptr_t GetCoverageStats = 0x118;
        inline constexpr uintptr_t GetLuauHeapInstanceReferenceReport = 0x120;
        inline constexpr uintptr_t GetLuauHeapMemoryReport = 0x128;
        inline constexpr uintptr_t LuaState = 0x28;
        inline constexpr uintptr_t LuaState2 = 0x28;
        inline constexpr uintptr_t LuaStateAlt = 0xe8;
        inline constexpr uintptr_t ReportLuaRequireCount = 0x130;
        inline constexpr uintptr_t RequireBypass = 0xaae;
        inline constexpr uintptr_t ScriptsDisabled = 0x140;
        inline constexpr uintptr_t SetTimeout = 0x138;
        inline constexpr uintptr_t VmEncryptedLuaState = 0xd0;
        inline constexpr uintptr_t VmWrapper = 0x220;
        inline constexpr uintptr_t VmWrapper2 = 0x528;
        inline constexpr uintptr_t VmWrapperBig = 0x440;
    }

    namespace ScriptDebugger {
        inline constexpr uintptr_t AddWatch = 0x100;
        inline constexpr uintptr_t BreakpointAdded = 0x190;
        inline constexpr uintptr_t BreakpointRemoved = 0x198;
        inline constexpr uintptr_t CoreScriptIdentifier = 0x160;
        inline constexpr uintptr_t CurrentLine = 0x168;
        inline constexpr uintptr_t EncounteredBreak = 0x1a0;
        inline constexpr uintptr_t GetBreakpoints = 0x108;
        inline constexpr uintptr_t GetGlobals = 0x110;
        inline constexpr uintptr_t GetLocals = 0x118;
        inline constexpr uintptr_t GetStack = 0x120;
        inline constexpr uintptr_t GetUpvalues = 0x128;
        inline constexpr uintptr_t GetWatchValue = 0x130;
        inline constexpr uintptr_t GetWatches = 0x138;
        inline constexpr uintptr_t IsDebugging = 0x170;
        inline constexpr uintptr_t IsPaused = 0x178;
        inline constexpr uintptr_t Resuming = 0x1a8;
        inline constexpr uintptr_t Script = 0x180;
        inline constexpr uintptr_t ScriptGuid = 0x188;
        inline constexpr uintptr_t SetBreakpoint = 0x140;
        inline constexpr uintptr_t SetGlobal = 0x148;
        inline constexpr uintptr_t SetLocal = 0x150;
        inline constexpr uintptr_t SetUpvalue = 0x158;
        inline constexpr uintptr_t WatchAdded = 0x1b0;
        inline constexpr uintptr_t WatchRemoved = 0x1b8;
    }

    namespace ScriptDebuggerService {
        inline constexpr uintptr_t AddBreakpoint = 0x100;
        inline constexpr uintptr_t ClearBreakpoints = 0x108;
        inline constexpr uintptr_t Evaluate = 0x110;
        inline constexpr uintptr_t GetRootVariables = 0x118;
        inline constexpr uintptr_t GetStackTrace = 0x120;
        inline constexpr uintptr_t GetThreads = 0x128;
        inline constexpr uintptr_t GetVariables = 0x130;
        inline constexpr uintptr_t OnStopped = 0x150;
        inline constexpr uintptr_t Pause = 0x138;
        inline constexpr uintptr_t RemoveBreakpoint = 0x140;
        inline constexpr uintptr_t Resumed = 0x158;
        inline constexpr uintptr_t SetExceptionBreakMode = 0x148;
    }

    namespace ScriptProfilerService {
        inline constexpr uintptr_t ClientRequestData = 0x100;
        inline constexpr uintptr_t ClientStart = 0x108;
        inline constexpr uintptr_t ClientStop = 0x110;
        inline constexpr uintptr_t DeserializeJSON = 0x118;
        inline constexpr uintptr_t OnNewData = 0x140;
        inline constexpr uintptr_t RequestData = 0x148;
        inline constexpr uintptr_t SaveScriptProfilingData = 0x120;
        inline constexpr uintptr_t ServerRequestData = 0x128;
        inline constexpr uintptr_t ServerStart = 0x130;
        inline constexpr uintptr_t ServerStop = 0x138;
        inline constexpr uintptr_t SetProfilingState = 0x150;
    }

    namespace ScriptRegistrationService {
        inline constexpr uintptr_t GetSourceContainerByScriptGuid = 0x100;
    }

    namespace ScriptService {
        inline constexpr uintptr_t ResolveModulePath = 0x100;
    }

    namespace ScrollingFrame {
        inline constexpr uintptr_t AbsoluteCanvasSize = 0x128;
        inline constexpr uintptr_t AbsoluteWindowSize = 0x130;
        inline constexpr uintptr_t AutomaticCanvasSize = 0x138;
        inline constexpr uintptr_t BottomImage = 0x140;
        inline constexpr uintptr_t BottomImageContent = 0x148;
        inline constexpr uintptr_t CanvasPosition = 0x150;
        inline constexpr uintptr_t CanvasSize = 0x158;
        inline constexpr uintptr_t ClearInertialScrolling = 0x100;
        inline constexpr uintptr_t DraggingScrollBar = 0x160;
        inline constexpr uintptr_t ElasticBehavior = 0x168;
        inline constexpr uintptr_t GetSampledInertialVelocity = 0x108;
        inline constexpr uintptr_t GetScrollVelocity = 0x110;
        inline constexpr uintptr_t HorizontalBarRect = 0x170;
        inline constexpr uintptr_t HorizontalScrollBarInset = 0x178;
        inline constexpr uintptr_t MaxCanvasPosition = 0x180;
        inline constexpr uintptr_t MidImage = 0x188;
        inline constexpr uintptr_t MidImageContent = 0x190;
        inline constexpr uintptr_t ResetScrollVelocity = 0x118;
        inline constexpr uintptr_t ScreenGui = 0x200;
        inline constexpr uintptr_t ScrollBarImageColor3 = 0x198;
        inline constexpr uintptr_t ScrollBarImageTransparency = 0x1a0;
        inline constexpr uintptr_t ScrollBarThickness = 0x1a8;
        inline constexpr uintptr_t ScrollRate = 0x1b0;
        inline constexpr uintptr_t ScrollToTop = 0x120;
        inline constexpr uintptr_t ScrollVelocity = 0x1b8;
        inline constexpr uintptr_t ScrollingDirection = 0x1c0;
        inline constexpr uintptr_t ScrollingEnabled = 0x1c8;
        inline constexpr uintptr_t SmoothScroll = 0x1d0;
        inline constexpr uintptr_t TopImage = 0x1d8;
        inline constexpr uintptr_t TopImageContent = 0x1e0;
        inline constexpr uintptr_t VerticalBarRect = 0x1e8;
        inline constexpr uintptr_t VerticalScrollBarInset = 0x1f0;
        inline constexpr uintptr_t VerticalScrollBarPosition = 0x1f8;
    }

    namespace Seat {
        inline constexpr uintptr_t Disabled = 0x108;
        inline constexpr uintptr_t Occupant = 0x208;
        inline constexpr uintptr_t RemoteCreateSeatWeld = 0x118;
        inline constexpr uintptr_t RemoteDestroySeatWeld = 0x120;
        inline constexpr uintptr_t Sit = 0x100;
    }

    namespace SecondaryAxis {
        inline constexpr uintptr_t AlignPosition = 0x100;
        inline constexpr uintptr_t Attachment = 0x108;
        inline constexpr uintptr_t DragDetector = 0x110;
    }

    namespace Selection {
        inline constexpr uintptr_t ActiveInstance = 0x138;
        inline constexpr uintptr_t Add = 0x100;
        inline constexpr uintptr_t AddFocusCallback = 0x108;
        inline constexpr uintptr_t ClearTerrainSelectionHack = 0x110;
        inline constexpr uintptr_t Get = 0x118;
        inline constexpr uintptr_t Remove = 0x120;
        inline constexpr uintptr_t RenderMode = 0x140;
        inline constexpr uintptr_t SelectionBoxThickness = 0x148;
        inline constexpr uintptr_t SelectionChanged = 0x168;
        inline constexpr uintptr_t SelectionChangedThisFrame = 0x170;
        inline constexpr uintptr_t SelectionLineThickness = 0x150;
        inline constexpr uintptr_t SelectionThickness = 0x158;
        inline constexpr uintptr_t Set = 0x128;
        inline constexpr uintptr_t SetTerrainSelectionHack = 0x130;
        inline constexpr uintptr_t ShowActiveInstanceHighlight = 0x160;
    }

    namespace SelectionBox {
        inline constexpr uintptr_t LineThickness = 0x100;
        inline constexpr uintptr_t StudioSelectionBox = 0x108;
        inline constexpr uintptr_t SurfaceColor = 0x110;
        inline constexpr uintptr_t SurfaceColor3 = 0x118;
        inline constexpr uintptr_t SurfaceTransparency = 0x120;
    }

    namespace SelectionImageObject {
        inline constexpr uintptr_t CoreGui = 0x100;
        inline constexpr uintptr_t GuiObject = 0x108;
        inline constexpr uintptr_t PlayerListConfiguration = 0x110;
    }

    namespace SelectionLasso {
        inline constexpr uintptr_t Humanoid = 0x100;
    }

    namespace SelectionPartLasso {
        inline constexpr uintptr_t Part = 0x100;
        inline constexpr uintptr_t SelectionPointLasso = 0x108;
    }

    namespace SelectionPointLasso {
        inline constexpr uintptr_t Point = 0x100;
    }

    namespace SelectionSphere {
        inline constexpr uintptr_t SurfaceColor = 0x100;
        inline constexpr uintptr_t SurfaceColor3 = 0x108;
        inline constexpr uintptr_t SurfaceTransparency = 0x110;
    }

    namespace SelfViewConfiguration {
        inline constexpr uintptr_t CustomEvent = 0x108;
        inline constexpr uintptr_t Open = 0x100;
    }

    namespace Send {
        inline constexpr uintptr_t WebSocketService = 0x100;
        inline constexpr uintptr_t WebViewService = 0x108;
    }

    namespace SendEventDeferred {
        inline constexpr uintptr_t EventIngestService = 0x100;
        inline constexpr uintptr_t RbxAnalyticsService = 0x108;
    }

    namespace SendEventImmediately {
        inline constexpr uintptr_t EventIngestService = 0x100;
        inline constexpr uintptr_t RbxAnalyticsService = 0x108;
    }

    namespace SendMessage {
        inline constexpr uintptr_t AdGui = 0x100;
        inline constexpr uintptr_t AuroraScriptService = 0x108;
        inline constexpr uintptr_t RecommendationService = 0x110;
    }

    namespace SensorBase {
        inline constexpr uintptr_t OnSensorOutputChanged = 0x110;
        inline constexpr uintptr_t Sense = 0x100;
        inline constexpr uintptr_t UpdateType = 0x108;
    }

    namespace SerializationService {
        inline constexpr uintptr_t DeserializeInstancesAsync = 0x100;
        inline constexpr uintptr_t SerializeInstancesAsync = 0x108;
    }

    namespace ServerInstanceId {
        inline constexpr uintptr_t Public = 0x100;
        inline constexpr uintptr_t TeleportOptions = 0x108;
    }

    namespace ServerScriptService {
        inline constexpr uintptr_t LoadStringEnabled = 0x100;
        inline constexpr uintptr_t SelectionPartLasso = 0x108;
    }

    namespace ServerSentLateTT {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace ServiceProvider {
        inline constexpr uintptr_t Close = 0x120;
        inline constexpr uintptr_t CloseLate = 0x128;
        inline constexpr uintptr_t FindService = 0x100;
        inline constexpr uintptr_t GetService = 0x108;
        inline constexpr uintptr_t ServiceAdded = 0x130;
        inline constexpr uintptr_t ServiceRemoving = 0x138;
        inline constexpr uintptr_t getService = 0x110;
        inline constexpr uintptr_t service = 0x118;
    }

    namespace SessionService {
        inline constexpr uintptr_t AcquireContextFocus = 0x100;
        inline constexpr uintptr_t GenerateSessionInfoString = 0x108;
        inline constexpr uintptr_t GetBreadcrumbs = 0x110;
        inline constexpr uintptr_t GetCreatedTimestampUtcMs = 0x118;
        inline constexpr uintptr_t GetHistory = 0x120;
        inline constexpr uintptr_t GetMetadata = 0x128;
        inline constexpr uintptr_t GetRootSID = 0x130;
        inline constexpr uintptr_t GetSessionID = 0x138;
        inline constexpr uintptr_t GetSessionTag = 0x140;
        inline constexpr uintptr_t IsContextFocused = 0x148;
        inline constexpr uintptr_t ReleaseContextFocus = 0x150;
        inline constexpr uintptr_t RemoveMetadata = 0x158;
        inline constexpr uintptr_t RemoveSession = 0x160;
        inline constexpr uintptr_t RemoveSessionsWithMetadataKey = 0x168;
        inline constexpr uintptr_t ReplaceSession = 0x170;
        inline constexpr uintptr_t SessionChanged = 0x190;
        inline constexpr uintptr_t SessionExists = 0x178;
        inline constexpr uintptr_t SetMetadata = 0x180;
        inline constexpr uintptr_t SetSession = 0x188;
    }

    namespace SetAngleAttenuation {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioListener = 0x108;
    }

    namespace SetAsync {
        inline constexpr uintptr_t GlobalDataStore = 0x100;
        inline constexpr uintptr_t MemoryStoreHashMap = 0x108;
        inline constexpr uintptr_t MemoryStoreSortedMap = 0x110;
    }

    namespace SetControlPoints {
        inline constexpr uintptr_t Path2D = 0x100;
        inline constexpr uintptr_t Path3D = 0x108;
    }

    namespace SetDistanceAttenuation {
        inline constexpr uintptr_t AudioEqualizer = 0x100;
        inline constexpr uintptr_t AudioPitchShifter = 0x108;
    }

    namespace SetDragStyleFunction {
        inline constexpr uintptr_t DragDetector = 0x100;
        inline constexpr uintptr_t UIGridStyleLayout = 0x108;
    }

    namespace SetEnableContentImageSizeChangedEvents {
        inline constexpr uintptr_t ImageLabel = 0x100;
        inline constexpr uintptr_t InputAction = 0x108;
    }

    namespace SetItem {
        inline constexpr uintptr_t CollectionService = 0x100;
        inline constexpr uintptr_t LocalStorageService = 0x108;
        inline constexpr uintptr_t MemoryStoreService = 0x110;
        inline constexpr uintptr_t Plugin = 0x118;
    }

    namespace SetJoint {
        inline constexpr uintptr_t DigitsRigDescription = 0x100;
        inline constexpr uintptr_t HumanoidRigDescription = 0x108;
    }

    namespace SetKeys {
        inline constexpr uintptr_t FunctionalTest = 0x100;
        inline constexpr uintptr_t RunService = 0x108;
        inline constexpr uintptr_t Vector3Curve = 0x110;
    }

    namespace SetMetadata {
        inline constexpr uintptr_t DataStoreKeyInfo = 0x100;
        inline constexpr uintptr_t Debris = 0x108;
        inline constexpr uintptr_t SessionService = 0x110;
    }

    namespace SetPosition {
        inline constexpr uintptr_t ContextActionService = 0x100;
        inline constexpr uintptr_t EditableMesh = 0x108;
    }

    namespace SetRBXEvent {
        inline constexpr uintptr_t EventIngestService = 0x100;
        inline constexpr uintptr_t RbxAnalyticsService = 0x108;
    }

    namespace SetRBXEventStream {
        inline constexpr uintptr_t ExampleV2Service = 0x100;
        inline constexpr uintptr_t RbxAnalyticsService = 0x108;
    }

    namespace SetTextFromInput {
        inline constexpr uintptr_t TextButton = 0x100;
        inline constexpr uintptr_t TextChannel = 0x108;
        inline constexpr uintptr_t TextService = 0x110;
    }

    namespace SetTposeAdjustment {
        inline constexpr uintptr_t DockWidgetPluginGui = 0x100;
        inline constexpr uintptr_t HumanoidRigDescription = 0x108;
    }

    namespace SetValue {
        inline constexpr uintptr_t CustomEventReceiver = 0x100;
        inline constexpr uintptr_t PlayerDataRecordConfig = 0x108;
    }

    namespace Shading {
        inline constexpr uintptr_t BoxHandleAdornment = 0x100;
        inline constexpr uintptr_t ConfigSnapshot = 0x108;
        inline constexpr uintptr_t CylindricalConstraint = 0x110;
        inline constexpr uintptr_t PyramidHandleAdornment = 0x118;
        inline constexpr uintptr_t SpotLight = 0x120;
    }

    namespace Shape {
        inline constexpr uintptr_t AudioTremolo = 0x100;
        inline constexpr uintptr_t Part = 0x108;
        inline constexpr uintptr_t ParticleEmitter = 0x110;
        inline constexpr uintptr_t SurfaceGui = 0x118;
    }

    namespace SharedTableRegistry {
        inline constexpr uintptr_t GetSharedTable = 0x100;
        inline constexpr uintptr_t SetSharedTable = 0x108;
    }

    namespace Shirt {
        inline constexpr uintptr_t HumanoidDescription = 0x110;
        inline constexpr uintptr_t ShirtTemplate = 0x100;
        inline constexpr uintptr_t ShirtTemplateContent = 0x108;
    }

    namespace ShirtGraphic {
        inline constexpr uintptr_t Color3 = 0x100;
        inline constexpr uintptr_t Graphic = 0x108;
        inline constexpr uintptr_t TextureContent = 0x110;
    }

    namespace SimulationFidelity {
        inline constexpr uintptr_t AudioEqualizer = 0x100;
        inline constexpr uintptr_t AudioPitchShifter = 0x108;
    }

    namespace Sit {
        inline constexpr uintptr_t Humanoid = 0x110;
        inline constexpr uintptr_t Selection = 0x100;
        inline constexpr uintptr_t VideoCaptureService = 0x108;
    }

    namespace Size {
        inline constexpr uintptr_t BasePart = 0x100;
        inline constexpr uintptr_t BillboardGui = 0x108;
        inline constexpr uintptr_t BloomEffect = 0x110;
        inline constexpr uintptr_t BodyAngularVelocity = 0x118;
        inline constexpr uintptr_t BrickColorValue = 0x120;
        inline constexpr uintptr_t EditableMesh = 0x128;
        inline constexpr uintptr_t Fire = 0x130;
        inline constexpr uintptr_t GetTextBoundsParams = 0x138;
        inline constexpr uintptr_t GuiObject = 0x140;
        inline constexpr uintptr_t ImageLabel = 0x148;
        inline constexpr uintptr_t ParticleEmitter = 0x150;
        inline constexpr uintptr_t ProjectService = 0x158;
        inline constexpr uintptr_t RTAnimationTracker = 0x160;
        inline constexpr uintptr_t SlidingBallConstraint = 0x168;
        inline constexpr uintptr_t Smoke = 0x170;
    }

    namespace SkateboardController {
        inline constexpr uintptr_t AxisChanged = 0x110;
        inline constexpr uintptr_t Steer = 0x100;
        inline constexpr uintptr_t Throttle = 0x108;
    }

    namespace SkateboardPlatform {
        inline constexpr uintptr_t ApplySpecificImpulse = 0x100;
        inline constexpr uintptr_t Controller = 0x108;
        inline constexpr uintptr_t ControllingHumanoid = 0x110;
        inline constexpr uintptr_t Equipped = 0x138;
        inline constexpr uintptr_t MoveState = 0x118;
        inline constexpr uintptr_t MoveStateChanged = 0x140;
        inline constexpr uintptr_t RemoteCreateMotor6D = 0x148;
        inline constexpr uintptr_t RemoteDestroyMotor6D = 0x150;
        inline constexpr uintptr_t Steer = 0x120;
        inline constexpr uintptr_t StickyWheels = 0x128;
        inline constexpr uintptr_t Throttle = 0x130;
        inline constexpr uintptr_t Unequipped = 0x158;
        inline constexpr uintptr_t equipped = 0x160;
        inline constexpr uintptr_t unequipped = 0x168;
    }

    namespace Skin {
        inline constexpr uintptr_t SkinColor = 0x100;
    }

    namespace Sky {
        inline constexpr uintptr_t CelestialBodiesShown = 0x100;
        inline constexpr uintptr_t DrawAdv = 0x36f3e6b;
        inline constexpr uintptr_t DrawCube = 0x36ef530;
        inline constexpr uintptr_t DrawCubeCallA = 0x36eb87c;
        inline constexpr uintptr_t DrawCubeCallB = 0x36eb58b;
        inline constexpr uintptr_t MoonAngularSize = 0x234;
        inline constexpr uintptr_t MoonTextureContent = 0x110;
        inline constexpr uintptr_t MoonTextureId = 0xb8;
        inline constexpr uintptr_t SkyboxBackContent = 0x120;
        inline constexpr uintptr_t SkyboxBk = 0xe8;
        inline constexpr uintptr_t SkyboxDn = 0x118;
        inline constexpr uintptr_t SkyboxDownContent = 0x138;
        inline constexpr uintptr_t SkyboxFrontContent = 0x140;
        inline constexpr uintptr_t SkyboxFt = 0x148;
        inline constexpr uintptr_t SkyboxLeftContent = 0x150;
        inline constexpr uintptr_t SkyboxLf = 0x178;
        inline constexpr uintptr_t SkyboxOrientation = 0x228;
        inline constexpr uintptr_t SkyboxRightContent = 0x168;
        inline constexpr uintptr_t SkyboxRt = 0x1a8;
        inline constexpr uintptr_t SkyboxUp = 0x1d8;
        inline constexpr uintptr_t SkyboxUpContent = 0x180;
        inline constexpr uintptr_t StarCount = 0x238;
        inline constexpr uintptr_t SunAngularSize = 0x22c;
        inline constexpr uintptr_t SunTextureContent = 0x198;
        inline constexpr uintptr_t SunTextureId = 0x208;
    }

    namespace SlidingBallConstraint {
        inline constexpr uintptr_t ActuatorType = 0x100;
        inline constexpr uintptr_t CurrentPosition = 0x108;
        inline constexpr uintptr_t LimitsEnabled = 0x110;
        inline constexpr uintptr_t LinearResponsiveness = 0x118;
        inline constexpr uintptr_t LowerLimit = 0x120;
        inline constexpr uintptr_t MotorMaxAcceleration = 0x128;
        inline constexpr uintptr_t MotorMaxForce = 0x130;
        inline constexpr uintptr_t Restitution = 0x138;
        inline constexpr uintptr_t ServoMaxForce = 0x140;
        inline constexpr uintptr_t Size = 0x148;
        inline constexpr uintptr_t SoftlockServoUponReachingTarget = 0x150;
        inline constexpr uintptr_t Speed = 0x158;
        inline constexpr uintptr_t TargetPosition = 0x160;
        inline constexpr uintptr_t UpperLimit = 0x168;
        inline constexpr uintptr_t Velocity = 0x170;
    }

    namespace SlimAnimationDataEntity {
        inline constexpr uintptr_t BoneParentIndices = 0x100;
        inline constexpr uintptr_t EntityScale = 0x108;
        inline constexpr uintptr_t EntitySource = 0x110;
        inline constexpr uintptr_t Handle = 0x118;
        inline constexpr uintptr_t IsSlimEnabled = 0x120;
        inline constexpr uintptr_t NumBones = 0x128;
        inline constexpr uintptr_t RootIndex = 0x130;
        inline constexpr uintptr_t SlimInstanceHashes = 0x138;
        inline constexpr uintptr_t SlimReplicationTimestampSec = 0x140;
    }

    namespace SlimContentProvider {
        inline constexpr uintptr_t GetContentMemoryData = 0x100;
    }

    namespace SlimDebugSettings {
        inline constexpr uintptr_t GetAvailableTintModes = 0x100;
        inline constexpr uintptr_t GetTintMode = 0x108;
        inline constexpr uintptr_t SetTintMode = 0x110;
        inline constexpr uintptr_t SlimDebug = 0x118;
    }

    namespace SlimReplicationService {
        inline constexpr uintptr_t ServerUpdateEntities = 0x100;
    }

    namespace Smoke {
        inline constexpr uintptr_t Color = 0x108;
        inline constexpr uintptr_t Enabled = 0x110;
        inline constexpr uintptr_t FastForward = 0x100;
        inline constexpr uintptr_t LocalTransparencyModifier = 0x118;
        inline constexpr uintptr_t Opacity = 0x120;
        inline constexpr uintptr_t RiseVelocity = 0x128;
        inline constexpr uintptr_t Size = 0x130;
        inline constexpr uintptr_t TimeScale = 0x138;
        inline constexpr uintptr_t opacity_xml = 0x140;
        inline constexpr uintptr_t riseVelocity_xml = 0x148;
        inline constexpr uintptr_t size_xml = 0x150;
    }

    namespace SmoothClusterNode {
        inline constexpr uintptr_t VTableRva = 0x6d0d068;
    }

    namespace SmoothVoxelsUpgraderService {
        inline constexpr uintptr_t Cancel = 0x100;
        inline constexpr uintptr_t Start = 0x108;
        inline constexpr uintptr_t Status = 0x110;
    }

    namespace SocialService {
        inline constexpr uintptr_t CallInviteStateChanged = 0x1c0;
        inline constexpr uintptr_t CanSendCallInviteAsync = 0x100;
        inline constexpr uintptr_t CanSendGameInviteAsync = 0x108;
        inline constexpr uintptr_t GameInvitePromptClosed = 0x1c8;
        inline constexpr uintptr_t GetEventRsvpStatusAsync = 0x110;
        inline constexpr uintptr_t GetExperienceEventAsync = 0x118;
        inline constexpr uintptr_t GetPartyAsync = 0x120;
        inline constexpr uintptr_t GetPlayersByPartyId = 0x150;
        inline constexpr uintptr_t GetUpcomingExperienceEventsAsync = 0x128;
        inline constexpr uintptr_t HideSelfView = 0x158;
        inline constexpr uintptr_t InvokeGameInvitePromptClosed = 0x160;
        inline constexpr uintptr_t InvokeIrisInvite = 0x168;
        inline constexpr uintptr_t InvokeIrisInvitePromptClosed = 0x170;
        inline constexpr uintptr_t InvokeShareSheetClosed = 0x178;
        inline constexpr uintptr_t IrisInviteInitiated = 0x1d0;
        inline constexpr uintptr_t OnCallInviteInvoked = 0x1b8;
        inline constexpr uintptr_t OpenShareSheetWithLink = 0x1d8;
        inline constexpr uintptr_t PhoneBookPromptClosed = 0x1e0;
        inline constexpr uintptr_t PlayerPartyDataChanged = 0x1e8;
        inline constexpr uintptr_t PromptFeedbackSubmissionAsync = 0x130;
        inline constexpr uintptr_t PromptGameInvite = 0x180;
        inline constexpr uintptr_t PromptInviteRequested = 0x1f0;
        inline constexpr uintptr_t PromptIrisInviteRequested = 0x1f8;
        inline constexpr uintptr_t PromptLinkSharing = 0x138;
        inline constexpr uintptr_t PromptLinkSharingAsync = 0x140;
        inline constexpr uintptr_t PromptPhoneBook = 0x188;
        inline constexpr uintptr_t PromptRsvpToEventAsync = 0x148;
        inline constexpr uintptr_t PromptRsvpToEventCompleted = 0x190;
        inline constexpr uintptr_t SelfViewHidden = 0x200;
        inline constexpr uintptr_t SelfViewVisible = 0x208;
        inline constexpr uintptr_t ShareSheetClosed = 0x210;
        inline constexpr uintptr_t ShowPromptFeedbackSubmission = 0x218;
        inline constexpr uintptr_t ShowPromptFeedbackUnavailable = 0x220;
        inline constexpr uintptr_t ShowPromptRsvpToEvent = 0x228;
        inline constexpr uintptr_t ShowSelfView = 0x198;
        inline constexpr uintptr_t SignalFeedbackSubmissionCompleted = 0x1a0;
        inline constexpr uintptr_t SignalFeedbackSubmissionPermissionDenied = 0x1a8;
        inline constexpr uintptr_t UpdatePlayerPartyData = 0x1b0;
    }

    namespace SocketOtherFailureRatioStat {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Sound {
        inline constexpr uintptr_t AcousticSimulationEnabled = 0x140;
        inline constexpr uintptr_t AssetRepresentation = 0x148;
        inline constexpr uintptr_t AudioContent = 0x150;
        inline constexpr uintptr_t ChannelCount = 0x158;
        inline constexpr uintptr_t DidLoop = 0x258;
        inline constexpr uintptr_t EmitterSize = 0x160;
        inline constexpr uintptr_t Ended = 0x260;
        inline constexpr uintptr_t GetUnderlyingAudioPlayer = 0x100;
        inline constexpr uintptr_t IsLoaded = 0x168;
        inline constexpr uintptr_t IsPaused = 0x170;
        inline constexpr uintptr_t IsPlaying = 0x130;
        inline constexpr uintptr_t IsSpatial = 0x180;
        inline constexpr uintptr_t Loaded = 0x268;
        inline constexpr uintptr_t LoopRegion = 0x188;
        inline constexpr uintptr_t Looped = 0x12d;
        inline constexpr uintptr_t MaxDistance = 0x198;
        inline constexpr uintptr_t MinDistance = 0x1a0;
        inline constexpr uintptr_t Pause = 0x108;
        inline constexpr uintptr_t Paused = 0x270;
        inline constexpr uintptr_t Pitch = 0x1a8;
        inline constexpr uintptr_t Play = 0x110;
        inline constexpr uintptr_t PlayOnRemove = 0x1b0;
        inline constexpr uintptr_t PlaybackLoudness = 0x1b8;
        inline constexpr uintptr_t PlaybackRegion = 0x1c0;
        inline constexpr uintptr_t PlaybackRegionsEnabled = 0x1c8;
        inline constexpr uintptr_t PlaybackSpeed = 0x10c;
        inline constexpr uintptr_t Played = 0x278;
        inline constexpr uintptr_t Playing = 0x1d8;
        inline constexpr uintptr_t PlayingReplicator = 0x1e0;
        inline constexpr uintptr_t PlayingUpdatedFromClient = 0x280;
        inline constexpr uintptr_t PlayingUpdatedFromServer = 0x288;
        inline constexpr uintptr_t Resume = 0x118;
        inline constexpr uintptr_t Resumed = 0x290;
        inline constexpr uintptr_t RollOffGain = 0x1e8;
        inline constexpr uintptr_t RollOffMaxDistance = 0x110;
        inline constexpr uintptr_t RollOffMinDistance = 0x114;
        inline constexpr uintptr_t RollOffMode = 0x200;
        inline constexpr uintptr_t SoundGroup = 0xd8;
        inline constexpr uintptr_t SoundId = 0xb8;
        inline constexpr uintptr_t Stop = 0x120;
        inline constexpr uintptr_t Stopped = 0x298;
        inline constexpr uintptr_t TimeLength = 0x218;
        inline constexpr uintptr_t TimePosition = 0x220;
        inline constexpr uintptr_t TimePositionReplicator = 0x228;
        inline constexpr uintptr_t TimePositionUpdatedFromClient = 0x2a0;
        inline constexpr uintptr_t TimePositionUpdatedFromServer = 0x2a8;
        inline constexpr uintptr_t UsageContextPermission = 0x230;
        inline constexpr uintptr_t Volume = 0x120;
        inline constexpr uintptr_t isPlaying = 0x240;
        inline constexpr uintptr_t pause = 0x128;
        inline constexpr uintptr_t play = 0x130;
        inline constexpr uintptr_t playbackActionSync = 0x2b0;
        inline constexpr uintptr_t stop = 0x138;
        inline constexpr uintptr_t xmlRead_MaxDistance_3 = 0x248;
        inline constexpr uintptr_t xmlRead_MinDistance_3 = 0x250;
    }

    namespace SoundEffect {
        inline constexpr uintptr_t Enabled = 0x100;
        inline constexpr uintptr_t Priority = 0x108;
    }

    namespace SoundGroup {
        inline constexpr uintptr_t Sound = 0x108;
        inline constexpr uintptr_t Volume = 0x100;
    }

    namespace SoundService {
        inline constexpr uintptr_t AcousticSimulationEnabled = 0x1b0;
        inline constexpr uintptr_t AmbientReverb = 0x1b8;
        inline constexpr uintptr_t AudioApiByDefault = 0x1c0;
        inline constexpr uintptr_t AudioInstanceAdded = 0x238;
        inline constexpr uintptr_t BeginRecording = 0x110;
        inline constexpr uintptr_t CharacterSoundsUseNewApi = 0x1c8;
        inline constexpr uintptr_t ClientLoggedEvent = 0x240;
        inline constexpr uintptr_t DefaultListenerLocation = 0x1d0;
        inline constexpr uintptr_t DeviceListChanged = 0x248;
        inline constexpr uintptr_t DiffractionEnabled = 0x1d8;
        inline constexpr uintptr_t DistanceFactor = 0x1e0;
        inline constexpr uintptr_t DopplerScale = 0x1e8;
        inline constexpr uintptr_t EndRecording = 0x100;
        inline constexpr uintptr_t GetAudioApiByDefault = 0x118;
        inline constexpr uintptr_t GetAudioInstances = 0x120;
        inline constexpr uintptr_t GetInputDevice = 0x128;
        inline constexpr uintptr_t GetInputDevices = 0x130;
        inline constexpr uintptr_t GetListener = 0x138;
        inline constexpr uintptr_t GetMixerTime = 0x140;
        inline constexpr uintptr_t GetOutputDevice = 0x148;
        inline constexpr uintptr_t GetOutputDevices = 0x150;
        inline constexpr uintptr_t GetRecordingDevices = 0x108;
        inline constexpr uintptr_t GetSoundMemoryData = 0x158;
        inline constexpr uintptr_t InsertAsset = 0x160;
        inline constexpr uintptr_t IsNewExpForAudioApiByDefault = 0x1f0;
        inline constexpr uintptr_t ListenerCFrame = 0x1f8;
        inline constexpr uintptr_t ListenerObject = 0x200;
        inline constexpr uintptr_t ListenerType = 0x208;
        inline constexpr uintptr_t OcclusionEnabled = 0x210;
        inline constexpr uintptr_t OpenAttenuationCurveEditor = 0x168;
        inline constexpr uintptr_t OpenAttenuationCurveEditorSignal = 0x250;
        inline constexpr uintptr_t OpenAudioCompressorEditorSignal = 0x258;
        inline constexpr uintptr_t OpenAudioEqualizerEditorSignal = 0x260;
        inline constexpr uintptr_t OpenDirectionalCurveEditor = 0x170;
        inline constexpr uintptr_t OpenDirectionalCurveEditorSignal = 0x268;
        inline constexpr uintptr_t PlayLocalSound = 0x178;
        inline constexpr uintptr_t RequestSttPlatformToken = 0x270;
        inline constexpr uintptr_t RespectFilteringEnabled = 0x218;
        inline constexpr uintptr_t ReverbEnabled = 0x220;
        inline constexpr uintptr_t RolloffScale = 0x228;
        inline constexpr uintptr_t SetAudioApiByDefault = 0x180;
        inline constexpr uintptr_t SetInputDevice = 0x188;
        inline constexpr uintptr_t SetListener = 0x190;
        inline constexpr uintptr_t SetOutputDevice = 0x198;
        inline constexpr uintptr_t SetRecordingDevice = 0x1a0;
        inline constexpr uintptr_t SetSoundEnabled = 0x1a8;
        inline constexpr uintptr_t SttPlatformToken = 0x278;
        inline constexpr uintptr_t VolumetricAudio = 0x230;
    }

    namespace Source {
        inline constexpr uintptr_t AuroraScriptObject = 0x100;
        inline constexpr uintptr_t CylinderHandleAdornment = 0x108;
        inline constexpr uintptr_t ModuleScript = 0x110;
        inline constexpr uintptr_t ScriptContext = 0x118;
    }

    namespace Sparkles {
        inline constexpr uintptr_t Color = 0x108;
        inline constexpr uintptr_t Enabled = 0x110;
        inline constexpr uintptr_t FastForward = 0x100;
        inline constexpr uintptr_t LocalTransparencyModifier = 0x118;
        inline constexpr uintptr_t SparkleColor = 0x120;
        inline constexpr uintptr_t TimeScale = 0x128;
    }

    namespace SpawnLocation {
        inline constexpr uintptr_t AllowTeamChangeOnTouch = 0x3d;
        inline constexpr uintptr_t Duration = 0x108;
        inline constexpr uintptr_t Enabled = 0x1e1;
        inline constexpr uintptr_t ForcefieldDuration = 0x1d8;
        inline constexpr uintptr_t Neutral = 0x1e2;
        inline constexpr uintptr_t TeamColor = 0x1dc;
    }

    namespace SpecialMesh {
        inline constexpr uintptr_t MeshId = 0xe8;
        inline constexpr uintptr_t MeshType = 0x100;
        inline constexpr uintptr_t Offset = 0xa8;
        inline constexpr uintptr_t Scale = 0xb4;
        inline constexpr uintptr_t TextureId = 0x118;
    }

    namespace Speed {
        inline constexpr uintptr_t AnimationTrack = 0x100;
        inline constexpr uintptr_t AudioTextToSpeech = 0x108;
        inline constexpr uintptr_t ParticleEmitter = 0x110;
        inline constexpr uintptr_t SlidingBallConstraint = 0x118;
    }

    namespace SphereHandleAdornment {
        inline constexpr uintptr_t Radius = 0x100;
        inline constexpr uintptr_t Shading = 0x108;
    }

    namespace SpotLight {
        inline constexpr uintptr_t Angle = 0x100;
        inline constexpr uintptr_t Face = 0x108;
        inline constexpr uintptr_t Range = 0x110;
    }

    namespace SpringConstraint {
        inline constexpr uintptr_t Coils = 0x100;
        inline constexpr uintptr_t CurrentLength = 0x108;
        inline constexpr uintptr_t Damping = 0x110;
        inline constexpr uintptr_t FreeLength = 0x118;
        inline constexpr uintptr_t LimitsEnabled = 0x120;
        inline constexpr uintptr_t MaxForce = 0x128;
        inline constexpr uintptr_t MaxLength = 0x130;
        inline constexpr uintptr_t MinLength = 0x138;
        inline constexpr uintptr_t Radius = 0x140;
        inline constexpr uintptr_t Stiffness = 0x148;
        inline constexpr uintptr_t Thickness = 0x150;
    }

    namespace StandardQueue {
        inline constexpr uintptr_t BatchCommitAsync = 0x100;
        inline constexpr uintptr_t PublishAsync = 0x108;
        inline constexpr uintptr_t SubscribeAsync = 0x110;
    }

    namespace Start {
        inline constexpr uintptr_t FaceAnimatorService = 0x100;
        inline constexpr uintptr_t HttpService = 0x108;
        inline constexpr uintptr_t SocialService = 0x110;
    }

    namespace StartRecording {
        inline constexpr uintptr_t VirtualInputManager = 0x100;
        inline constexpr uintptr_t VirtualUser = 0x108;
    }

    namespace StartVideoCaptureAsync {
        inline constexpr uintptr_t CaptureService = 0x100;
        inline constexpr uintptr_t TestService = 0x108;
    }

    namespace StarterGui {
        inline constexpr uintptr_t ClipsDescendantsSupportsRotation = 0x130;
        inline constexpr uintptr_t CoreGuiChangedSignal = 0x178;
        inline constexpr uintptr_t GetCore = 0x100;
        inline constexpr uintptr_t GetCoreGuiEnabled = 0x108;
        inline constexpr uintptr_t ProcessUserInput = 0x138;
        inline constexpr uintptr_t RegisterGetCore = 0x110;
        inline constexpr uintptr_t RegisterSetCore = 0x118;
        inline constexpr uintptr_t ResetPlayerGuiOnSpawn = 0x140;
        inline constexpr uintptr_t RtlTextSupport = 0x148;
        inline constexpr uintptr_t ScreenOrientation = 0x150;
        inline constexpr uintptr_t ScrollingFrame = 0x180;
        inline constexpr uintptr_t SetCore = 0x120;
        inline constexpr uintptr_t SetCoreGuiEnabled = 0x128;
        inline constexpr uintptr_t ShowDevelopmentGui = 0x158;
        inline constexpr uintptr_t StudioDefaultStyleSheet = 0x160;
        inline constexpr uintptr_t StudioInsertWidgetLayerCollectorAutoLinkStyleSheet = 0x168;
        inline constexpr uintptr_t VirtualCursorMode = 0x170;
    }

    namespace StarterPlayer {
        inline constexpr uintptr_t AllowCustomAnimations = 0x100;
        inline constexpr uintptr_t AutoJumpEnabled = 0x108;
        inline constexpr uintptr_t AvatarJointUpgrade = 0x110;
        inline constexpr uintptr_t AvatarJointUpgrade_SerializedRollout = 0x118;
        inline constexpr uintptr_t CameraMaxZoomDistance = 0x120;
        inline constexpr uintptr_t CameraMinZoomDistance = 0x128;
        inline constexpr uintptr_t CameraMode = 0x130;
        inline constexpr uintptr_t CharacterBreakJointsOnDeath = 0x138;
        inline constexpr uintptr_t CharacterJumpHeight = 0x140;
        inline constexpr uintptr_t CharacterJumpPower = 0x148;
        inline constexpr uintptr_t CharacterMaxSlopeAngle = 0x150;
        inline constexpr uintptr_t CharacterUseJumpPower = 0x158;
        inline constexpr uintptr_t CharacterWalkSpeed = 0x160;
        inline constexpr uintptr_t ClassicDeath = 0x168;
        inline constexpr uintptr_t CreateDefaultPlayerModule = 0x170;
        inline constexpr uintptr_t DevCameraOcclusionMode = 0x178;
        inline constexpr uintptr_t DevComputerCameraMovementMode = 0x180;
        inline constexpr uintptr_t DevComputerMovementMode = 0x188;
        inline constexpr uintptr_t DevTouchCameraMovementMode = 0x190;
        inline constexpr uintptr_t DevTouchMovementMode = 0x198;
        inline constexpr uintptr_t EnableDynamicHeads = 0x1a0;
        inline constexpr uintptr_t EnableMouseLockOption = 0x1a8;
        inline constexpr uintptr_t GameSettingsAvatar = 0x1b0;
        inline constexpr uintptr_t GameSettingsR15Collision = 0x1b8;
        inline constexpr uintptr_t HealthDisplayDistance = 0x1c0;
        inline constexpr uintptr_t LoadCharacterAppearance = 0x1c8;
        inline constexpr uintptr_t LoadCharacterLayeredClothing = 0x1d0;
        inline constexpr uintptr_t LuaCharacterController = 0x1d8;
        inline constexpr uintptr_t NameDisplayDistance = 0x1e0;
        inline constexpr uintptr_t PlaceAvatarRules = 0x1e8;
        inline constexpr uintptr_t PlayerModuleStatus = 0x1f0;
        inline constexpr uintptr_t UserEmotesEnabled = 0x1f8;
    }

    namespace StartupMessageService {
        inline constexpr uintptr_t ExecuteActionButton = 0x100;
        inline constexpr uintptr_t GetStartupMessage = 0x108;
    }

    namespace State {
        inline constexpr uintptr_t Appearance = 0x100;
        inline constexpr uintptr_t Wire = 0x108;
    }

    namespace StateMachineDefinition {
        inline constexpr uintptr_t NodeId = 0x100;
    }

    namespace StateMachineTransitionDefinition {
        inline constexpr uintptr_t From = 0x100;
        inline constexpr uintptr_t Priority = 0x108;
        inline constexpr uintptr_t To = 0x110;
        inline constexpr uintptr_t TransitionId = 0x118;
    }

    namespace Stats {
        inline constexpr uintptr_t ContactsCount = 0x148;
        inline constexpr uintptr_t DataReceiveKbps = 0x150;
        inline constexpr uintptr_t DataSendKbps = 0x158;
        inline constexpr uintptr_t FrameTime = 0x160;
        inline constexpr uintptr_t GetBrowserTrackerId = 0x108;
        inline constexpr uintptr_t GetHarmonyQualityLevel = 0x110;
        inline constexpr uintptr_t GetMemoryCategoryNames = 0x118;
        inline constexpr uintptr_t GetMemoryUsageMbAllCategories = 0x120;
        inline constexpr uintptr_t GetMemoryUsageMbForTag = 0x128;
        inline constexpr uintptr_t GetPaginatedMemoryByTexture = 0x100;
        inline constexpr uintptr_t GetTotalMemoryUsageMb = 0x130;
        inline constexpr uintptr_t HeartbeatTime = 0x168;
        inline constexpr uintptr_t HeartbeatTimeMs = 0x170;
        inline constexpr uintptr_t InstanceCount = 0x178;
        inline constexpr uintptr_t MemoryTrackingEnabled = 0x180;
        inline constexpr uintptr_t MovingPrimitivesCount = 0x188;
        inline constexpr uintptr_t PhysicsReceiveKbps = 0x190;
        inline constexpr uintptr_t PhysicsSendKbps = 0x198;
        inline constexpr uintptr_t PhysicsStepTime = 0x1a0;
        inline constexpr uintptr_t PhysicsStepTimeMs = 0x1a8;
        inline constexpr uintptr_t PrimitivesCount = 0x1b0;
        inline constexpr uintptr_t RenderCPUFrameTime = 0x1b8;
        inline constexpr uintptr_t RenderGPUFrameTime = 0x1c0;
        inline constexpr uintptr_t ResetHarmonyMemoryTarget = 0x138;
        inline constexpr uintptr_t SceneDrawcallCount = 0x1c8;
        inline constexpr uintptr_t SceneTriangleCount = 0x1d0;
        inline constexpr uintptr_t SetHarmonyMemoryTarget = 0x140;
        inline constexpr uintptr_t ShadowsDrawcallCount = 0x1d8;
        inline constexpr uintptr_t ShadowsTriangleCount = 0x1e0;
        inline constexpr uintptr_t UI2DDrawcallCount = 0x1e8;
        inline constexpr uintptr_t UI2DTriangleCount = 0x1f0;
        inline constexpr uintptr_t UI3DDrawcallCount = 0x1f8;
        inline constexpr uintptr_t UI3DTriangleCount = 0x200;
    }

    namespace StatsItem {
        inline constexpr uintptr_t DisplayName = 0x110;
        inline constexpr uintptr_t GetValue = 0x100;
        inline constexpr uintptr_t GetValueString = 0x108;
        inline constexpr uintptr_t Value = 0xf80;
    }

    namespace Status {
        inline constexpr uintptr_t AdPlacement = 0x110;
        inline constexpr uintptr_t AirController = 0x118;
        inline constexpr uintptr_t FriendsCallingParticipant = 0x120;
        inline constexpr uintptr_t MakeupDecal = 0x100;
        inline constexpr uintptr_t Path2D = 0x128;
        inline constexpr uintptr_t RequestType = 0x108;
        inline constexpr uintptr_t SocialService = 0x138;
        inline constexpr uintptr_t TextChatMessage = 0x130;
    }

    namespace StatusCode {
        inline constexpr uintptr_t HttpErrorCode = 0x108;
        inline constexpr uintptr_t id = 0x100;
        inline constexpr uintptr_t universe_id = 0x110;
    }

    namespace Steer {
        inline constexpr uintptr_t SkateboardController = 0x100;
        inline constexpr uintptr_t SkateboardPlatform = 0x108;
        inline constexpr uintptr_t Throttle = 0x118;
        inline constexpr uintptr_t VehicleSeat = 0x110;
    }

    namespace Step {
        inline constexpr uintptr_t AvatarChatService = 0x110;
        inline constexpr uintptr_t FaceAnimatorService = 0x100;
        inline constexpr uintptr_t RbxAnalyticsService = 0x108;
    }

    namespace StepPhysics {
        inline constexpr uintptr_t AuroraService = 0x100;
        inline constexpr uintptr_t WorldRoot = 0x108;
    }

    namespace StepPhysicsAPIStats {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Stiffness {
        inline constexpr uintptr_t SpringConstraint = 0x100;
        inline constexpr uintptr_t TrackerLodController = 0x108;
        inline constexpr uintptr_t WrapTextureTransfer = 0x110;
    }

    namespace Stop {
        inline constexpr uintptr_t AnimationStreamTrack = 0x100;
        inline constexpr uintptr_t AnimationTrack = 0x108;
        inline constexpr uintptr_t AudioRecorder = 0x110;
        inline constexpr uintptr_t AudioReverb = 0x118;
        inline constexpr uintptr_t FaceControls = 0x120;
        inline constexpr uintptr_t HapticService = 0x128;
        inline constexpr uintptr_t RunService = 0x130;
        inline constexpr uintptr_t Sound = 0x138;
    }

    namespace StopRecording {
        inline constexpr uintptr_t VirtualInputManager = 0x100;
        inline constexpr uintptr_t VirtualUser = 0x108;
    }

    namespace StopWatchReporter {
        inline constexpr uintptr_t FinishTask = 0x100;
        inline constexpr uintptr_t SendReport = 0x108;
        inline constexpr uintptr_t StartTask = 0x110;
    }

    namespace Stopped {
        inline constexpr uintptr_t AnimationTrack = 0x100;
        inline constexpr uintptr_t Animator = 0x108;
        inline constexpr uintptr_t Sound = 0x110;
        inline constexpr uintptr_t UnreliableRemoteEvent = 0x118;
        inline constexpr uintptr_t VideoDisplay = 0x120;
    }

    namespace StringValue {
        inline constexpr uintptr_t Changed = 0x108;
        inline constexpr uintptr_t Value = 0x100;
        inline constexpr uintptr_t changed = 0x110;
    }

    namespace StudioCaptureScaleStage {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace StudioCaptureStage {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace StudioData {
        inline constexpr uintptr_t EnableScriptCollabByDefaultOnLoad = 0x100;
    }

    namespace Style {
        inline constexpr uintptr_t FriendsCallingInstance = 0x100;
        inline constexpr uintptr_t GuiObject = 0x108;
        inline constexpr uintptr_t HapticEffect = 0x110;
        inline constexpr uintptr_t ProximityPrompt = 0x118;
        inline constexpr uintptr_t TrussPart = 0x120;
    }

    namespace StyleBase {
        inline constexpr uintptr_t GetStyleRules = 0x100;
        inline constexpr uintptr_t InsertStyleRule = 0x108;
        inline constexpr uintptr_t SetStyleRules = 0x110;
        inline constexpr uintptr_t StyleRulesChanged = 0x118;
    }

    namespace StyleDerive {
        inline constexpr uintptr_t Index = 0x100;
        inline constexpr uintptr_t Priority = 0x108;
        inline constexpr uintptr_t StyleSheet = 0x110;
    }

    namespace StyleLink {
        inline constexpr uintptr_t StyleSheet = 0x100;
    }

    namespace StyleQuery {
        inline constexpr uintptr_t AspectRatioRange = 0x120;
        inline constexpr uintptr_t ConditionsSerialize = 0x128;
        inline constexpr uintptr_t CoreGui = 0x168;
        inline constexpr uintptr_t GetCondition = 0x100;
        inline constexpr uintptr_t GetConditions = 0x108;
        inline constexpr uintptr_t IsActive = 0x130;
        inline constexpr uintptr_t MaxSize = 0x138;
        inline constexpr uintptr_t MinSize = 0x140;
        inline constexpr uintptr_t PreferredInput = 0x148;
        inline constexpr uintptr_t PreferredTextSize = 0x150;
        inline constexpr uintptr_t ReducedMotionEnabled = 0x158;
        inline constexpr uintptr_t SetCondition = 0x110;
        inline constexpr uintptr_t SetConditions = 0x118;
        inline constexpr uintptr_t ViewportDisplaySize = 0x160;
    }

    namespace StyleRule {
        inline constexpr uintptr_t GetDefaultPropertyTransition = 0x100;
        inline constexpr uintptr_t GetProperties = 0x108;
        inline constexpr uintptr_t GetPropertiesResolved = 0x110;
        inline constexpr uintptr_t GetProperty = 0x118;
        inline constexpr uintptr_t GetPropertyResolved = 0x120;
        inline constexpr uintptr_t GetPropertyTransitions = 0x128;
        inline constexpr uintptr_t Index = 0x158;
        inline constexpr uintptr_t Priority = 0x160;
        inline constexpr uintptr_t PropertiesSerialize = 0x168;
        inline constexpr uintptr_t PropertyTransitionsSerialize = 0x170;
        inline constexpr uintptr_t Selector = 0x178;
        inline constexpr uintptr_t SelectorError = 0x180;
        inline constexpr uintptr_t SetDefaultPropertyTransition = 0x130;
        inline constexpr uintptr_t SetProperties = 0x138;
        inline constexpr uintptr_t SetProperty = 0x140;
        inline constexpr uintptr_t SetPropertyTransition = 0x148;
        inline constexpr uintptr_t SetPropertyTransitions = 0x150;
        inline constexpr uintptr_t StyleRulePropertyChanged = 0x188;
    }

    namespace StyleSheet {
        inline constexpr uintptr_t GetDerives = 0x100;
        inline constexpr uintptr_t SetDerives = 0x108;
        inline constexpr uintptr_t StyleLink = 0x110;
        inline constexpr uintptr_t StyleQuery = 0x118;
    }

    namespace StylingService {
        inline constexpr uintptr_t GetAppliedStyles = 0x100;
        inline constexpr uintptr_t GetStyleInfo = 0x108;
        inline constexpr uintptr_t GetStyleSheetDerivesChain = 0x110;
        inline constexpr uintptr_t GetStyleSheetInfo = 0x118;
        inline constexpr uintptr_t UpdateUnitTestOnly = 0x120;
    }

    namespace SubscribeAsync {
        inline constexpr uintptr_t MicroProfilerService = 0x100;
        inline constexpr uintptr_t StarterGui = 0x108;
    }

    namespace SubtractAsync {
        inline constexpr uintptr_t BasePart = 0x100;
        inline constexpr uintptr_t GeometryService = 0x108;
    }

    namespace SuccessfulImageConversions {
        inline constexpr uintptr_t FailedImageConversions = 0x100;
    }

    namespace SuccessfulVideoDecodings {
        inline constexpr uintptr_t InterfaceSwitch = 0x100;
    }

    namespace Sun {
        inline constexpr uintptr_t Mon = 0x100;
        inline constexpr uintptr_t rtsp = 0x108;
    }

    namespace SunRaysEffect {
        inline constexpr uintptr_t Enabled = 0xa0;
        inline constexpr uintptr_t Intensity = 0xa8;
        inline constexpr uintptr_t Spread = 0xac;
    }

    namespace Sunday {
        inline constexpr uintptr_t Mon = 0x108;
        inline constexpr uintptr_t Monday = 0x100;
    }

    namespace SurfaceAppearance {
        inline constexpr uintptr_t AlphaMode = 0x1e0;
        inline constexpr uintptr_t Color = 0x1c8;
        inline constexpr uintptr_t ColorMap = 0xb8;
        inline constexpr uintptr_t ColorMapContent = 0x118;
        inline constexpr uintptr_t EmissiveMaskContent = 0xe8;
        inline constexpr uintptr_t EmissiveStrength = 0x1e4;
        inline constexpr uintptr_t EmissiveTint = 0x1d4;
        inline constexpr uintptr_t MetalnessMap = 0x118;
        inline constexpr uintptr_t MetalnessMapContent = 0x140;
        inline constexpr uintptr_t NormalMap = 0x148;
        inline constexpr uintptr_t NormalMapContent = 0x150;
        inline constexpr uintptr_t ResampleMode = 0x158;
        inline constexpr uintptr_t RoughnessMap = 0x178;
        inline constexpr uintptr_t RoughnessMapContent = 0x168;
        inline constexpr uintptr_t TexturePack = 0x170;
        inline constexpr uintptr_t TexturePackContent = 0x178;
    }

    namespace SurfaceGui {
        inline constexpr uintptr_t AlwaysOnTop = 0x100;
        inline constexpr uintptr_t Brightness = 0x108;
        inline constexpr uintptr_t CanvasSize = 0x110;
        inline constexpr uintptr_t ClipsDescendants = 0x118;
        inline constexpr uintptr_t HorizontalCurvature = 0x120;
        inline constexpr uintptr_t LightInfluence = 0x128;
        inline constexpr uintptr_t MaxDistance = 0x130;
        inline constexpr uintptr_t PixelsPerStud = 0x138;
        inline constexpr uintptr_t Shape = 0x140;
        inline constexpr uintptr_t SizingMode = 0x148;
        inline constexpr uintptr_t ToolPunchThroughDistance = 0x150;
        inline constexpr uintptr_t ZOffset = 0x158;
    }

    namespace SurfaceGuiBase {
        inline constexpr uintptr_t Active = 0x100;
        inline constexpr uintptr_t Adornee = 0x108;
        inline constexpr uintptr_t Face = 0x110;
    }

    namespace SurfaceLight {
        inline constexpr uintptr_t Angle = 0x100;
        inline constexpr uintptr_t Face = 0x108;
        inline constexpr uintptr_t Range = 0x110;
    }

    namespace SurfaceSelection {
        inline constexpr uintptr_t TargetSurface = 0x100;
    }

    namespace SwimController {
        inline constexpr uintptr_t AccelerationTime = 0x100;
        inline constexpr uintptr_t PitchMaxTorque = 0x108;
        inline constexpr uintptr_t PitchSpeedFactor = 0x110;
        inline constexpr uintptr_t RollMaxTorque = 0x118;
        inline constexpr uintptr_t RollSpeedFactor = 0x120;
    }

    namespace SystemThemeService {
        inline constexpr uintptr_t OnLuaThemeUpdated = 0x128;
        inline constexpr uintptr_t getSystemTheme = 0x108;
        inline constexpr uintptr_t getSystemThemeAsync = 0x100;
        inline constexpr uintptr_t isSystemThemeAvailable = 0x110;
        inline constexpr uintptr_t setClassicThemeActive = 0x118;
        inline constexpr uintptr_t setTheme = 0x120;
    }

    namespace TabTipKeyboardOpen {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace TakeScreenshot {
        inline constexpr uintptr_t CoreGui = 0x100;
        inline constexpr uintptr_t Script = 0x108;
    }

    namespace Target {
        inline constexpr uintptr_t IKControl = 0x100;
        inline constexpr uintptr_t JointInstance = 0x108;
        inline constexpr uintptr_t Mouse = 0x110;
        inline constexpr uintptr_t RocketPropulsion = 0x118;
        inline constexpr uintptr_t TextChannelWindow = 0x120;
    }

    namespace TaskScheduler {
        inline constexpr uintptr_t Diagnostics = 0x150;
        inline constexpr uintptr_t JobEnd = 0xd0;
        inline constexpr uintptr_t JobName = 0x18;
        inline constexpr uintptr_t JobStart = 0xc8;
        inline constexpr uintptr_t MaxFPS = 0xb0;
        inline constexpr uintptr_t MaxFps = 0xb0;
        inline constexpr uintptr_t Pointer = 0x8c8d108;
        inline constexpr uintptr_t SchedulerDutyCycle = 0x100;
        inline constexpr uintptr_t SchedulerRate = 0x108;
        inline constexpr uintptr_t ThreadPoolConfig = 0x110;
        inline constexpr uintptr_t ThreadPoolSize = 0x118;
    }

    namespace TattletaleRecordUnfilteredText {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Team {
        inline constexpr uintptr_t AutoAssignable = 0x108;
        inline constexpr uintptr_t AutoColorCharacters = 0x110;
        inline constexpr uintptr_t BrickColor = 0xa8;
        inline constexpr uintptr_t ChildOrder = 0x118;
        inline constexpr uintptr_t GetPlayers = 0x100;
        inline constexpr uintptr_t Player = 0x150;
        inline constexpr uintptr_t PlayerAdded = 0x130;
        inline constexpr uintptr_t PlayerRemoved = 0x138;
        inline constexpr uintptr_t Score = 0x120;
        inline constexpr uintptr_t TeamColor = 0xa8;
        inline constexpr uintptr_t Video = 0x148;
    }

    namespace TeamColor {
        inline constexpr uintptr_t FlagStand = 0x100;
        inline constexpr uintptr_t FlangeSoundEffect = 0x108;
        inline constexpr uintptr_t Player = 0x110;
        inline constexpr uintptr_t SpecialMesh = 0x118;
        inline constexpr uintptr_t TeamCreateData = 0x120;
    }

    namespace TeamCreateData {
        inline constexpr uintptr_t InitialCameraCFrame = 0x100;
    }

    namespace Teams {
        inline constexpr uintptr_t GetTeams = 0x100;
        inline constexpr uintptr_t RebalanceTeams = 0x108;
        inline constexpr uintptr_t Team = 0x110;
    }

    namespace TechniqueArray {
        inline constexpr uintptr_t BeginOffset = 0x0;
        inline constexpr uintptr_t EndOffset = 0x8;
    }

    namespace TeleportAsyncResult {
        inline constexpr uintptr_t PrivateServerId = 0x100;
        inline constexpr uintptr_t ReservedServerAccessCode = 0x108;
    }

    namespace TeleportOptions {
        inline constexpr uintptr_t GetTeleportData = 0x100;
        inline constexpr uintptr_t ReservedServerAccessCode = 0x110;
        inline constexpr uintptr_t ReservedServerId = 0x118;
        inline constexpr uintptr_t ServerInstanceId = 0x120;
        inline constexpr uintptr_t SetTeleportData = 0x108;
        inline constexpr uintptr_t ShouldReserveServer = 0x128;
        inline constexpr uintptr_t VipServerId = 0x130;
    }

    namespace TeleportService {
        inline constexpr uintptr_t Block = 0x138;
        inline constexpr uintptr_t CustomizedTeleportUI = 0x1d0;
        inline constexpr uintptr_t GetArrivingTeleportGui = 0x140;
        inline constexpr uintptr_t GetLocalPlayerTeleportData = 0x148;
        inline constexpr uintptr_t GetPlayerPlaceInstanceAsync = 0x100;
        inline constexpr uintptr_t GetTeleportSetting = 0x150;
        inline constexpr uintptr_t GetThirdPartyTeleportInfo = 0x158;
        inline constexpr uintptr_t LocalPlayerArrivedFromTeleport = 0x1d8;
        inline constexpr uintptr_t MenuTeleportAttempt = 0x1e0;
        inline constexpr uintptr_t OpenExperienceDetailsPrompt = 0x1e8;
        inline constexpr uintptr_t PromptExperienceDetailsAsync = 0x108;
        inline constexpr uintptr_t PromptExperienceDetailsCompleted = 0x160;
        inline constexpr uintptr_t ReconnectTeleportInitFailed = 0x1f0;
        inline constexpr uintptr_t ReserveServer = 0x110;
        inline constexpr uintptr_t ReserveServerAsync = 0x118;
        inline constexpr uintptr_t SendVIPData = 0x1f8;
        inline constexpr uintptr_t SetTeleportGui = 0x168;
        inline constexpr uintptr_t SetTeleportSetting = 0x170;
        inline constexpr uintptr_t Teleport = 0x178;
        inline constexpr uintptr_t TeleportAsync = 0x120;
        inline constexpr uintptr_t TeleportCancel = 0x180;
        inline constexpr uintptr_t TeleportInProgress = 0x200;
        inline constexpr uintptr_t TeleportInitFailed = 0x208;
        inline constexpr uintptr_t TeleportInitFailedInternal = 0x210;
        inline constexpr uintptr_t TeleportPartyAsync = 0x128;
        inline constexpr uintptr_t TeleportReconnect = 0x188;
        inline constexpr uintptr_t TeleportSwitchServer = 0x190;
        inline constexpr uintptr_t TeleportToPlaceInstance = 0x198;
        inline constexpr uintptr_t TeleportToPrivateServer = 0x1a0;
        inline constexpr uintptr_t TeleportToSpawnByName = 0x1a8;
        inline constexpr uintptr_t TeleportTrustedBackForth = 0x1b0;
        inline constexpr uintptr_t TeleportTrustedBackHistory = 0x1b8;
        inline constexpr uintptr_t TeleportedPlacesBackHistory = 0x1c0;
        inline constexpr uintptr_t TeleportedUniversesBackHistory = 0x1c8;
        inline constexpr uintptr_t UnblockAsync = 0x130;
    }

    namespace TeleportV2ServerInitSuccess {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Terrain {
        inline constexpr uintptr_t AcquisitionMethod = 0x2d0;
        inline constexpr uintptr_t AutowedgeCell = 0x110;
        inline constexpr uintptr_t AutowedgeCells = 0x118;
        inline constexpr uintptr_t CanSmoothVoxelsBeUpgraded = 0x120;
        inline constexpr uintptr_t CellCenterToWorld = 0x128;
        inline constexpr uintptr_t CellCornerToWorld = 0x130;
        inline constexpr uintptr_t Clear = 0x138;
        inline constexpr uintptr_t ClearVoxelsAsync_beta = 0x140;
        inline constexpr uintptr_t ClusterGrid = 0x2d8;
        inline constexpr uintptr_t ClusterGridV2 = 0x2e0;
        inline constexpr uintptr_t ClusterGridV3 = 0x2e8;
        inline constexpr uintptr_t ConvertToSmooth = 0x148;
        inline constexpr uintptr_t CopyRegion = 0x150;
        inline constexpr uintptr_t CountCells = 0x158;
        inline constexpr uintptr_t CreateVoxelBuffer_beta = 0x160;
        inline constexpr uintptr_t Decoration = 0x2f0;
        inline constexpr uintptr_t DrawBufferAsync = 0x100;
        inline constexpr uintptr_t ExpandedTerrainResolved = 0x2f8;
        inline constexpr uintptr_t FillBall = 0x168;
        inline constexpr uintptr_t FillBallSlot = 0x170;
        inline constexpr uintptr_t FillBlock = 0x178;
        inline constexpr uintptr_t FillBlockSlot = 0x180;
        inline constexpr uintptr_t FillCylinder = 0x188;
        inline constexpr uintptr_t FillCylinderSlot = 0x190;
        inline constexpr uintptr_t FillRegion = 0x198;
        inline constexpr uintptr_t FillRegionSlot = 0x1a0;
        inline constexpr uintptr_t FillWedge = 0x1a8;
        inline constexpr uintptr_t FillWedgeSlot = 0x1b0;
        inline constexpr uintptr_t GenerateWaterFlowMap = 0x1b8;
        inline constexpr uintptr_t GetCell = 0x1c0;
        inline constexpr uintptr_t GetMaterialColor = 0x1c8;
        inline constexpr uintptr_t GetMaterialSlot = 0x1d0;
        inline constexpr uintptr_t GetTerrainWireframe = 0x1d8;
        inline constexpr uintptr_t GetWaterCell = 0x1e0;
        inline constexpr uintptr_t Grass = 0x388;
        inline constexpr uintptr_t GrassLength = 0x1e0;
        inline constexpr uintptr_t GridBackendReloadRequired = 0x378;
        inline constexpr uintptr_t IsMaterialSlotInvalid = 0x1e8;
        inline constexpr uintptr_t IsSmooth = 0x308;
        inline constexpr uintptr_t IterateVoxelsAsync_beta = 0x1f0;
        inline constexpr uintptr_t LastUsedModificationMethod = 0x310;
        inline constexpr uintptr_t MaterialColors = 0x4a8;
        inline constexpr uintptr_t Materials = 0x320;
        inline constexpr uintptr_t MaxExtents = 0x328;
        inline constexpr uintptr_t ModifyVoxelsAsync_beta = 0x1f8;
        inline constexpr uintptr_t PasteRegion = 0x200;
        inline constexpr uintptr_t PhysicsGrid = 0x330;
        inline constexpr uintptr_t ReadBufferAsync = 0x108;
        inline constexpr uintptr_t ReadVoxelChannels = 0x208;
        inline constexpr uintptr_t ReadVoxels = 0x210;
        inline constexpr uintptr_t ReadVoxelsAsync_beta = 0x218;
        inline constexpr uintptr_t ReplaceMaterial = 0x220;
        inline constexpr uintptr_t ReplaceMaterialInTransform = 0x228;
        inline constexpr uintptr_t ReplaceMaterialInTransformSubregion = 0x230;
        inline constexpr uintptr_t ReplaceMaterialInTransformSubregionSlot = 0x238;
        inline constexpr uintptr_t ResetMaterialSlot = 0x240;
        inline constexpr uintptr_t ResetWaterFlowMap = 0x248;
        inline constexpr uintptr_t SetCell = 0x250;
        inline constexpr uintptr_t SetCells = 0x258;
        inline constexpr uintptr_t SetMaterialColor = 0x260;
        inline constexpr uintptr_t SetMaterialInTransform = 0x268;
        inline constexpr uintptr_t SetMaterialInTransformSubregion = 0x270;
        inline constexpr uintptr_t SetMaterialInTransformSubregionSlot = 0x278;
        inline constexpr uintptr_t SetMaterialSlot = 0x280;
        inline constexpr uintptr_t SetWaterCell = 0x288;
        inline constexpr uintptr_t SmoothGrid = 0x338;
        inline constexpr uintptr_t SmoothRegion = 0x290;
        inline constexpr uintptr_t SmoothRegionMaterialSlots = 0x298;
        inline constexpr uintptr_t SmoothVoxelsUpgraded = 0x340;
        inline constexpr uintptr_t VoxelGridAssetContentMap = 0x348;
        inline constexpr uintptr_t WaterColor = 0x1d0;
        inline constexpr uintptr_t WaterReflectance = 0x1e8;
        inline constexpr uintptr_t WaterTransparency = 0x1ec;
        inline constexpr uintptr_t WaterWaveSize = 0x1f0;
        inline constexpr uintptr_t WaterWaveSpeed = 0x1f4;
        inline constexpr uintptr_t Workspace = 0x380;
        inline constexpr uintptr_t WorldToCell = 0x2a0;
        inline constexpr uintptr_t WorldToCellPreferEmpty = 0x2a8;
        inline constexpr uintptr_t WorldToCellPreferSolid = 0x2b0;
        inline constexpr uintptr_t WriteVoxelChannels = 0x2b8;
        inline constexpr uintptr_t WriteVoxels = 0x2c0;
        inline constexpr uintptr_t WriteVoxelsAsync_beta = 0x2c8;
    }

    namespace TerrainDetail {
        inline constexpr uintptr_t ColorMap = 0x100;
        inline constexpr uintptr_t ColorMapContent = 0x108;
        inline constexpr uintptr_t EmissiveMaskContent = 0x110;
        inline constexpr uintptr_t EmissiveStrength = 0x118;
        inline constexpr uintptr_t EmissiveTint = 0x120;
        inline constexpr uintptr_t Face = 0x128;
        inline constexpr uintptr_t MaterialPattern = 0x130;
        inline constexpr uintptr_t MetalnessMap = 0x138;
        inline constexpr uintptr_t MetalnessMapContent = 0x140;
        inline constexpr uintptr_t NormalMap = 0x148;
        inline constexpr uintptr_t NormalMapContent = 0x150;
        inline constexpr uintptr_t RoughnessMap = 0x158;
        inline constexpr uintptr_t RoughnessMapContent = 0x160;
        inline constexpr uintptr_t StudsPerTile = 0x168;
        inline constexpr uintptr_t TexturePack = 0x170;
        inline constexpr uintptr_t TexturePackContent = 0x178;
    }

    namespace TerrainIterateOperation {
        inline constexpr uintptr_t CommitBlock = 0x100;
        inline constexpr uintptr_t Ready = 0x108;
    }

    namespace TerrainModifyOperation {
        inline constexpr uintptr_t CommitBlock = 0x100;
        inline constexpr uintptr_t Ready = 0x108;
    }

    namespace TerrainReadOperation {
        inline constexpr uintptr_t Ready = 0x100;
    }

    namespace TerrainRegion {
        inline constexpr uintptr_t ApplyTransform = 0x100;
        inline constexpr uintptr_t ApplyTransformSubregion = 0x108;
        inline constexpr uintptr_t ConvertToSmooth = 0x110;
        inline constexpr uintptr_t ExtentsMax = 0x120;
        inline constexpr uintptr_t ExtentsMin = 0x128;
        inline constexpr uintptr_t GetRegionWireframe = 0x118;
        inline constexpr uintptr_t GridV3 = 0x130;
        inline constexpr uintptr_t IsSmooth = 0x138;
        inline constexpr uintptr_t SizeInCells = 0x140;
        inline constexpr uintptr_t SmoothGrid = 0x148;
    }

    namespace TerrainWriteOperation {
        inline constexpr uintptr_t CommitBlock = 0x100;
        inline constexpr uintptr_t GetBlock = 0x108;
    }

    namespace TestCase {
        inline constexpr uintptr_t Assert = 0x100;
        inline constexpr uintptr_t AssertLegacy = 0x108;
        inline constexpr uintptr_t EndTest = 0x110;
        inline constexpr uintptr_t Message = 0x118;
        inline constexpr uintptr_t Require = 0x120;
        inline constexpr uintptr_t RequireLegacy = 0x128;
    }

    namespace TestService {
        inline constexpr uintptr_t AutoRuns = 0x210;
        inline constexpr uintptr_t CaptureScreenshotAsync = 0x100;
        inline constexpr uintptr_t Check = 0x138;
        inline constexpr uintptr_t Checkpoint = 0x140;
        inline constexpr uintptr_t ConvertSlimAcrToObj = 0x148;
        inline constexpr uintptr_t CreateAndSavePropertySet = 0x150;
        inline constexpr uintptr_t CreateExtraAssetsFileFromPropertySet = 0x158;
        inline constexpr uintptr_t Description = 0x218;
        inline constexpr uintptr_t Done = 0x160;
        inline constexpr uintptr_t Enabled = 0x220;
        inline constexpr uintptr_t Error = 0x168;
        inline constexpr uintptr_t ErrorCount = 0x228;
        inline constexpr uintptr_t ExecuteWithStudioRun = 0x230;
        inline constexpr uintptr_t Fail = 0x170;
        inline constexpr uintptr_t FetchExtraAssets = 0x178;
        inline constexpr uintptr_t FetchTestControlsAsync = 0x108;
        inline constexpr uintptr_t GetTestControlSchema = 0x180;
        inline constexpr uintptr_t GetTestControls = 0x188;
        inline constexpr uintptr_t Is30FpsThrottleEnabled = 0x238;
        inline constexpr uintptr_t IsPhysicsEnvironmentalThrottled = 0x240;
        inline constexpr uintptr_t IsSleepAllowed = 0x248;
        inline constexpr uintptr_t Message = 0x190;
        inline constexpr uintptr_t NumberOfPlayers = 0x250;
        inline constexpr uintptr_t RegisterTest = 0x198;
        inline constexpr uintptr_t RegisterTestLegacy = 0x1a0;
        inline constexpr uintptr_t RequestValidationAsync = 0x110;
        inline constexpr uintptr_t Require = 0x1a8;
        inline constexpr uintptr_t ResetTestControl = 0x1b0;
        inline constexpr uintptr_t Run = 0x118;
        inline constexpr uintptr_t RunAsync = 0x120;
        inline constexpr uintptr_t ScopeTime = 0x1b8;
        inline constexpr uintptr_t ServerCollectConditionalResult = 0x280;
        inline constexpr uintptr_t ServerCollectResult = 0x288;
        inline constexpr uintptr_t SetTestControl = 0x1c0;
        inline constexpr uintptr_t SignalProfilingCapture = 0x1c8;
        inline constexpr uintptr_t SignalProfilingStart = 0x1d0;
        inline constexpr uintptr_t SignalProfilingStop = 0x1d8;
        inline constexpr uintptr_t SimulateSecondsLag = 0x258;
        inline constexpr uintptr_t StartTestSession = 0x1e0;
        inline constexpr uintptr_t StartVideoCaptureAsync = 0x128;
        inline constexpr uintptr_t StopTestSession = 0x1e8;
        inline constexpr uintptr_t StopVideoCaptureAsync = 0x130;
        inline constexpr uintptr_t TakeSnapshot = 0x1f0;
        inline constexpr uintptr_t TestCount = 0x260;
        inline constexpr uintptr_t ThrottlePhysicsToRealtime = 0x268;
        inline constexpr uintptr_t Timeout = 0x270;
        inline constexpr uintptr_t TranscodePropertySet = 0x1f8;
        inline constexpr uintptr_t Warn = 0x200;
        inline constexpr uintptr_t WarnCount = 0x278;
        inline constexpr uintptr_t getTestSessionProviderStats = 0x208;
    }

    namespace Text {
        inline constexpr uintptr_t AudioSpeechToText = 0x100;
        inline constexpr uintptr_t AudioTextToSpeech = 0x108;
        inline constexpr uintptr_t GetTextBoundsParams = 0x110;
        inline constexpr uintptr_t MicroProfilerService = 0x118;
        inline constexpr uintptr_t PluginAction = 0x120;
        inline constexpr uintptr_t TextBox = 0x128;
        inline constexpr uintptr_t TextButton = 0x130;
        inline constexpr uintptr_t TextChatMessage = 0x138;
        inline constexpr uintptr_t TextChatMessageProperties = 0x140;
        inline constexpr uintptr_t TextLabel = 0x148;
    }

    namespace TextBounds {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace TextBox {
        inline constexpr uintptr_t CaptureFocus = 0x100;
        inline constexpr uintptr_t ChatInputBarConfiguration = 0x2a8;
        inline constexpr uintptr_t ClearTextOnFocus = 0x128;
        inline constexpr uintptr_t Confidential = 0x130;
        inline constexpr uintptr_t ContentText = 0x138;
        inline constexpr uintptr_t CursorPosition = 0x140;
        inline constexpr uintptr_t FocusLost = 0x290;
        inline constexpr uintptr_t Focused = 0x298;
        inline constexpr uintptr_t Font = 0x148;
        inline constexpr uintptr_t FontFace = 0x150;
        inline constexpr uintptr_t FontSize = 0x158;
        inline constexpr uintptr_t HasFocus = 0x160;
        inline constexpr uintptr_t IsFocused = 0x108;
        inline constexpr uintptr_t LineHeight = 0x168;
        inline constexpr uintptr_t LocalizationMatchIdentifier = 0x170;
        inline constexpr uintptr_t LocalizationMatchedSourceText = 0x178;
        inline constexpr uintptr_t LocalizedPlaceholderText = 0x180;
        inline constexpr uintptr_t ManualFocusRelease = 0x188;
        inline constexpr uintptr_t MaxVisibleGraphemes = 0x190;
        inline constexpr uintptr_t MultiLine = 0x198;
        inline constexpr uintptr_t OpenTypeFeatures = 0x1a0;
        inline constexpr uintptr_t OpenTypeFeaturesError = 0x1a8;
        inline constexpr uintptr_t OverlayNativeInput = 0x1b0;
        inline constexpr uintptr_t PlaceholderColor3 = 0x1b8;
        inline constexpr uintptr_t PlaceholderText = 0x1c0;
        inline constexpr uintptr_t ReleaseFocus = 0x110;
        inline constexpr uintptr_t ResetKeyboardMode = 0x118;
        inline constexpr uintptr_t ReturnKeyType = 0x1c8;
        inline constexpr uintptr_t ReturnPressedFromOnScreenKeyboard = 0x2a0;
        inline constexpr uintptr_t RichText = 0x1d0;
        inline constexpr uintptr_t SelectionStart = 0x1d8;
        inline constexpr uintptr_t SetTextFromInput = 0x120;
        inline constexpr uintptr_t ShouldEmitReturnEvents = 0x1e0;
        inline constexpr uintptr_t ShouldEmitTabEvents = 0x1e8;
        inline constexpr uintptr_t ShouldEmitUpAndDownArrowEvents = 0x1f0;
        inline constexpr uintptr_t ShowNativeInput = 0x1f8;
        inline constexpr uintptr_t Text = 0x200;
        inline constexpr uintptr_t TextBounds = 0x208;
        inline constexpr uintptr_t TextColor = 0x210;
        inline constexpr uintptr_t TextColor3 = 0x218;
        inline constexpr uintptr_t TextDirection = 0x220;
        inline constexpr uintptr_t TextEditable = 0x228;
        inline constexpr uintptr_t TextFits = 0x230;
        inline constexpr uintptr_t TextInputType = 0x238;
        inline constexpr uintptr_t TextScaled = 0x240;
        inline constexpr uintptr_t TextSize = 0x248;
        inline constexpr uintptr_t TextStrokeColor3 = 0x250;
        inline constexpr uintptr_t TextStrokeTransparency = 0x258;
        inline constexpr uintptr_t TextTransparency = 0x260;
        inline constexpr uintptr_t TextTruncate = 0x268;
        inline constexpr uintptr_t TextWrap = 0x270;
        inline constexpr uintptr_t TextWrapped = 0x278;
        inline constexpr uintptr_t TextXAlignment = 0x280;
        inline constexpr uintptr_t TextYAlignment = 0x288;
    }

    namespace TextButton {
        inline constexpr uintptr_t AutoButtonColor = 0x9cc;
        inline constexpr uintptr_t Confidential = 0x108;
        inline constexpr uintptr_t ContentText = 0xe08;
        inline constexpr uintptr_t Font = 0x6;
        inline constexpr uintptr_t FontFace = 0x120;
        inline constexpr uintptr_t FontSize = 0x128;
        inline constexpr uintptr_t LineHeight = 0xf20;
        inline constexpr uintptr_t LocalizationMatchIdentifier = 0x138;
        inline constexpr uintptr_t LocalizationMatchedSourceText = 0x140;
        inline constexpr uintptr_t LocalizedText = 0xe08;
        inline constexpr uintptr_t MaxVisibleGraphemes = 0x113c;
        inline constexpr uintptr_t Modal = 0x9cd;
        inline constexpr uintptr_t OpenTypeFeatures = 0x158;
        inline constexpr uintptr_t OpenTypeFeaturesError = 0x160;
        inline constexpr uintptr_t RichText = 0x101e;
        inline constexpr uintptr_t Selected = 0x9ce;
        inline constexpr uintptr_t SetTextFromInput = 0x100;
        inline constexpr uintptr_t Text = 0xe08;
        inline constexpr uintptr_t TextBounds = 0x178;
        inline constexpr uintptr_t TextColor = 0x180;
        inline constexpr uintptr_t TextColor3 = 0x1120;
        inline constexpr uintptr_t TextDirection = 0xfc0;
        inline constexpr uintptr_t TextFits = 0x198;
        inline constexpr uintptr_t TextScaled = 0xdf1;
        inline constexpr uintptr_t TextSize = 0x1144;
        inline constexpr uintptr_t TextStrokeColor3 = 0x112c;
        inline constexpr uintptr_t TextStrokeTransparency = 0x1148;
        inline constexpr uintptr_t TextTransparency = 0x114c;
        inline constexpr uintptr_t TextTruncate = 0x1150;
        inline constexpr uintptr_t TextWrap = 0x1d0;
        inline constexpr uintptr_t TextWrapped = 0x1018;
        inline constexpr uintptr_t TextXAlignment = 0x1154;
        inline constexpr uintptr_t TextYAlignment = 0xf68;
    }

    namespace TextChannel {
        inline constexpr uintptr_t AddPlayersOnJoin = 0x138;
        inline constexpr uintptr_t AddUserAsync = 0x100;
        inline constexpr uintptr_t DirectChatRequester = 0x140;
        inline constexpr uintptr_t DisplaySystemMessage = 0x128;
        inline constexpr uintptr_t IsDefaultTextChannel = 0x148;
        inline constexpr uintptr_t MessageReceived = 0x160;
        inline constexpr uintptr_t OnIncomingMessage = 0x150;
        inline constexpr uintptr_t SendAsync = 0x108;
        inline constexpr uintptr_t SendDictatedSpeechAsync = 0x110;
        inline constexpr uintptr_t SendInternalAsync = 0x118;
        inline constexpr uintptr_t SendPresetAsync = 0x120;
        inline constexpr uintptr_t SetDirectChatRequester = 0x130;
        inline constexpr uintptr_t ShouldDeliverCallback = 0x158;
        inline constexpr uintptr_t TextChatMessage = 0x168;
    }

    namespace TextChannelWindow {
        inline constexpr uintptr_t FontFace = 0x100;
        inline constexpr uintptr_t IsRendering = 0x108;
        inline constexpr uintptr_t Target = 0x110;
        inline constexpr uintptr_t UseDefaultFont = 0x118;
    }

    namespace TextChatCommand {
        inline constexpr uintptr_t AutocompleteVisible = 0x100;
        inline constexpr uintptr_t Enabled = 0x108;
        inline constexpr uintptr_t PrimaryAlias = 0x110;
        inline constexpr uintptr_t SecondaryAlias = 0x118;
        inline constexpr uintptr_t Triggered = 0x120;
    }

    namespace TextChatMessage {
        inline constexpr uintptr_t BubbleChatMessageProperties = 0x100;
        inline constexpr uintptr_t ChatActionType = 0x108;
        inline constexpr uintptr_t ChatWindowMessageProperties = 0x110;
        inline constexpr uintptr_t ForModeration = 0x118;
        inline constexpr uintptr_t IsHiddenMessage = 0x120;
        inline constexpr uintptr_t IsHistorical = 0x128;
        inline constexpr uintptr_t MessageId = 0x130;
        inline constexpr uintptr_t Metadata = 0x138;
        inline constexpr uintptr_t OriginalText = 0x140;
        inline constexpr uintptr_t PrefixText = 0x148;
        inline constexpr uintptr_t PrefixTextInternal = 0x150;
        inline constexpr uintptr_t PresetChatVersion = 0x158;
        inline constexpr uintptr_t PresetId = 0x160;
        inline constexpr uintptr_t RewrittenText = 0x168;
        inline constexpr uintptr_t RewrittenTranslation = 0x170;
        inline constexpr uintptr_t Status = 0x178;
        inline constexpr uintptr_t Text = 0x180;
        inline constexpr uintptr_t TextChannel = 0x188;
        inline constexpr uintptr_t TextInternal = 0x190;
        inline constexpr uintptr_t TextSource = 0x198;
        inline constexpr uintptr_t Timestamp = 0x1a0;
        inline constexpr uintptr_t Translation = 0x1a8;
        inline constexpr uintptr_t TranslationInternal = 0x1b0;
        inline constexpr uintptr_t Verified = 0x1b8;
        inline constexpr uintptr_t WasRewritten = 0x1c0;
    }

    namespace TextChatMessageProperties {
        inline constexpr uintptr_t PrefixText = 0x100;
        inline constexpr uintptr_t Text = 0x108;
        inline constexpr uintptr_t Translation = 0x110;
    }

    namespace TextChatService {
        inline constexpr uintptr_t BubbleDisplayed = 0x218;
        inline constexpr uintptr_t CanUserChatAsync = 0x100;
        inline constexpr uintptr_t CanUsersChatAsync = 0x108;
        inline constexpr uintptr_t CanUsersDirectChatAsync = 0x110;
        inline constexpr uintptr_t CanUsersWhisperAsync = 0x118;
        inline constexpr uintptr_t ChatActionReceived = 0x220;
        inline constexpr uintptr_t ChatTranslationEnabled = 0x1b8;
        inline constexpr uintptr_t ChatTranslationFTUXShown = 0x1c0;
        inline constexpr uintptr_t ChatTranslationToggleEnabled = 0x1c8;
        inline constexpr uintptr_t ChatVersion = 0x1d0;
        inline constexpr uintptr_t ClientToServerChatableUserCountRequestSignal = 0x228;
        inline constexpr uintptr_t ClientToServerMessageReplicateSignalV2 = 0x230;
        inline constexpr uintptr_t ClientToServerMessageReplicateSignalV3 = 0x238;
        inline constexpr uintptr_t ClientToServerMessageReplicateSignalV4 = 0x240;
        inline constexpr uintptr_t ClientToServerUniverseChatMessageSignalV1 = 0x248;
        inline constexpr uintptr_t ClientToServerUniverseChatMessageSignalV2 = 0x250;
        inline constexpr uintptr_t CreateDefaultCommands = 0x1d8;
        inline constexpr uintptr_t CreateDefaultTextChannels = 0x1e0;
        inline constexpr uintptr_t DisplayBubble = 0x158;
        inline constexpr uintptr_t ExpChatFeatureValueChanged = 0x258;
        inline constexpr uintptr_t GetChatGroupsAsync = 0x120;
        inline constexpr uintptr_t GetChatableUserCountAsync = 0x128;
        inline constexpr uintptr_t GetPresetsAsync = 0x130;
        inline constexpr uintptr_t GetTextChannelWindows = 0x160;
        inline constexpr uintptr_t HasAllocatedUniverseChatContext = 0x168;
        inline constexpr uintptr_t HasSeenDeprecationDialog = 0x1e8;
        inline constexpr uintptr_t IsLegacyChatDisabled = 0x1f0;
        inline constexpr uintptr_t IsProtectedChatEnabled = 0x170;
        inline constexpr uintptr_t MessageReceived = 0x260;
        inline constexpr uintptr_t OnBubbleAdded = 0x200;
        inline constexpr uintptr_t OnChatWindowAdded = 0x208;
        inline constexpr uintptr_t OnIncomingMessage = 0x210;
        inline constexpr uintptr_t OnIncomingMessageEvent = 0x268;
        inline constexpr uintptr_t OnUserChatSettingUpdateAsync = 0x138;
        inline constexpr uintptr_t OnUserChatSettingUpdateServer = 0x270;
        inline constexpr uintptr_t PlatformIntegratedChat = 0x1f8;
        inline constexpr uintptr_t SendDictatedSpeechUniverseChatAsync = 0x140;
        inline constexpr uintptr_t SendEnableChatButtonClicked = 0x178;
        inline constexpr uintptr_t SendEnableChatButtonShown = 0x180;
        inline constexpr uintptr_t SendExpChatLoadSuccess = 0x188;
        inline constexpr uintptr_t SendExpChatMessageClientRendered = 0x190;
        inline constexpr uintptr_t SendExpChatWindowScroll = 0x198;
        inline constexpr uintptr_t SendExpChatWindowStatusChange = 0x1a0;
        inline constexpr uintptr_t SendTextChatCommandClientSent = 0x1a8;
        inline constexpr uintptr_t SendUniverseChatMessageAsync = 0x148;
        inline constexpr uintptr_t SendUniverseChatPresetAsync = 0x150;
        inline constexpr uintptr_t SendingMessage = 0x278;
        inline constexpr uintptr_t SendingUniverseChatMessage = 0x280;
        inline constexpr uintptr_t ServerToClientChatActionReplicateSignal = 0x288;
        inline constexpr uintptr_t ServerToClientChatableUserCountResponseSignal = 0x290;
        inline constexpr uintptr_t ServerToClientMessageReplicateSignal = 0x298;
        inline constexpr uintptr_t ServerToClientMessageReplicateSignalV2 = 0x2a0;
        inline constexpr uintptr_t ServerToClientPresetChatConfigChangedSignal = 0x2a8;
        inline constexpr uintptr_t ServerToClientPresetChatUserAccessChangedSignal = 0x2b0;
        inline constexpr uintptr_t ServerToClientUniverseChatChannelAllocatedSignalV1 = 0x2b8;
        inline constexpr uintptr_t ServerToClientUniverseChatMessageSignalV1 = 0x2c0;
        inline constexpr uintptr_t TextChannelWindowAdded = 0x2c8;
        inline constexpr uintptr_t TextChannelWindowRemoved = 0x2d0;
        inline constexpr uintptr_t UniverseChatChannelAllocated = 0x2d8;
        inline constexpr uintptr_t UniverseChatMessageReceived = 0x2e0;
        inline constexpr uintptr_t UserMessageIntentSent = 0x2e8;
        inline constexpr uintptr_t UserMessageIntentSentRemote = 0x2f0;
        inline constexpr uintptr_t setModerationModeEnabled = 0x1b0;
    }

    namespace TextColor {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace TextColor3 {
        inline constexpr uintptr_t BubbleChatConfiguration = 0x100;
        inline constexpr uintptr_t BubbleChatMessageProperties = 0x108;
        inline constexpr uintptr_t ChannelTabsConfiguration = 0x110;
        inline constexpr uintptr_t ChatInputBarConfiguration = 0x118;
        inline constexpr uintptr_t ChatWindowConfiguration = 0x120;
        inline constexpr uintptr_t ChatWindowMessageProperties = 0x128;
        inline constexpr uintptr_t InputActionLabel = 0x130;
        inline constexpr uintptr_t TextBox = 0x138;
        inline constexpr uintptr_t TextButton = 0x140;
        inline constexpr uintptr_t TextLabel = 0x148;
    }

    namespace TextDirection {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace TextDocument {
        inline constexpr uintptr_t TextContent = 0x100;
    }

    namespace TextFilterResult {
        inline constexpr uintptr_t GetChatForUserAsync = 0x100;
        inline constexpr uintptr_t GetNonChatStringForBroadcastAsync = 0x108;
        inline constexpr uintptr_t GetNonChatStringForUserAsync = 0x110;
    }

    namespace TextFilterTranslatedResult {
        inline constexpr uintptr_t GetTranslationForLocale = 0x100;
        inline constexpr uintptr_t GetTranslations = 0x108;
        inline constexpr uintptr_t SourceLanguage = 0x110;
        inline constexpr uintptr_t SourceText = 0x118;
    }

    namespace TextFits {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace TextGenerator {
        inline constexpr uintptr_t GenerateTextAsync = 0x100;
        inline constexpr uintptr_t Seed = 0x108;
        inline constexpr uintptr_t SystemPrompt = 0x110;
        inline constexpr uintptr_t Temperature = 0x118;
        inline constexpr uintptr_t TopP = 0x120;
    }

    namespace TextLabel {
        inline constexpr uintptr_t Confidential = 0x108;
        inline constexpr uintptr_t ContentText = 0xb88;
        inline constexpr uintptr_t Font = 0x6;
        inline constexpr uintptr_t FontFace = 0x120;
        inline constexpr uintptr_t FontSize = 0x128;
        inline constexpr uintptr_t LineHeight = 0xca0;
        inline constexpr uintptr_t LocalizationMatchIdentifier = 0x138;
        inline constexpr uintptr_t LocalizationMatchedSourceText = 0x140;
        inline constexpr uintptr_t LocalizedText = 0xb88;
        inline constexpr uintptr_t MaxVisibleGraphemes = 0xebc;
        inline constexpr uintptr_t OpenTypeFeatures = 0x158;
        inline constexpr uintptr_t OpenTypeFeaturesError = 0x160;
        inline constexpr uintptr_t RichText = 0xd9e;
        inline constexpr uintptr_t SetTextFromInput = 0x100;
        inline constexpr uintptr_t Text = 0xb88;
        inline constexpr uintptr_t TextBounds = 0x178;
        inline constexpr uintptr_t TextColor = 0x180;
        inline constexpr uintptr_t TextColor3 = 0xea0;
        inline constexpr uintptr_t TextDirection = 0xd40;
        inline constexpr uintptr_t TextFits = 0x198;
        inline constexpr uintptr_t TextScaled = 0xb71;
        inline constexpr uintptr_t TextSize = 0xec4;
        inline constexpr uintptr_t TextStrokeColor3 = 0xeac;
        inline constexpr uintptr_t TextStrokeTransparency = 0xec8;
        inline constexpr uintptr_t TextTransparency = 0xecc;
        inline constexpr uintptr_t TextTruncate = 0xed0;
        inline constexpr uintptr_t TextWrap = 0x1d0;
        inline constexpr uintptr_t TextWrapped = 0xd98;
        inline constexpr uintptr_t TextXAlignment = 0xed4;
        inline constexpr uintptr_t TextYAlignment = 0xce8;
    }

    namespace TextScaled {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace TextService {
        inline constexpr uintptr_t FilterAndTranslateStringAsync = 0x100;
        inline constexpr uintptr_t FilterStringAsync = 0x108;
        inline constexpr uintptr_t GetFamilyInfoAsync = 0x110;
        inline constexpr uintptr_t GetFontMemoryData = 0x128;
        inline constexpr uintptr_t GetTextBoundsAsync = 0x118;
        inline constexpr uintptr_t GetTextSize = 0x130;
        inline constexpr uintptr_t GetTextSizeOffsetAsync = 0x120;
        inline constexpr uintptr_t SetResolutionScale = 0x138;
    }

    namespace TextSize {
        inline constexpr uintptr_t BubbleChatConfiguration = 0x100;
        inline constexpr uintptr_t BuoyancySensor = 0x108;
        inline constexpr uintptr_t ChannelTabsConfiguration = 0x110;
        inline constexpr uintptr_t ChatInputBarConfiguration = 0x118;
        inline constexpr uintptr_t ChatWindowConfiguration = 0x120;
        inline constexpr uintptr_t ChatWindowMessageProperties = 0x128;
        inline constexpr uintptr_t InputActionLabel = 0x130;
        inline constexpr uintptr_t TextBox = 0x138;
        inline constexpr uintptr_t TextButton = 0x140;
        inline constexpr uintptr_t TextLabel = 0x148;
    }

    namespace TextSource {
        inline constexpr uintptr_t CanSend = 0x100;
        inline constexpr uintptr_t DisplayName = 0x108;
        inline constexpr uintptr_t TextChatMessage = 0x128;
        inline constexpr uintptr_t UserId = 0x110;
        inline constexpr uintptr_t UserIdReplicated = 0x118;
        inline constexpr uintptr_t Username = 0x120;
    }

    namespace TextStrokeColor3 {
        inline constexpr uintptr_t ChannelTabsConfiguration = 0x100;
        inline constexpr uintptr_t ChatInputBarConfiguration = 0x108;
        inline constexpr uintptr_t ChatWindowConfiguration = 0x110;
        inline constexpr uintptr_t ChatWindowMessageProperties = 0x118;
        inline constexpr uintptr_t TextBox = 0x120;
        inline constexpr uintptr_t TextButton = 0x128;
        inline constexpr uintptr_t TextLabel = 0x130;
    }

    namespace TextStrokeTransparency {
        inline constexpr uintptr_t CharacterMesh = 0x100;
        inline constexpr uintptr_t ChatWindowConfiguration = 0x108;
        inline constexpr uintptr_t ChorusSoundEffect = 0x110;
        inline constexpr uintptr_t TextBox = 0x118;
        inline constexpr uintptr_t TextButton = 0x120;
        inline constexpr uintptr_t TextLabel = 0x128;
    }

    namespace TextTransparency {
        inline constexpr uintptr_t InputActionLabel = 0x100;
        inline constexpr uintptr_t TextBox = 0x108;
        inline constexpr uintptr_t TextButton = 0x110;
        inline constexpr uintptr_t TextLabel = 0x118;
    }

    namespace TextTruncate {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace TextWrap {
        inline constexpr uintptr_t TextBox = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextLabel = 0x110;
    }

    namespace TextWrapped {
        inline constexpr uintptr_t InputActionLabel = 0x100;
        inline constexpr uintptr_t TextBox = 0x108;
        inline constexpr uintptr_t TextButton = 0x110;
        inline constexpr uintptr_t TextLabel = 0x118;
    }

    namespace TextXAlignment {
        inline constexpr uintptr_t InputActionLabel = 0x100;
        inline constexpr uintptr_t TextBox = 0x108;
        inline constexpr uintptr_t TextButton = 0x110;
        inline constexpr uintptr_t TextLabel = 0x118;
    }

    namespace TextYAlignment {
        inline constexpr uintptr_t InputBinding = 0x100;
        inline constexpr uintptr_t TextButton = 0x108;
        inline constexpr uintptr_t TextChannel = 0x110;
        inline constexpr uintptr_t TextSource = 0x118;
    }

    namespace Texture {
        inline constexpr uintptr_t Beam = 0x120;
        inline constexpr uintptr_t Decal = 0x128;
        inline constexpr uintptr_t FloorWire = 0x130;
        inline constexpr uintptr_t OffsetStudsU = 0x100;
        inline constexpr uintptr_t OffsetStudsV = 0x108;
        inline constexpr uintptr_t ParticleEmitter = 0x138;
        inline constexpr uintptr_t StudsPerTileU = 0x110;
        inline constexpr uintptr_t StudsPerTileV = 0x118;
        inline constexpr uintptr_t Trail = 0x140;
    }

    namespace TextureContent {
        inline constexpr uintptr_t BackpackItem = 0x100;
        inline constexpr uintptr_t Beam = 0x108;
        inline constexpr uintptr_t Decal = 0x110;
        inline constexpr uintptr_t FileMesh = 0x118;
        inline constexpr uintptr_t MeshPart = 0x120;
        inline constexpr uintptr_t ParticleEmitter = 0x128;
        inline constexpr uintptr_t SkateboardController = 0x130;
        inline constexpr uintptr_t Trail = 0x138;
    }

    namespace TextureId {
        inline constexpr uintptr_t BallSocketConstraint = 0x100;
        inline constexpr uintptr_t Fire = 0x108;
    }

    namespace TextureLength {
        inline constexpr uintptr_t Beam = 0x100;
        inline constexpr uintptr_t Trail = 0x108;
    }

    namespace TextureMode {
        inline constexpr uintptr_t Beam = 0x100;
        inline constexpr uintptr_t Trail = 0x108;
    }

    namespace TexturePack {
        inline constexpr uintptr_t Decal = 0x100;
        inline constexpr uintptr_t MaterialVariant = 0x108;
        inline constexpr uintptr_t SurfaceAppearance = 0x110;
        inline constexpr uintptr_t TerrainDetail = 0x118;
    }

    namespace TexturePackContent {
        inline constexpr uintptr_t Decal = 0x100;
        inline constexpr uintptr_t MeshPart = 0x108;
        inline constexpr uintptr_t SurfaceGui = 0x110;
        inline constexpr uintptr_t TerrainRegion = 0x118;
    }

    namespace Textures {
        inline constexpr uintptr_t Decal_Texture = 0x1d0;
        inline constexpr uintptr_t Texture_Texture = 0x1d0;
    }

    namespace Thickness {
        inline constexpr uintptr_t LinearVelocity = 0x100;
        inline constexpr uintptr_t Part = 0x108;
        inline constexpr uintptr_t Path2D = 0x110;
        inline constexpr uintptr_t RolloutValidation = 0x118;
        inline constexpr uintptr_t RopeConstraint = 0x120;
        inline constexpr uintptr_t StarterGui = 0x128;
        inline constexpr uintptr_t UIStroke = 0x130;
        inline constexpr uintptr_t Workspace = 0x138;
    }

    namespace ThirdPartyUserService {
        inline constexpr uintptr_t ActiveUserSignedOut = 0x150;
        inline constexpr uintptr_t FriendCommunicationRestrictionStatus = 0x138;
        inline constexpr uintptr_t GetUserPlatformName = 0x100;
        inline constexpr uintptr_t GetVoiceChatRestrictionStatus = 0x108;
        inline constexpr uintptr_t HasActiveUser = 0x140;
        inline constexpr uintptr_t HaveActiveUser = 0x110;
        inline constexpr uintptr_t IsAccountSwitchingSupported = 0x118;
        inline constexpr uintptr_t IsChatRestrictionSupported = 0x120;
        inline constexpr uintptr_t IsSingleSignOnSupported = 0x128;
        inline constexpr uintptr_t ShowAccountPicker = 0x130;
        inline constexpr uintptr_t VoiceChatRestrictionStatus = 0x148;
    }

    namespace Threshold {
        inline constexpr uintptr_t AudioDeviceInput = 0x100;
        inline constexpr uintptr_t AudioLimiter = 0x108;
        inline constexpr uintptr_t BlurEffect = 0x110;
        inline constexpr uintptr_t ConeHandleAdornment = 0x118;
    }

    namespace Throttle {
        inline constexpr uintptr_t SkateboardPlatform = 0x100;
        inline constexpr uintptr_t Skin = 0x108;
        inline constexpr uintptr_t UpDown = 0x118;
        inline constexpr uintptr_t VehicleSeat = 0x110;
    }

    namespace ThumbnailRequests {
        inline constexpr uintptr_t RequestCacheHits = 0x100;
    }

    namespace TileSize {
        inline constexpr uintptr_t ImageHandleAdornment = 0x100;
        inline constexpr uintptr_t IncrementalPatchBuilder = 0x108;
        inline constexpr uintptr_t VideoDisplay = 0x110;
    }

    namespace Time {
        inline constexpr uintptr_t Average = 0x110;
        inline constexpr uintptr_t KeyframeMarker = 0x108;
        inline constexpr uintptr_t URL = 0x100;
    }

    namespace TimeLength {
        inline constexpr uintptr_t AudioPlayer = 0x100;
        inline constexpr uintptr_t AudioReverb = 0x108;
        inline constexpr uintptr_t AudioTextToSpeech = 0x110;
        inline constexpr uintptr_t Sound = 0x118;
        inline constexpr uintptr_t VideoCaptureService = 0x120;
        inline constexpr uintptr_t VideoFrame = 0x128;
        inline constexpr uintptr_t VideoPlayer = 0x130;
        inline constexpr uintptr_t VideoSampler = 0x138;
    }

    namespace TimePosition {
        inline constexpr uintptr_t AnimationTrack = 0x100;
        inline constexpr uintptr_t AudioPlayer = 0x108;
        inline constexpr uintptr_t AudioTextToSpeech = 0x110;
        inline constexpr uintptr_t Sound = 0x118;
        inline constexpr uintptr_t VideoFrame = 0x120;
        inline constexpr uintptr_t VideoPlayer = 0x128;
    }

    namespace TimeScale {
        inline constexpr uintptr_t Explosion = 0x100;
        inline constexpr uintptr_t Fire = 0x108;
        inline constexpr uintptr_t ParticleEmitter = 0x110;
        inline constexpr uintptr_t Smoke = 0x118;
        inline constexpr uintptr_t SpawnLocation = 0x120;
    }

    namespace Timeout {
        inline constexpr uintptr_t GameSettings = 0x100;
        inline constexpr uintptr_t ReverbSoundEffect = 0x108;
        inline constexpr uintptr_t TestService = 0x110;
    }

    namespace Title {
        inline constexpr uintptr_t AudioSpeechToText = 0x108;
        inline constexpr uintptr_t MultiplayerManager = 0x100;
        inline constexpr uintptr_t PluginMenu = 0x110;
        inline constexpr uintptr_t VisualizationMode = 0x118;
        inline constexpr uintptr_t VoiceChatService = 0x120;
    }

    namespace TooLong {
        inline constexpr uintptr_t FilteredText = 0x100;
        inline constexpr uintptr_t PitchTooLow = 0x108;
    }

    namespace TooManyRequests {
        inline constexpr uintptr_t SuccessfulReads = 0x100;
    }

    namespace Tool {
        inline constexpr uintptr_t Activate = 0x100;
        inline constexpr uintptr_t Activated = 0x160;
        inline constexpr uintptr_t CanBeDropped = 0x4a8;
        inline constexpr uintptr_t Deactivate = 0x108;
        inline constexpr uintptr_t Deactivated = 0x168;
        inline constexpr uintptr_t Enabled = 0x4a9;
        inline constexpr uintptr_t Equipped = 0x170;
        inline constexpr uintptr_t Grip = 0x49c;
        inline constexpr uintptr_t GripForward = 0x490;
        inline constexpr uintptr_t GripPos = 0x49c;
        inline constexpr uintptr_t GripRight = 0x478;
        inline constexpr uintptr_t GripUp = 0x484;
        inline constexpr uintptr_t ManualActivationOnly = 0x4aa;
        inline constexpr uintptr_t RequiresHandle = 0x4ab;
        inline constexpr uintptr_t TextureId = 0x350;
        inline constexpr uintptr_t ToolTip = 0x158;
        inline constexpr uintptr_t Tooltip = 0x458;
        inline constexpr uintptr_t Unequipped = 0x178;
        inline constexpr uintptr_t VRLaserPointerClicked = 0x180;
    }

    namespace Torque {
        inline constexpr uintptr_t Folder = 0x110;
        inline constexpr uintptr_t RelativeTo = 0x100;
        inline constexpr uintptr_t Torque = 0x108;
        inline constexpr uintptr_t TorsionSpringConstraint = 0x118;
        inline constexpr uintptr_t VehicleSeat = 0x120;
    }

    namespace TorsionSpringConstraint {
        inline constexpr uintptr_t Coils = 0x100;
        inline constexpr uintptr_t CurrentAngle = 0x108;
        inline constexpr uintptr_t Damping = 0x110;
        inline constexpr uintptr_t LimitEnabled = 0x118;
        inline constexpr uintptr_t LimitsEnabled = 0x120;
        inline constexpr uintptr_t MaxAngle = 0x128;
        inline constexpr uintptr_t MaxTorque = 0x130;
        inline constexpr uintptr_t Radius = 0x138;
        inline constexpr uintptr_t Restitution = 0x140;
        inline constexpr uintptr_t Stiffness = 0x148;
    }

    namespace TotalDiskDataSize {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace TracerService {
        inline constexpr uintptr_t FinishSpan = 0x100;
        inline constexpr uintptr_t StartSpan = 0x108;
    }

    namespace TrackHttpAvatarAssetFetchMetrics {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace TrackerLodController {
        inline constexpr uintptr_t AudioMode = 0x120;
        inline constexpr uintptr_t UpdateState = 0x140;
        inline constexpr uintptr_t VideoExtrapolationMode = 0x128;
        inline constexpr uintptr_t VideoLodMode = 0x130;
        inline constexpr uintptr_t VideoMode = 0x138;
        inline constexpr uintptr_t getExtrapolation = 0x100;
        inline constexpr uintptr_t getVideoLod = 0x108;
        inline constexpr uintptr_t isAudioEnabled = 0x110;
        inline constexpr uintptr_t isVideoEnabled = 0x118;
    }

    namespace Trail {
        inline constexpr uintptr_t Attachment0 = 0x108;
        inline constexpr uintptr_t Attachment1 = 0x110;
        inline constexpr uintptr_t Brightness = 0x118;
        inline constexpr uintptr_t Clear = 0x100;
        inline constexpr uintptr_t Color = 0x120;
        inline constexpr uintptr_t Enabled = 0x128;
        inline constexpr uintptr_t FaceCamera = 0x130;
        inline constexpr uintptr_t Lifetime = 0x138;
        inline constexpr uintptr_t LightEmission = 0x140;
        inline constexpr uintptr_t LightInfluence = 0x148;
        inline constexpr uintptr_t LocalTransparencyModifier = 0x150;
        inline constexpr uintptr_t MaxLength = 0x158;
        inline constexpr uintptr_t MinLength = 0x160;
        inline constexpr uintptr_t OnClearRequested = 0x198;
        inline constexpr uintptr_t Texture = 0x168;
        inline constexpr uintptr_t TextureContent = 0x170;
        inline constexpr uintptr_t TextureLength = 0x178;
        inline constexpr uintptr_t TextureMode = 0x180;
        inline constexpr uintptr_t Transparency = 0x188;
        inline constexpr uintptr_t WidthScale = 0x190;
    }

    namespace Transform {
        inline constexpr uintptr_t AnimationNodeDefinition = 0x100;
        inline constexpr uintptr_t Bone = 0x108;
        inline constexpr uintptr_t Mouse = 0x110;
    }

    namespace Translator {
        inline constexpr uintptr_t FormatByKey = 0x100;
        inline constexpr uintptr_t LocaleId = 0x118;
        inline constexpr uintptr_t RobloxOnlyTranslate = 0x108;
        inline constexpr uintptr_t Translate = 0x110;
    }

    namespace Transparency {
        inline constexpr uintptr_t BasePart = 0x100;
        inline constexpr uintptr_t Beam = 0x108;
        inline constexpr uintptr_t Decal = 0x110;
        inline constexpr uintptr_t GuiBase3d = 0x118;
        inline constexpr uintptr_t GuiObject = 0x120;
        inline constexpr uintptr_t ParticleEmitter = 0x128;
        inline constexpr uintptr_t Path2D = 0x130;
        inline constexpr uintptr_t Trail = 0x138;
        inline constexpr uintptr_t UIGradient = 0x140;
        inline constexpr uintptr_t UIShadow = 0x148;
        inline constexpr uintptr_t UIStroke = 0x150;
    }

    namespace TremoloSoundEffect {
        inline constexpr uintptr_t Depth = 0x100;
        inline constexpr uintptr_t Duty = 0x108;
        inline constexpr uintptr_t Frequency = 0x110;
    }

    namespace TriangleMeshPart {
        inline constexpr uintptr_t AeroMeshData = 0x100;
        inline constexpr uintptr_t CollisionFidelity = 0x108;
        inline constexpr uintptr_t CollisionPrecision = 0x110;
        inline constexpr uintptr_t ConvexDecompHolder = 0x118;
        inline constexpr uintptr_t FluidFidelity = 0x120;
        inline constexpr uintptr_t FluidFidelityInternal = 0x128;
        inline constexpr uintptr_t InertiaMigrated = 0x130;
        inline constexpr uintptr_t MeshSize = 0x138;
        inline constexpr uintptr_t PCDRequestId = 0x140;
        inline constexpr uintptr_t PhysicalConfigData = 0x148;
        inline constexpr uintptr_t UnscaledCofm = 0x150;
        inline constexpr uintptr_t UnscaledVolInertiaDiags = 0x158;
        inline constexpr uintptr_t UnscaledVolInertiaOffDiags = 0x160;
        inline constexpr uintptr_t UnscaledVolume = 0x168;
    }

    namespace Triggered {
        inline constexpr uintptr_t PluginGui = 0x100;
        inline constexpr uintptr_t ProximityPrompt = 0x108;
        inline constexpr uintptr_t TextChatService = 0x110;
    }

    namespace TrussPart {
        inline constexpr uintptr_t Style = 0x100;
        inline constexpr uintptr_t style = 0x108;
    }

    namespace TurnSpeedFactor {
        inline constexpr uintptr_t AlignOrientation = 0x100;
        inline constexpr uintptr_t GuiBase2d = 0x108;
    }

    namespace Tween {
        inline constexpr uintptr_t Instance = 0x100;
        inline constexpr uintptr_t TweenInfo = 0x108;
    }

    namespace TweenBase {
        inline constexpr uintptr_t Cancel = 0x100;
        inline constexpr uintptr_t Completed = 0x120;
        inline constexpr uintptr_t Pause = 0x108;
        inline constexpr uintptr_t Play = 0x110;
        inline constexpr uintptr_t PlaybackState = 0x118;
    }

    namespace TweenService {
        inline constexpr uintptr_t Create = 0x100;
        inline constexpr uintptr_t GetValue = 0x108;
        inline constexpr uintptr_t SmoothDamp = 0x110;
        inline constexpr uintptr_t data = 0x118;
    }

    namespace Type {
        inline constexpr uintptr_t AmountInRobux = 0x100;
        inline constexpr uintptr_t HapticEffect = 0x110;
        inline constexpr uintptr_t IKControl = 0x118;
        inline constexpr uintptr_t InputAction = 0x120;
        inline constexpr uintptr_t InputBinding = 0x128;
        inline constexpr uintptr_t UIGridLayout = 0x130;
        inline constexpr uintptr_t UserId = 0x108;
    }

    namespace Types {
        inline constexpr uintptr_t AllTypes = 0x8a782f8;
    }

    namespace UGCValidationService {
        inline constexpr uintptr_t AreInstanceTreesEquivalent = 0x158;
        inline constexpr uintptr_t CalculateAverageEditableCageMeshDistance = 0x160;
        inline constexpr uintptr_t CalculateBodyMaxCageDistance = 0x100;
        inline constexpr uintptr_t CalculateEditableMeshInsideMeshPercentage = 0x168;
        inline constexpr uintptr_t CalculateEditableMeshModifiedCageBoundingBox = 0x170;
        inline constexpr uintptr_t CalculateEditableMeshNumModifiedCageUVsInSet = 0x178;
        inline constexpr uintptr_t CalculateEditableMeshTotalSurfaceArea = 0x180;
        inline constexpr uintptr_t CalculateEditableMeshUniqueUVCount = 0x188;
        inline constexpr uintptr_t CanLoadAsset = 0x108;
        inline constexpr uintptr_t CheckEditableMeshInCameraFrustum = 0x190;
        inline constexpr uintptr_t CreateEditableImageFromBinaryStringRobloxOnly = 0x198;
        inline constexpr uintptr_t CreateEditableImageOriginalSizeAsync = 0x110;
        inline constexpr uintptr_t CreateEditableMeshFromBinaryStringRobloxOnly = 0x1a0;
        inline constexpr uintptr_t DoesMeshHaveSkinningData = 0x118;
        inline constexpr uintptr_t DoesSurfaceAppearanceMatchTexturePackAsync = 0x120;
        inline constexpr uintptr_t FetchAssetWithFormat = 0x128;
        inline constexpr uintptr_t GetBoundingBoxManipulationData = 0x1a8;
        inline constexpr uintptr_t GetDynamicHeadEditableMeshInactiveControls = 0x1b0;
        inline constexpr uintptr_t GetEditableCagingRelevancyMetrics = 0x1b8;
        inline constexpr uintptr_t GetEditableImageSize = 0x1c0;
        inline constexpr uintptr_t GetEditableMeshMaxNearbyVerticesCollisions = 0x1c8;
        inline constexpr uintptr_t GetEditableMeshSkinningTransferJointsInfo = 0x1d0;
        inline constexpr uintptr_t GetEditableMeshTriCount = 0x1d8;
        inline constexpr uintptr_t GetEditableMeshVertColors = 0x1e0;
        inline constexpr uintptr_t GetEditableMeshVerticesSimilarityRate = 0x1e8;
        inline constexpr uintptr_t GetEditableMeshVerts = 0x1f0;
        inline constexpr uintptr_t GetExpectedTposeRotation = 0x1f8;
        inline constexpr uintptr_t GetFacsDrivenJointNamesFromEditableMesh = 0x200;
        inline constexpr uintptr_t GetLayeredClothingPostDeformationSize = 0x208;
        inline constexpr uintptr_t GetLayeredClothingPostDeformationSizeAsync = 0x130;
        inline constexpr uintptr_t GetMaximalJointDistancesWithinFacs = 0x210;
        inline constexpr uintptr_t GetMeshDataBinaryString = 0x138;
        inline constexpr uintptr_t GetMeshVerts = 0x140;
        inline constexpr uintptr_t GetMinAndMaxMeshSizeAcrossAllFacs = 0x218;
        inline constexpr uintptr_t GetPropertyValue = 0x220;
        inline constexpr uintptr_t GetSerializedSizeExcludingCollisionAsync = 0x148;
        inline constexpr uintptr_t GetSkinnedJointNamesFromEditableMesh = 0x228;
        inline constexpr uintptr_t IsDeformedLayeredClothingOutOfRenderBounds = 0x150;
        inline constexpr uintptr_t IsEditableMeshNumCoplanarIntersectionsOverLimit = 0x230;
        inline constexpr uintptr_t RegisterAlternateMesh = 0x238;
        inline constexpr uintptr_t RegisterUGCValidationFunction = 0x240;
        inline constexpr uintptr_t ReportUGCValidationCounter = 0x248;
        inline constexpr uintptr_t ReportUGCValidationFailureTelemetry = 0x250;
        inline constexpr uintptr_t ReportUGCValidationTelemetry = 0x258;
        inline constexpr uintptr_t ResetCollisionFidelity = 0x260;
        inline constexpr uintptr_t ResetCollisionFidelityWithEditableMeshDataLua = 0x268;
        inline constexpr uintptr_t SetMeshIdBlocking = 0x270;
        inline constexpr uintptr_t ValidateDynamicHeadEditableMesh = 0x278;
        inline constexpr uintptr_t ValidateEditableMeshCageMeshIntersection = 0x280;
        inline constexpr uintptr_t ValidateEditableMeshCageNonManifoldAndHoles = 0x288;
        inline constexpr uintptr_t ValidateEditableMeshCageUVCoincident = 0x290;
        inline constexpr uintptr_t ValidateEditableMeshCageUVTriangleArea = 0x298;
        inline constexpr uintptr_t ValidateEditableMeshFacialBounds = 0x2a0;
        inline constexpr uintptr_t ValidateEditableMeshFacialExpressiveness = 0x2a8;
        inline constexpr uintptr_t ValidateEditableMeshFullBodyCageDeletion = 0x2b0;
        inline constexpr uintptr_t ValidateEditableMeshMisMatchUV = 0x2b8;
        inline constexpr uintptr_t ValidateEditableMeshOverlappingVertices = 0x2c0;
        inline constexpr uintptr_t ValidateEditableMeshTriangleArea = 0x2c8;
        inline constexpr uintptr_t ValidateEditableMeshTriangles = 0x2d0;
        inline constexpr uintptr_t ValidateEditableMeshUVDuplicates = 0x2d8;
        inline constexpr uintptr_t ValidateEditableMeshUVSpace = 0x2e0;
        inline constexpr uintptr_t ValidateEditableMeshUVValuesInReference = 0x2e8;
        inline constexpr uintptr_t ValidateEditableMeshUniqueUVCount = 0x2f0;
        inline constexpr uintptr_t ValidateEditableMeshVertColors = 0x2f8;
        inline constexpr uintptr_t ValidateHSRMeshIds = 0x300;
        inline constexpr uintptr_t ValidateLeaderSkinnedVertsNearCageIslands = 0x308;
        inline constexpr uintptr_t ValidatePartBBoxAfterFullFacs = 0x310;
        inline constexpr uintptr_t ValidatePropertiesSensible = 0x318;
        inline constexpr uintptr_t ValidateSkinnedEditableMesh = 0x320;
    }

    namespace UIAspectRatioConstraint {
        inline constexpr uintptr_t AspectRatio = 0x100;
        inline constexpr uintptr_t AspectType = 0x108;
        inline constexpr uintptr_t DominantAxis = 0x110;
    }

    namespace UICorner {
        inline constexpr uintptr_t BottomLeftRadius = 0x100;
        inline constexpr uintptr_t BottomRightRadius = 0x108;
        inline constexpr uintptr_t CornerRadius = 0x110;
        inline constexpr uintptr_t TopLeftRadius = 0x118;
        inline constexpr uintptr_t TopRightRadius = 0x120;
    }

    namespace UIDragDetector {
        inline constexpr uintptr_t ActivatedCursorIcon = 0x120;
        inline constexpr uintptr_t ActivatedCursorIconContent = 0x128;
        inline constexpr uintptr_t AddConstraintFunction = 0x100;
        inline constexpr uintptr_t BoundingBehavior = 0x130;
        inline constexpr uintptr_t BoundingUI = 0x138;
        inline constexpr uintptr_t CursorIcon = 0x140;
        inline constexpr uintptr_t CursorIconContent = 0x148;
        inline constexpr uintptr_t DragAxis = 0x150;
        inline constexpr uintptr_t DragContinue = 0x1d0;
        inline constexpr uintptr_t DragEnd = 0x1d8;
        inline constexpr uintptr_t DragRelativity = 0x158;
        inline constexpr uintptr_t DragRotation = 0x160;
        inline constexpr uintptr_t DragSpace = 0x168;
        inline constexpr uintptr_t DragStart = 0x1e0;
        inline constexpr uintptr_t DragStyle = 0x170;
        inline constexpr uintptr_t DragUDim2 = 0x178;
        inline constexpr uintptr_t Enabled = 0x180;
        inline constexpr uintptr_t GetReferencePosition = 0x108;
        inline constexpr uintptr_t GetReferenceRotation = 0x110;
        inline constexpr uintptr_t MaxDragAngle = 0x188;
        inline constexpr uintptr_t MaxDragTranslation = 0x190;
        inline constexpr uintptr_t MinDragAngle = 0x198;
        inline constexpr uintptr_t MinDragTranslation = 0x1a0;
        inline constexpr uintptr_t ReferenceUIInstance = 0x1a8;
        inline constexpr uintptr_t ResponseStyle = 0x1b0;
        inline constexpr uintptr_t SelectionModeDragSpeed = 0x1b8;
        inline constexpr uintptr_t SelectionModeRotateSpeed = 0x1c0;
        inline constexpr uintptr_t SetDragStyleFunction = 0x118;
        inline constexpr uintptr_t UIDragSpeedAxisMapping = 0x1c8;
    }

    namespace UIFlexItem {
        inline constexpr uintptr_t FlexMode = 0x100;
        inline constexpr uintptr_t GrowRatio = 0x108;
        inline constexpr uintptr_t ItemLineAlignment = 0x110;
        inline constexpr uintptr_t ShrinkRatio = 0x118;
    }

    namespace UIGradient {
        inline constexpr uintptr_t Color = 0x100;
        inline constexpr uintptr_t Enabled = 0x108;
        inline constexpr uintptr_t Offset = 0x110;
        inline constexpr uintptr_t Rotation = 0x118;
        inline constexpr uintptr_t Scale = 0x120;
        inline constexpr uintptr_t TileMode = 0x128;
        inline constexpr uintptr_t Transparency = 0x130;
        inline constexpr uintptr_t Type = 0x138;
    }

    namespace UIGridLayout {
        inline constexpr uintptr_t AbsoluteCellCount = 0x100;
        inline constexpr uintptr_t AbsoluteCellSize = 0x108;
        inline constexpr uintptr_t CellPadding = 0x110;
        inline constexpr uintptr_t CellSize = 0x118;
        inline constexpr uintptr_t FillDirectionMaxCells = 0x120;
        inline constexpr uintptr_t StartCorner = 0x128;
        inline constexpr uintptr_t UIConstraint = 0x130;
    }

    namespace UIGridStyleLayout {
        inline constexpr uintptr_t AbsoluteContentSize = 0x110;
        inline constexpr uintptr_t ApplyLayout = 0x100;
        inline constexpr uintptr_t FillDirection = 0x118;
        inline constexpr uintptr_t HorizontalAlignment = 0x120;
        inline constexpr uintptr_t SetCustomSortFunction = 0x108;
        inline constexpr uintptr_t SortOrder = 0x128;
        inline constexpr uintptr_t UIGridLayout = 0x138;
        inline constexpr uintptr_t VerticalAlignment = 0x130;
    }

    namespace UIListLayout {
        inline constexpr uintptr_t HorizontalFlex = 0x100;
        inline constexpr uintptr_t HorizontalPadding = 0x108;
        inline constexpr uintptr_t ItemLineAlignment = 0x110;
        inline constexpr uintptr_t Padding = 0x118;
        inline constexpr uintptr_t VerticalFlex = 0x120;
        inline constexpr uintptr_t VerticalPadding = 0x128;
        inline constexpr uintptr_t Wraps = 0x130;
    }

    namespace UIPadding {
        inline constexpr uintptr_t PaddingBottom = 0x100;
        inline constexpr uintptr_t PaddingLeft = 0x108;
        inline constexpr uintptr_t PaddingRight = 0x110;
        inline constexpr uintptr_t PaddingTop = 0x118;
    }

    namespace UIPageLayout {
        inline constexpr uintptr_t Animated = 0x120;
        inline constexpr uintptr_t Circular = 0x128;
        inline constexpr uintptr_t CurrentPage = 0x130;
        inline constexpr uintptr_t EasingDirection = 0x138;
        inline constexpr uintptr_t EasingStyle = 0x140;
        inline constexpr uintptr_t GamepadInputEnabled = 0x148;
        inline constexpr uintptr_t JumpTo = 0x100;
        inline constexpr uintptr_t JumpToIndex = 0x108;
        inline constexpr uintptr_t Next = 0x110;
        inline constexpr uintptr_t Padding = 0x150;
        inline constexpr uintptr_t PageEnter = 0x170;
        inline constexpr uintptr_t PageLeave = 0x178;
        inline constexpr uintptr_t Previous = 0x118;
        inline constexpr uintptr_t ScrollWheelInputEnabled = 0x158;
        inline constexpr uintptr_t Stopped = 0x180;
        inline constexpr uintptr_t TouchInputEnabled = 0x160;
        inline constexpr uintptr_t TweenTime = 0x168;
        inline constexpr uintptr_t UIGridStyleLayout = 0x188;
    }

    namespace UIScale {
        inline constexpr uintptr_t Scale = 0x100;
        inline constexpr uintptr_t UIPageLayout = 0x108;
    }

    namespace UIShadow {
        inline constexpr uintptr_t BlurRadius = 0x100;
        inline constexpr uintptr_t Color = 0x108;
        inline constexpr uintptr_t Enabled = 0x110;
        inline constexpr uintptr_t Inset = 0x118;
        inline constexpr uintptr_t Mode = 0x120;
        inline constexpr uintptr_t Offset = 0x128;
        inline constexpr uintptr_t ShowBehindParent = 0x130;
        inline constexpr uintptr_t Spread = 0x138;
        inline constexpr uintptr_t Transparency = 0x140;
        inline constexpr uintptr_t ZIndex = 0x148;
    }

    namespace UISizeConstraint {
        inline constexpr uintptr_t MaxSize = 0x100;
        inline constexpr uintptr_t MinSize = 0x108;
        inline constexpr uintptr_t UIScale = 0x110;
    }

    namespace UIStroke {
        inline constexpr uintptr_t ApplyStrokeMode = 0x100;
        inline constexpr uintptr_t BorderOffset = 0x108;
        inline constexpr uintptr_t BorderStrokePosition = 0x110;
        inline constexpr uintptr_t Color = 0x118;
        inline constexpr uintptr_t Enabled = 0x120;
        inline constexpr uintptr_t LineJoinMode = 0x128;
        inline constexpr uintptr_t StrokeSizingMode = 0x130;
        inline constexpr uintptr_t Thickness = 0x138;
        inline constexpr uintptr_t Transparency = 0x140;
        inline constexpr uintptr_t ZIndex = 0x148;
    }

    namespace UITableLayout {
        inline constexpr uintptr_t FillEmptySpaceColumns = 0x100;
        inline constexpr uintptr_t FillEmptySpaceRows = 0x108;
        inline constexpr uintptr_t MajorAxis = 0x110;
        inline constexpr uintptr_t Padding = 0x118;
    }

    namespace UITextSizeConstraint {
        inline constexpr uintptr_t MaxTextSize = 0x100;
        inline constexpr uintptr_t MinTextSize = 0x108;
        inline constexpr uintptr_t UISizeConstraint = 0x110;
    }

    namespace UnionAsync {
        inline constexpr uintptr_t BindableFunction = 0x100;
        inline constexpr uintptr_t GlobalDataStore = 0x108;
    }

    namespace UnionOperation {
        inline constexpr uintptr_t AssetId = 0x300;
    }

    namespace UniversalConstraint {
        inline constexpr uintptr_t LimitsEnabled = 0x100;
        inline constexpr uintptr_t MaxAngle = 0x108;
        inline constexpr uintptr_t Radius = 0x110;
        inline constexpr uintptr_t Restitution = 0x118;
    }

    namespace UniverseDataNotSetButCharacterLoadedFromAvatarFetch {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Unknown {
        inline constexpr uintptr_t AppBundledRbxmFile = 0x118;
        inline constexpr uintptr_t AssetDelivery403 = 0x110;
        inline constexpr uintptr_t ChatGroupsKey = 0x108;
        inline constexpr uintptr_t NotReachable = 0x100;
        inline constexpr uintptr_t Touch = 0x120;
        inline constexpr uintptr_t UnknownGlobal = 0x128;
    }

    namespace Unload {
        inline constexpr uintptr_t AudioTremolo = 0x100;
        inline constexpr uintptr_t VideoService = 0x108;
    }

    namespace UnregisterCollisionGroup {
        inline constexpr uintptr_t PinShortcutService = 0x100;
        inline constexpr uintptr_t WorldRoot = 0x108;
    }

    namespace UnreliableRemoteEvent {
        inline constexpr uintptr_t FireAllClients = 0x100;
        inline constexpr uintptr_t FireClient = 0x108;
        inline constexpr uintptr_t FireServer = 0x110;
        inline constexpr uintptr_t OnClientEvent = 0x118;
        inline constexpr uintptr_t OnRemoteServerEvent = 0x120;
        inline constexpr uintptr_t OnServerEvent = 0x128;
    }

    namespace UnvalidatedAssetService {
        inline constexpr uintptr_t AppendTempAssetId = 0x100;
        inline constexpr uintptr_t AppendVantagePoint = 0x108;
        inline constexpr uintptr_t CachedData = 0x118;
        inline constexpr uintptr_t UpgradeTempAssetId = 0x110;
    }

    namespace UpdateAsync {
        inline constexpr uintptr_t GroupService = 0x100;
        inline constexpr uintptr_t MemoryStoreQueue = 0x108;
        inline constexpr uintptr_t MessagingService = 0x110;
        inline constexpr uintptr_t Pages = 0x118;
    }

    namespace UpdateControlPoint {
        inline constexpr uintptr_t Path3D = 0x100;
        inline constexpr uintptr_t PathfindingService = 0x108;
    }

    namespace UpperAngle {
        inline constexpr uintptr_t BaseCoreGuiConfiguration = 0x100;
        inline constexpr uintptr_t CylindricalConstraint = 0x108;
        inline constexpr uintptr_t HopperBin = 0x110;
    }

    namespace UserGameSettings {
        inline constexpr uintptr_t AllTutorialsDisabled = 0x158;
        inline constexpr uintptr_t BadgeVisible = 0x160;
        inline constexpr uintptr_t CameraMode = 0x168;
        inline constexpr uintptr_t CameraYInverted = 0x170;
        inline constexpr uintptr_t ChatTranslationEnabled = 0x178;
        inline constexpr uintptr_t ChatTranslationFTUXShown = 0x180;
        inline constexpr uintptr_t ChatTranslationLocale = 0x188;
        inline constexpr uintptr_t ChatTranslationToggleEnabled = 0x190;
        inline constexpr uintptr_t ChatVisible = 0x198;
        inline constexpr uintptr_t CompletedTutorials = 0x1a0;
        inline constexpr uintptr_t ComputerCameraMovementChanged = 0x1a8;
        inline constexpr uintptr_t ComputerCameraMovementMode = 0x1b0;
        inline constexpr uintptr_t ComputerMovementChanged = 0x1b8;
        inline constexpr uintptr_t ComputerMovementMode = 0x1c0;
        inline constexpr uintptr_t ControlMode = 0x1c8;
        inline constexpr uintptr_t DefaultCameraID = 0x1d0;
        inline constexpr uintptr_t FramerateCap = 0x1d8;
        inline constexpr uintptr_t Fullscreen = 0x1e0;
        inline constexpr uintptr_t FullscreenChanged = 0x3b8;
        inline constexpr uintptr_t GamepadCameraSensitivity = 0x1e8;
        inline constexpr uintptr_t GetCameraYInvertValue = 0x100;
        inline constexpr uintptr_t GetDefaultFramerateCap = 0x108;
        inline constexpr uintptr_t GetOnboardingCompleted = 0x110;
        inline constexpr uintptr_t GetTutorialState = 0x118;
        inline constexpr uintptr_t GraphicsOptimizationMode = 0x1f0;
        inline constexpr uintptr_t GraphicsQualityLevel = 0x1f8;
        inline constexpr uintptr_t HapticStrength = 0x200;
        inline constexpr uintptr_t HasEverUsedVR = 0x208;
        inline constexpr uintptr_t InFullScreen = 0x120;
        inline constexpr uintptr_t InStudioMode = 0x128;
        inline constexpr uintptr_t IsUsingCameraYInverted = 0x210;
        inline constexpr uintptr_t IsUsingGamepadCameraSensitivity = 0x218;
        inline constexpr uintptr_t MasterVolume = 0x220;
        inline constexpr uintptr_t MasterVolumeStudio = 0x228;
        inline constexpr uintptr_t MaxQualityEnabled = 0x230;
        inline constexpr uintptr_t MicroProfilerWebServerEnabled = 0x238;
        inline constexpr uintptr_t MicroProfilerWebServerIP = 0x240;
        inline constexpr uintptr_t MicroProfilerWebServerPort = 0x248;
        inline constexpr uintptr_t MouseSensitivity = 0x250;
        inline constexpr uintptr_t MouseSensitivityFirstPerson = 0x258;
        inline constexpr uintptr_t MouseSensitivityThirdPerson = 0x260;
        inline constexpr uintptr_t OnScreenProfilerEnabled = 0x268;
        inline constexpr uintptr_t OnboardingsCompleted = 0x270;
        inline constexpr uintptr_t PartyVoiceVolume = 0x278;
        inline constexpr uintptr_t PeoplePageLayout = 0x280;
        inline constexpr uintptr_t PerformanceStatsVisible = 0x288;
        inline constexpr uintptr_t PerformanceStatsVisibleChanged = 0x3c0;
        inline constexpr uintptr_t PlayerHeight = 0x290;
        inline constexpr uintptr_t PlayerListVisible = 0x298;
        inline constexpr uintptr_t PlayerNamesEnabled = 0x2a0;
        inline constexpr uintptr_t PreferredTextSize = 0x2a8;
        inline constexpr uintptr_t PreferredTransparency = 0x2b0;
        inline constexpr uintptr_t QualityResetLevel = 0x2b8;
        inline constexpr uintptr_t RCCProfilerRecordFrameRate = 0x2c0;
        inline constexpr uintptr_t RCCProfilerRecordTimeFrame = 0x2c8;
        inline constexpr uintptr_t ReadAloud = 0x2d0;
        inline constexpr uintptr_t ReducedMotion = 0x2d8;
        inline constexpr uintptr_t ResetOnboardingCompleted = 0x130;
        inline constexpr uintptr_t RotationType = 0x2e0;
        inline constexpr uintptr_t SavedQualityLevel = 0x2e8;
        inline constexpr uintptr_t SetCameraYInvertVisible = 0x138;
        inline constexpr uintptr_t SetGamepadCameraSensitivityVisible = 0x140;
        inline constexpr uintptr_t SetOnboardingCompleted = 0x148;
        inline constexpr uintptr_t SetTutorialState = 0x150;
        inline constexpr uintptr_t StartMaximized = 0x2f0;
        inline constexpr uintptr_t StartScreenPosition = 0x2f8;
        inline constexpr uintptr_t StartScreenSize = 0x300;
        inline constexpr uintptr_t StudioModeChanged = 0x3c8;
        inline constexpr uintptr_t StudioPreferredTextSize = 0x308;
        inline constexpr uintptr_t TouchCameraMovementChanged = 0x310;
        inline constexpr uintptr_t TouchCameraMovementMode = 0x318;
        inline constexpr uintptr_t TouchMovementChanged = 0x320;
        inline constexpr uintptr_t TouchMovementMode = 0x328;
        inline constexpr uintptr_t UIScaleMultiplierHundredths = 0x330;
        inline constexpr uintptr_t UiNavigationKeyBindEnabled = 0x338;
        inline constexpr uintptr_t UsedCoreGuiIsVisibleToggle = 0x340;
        inline constexpr uintptr_t UsedCustomGuiIsVisibleToggle = 0x348;
        inline constexpr uintptr_t UsedHideHudShortcut = 0x350;
        inline constexpr uintptr_t VRComfortSetting = 0x358;
        inline constexpr uintptr_t VREnabled = 0x360;
        inline constexpr uintptr_t VRRotationIntensity = 0x368;
        inline constexpr uintptr_t VRSafetyBubbleMode = 0x370;
        inline constexpr uintptr_t VRSmoothRotationEnabled = 0x378;
        inline constexpr uintptr_t VRSmoothRotationEnabledCustomOption = 0x380;
        inline constexpr uintptr_t VRThirdPersonFollowCamEnabled = 0x388;
        inline constexpr uintptr_t VRThirdPersonFollowCamEnabledCustomOption = 0x390;
        inline constexpr uintptr_t VignetteEnabled = 0x398;
        inline constexpr uintptr_t VignetteEnabledCustomOption = 0x3a0;
        inline constexpr uintptr_t VoiceChatVolume = 0x3a8;
        inline constexpr uintptr_t gaID = 0x3b0;
    }

    namespace UserHasBadge {
        inline constexpr uintptr_t BadgeService = 0x108;
        inline constexpr uintptr_t UserDoesNotHaveBadge = 0x100;
    }

    namespace UserId {
        inline constexpr uintptr_t FriendsCallingParticipant = 0x100;
        inline constexpr uintptr_t Player = 0x108;
        inline constexpr uintptr_t TextSource = 0x110;
    }

    namespace UserInputService {
        inline constexpr uintptr_t AccelerometerEnabled = 0x1f0;
        inline constexpr uintptr_t BottomBarSize = 0x1f8;
        inline constexpr uintptr_t CreateVirtualInput = 0x100;
        inline constexpr uintptr_t DeviceAccelerationChanged = 0x2c0;
        inline constexpr uintptr_t DeviceGravityChanged = 0x2c8;
        inline constexpr uintptr_t DeviceRotationChanged = 0x2d0;
        inline constexpr uintptr_t GamepadConnected = 0x2d8;
        inline constexpr uintptr_t GamepadDisconnected = 0x2e0;
        inline constexpr uintptr_t GamepadEnabled = 0x200;
        inline constexpr uintptr_t GamepadSupports = 0x108;
        inline constexpr uintptr_t GetConnectedGamepads = 0x110;
        inline constexpr uintptr_t GetDeviceAcceleration = 0x118;
        inline constexpr uintptr_t GetDeviceGravity = 0x120;
        inline constexpr uintptr_t GetDeviceLevel = 0x128;
        inline constexpr uintptr_t GetDeviceRotation = 0x130;
        inline constexpr uintptr_t GetDeviceType = 0x138;
        inline constexpr uintptr_t GetFocusedTextBox = 0x140;
        inline constexpr uintptr_t GetGamepadConnected = 0x148;
        inline constexpr uintptr_t GetGamepadState = 0x150;
        inline constexpr uintptr_t GetImageForKeyCode = 0x158;
        inline constexpr uintptr_t GetKeysPressed = 0x160;
        inline constexpr uintptr_t GetLastInputType = 0x168;
        inline constexpr uintptr_t GetMouseButtonsPressed = 0x170;
        inline constexpr uintptr_t GetMouseDelta = 0x178;
        inline constexpr uintptr_t GetMouseLocation = 0x180;
        inline constexpr uintptr_t GetNavigationGamepads = 0x188;
        inline constexpr uintptr_t GetPasteText = 0x190;
        inline constexpr uintptr_t GetPlatform = 0x198;
        inline constexpr uintptr_t GetStringForKeyCode = 0x1a0;
        inline constexpr uintptr_t GetSupportedGamepadKeyCodes = 0x1a8;
        inline constexpr uintptr_t GetUserCFrame = 0x1b0;
        inline constexpr uintptr_t GyroscopeEnabled = 0x208;
        inline constexpr uintptr_t InputBegan = 0x2e8;
        inline constexpr uintptr_t InputChanged = 0x2f0;
        inline constexpr uintptr_t InputEnded = 0x2f8;
        inline constexpr uintptr_t IsGamepadButtonDown = 0x1b8;
        inline constexpr uintptr_t IsKeyDown = 0x1c0;
        inline constexpr uintptr_t IsMouseButtonPressed = 0x1c8;
        inline constexpr uintptr_t IsNavigationGamepad = 0x1d0;
        inline constexpr uintptr_t JumpRequest = 0x300;
        inline constexpr uintptr_t KeyboardEnabled = 0x210;
        inline constexpr uintptr_t LastInputTypeChanged = 0x308;
        inline constexpr uintptr_t LegacyInputEventsEnabled = 0x218;
        inline constexpr uintptr_t ModalEnabled = 0x220;
        inline constexpr uintptr_t MouseBehavior = 0x228;
        inline constexpr uintptr_t MouseDeltaSensitivity = 0x230;
        inline constexpr uintptr_t MouseEnabled = 0x238;
        inline constexpr uintptr_t MouseIcon = 0x240;
        inline constexpr uintptr_t MouseIconContent = 0x248;
        inline constexpr uintptr_t MouseIconEnabled = 0x250;
        inline constexpr uintptr_t NavBarSize = 0x258;
        inline constexpr uintptr_t OnScreenKeyboardAnimationDuration = 0x260;
        inline constexpr uintptr_t OnScreenKeyboardPosition = 0x268;
        inline constexpr uintptr_t OnScreenKeyboardSize = 0x270;
        inline constexpr uintptr_t OnScreenKeyboardVisible = 0x278;
        inline constexpr uintptr_t OverrideMouseIconBehavior = 0x280;
        inline constexpr uintptr_t PointerAction = 0x310;
        inline constexpr uintptr_t PreferredInput = 0x288;
        inline constexpr uintptr_t RecenterUserHeadCFrame = 0x1d8;
        inline constexpr uintptr_t RightBarSize = 0x290;
        inline constexpr uintptr_t SendAppUISizes = 0x1e0;
        inline constexpr uintptr_t SetNavigationGamepad = 0x1e8;
        inline constexpr uintptr_t StatusBarSize = 0x298;
        inline constexpr uintptr_t StatusBarTapped = 0x318;
        inline constexpr uintptr_t TextBoxFocusReleased = 0x320;
        inline constexpr uintptr_t TextBoxFocused = 0x328;
        inline constexpr uintptr_t TouchDrag = 0x330;
        inline constexpr uintptr_t TouchEnabled = 0x2a0;
        inline constexpr uintptr_t TouchEnded = 0x338;
        inline constexpr uintptr_t TouchLongPress = 0x340;
        inline constexpr uintptr_t TouchMoved = 0x348;
        inline constexpr uintptr_t TouchPan = 0x350;
        inline constexpr uintptr_t TouchPinch = 0x358;
        inline constexpr uintptr_t TouchRotate = 0x360;
        inline constexpr uintptr_t TouchScreenEnabled = 0x2a8;
        inline constexpr uintptr_t TouchStarted = 0x368;
        inline constexpr uintptr_t TouchSwipe = 0x370;
        inline constexpr uintptr_t TouchTap = 0x378;
        inline constexpr uintptr_t TouchTapInWorld = 0x380;
        inline constexpr uintptr_t UserCFrameChanged = 0x388;
        inline constexpr uintptr_t UserHeadCFrame = 0x2b0;
        inline constexpr uintptr_t VREnabled = 0x2b8;
        inline constexpr uintptr_t WindowFocusReleased = 0x390;
        inline constexpr uintptr_t WindowFocused = 0x398;
        inline constexpr uintptr_t WindowInputState = 0x2b0;
    }

    namespace UserService {
        inline constexpr uintptr_t GetUserFromGlobalUserIdAsync = 0x100;
        inline constexpr uintptr_t GetUserInfosByUserIdsAsync = 0x108;
    }

    namespace UserSettings {
        inline constexpr uintptr_t IsUserFeatureEnabled = 0x100;
        inline constexpr uintptr_t Reset = 0x108;
        inline constexpr uintptr_t SaveState = 0x110;
    }

    namespace VREnabled {
        inline constexpr uintptr_t Player = 0x100;
        inline constexpr uintptr_t UserGameSettings = 0x108;
        inline constexpr uintptr_t VRService = 0x110;
    }

    namespace VRService {
        inline constexpr uintptr_t AutomaticScaling = 0x140;
        inline constexpr uintptr_t AvatarGestures = 0x148;
        inline constexpr uintptr_t ControllerModels = 0x150;
        inline constexpr uintptr_t DidPointerHit = 0x158;
        inline constexpr uintptr_t FadeOutViewOnCollision = 0x160;
        inline constexpr uintptr_t GetTouchpadMode = 0x100;
        inline constexpr uintptr_t GetUserCFrame = 0x108;
        inline constexpr uintptr_t GetUserCFrameEnabled = 0x110;
        inline constexpr uintptr_t GuiInputUserCFrame = 0x168;
        inline constexpr uintptr_t IsMaquettes = 0x118;
        inline constexpr uintptr_t IsVRAppBuild = 0x120;
        inline constexpr uintptr_t LaserDistance = 0x170;
        inline constexpr uintptr_t LaserPointer = 0x178;
        inline constexpr uintptr_t LaserPointerTriggered = 0x1c0;
        inline constexpr uintptr_t NavigationRequested = 0x1c8;
        inline constexpr uintptr_t PointerHitCFrame = 0x180;
        inline constexpr uintptr_t QuestASWState = 0x188;
        inline constexpr uintptr_t QuestDisplayRefreshRate = 0x190;
        inline constexpr uintptr_t RecenterUserHeadCFrame = 0x128;
        inline constexpr uintptr_t RequestNavigation = 0x130;
        inline constexpr uintptr_t SetTouchpadMode = 0x138;
        inline constexpr uintptr_t ThirdPersonFollowCamEnabled = 0x198;
        inline constexpr uintptr_t TouchpadModeChanged = 0x1d0;
        inline constexpr uintptr_t UserCFrameChanged = 0x1d8;
        inline constexpr uintptr_t UserCFrameEnabled = 0x1e0;
        inline constexpr uintptr_t VRDeviceAvailable = 0x1a0;
        inline constexpr uintptr_t VRDeviceName = 0x1a8;
        inline constexpr uintptr_t VREnabled = 0x1b0;
        inline constexpr uintptr_t VRSessionState = 0x1b8;
        inline constexpr uintptr_t WireframeHandleAdornment = 0x1e8;
    }

    namespace Value {
        inline constexpr uintptr_t BloomEffect = 0x108;
        inline constexpr uintptr_t BoxHandleAdornment = 0x110;
        inline constexpr uintptr_t BubbleChatConfiguration = 0x118;
        inline constexpr uintptr_t Camera = 0x120;
        inline constexpr uintptr_t ColorCorrectionEffect = 0x128;
        inline constexpr uintptr_t DoubleConstrainedValue = 0x130;
        inline constexpr uintptr_t IntConstrainedValue = 0x138;
        inline constexpr uintptr_t InternalSyncItem = 0x140;
        inline constexpr uintptr_t KeyframeSequence = 0x148;
        inline constexpr uintptr_t NumberValue = 0x150;
        inline constexpr uintptr_t Object = 0x158;
        inline constexpr uintptr_t PVAdornment = 0x160;
        inline constexpr uintptr_t RealtimeMedia = 0x168;
        inline constexpr uintptr_t StudioData = 0x170;
        inline constexpr uintptr_t Value = 0xa8;
        inline constexpr uintptr_t VectorForce = 0x178;
    }

    namespace ValueCurve {
        inline constexpr uintptr_t GetKeyAtIndex = 0x100;
        inline constexpr uintptr_t GetKeyIndicesAtTime = 0x108;
        inline constexpr uintptr_t GetKeys = 0x110;
        inline constexpr uintptr_t GetValueAtTime = 0x118;
        inline constexpr uintptr_t InsertKey = 0x120;
        inline constexpr uintptr_t InsertKeyValue = 0x128;
        inline constexpr uintptr_t Length = 0x140;
        inline constexpr uintptr_t RemoveKeyAtIndex = 0x130;
        inline constexpr uintptr_t SetKeys = 0x138;
        inline constexpr uintptr_t ValueType = 0x148;
        inline constexpr uintptr_t ValuesAndTimes = 0x150;
    }

    namespace ValuesAndTimes {
        inline constexpr uintptr_t FloorWire = 0x100;
        inline constexpr uintptr_t MaterialService = 0x108;
        inline constexpr uintptr_t RunService = 0x110;
        inline constexpr uintptr_t Vector3Value = 0x118;
    }

    namespace Vector3Curve {
        inline constexpr uintptr_t GetValueAtTime = 0x100;
        inline constexpr uintptr_t X = 0x108;
        inline constexpr uintptr_t Y = 0x110;
        inline constexpr uintptr_t Z = 0x118;
    }

    namespace Vector3Value {
        inline constexpr uintptr_t Changed = 0x108;
        inline constexpr uintptr_t Value = 0x100;
        inline constexpr uintptr_t changed = 0x110;
    }

    namespace VectorForce {
        inline constexpr uintptr_t ApplyAtCenterOfMass = 0x100;
        inline constexpr uintptr_t Force = 0x108;
        inline constexpr uintptr_t RelativeTo = 0x110;
    }

    namespace VehicleSeat {
        inline constexpr uintptr_t AreHingesDetected = 0x108;
        inline constexpr uintptr_t Disabled = 0x110;
        inline constexpr uintptr_t HeadsUpDisplay = 0x118;
        inline constexpr uintptr_t MaxSpeed = 0x218;
        inline constexpr uintptr_t Occupant = 0x1f8;
        inline constexpr uintptr_t RemoteCreateSeatWeld = 0x160;
        inline constexpr uintptr_t RemoteDestroySeatWeld = 0x168;
        inline constexpr uintptr_t Sit = 0x100;
        inline constexpr uintptr_t Steer = 0x130;
        inline constexpr uintptr_t SteerFloat = 0x21c;
        inline constexpr uintptr_t Throttle = 0x140;
        inline constexpr uintptr_t ThrottleFloat = 0x220;
        inline constexpr uintptr_t Torque = 0x224;
        inline constexpr uintptr_t TurnSpeed = 0x228;
    }

    namespace Velocity {
        inline constexpr uintptr_t BasePart = 0x100;
        inline constexpr uintptr_t BodyVelocity = 0x108;
        inline constexpr uintptr_t FloorWire = 0x110;
        inline constexpr uintptr_t SlimAnimationDataEntity = 0x118;
    }

    namespace VelocityMotor {
        inline constexpr uintptr_t CurrentAngle = 0x100;
        inline constexpr uintptr_t DesiredAngle = 0x108;
        inline constexpr uintptr_t Hole = 0x110;
        inline constexpr uintptr_t MaxVelocity = 0x118;
    }

    namespace Version {
        inline constexpr uintptr_t CoreGuiConfiguration = 0x100;
        inline constexpr uintptr_t DataStoreKeyPages = 0x108;
        inline constexpr uintptr_t DataStoreOptions = 0x110;
    }

    namespace VersionControlService {
        inline constexpr uintptr_t BroadcastScriptChangesSubmitted = 0x110;
        inline constexpr uintptr_t CommitRejectedInfo = 0x118;
        inline constexpr uintptr_t LockedScriptBatchCommit = 0x120;
        inline constexpr uintptr_t RequestAllEditorsSignal = 0x128;
        inline constexpr uintptr_t ScriptBatchCommit = 0x130;
        inline constexpr uintptr_t ScriptChangesSubmitted = 0x138;
        inline constexpr uintptr_t ScriptCollabEnabled = 0x100;
        inline constexpr uintptr_t ScriptCollabVersionHistoryEnabled = 0x108;
        inline constexpr uintptr_t ScriptEditorAdded = 0x140;
        inline constexpr uintptr_t ScriptEditorRemoved = 0x148;
        inline constexpr uintptr_t ScriptStartEdit = 0x150;
        inline constexpr uintptr_t ScriptStopEdit = 0x158;
        inline constexpr uintptr_t UserService = 0x160;
    }

    namespace Video {
        inline constexpr uintptr_t Control = 0x100;
        inline constexpr uintptr_t VideoFrame = 0x108;
    }

    namespace VideoCacheFullMiss {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VideoCachePrefersNoVideo {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VideoCacheUnderlyingDataMiss {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VideoCapture {
        inline constexpr uintptr_t FilePath = 0x100;
        inline constexpr uintptr_t TimeLength = 0x108;
    }

    namespace VideoCaptureDurationMs {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VideoCaptureService {
        inline constexpr uintptr_t Active = 0x108;
        inline constexpr uintptr_t CameraID = 0x110;
        inline constexpr uintptr_t DevicesChanged = 0x118;
        inline constexpr uintptr_t Error = 0x120;
        inline constexpr uintptr_t GetCameraDevices = 0x100;
        inline constexpr uintptr_t Started = 0x128;
        inline constexpr uintptr_t Stopped = 0x130;
    }

    namespace VideoContent {
        inline constexpr uintptr_t VideoFrame = 0x100;
        inline constexpr uintptr_t VideoPlayer = 0x108;
        inline constexpr uintptr_t ViewportFrame = 0x110;
    }

    namespace VideoDecodingTimeUs {
        inline constexpr uintptr_t ImageConversionTimeUs = 0x100;
    }

    namespace VideoDeviceInput {
        inline constexpr uintptr_t Active = 0x100;
        inline constexpr uintptr_t CameraId = 0x108;
        inline constexpr uintptr_t CaptureQuality = 0x110;
        inline constexpr uintptr_t IsReady = 0x118;
    }

    namespace VideoDisplay {
        inline constexpr uintptr_t GetConnectedWires = 0x100;
        inline constexpr uintptr_t GetInputPins = 0x108;
        inline constexpr uintptr_t GetOutputPins = 0x110;
        inline constexpr uintptr_t ResampleMode = 0x118;
        inline constexpr uintptr_t ScaleType = 0x120;
        inline constexpr uintptr_t TileSize = 0x128;
        inline constexpr uintptr_t VideoColor3 = 0x130;
        inline constexpr uintptr_t VideoRectOffset = 0x138;
        inline constexpr uintptr_t VideoRectSize = 0x140;
        inline constexpr uintptr_t VideoTransparency = 0x148;
        inline constexpr uintptr_t WiringChanged = 0x150;
    }

    namespace VideoFrame {
        inline constexpr uintptr_t DidLoop = 0x198;
        inline constexpr uintptr_t Ended = 0x1a0;
        inline constexpr uintptr_t InternalVideoUsage = 0x118;
        inline constexpr uintptr_t IsLoaded = 0x120;
        inline constexpr uintptr_t Loaded = 0x1a8;
        inline constexpr uintptr_t Looped = 0x128;
        inline constexpr uintptr_t MaximumResolution = 0x130;
        inline constexpr uintptr_t Pause = 0x100;
        inline constexpr uintptr_t Paused = 0x1b0;
        inline constexpr uintptr_t Play = 0x108;
        inline constexpr uintptr_t Played = 0x1b8;
        inline constexpr uintptr_t Playing = 0x138;
        inline constexpr uintptr_t PlayingReplicating = 0x140;
        inline constexpr uintptr_t PlayingUpdatedFromServer = 0x1c0;
        inline constexpr uintptr_t Resolution = 0x148;
        inline constexpr uintptr_t RollOffMaxDistance = 0x150;
        inline constexpr uintptr_t RollOffMinDistance = 0x158;
        inline constexpr uintptr_t RollOffMode = 0x160;
        inline constexpr uintptr_t SetStudioPreview = 0x110;
        inline constexpr uintptr_t TimeLength = 0x168;
        inline constexpr uintptr_t TimePosition = 0x170;
        inline constexpr uintptr_t TimePositionReplicating = 0x178;
        inline constexpr uintptr_t TimePositionUpdatedFromServer = 0x1c8;
        inline constexpr uintptr_t Video = 0x180;
        inline constexpr uintptr_t VideoContent = 0x188;
        inline constexpr uintptr_t Volume = 0x190;
    }

    namespace VideoOldEncryptedVideoFormatMetrics {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VideoPlayer {
        inline constexpr uintptr_t AutoLoadInStudio = 0x140;
        inline constexpr uintptr_t AutoPlayInStudio = 0x148;
        inline constexpr uintptr_t DidEnd = 0x1b0;
        inline constexpr uintptr_t DidLoop = 0x1b8;
        inline constexpr uintptr_t GetConnectedWires = 0x108;
        inline constexpr uintptr_t GetInputPins = 0x110;
        inline constexpr uintptr_t GetOutputPins = 0x118;
        inline constexpr uintptr_t InternalVideoUsage = 0x150;
        inline constexpr uintptr_t IsLoaded = 0x158;
        inline constexpr uintptr_t IsPlaying = 0x160;
        inline constexpr uintptr_t LoadAsync = 0x100;
        inline constexpr uintptr_t Looping = 0x168;
        inline constexpr uintptr_t MaximumResolution = 0x170;
        inline constexpr uintptr_t Pause = 0x120;
        inline constexpr uintptr_t Play = 0x128;
        inline constexpr uintptr_t PlayFailed = 0x1c0;
        inline constexpr uintptr_t PlaybackSpeed = 0x178;
        inline constexpr uintptr_t PlayingReplicating = 0x180;
        inline constexpr uintptr_t Resolution = 0x188;
        inline constexpr uintptr_t SetStudioPreview = 0x130;
        inline constexpr uintptr_t TimeLength = 0x190;
        inline constexpr uintptr_t TimePosition = 0x198;
        inline constexpr uintptr_t Unload = 0x138;
        inline constexpr uintptr_t VideoContent = 0x1a0;
        inline constexpr uintptr_t Volume = 0x1a8;
        inline constexpr uintptr_t WiringChanged = 0x1c8;
    }

    namespace VideoSampler {
        inline constexpr uintptr_t GetSamplesAtTimesAsync = 0x100;
        inline constexpr uintptr_t TimeLength = 0x108;
        inline constexpr uintptr_t VideoContent = 0x110;
    }

    namespace VideoService {
        inline constexpr uintptr_t CreateVideoSamplerAsync = 0x100;
        inline constexpr uintptr_t GameStreamingEnabled = 0x108;
        inline constexpr uintptr_t GameStreamingResolutionReady = 0x110;
        inline constexpr uintptr_t PlaybackReport = 0x118;
    }

    namespace VideoStreamOpenResult {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace ViewportFrame {
        inline constexpr uintptr_t Ambient = 0x108;
        inline constexpr uintptr_t CameraCFrame = 0x110;
        inline constexpr uintptr_t CameraFieldOfView = 0x118;
        inline constexpr uintptr_t CaptureSnapshotAsync = 0x100;
        inline constexpr uintptr_t CurrentCamera = 0x120;
        inline constexpr uintptr_t ImageColor3 = 0x128;
        inline constexpr uintptr_t ImageTransparency = 0x130;
        inline constexpr uintptr_t IsMirrored = 0x138;
        inline constexpr uintptr_t LightColor = 0x140;
        inline constexpr uintptr_t LightDirection = 0x148;
    }

    namespace VipServerId {
        inline constexpr uintptr_t TeleportService = 0x108;
        inline constexpr uintptr_t teleport_method = 0x100;
    }

    namespace VirtualInput {
        inline constexpr uintptr_t SendKey = 0x100;
        inline constexpr uintptr_t SendMouseButton = 0x108;
        inline constexpr uintptr_t SendMouseDelta = 0x110;
        inline constexpr uintptr_t SendMousePosition = 0x118;
        inline constexpr uintptr_t SendPointerAction = 0x120;
        inline constexpr uintptr_t SendTextInput = 0x128;
    }

    namespace VirtualInputManager {
        inline constexpr uintptr_t AdditionalLuaState = 0x1c8;
        inline constexpr uintptr_t Dump = 0x108;
        inline constexpr uintptr_t HandleGamepadAxisInput = 0x110;
        inline constexpr uintptr_t HandleGamepadButtonInput = 0x118;
        inline constexpr uintptr_t HandleGamepadConnect = 0x120;
        inline constexpr uintptr_t HandleGamepadDisconnect = 0x128;
        inline constexpr uintptr_t PlaybackCompleted = 0x1d0;
        inline constexpr uintptr_t RecordingCompleted = 0x1d8;
        inline constexpr uintptr_t SendAccelerometerEvent = 0x130;
        inline constexpr uintptr_t SendGravityEvent = 0x138;
        inline constexpr uintptr_t SendGyroscopeEvent = 0x140;
        inline constexpr uintptr_t SendKeyEvent = 0x148;
        inline constexpr uintptr_t SendMouseButtonEvent = 0x150;
        inline constexpr uintptr_t SendMouseMoveDeltaEvent = 0x158;
        inline constexpr uintptr_t SendMouseMoveEvent = 0x160;
        inline constexpr uintptr_t SendMouseWheelEvent = 0x168;
        inline constexpr uintptr_t SendScroll = 0x170;
        inline constexpr uintptr_t SendTextInputCharacterEvent = 0x178;
        inline constexpr uintptr_t SendTouchEvent = 0x180;
        inline constexpr uintptr_t SetInputTypesToIgnore = 0x188;
        inline constexpr uintptr_t StartPlaying = 0x190;
        inline constexpr uintptr_t StartPlayingJSON = 0x198;
        inline constexpr uintptr_t StartRecording = 0x1a0;
        inline constexpr uintptr_t StopPlaying = 0x1a8;
        inline constexpr uintptr_t StopRecording = 0x1b0;
        inline constexpr uintptr_t WaitForInputEventsProcessed = 0x100;
        inline constexpr uintptr_t sendRobloxEvent = 0x1b8;
        inline constexpr uintptr_t sendThemeChangeEvent = 0x1c0;
        inline constexpr uintptr_t timestamp = 0x1e0;
    }

    namespace VirtualUser {
        inline constexpr uintptr_t Button1Down = 0x100;
        inline constexpr uintptr_t Button1Up = 0x108;
        inline constexpr uintptr_t Button2Down = 0x110;
        inline constexpr uintptr_t Button2Up = 0x118;
        inline constexpr uintptr_t CaptureController = 0x120;
        inline constexpr uintptr_t ClickButton1 = 0x128;
        inline constexpr uintptr_t ClickButton2 = 0x130;
        inline constexpr uintptr_t MoveMouse = 0x138;
        inline constexpr uintptr_t SetKeyDown = 0x140;
        inline constexpr uintptr_t SetKeyUp = 0x148;
        inline constexpr uintptr_t StartRecording = 0x150;
        inline constexpr uintptr_t StopRecording = 0x158;
        inline constexpr uintptr_t TypeKey = 0x160;
    }

    namespace Visible {
        inline constexpr uintptr_t AdPortal = 0x100;
        inline constexpr uintptr_t Attachment = 0x108;
        inline constexpr uintptr_t ContentProvider = 0x110;
        inline constexpr uintptr_t FaceAnimatorService = 0x118;
        inline constexpr uintptr_t FormFactorPart = 0x120;
        inline constexpr uintptr_t GuiButton = 0x128;
        inline constexpr uintptr_t GuiObject = 0x130;
        inline constexpr uintptr_t Path2D = 0x138;
        inline constexpr uintptr_t PluginCapabilities = 0x140;
        inline constexpr uintptr_t PluginToolbarButton = 0x148;
        inline constexpr uintptr_t Script = 0x150;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t Dimensions = 0xb10;
        inline constexpr uintptr_t FakeDataModel = 0xaf0;
        inline constexpr uintptr_t Pointer = 0x851bf08;
        inline constexpr uintptr_t RenderView = 0xc30;
        inline constexpr uintptr_t ViewMatrix = 0x1b0;
    }

    namespace VisualizationMode {
        inline constexpr uintptr_t Enabled = 0x100;
        inline constexpr uintptr_t Title = 0x108;
        inline constexpr uintptr_t ToolTip = 0x110;
    }

    namespace VisualizationModeCategory {
        inline constexpr uintptr_t Enabled = 0x100;
        inline constexpr uintptr_t Title = 0x108;
    }

    namespace VoiceCallStateNonEmptyRooms {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceCallStateSubscriptions {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceCallingSetupCreateDataChannelFailed {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatCapabilityIgnoredByDefault {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatClientCapability2JoinedVoiceCallMs {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatCountMutedSubs {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatCreateRoomError {
        inline constexpr uintptr_t default = 0x100;
        inline constexpr uintptr_t ephemeralcounter = 0x108;
    }

    namespace VoiceChatFetchUserTurnAuthSuccess {
        inline constexpr uintptr_t FetchUserTurnAuthOperation = 0x100;
    }

    namespace VoiceChatMigrationRequestReceived {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNUmRoomSetupOperationSuccess {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumFetchUserTurnAuthOperationFailedSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumFetchUserTurnAuthOperationSuccess {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumIceTrickleOperationFailedDueToTimeout {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumIceTricklePublishFail {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumIceTricklePublishSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumIceTricklePublishSuccess {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumJoinedCallRemoteEventSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumLeaveOpEnqueuedByContextParsingOp {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumLeaveOpEnqueuedByJoinOp {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumMaybeEnqueueLeaveOpFromFeedClosed {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumMpsSetupFailed {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumMuteSubscriptionsFail {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumMuteUnmutePublishRequestsOutOfSequenceRequests {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumMuteUnmuteSubscriptionsOperationFailedDueToTimeout {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumPublisherBlockListFailToLoad {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumPublishingHandshakeAckedEventSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumPublishingHandshakeOperationAbandon {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumPublishingHandshakeOperationFailedDueToTimeoutByDC {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumRoomSetupOperationsResettingLargeConversation {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumSubscriptionHandshakeCompletedEventSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumSubscriptionResetSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumTrickleIceRequestedAfterJoinFailed {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumUnmuteSubscriptionsFail {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumUserJoinOperationAbandon {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumUserJoinOperationResettingRoomBecauseOfInvalidRoomId {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumUserJoinOperationSuccess {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatNumVoiceSetupFailedEventSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatPubAbandonedOnInvalidSessionByDC {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatPubAbandonedOnUserLeaving {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatPubAbandonedOnWrongStatus {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatPublisherCounter {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatReconnectCountPerGameSession {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatRejoin {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatRoomCounter {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatService {
        inline constexpr uintptr_t ACSCleanup = 0x150;
        inline constexpr uintptr_t ClientRetryJoin = 0x158;
        inline constexpr uintptr_t ClientRetryJoinWithConfig = 0x160;
        inline constexpr uintptr_t ClientStreamSwitchAck = 0x168;
        inline constexpr uintptr_t DefaultDistanceAttenuation = 0x100;
        inline constexpr uintptr_t EnableDefaultVoice = 0x108;
        inline constexpr uintptr_t EnableVoiceVolumeControls = 0x110;
        inline constexpr uintptr_t FetchUserTurnAuthOperationFailed = 0x170;
        inline constexpr uintptr_t JoinedVoice = 0x178;
        inline constexpr uintptr_t JoinedVoiceV2 = 0x180;
        inline constexpr uintptr_t PublishStateChange = 0x188;
        inline constexpr uintptr_t PublishingHandshakeAcked = 0x190;
        inline constexpr uintptr_t PublishingHandshakeAckedWithBothSdp = 0x198;
        inline constexpr uintptr_t PublishingHandshakeAckedWithCompressedSdp = 0x1a0;
        inline constexpr uintptr_t PublishingHandshakeCompleted = 0x1a8;
        inline constexpr uintptr_t PublishingHandshakeInitiated = 0x1b0;
        inline constexpr uintptr_t PublishingHandshakeInitiatedWithBothSdp = 0x1b8;
        inline constexpr uintptr_t PublishingHandshakeInitiatedWithCompressedSdp = 0x1c0;
        inline constexpr uintptr_t ReJoinedVoice = 0x1c8;
        inline constexpr uintptr_t ReJoinedVoiceV2 = 0x1d0;
        inline constexpr uintptr_t RelayCandidatesGathered = 0x1d8;
        inline constexpr uintptr_t SsrcUserIdMappingUpdate = 0x1e0;
        inline constexpr uintptr_t SubscribeStateChange = 0x1e8;
        inline constexpr uintptr_t SubscriberAudioQualitySample = 0x1f0;
        inline constexpr uintptr_t SubscriptionFeedStarted = 0x1f8;
        inline constexpr uintptr_t SubscriptionHandshakeAcked = 0x200;
        inline constexpr uintptr_t SubscriptionHandshakeAckedWithBothSdp = 0x208;
        inline constexpr uintptr_t SubscriptionHandshakeAckedWithCompressedSdp = 0x210;
        inline constexpr uintptr_t SubscriptionHandshakeCompleted = 0x218;
        inline constexpr uintptr_t SubscriptionHandshakeInitiated = 0x220;
        inline constexpr uintptr_t SubscriptionHandshakeInitiatedWithBothSdp = 0x228;
        inline constexpr uintptr_t SubscriptionHandshakeInitiatedWithCompressedSdp = 0x230;
        inline constexpr uintptr_t SubscriptionReset = 0x238;
        inline constexpr uintptr_t UpdateTurnAuthInfoRequest = 0x240;
        inline constexpr uintptr_t UseAudioApi = 0x118;
        inline constexpr uintptr_t UseNewAudioApi = 0x120;
        inline constexpr uintptr_t UseNewControlPaths = 0x128;
        inline constexpr uintptr_t UseNewJoinFlow = 0x130;
        inline constexpr uintptr_t UseStreamSwitching = 0x138;
        inline constexpr uintptr_t UserTurnAuth = 0x248;
        inline constexpr uintptr_t UserTurnAuthV2 = 0x250;
        inline constexpr uintptr_t VoiceChatClientVoiceCapability = 0x258;
        inline constexpr uintptr_t VoiceChatClientVoiceCapabilityWithConfig = 0x260;
        inline constexpr uintptr_t VoiceChatEnabledForPlaceOnRcc = 0x140;
        inline constexpr uintptr_t VoiceChatEnabledForUniverseOnRcc = 0x148;
        inline constexpr uintptr_t VoiceChatPlayerMuteStateChangedClientToServer = 0x268;
        inline constexpr uintptr_t VoiceChatPlayerMuteStateChangedServerToClient = 0x270;
        inline constexpr uintptr_t VoiceChatSampleTaggedEventClientToServer = 0x278;
        inline constexpr uintptr_t VoiceChatSampleTaggedEventServerToClient = 0x280;
        inline constexpr uintptr_t VoiceChatStatsCollected = 0x288;
        inline constexpr uintptr_t VoiceChatSubscriptionInitialBatchEmpty = 0x290;
        inline constexpr uintptr_t VoiceChatplayerMuteStatusChangedEvent = 0x298;
        inline constexpr uintptr_t VoiceMigration = 0x2a0;
        inline constexpr uintptr_t VoiceSetupFailed = 0x2a8;
    }

    namespace VoiceChatSubscribedStreamCounter {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatTaggedEventDroppedUnknownTag {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatUserLeftBeforePublishingHandshakeCompleted {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2CleanUpMpsPipelineRTTMs {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2CleanUpMpsPipelineRequestSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2GetPlatformMutedUsersRTTMs {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2GetPlatformMutedUsersRequestSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2GetRoomServerRTTMs {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2GetRoomServerRequestSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2GetTurnAuthResponseReceived {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2HttpError {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2HttpErrorV2 {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2PublishStateChangeInvalidFields {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2RelayCandidatesGatheredInvalidFields {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2RelayCandidatesGatheredSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2SetupMpsPipelineResponseReceived {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2SubscribeStateChangeSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2SubscriberAudioQualitySampleRTTMs {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2SubscriberAudioQualitySampleRequestSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2SubscriptionFeedStartedInvalidFields {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2SubscriptionHandshakeAckedSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2VoiceApiClientResWaitTimeMs {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatV2VoiceApiClientTelemetryTimestampNotFoundError {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceChatWebRTCDlopenAttempt {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceFetchPlatformMutedUsersResult {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceFetchUserTurnAuthOperationResult {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceIceTrickleOperationFailureReason {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceMuteUnmutePublishOperationResult {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceMuteUnmuteSubscriptionsOperationResult {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoicePublishingHandshakeOperationResult {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceRtcStatsPacketLossIncorrect {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceSDPCompressionPublishOfferNotCompressedSdpButBeginWithPro {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceSDPCompressionPublishOfferUserDoesntExist {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace VoiceSubscriptionUpdateOperationFailureReason {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace Volume {
        inline constexpr uintptr_t AudioDeviceOutput = 0x100;
        inline constexpr uintptr_t AudioFilter = 0x108;
        inline constexpr uintptr_t AudioRecorder = 0x110;
        inline constexpr uintptr_t AudioTremolo = 0x118;
        inline constexpr uintptr_t AuroraScript = 0x120;
        inline constexpr uintptr_t FriendsCallingParticipant = 0x128;
        inline constexpr uintptr_t FunctionalTest = 0x130;
        inline constexpr uintptr_t Sound = 0x138;
        inline constexpr uintptr_t SoundService = 0x140;
        inline constexpr uintptr_t VideoPlayer = 0x148;
        inline constexpr uintptr_t VideoSampler = 0x150;
    }

    namespace VoxelBuffer {
        inline constexpr uintptr_t ClearAsync = 0x100;
        inline constexpr uintptr_t DrawBufferAsync = 0x108;
        inline constexpr uintptr_t FromHeightmapAsync = 0x110;
        inline constexpr uintptr_t GetSizeInVoxels = 0x128;
        inline constexpr uintptr_t NormalizeAsync = 0x118;
        inline constexpr uintptr_t ReadVoxels = 0x130;
        inline constexpr uintptr_t UnclampAsync = 0x120;
        inline constexpr uintptr_t WriteVoxels = 0x138;
    }

    namespace WARNING {
        inline constexpr uintptr_t ERROR = 0x100;
        inline constexpr uintptr_t INFO = 0x108;
    }

    namespace Warn {
        inline constexpr uintptr_t GamepadService = 0x100;
        inline constexpr uintptr_t Logger = 0x108;
        inline constexpr uintptr_t LoginService = 0x110;
        inline constexpr uintptr_t TestService = 0x118;
    }

    namespace WebSocketClient {
        inline constexpr uintptr_t Close = 0x100;
        inline constexpr uintptr_t Closed = 0x118;
        inline constexpr uintptr_t ConnectionState = 0x110;
        inline constexpr uintptr_t MessageReceived = 0x120;
        inline constexpr uintptr_t Opened = 0x128;
        inline constexpr uintptr_t Send = 0x108;
    }

    namespace WebSocketService {
        inline constexpr uintptr_t CreateClient = 0x100;
    }

    namespace WebStreamClient {
        inline constexpr uintptr_t Close = 0x100;
        inline constexpr uintptr_t Closed = 0x118;
        inline constexpr uintptr_t ConnectionState = 0x110;
        inline constexpr uintptr_t Error = 0x120;
        inline constexpr uintptr_t MessageReceived = 0x128;
        inline constexpr uintptr_t Opened = 0x130;
        inline constexpr uintptr_t Send = 0x108;
    }

    namespace WebViewService {
        inline constexpr uintptr_t CloseWindow = 0x108;
        inline constexpr uintptr_t IsAvailable = 0x100;
        inline constexpr uintptr_t MutateWindow = 0x110;
        inline constexpr uintptr_t OnJavaScriptCall = 0x128;
        inline constexpr uintptr_t OnWindowClosed = 0x130;
        inline constexpr uintptr_t OpenWindow = 0x118;
        inline constexpr uintptr_t OpenWindowV2 = 0x120;
    }

    namespace Weight {
        inline constexpr uintptr_t ImageButton = 0x108;
        inline constexpr uintptr_t PostEffect = 0x110;
        inline constexpr uintptr_t WeightVector = 0x100;
    }

    namespace WeightCurrent {
        inline constexpr uintptr_t AnimationStreamTrack = 0x100;
        inline constexpr uintptr_t AnimationTrack = 0x108;
    }

    namespace WeightTarget {
        inline constexpr uintptr_t AnimationTrack = 0x100;
        inline constexpr uintptr_t AnimationValueNodeDefinition = 0x108;
    }

    namespace Weld {
        inline constexpr uintptr_t EnableSkinning = 0x100;
        inline constexpr uintptr_t Part0 = 0x108;
        inline constexpr uintptr_t Part1 = 0x118;
    }

    namespace WeldConstraint {
        inline constexpr uintptr_t Active = 0x100;
        inline constexpr uintptr_t CFrame0 = 0x108;
        inline constexpr uintptr_t CFrame1 = 0x110;
        inline constexpr uintptr_t Enabled = 0x118;
        inline constexpr uintptr_t Part0 = 0xa8;
        inline constexpr uintptr_t Part0Internal = 0x128;
        inline constexpr uintptr_t Part1 = 0xb8;
        inline constexpr uintptr_t Part1Internal = 0x138;
        inline constexpr uintptr_t State = 0x140;
    }

    namespace WetLevel {
        inline constexpr uintptr_t AudioEmitter = 0x100;
        inline constexpr uintptr_t AudioSearchParams = 0x108;
        inline constexpr uintptr_t EditableImage = 0x110;
        inline constexpr uintptr_t RigidConstraint = 0x118;
    }

    namespace WidthScale {
        inline constexpr uintptr_t ChatWindowMessageProperties = 0x100;
        inline constexpr uintptr_t HumanoidRigDescription = 0x108;
        inline constexpr uintptr_t Translator = 0x110;
    }

    namespace WindowInputState {
        inline constexpr uintptr_t CapsLock = 0x40;
        inline constexpr uintptr_t CurrentTextBox = 0x48;
    }

    namespace WindowProtocolService {
        inline constexpr uintptr_t BeginDrag = 0x100;
        inline constexpr uintptr_t Close = 0x108;
        inline constexpr uintptr_t EndDrag = 0x110;
        inline constexpr uintptr_t GetLogicalCaptionButtonsBounds = 0x118;
        inline constexpr uintptr_t GetNativeTitleBarControlsPosition = 0x120;
        inline constexpr uintptr_t GetTitleBarMode = 0x128;
        inline constexpr uintptr_t GetWindowState = 0x130;
        inline constexpr uintptr_t IsAvailable = 0x138;
        inline constexpr uintptr_t Maximize = 0x140;
        inline constexpr uintptr_t Minimize = 0x148;
        inline constexpr uintptr_t OnDragAreaDoubleClicked = 0x150;
        inline constexpr uintptr_t OnDragAreaRightClicked = 0x158;
        inline constexpr uintptr_t OnWindowStateChanged = 0x180;
        inline constexpr uintptr_t Restore = 0x160;
        inline constexpr uintptr_t SetCustomTitleBarHeight = 0x168;
        inline constexpr uintptr_t SetTitleBarMode = 0x170;
        inline constexpr uintptr_t ShouldRenderTitleBarControlsNatively = 0x178;
    }

    namespace WindowSize {
        inline constexpr uintptr_t AudioChannelMixer = 0x100;
        inline constexpr uintptr_t AudioPlayer = 0x108;
    }

    namespace Wire {
        inline constexpr uintptr_t Connected = 0x108;
        inline constexpr uintptr_t RenameToDefault = 0x100;
        inline constexpr uintptr_t SourceInstance = 0x110;
        inline constexpr uintptr_t SourceName = 0x118;
        inline constexpr uintptr_t TargetInstance = 0x120;
        inline constexpr uintptr_t TargetName = 0x128;
    }

    namespace WireframeHandleAdornment {
        inline constexpr uintptr_t AddLine = 0x100;
        inline constexpr uintptr_t AddLines = 0x108;
        inline constexpr uintptr_t AddPath = 0x110;
        inline constexpr uintptr_t AddText = 0x118;
        inline constexpr uintptr_t Clear = 0x120;
        inline constexpr uintptr_t GameSettings = 0x138;
        inline constexpr uintptr_t Scale = 0x128;
        inline constexpr uintptr_t Thickness = 0x130;
    }

    namespace WiringChanged {
        inline constexpr uintptr_t AudioChannelMixer = 0x100;
        inline constexpr uintptr_t AudioChannelSplitter = 0x108;
        inline constexpr uintptr_t AudioChorus = 0x110;
        inline constexpr uintptr_t AudioCompressor = 0x118;
        inline constexpr uintptr_t AudioDeviceInput = 0x120;
        inline constexpr uintptr_t AudioDeviceOutput = 0x128;
        inline constexpr uintptr_t AudioDistortion = 0x130;
        inline constexpr uintptr_t AudioEcho = 0x138;
        inline constexpr uintptr_t AudioEmitter = 0x140;
        inline constexpr uintptr_t AudioEqualizer = 0x148;
        inline constexpr uintptr_t AudioFader = 0x150;
        inline constexpr uintptr_t AudioFilter = 0x158;
        inline constexpr uintptr_t AudioFlanger = 0x160;
        inline constexpr uintptr_t AudioFocusService = 0x168;
        inline constexpr uintptr_t AudioLimiter = 0x170;
        inline constexpr uintptr_t AudioListener = 0x178;
        inline constexpr uintptr_t AudioPitchShifter = 0x180;
        inline constexpr uintptr_t AudioPlayer = 0x188;
        inline constexpr uintptr_t AudioRecorder = 0x190;
        inline constexpr uintptr_t AudioReverb = 0x198;
        inline constexpr uintptr_t AudioSpeechToText = 0x1a0;
        inline constexpr uintptr_t AudioTextToSpeech = 0x1a8;
        inline constexpr uintptr_t AudioTremolo = 0x1b0;
        inline constexpr uintptr_t AudioWindSynthesizer = 0x1b8;
        inline constexpr uintptr_t AuroraScript = 0x1c0;
        inline constexpr uintptr_t RemoteEvent = 0x1c8;
        inline constexpr uintptr_t VideoFrame = 0x1d0;
        inline constexpr uintptr_t VideoService = 0x1d8;
    }

    namespace Workspace {
        inline constexpr uintptr_t AirDensity = 0x190;
        inline constexpr uintptr_t AirTurbulenceIntensity = 0x198;
        inline constexpr uintptr_t AllowThirdPartySales = 0x1a0;
        inline constexpr uintptr_t ApplyRecommendedStreamingSettings = 0x100;
        inline constexpr uintptr_t AuthorityMode = 0x1a8;
        inline constexpr uintptr_t AvatarUnificationMode = 0x1b0;
        inline constexpr uintptr_t BreakJoints = 0x108;
        inline constexpr uintptr_t CalculateJumpDistance = 0x110;
        inline constexpr uintptr_t CalculateJumpHeight = 0x118;
        inline constexpr uintptr_t CalculateJumpPower = 0x120;
        inline constexpr uintptr_t ClientAnimatorThrottling = 0x1b8;
        inline constexpr uintptr_t CollisionGroups = 0x1c0;
        inline constexpr uintptr_t CurrentCamera = 0x4a8;
        inline constexpr uintptr_t DataModel = 0x3c8;
        inline constexpr uintptr_t DataModelPlaceVersion = 0x1d0;
        inline constexpr uintptr_t DistributedGameTime = 0x4c8;
        inline constexpr uintptr_t EnableSLIMAvatars = 0x1e0;
        inline constexpr uintptr_t ExpandedTerrain = 0x1e8;
        inline constexpr uintptr_t ExperimentalSolverIsEnabled = 0x128;
        inline constexpr uintptr_t ExplicitAutoJoints = 0x1f0;
        inline constexpr uintptr_t FallHeightEnabled = 0x1f8;
        inline constexpr uintptr_t FallenPartsDestroyHeight = 0x200;
        inline constexpr uintptr_t FilteringEnabled = 0x208;
        inline constexpr uintptr_t FluidForces = 0x210;
        inline constexpr uintptr_t GetNumAwakeParts = 0x130;
        inline constexpr uintptr_t GetPhysicsThrottling = 0x138;
        inline constexpr uintptr_t GetRealPhysicsFPS = 0x140;
        inline constexpr uintptr_t GetServerTimeNow = 0x148;
        inline constexpr uintptr_t GlobalWind = 0x218;
        inline constexpr uintptr_t Gravity = 0x220;
        inline constexpr uintptr_t IKControlConstraintSupport = 0x228;
        inline constexpr uintptr_t ImprovedAnimationConstraint = 0x230;
        inline constexpr uintptr_t ImprovedPhysicsReplication = 0x238;
        inline constexpr uintptr_t InsertPoint = 0x240;
        inline constexpr uintptr_t InterpolationThrottling = 0x248;
        inline constexpr uintptr_t JoinToOutsiders = 0x150;
        inline constexpr uintptr_t LayeredClothingCacheOptimizations = 0x250;
        inline constexpr uintptr_t LuauTypeCheckMode = 0x258;
        inline constexpr uintptr_t MakeJoints = 0x158;
        inline constexpr uintptr_t MapTVRemoteToGamepadKeycodes = 0x260;
        inline constexpr uintptr_t MeshPartHeadsAndAccessories = 0x268;
        inline constexpr uintptr_t MeshStreamingAndImprovedLods = 0x270;
        inline constexpr uintptr_t ModelStreamingBehavior = 0x278;
        inline constexpr uintptr_t NextGenerationReplication = 0x280;
        inline constexpr uintptr_t NextGenerationReplicationAlias = 0x288;
        inline constexpr uintptr_t PGSIsEnabled = 0x160;
        inline constexpr uintptr_t PathfindingUseImprovedSearch = 0x290;
        inline constexpr uintptr_t PersistentLoaded = 0x3a8;
        inline constexpr uintptr_t PhysicsSteppingMethod = 0x298;
        inline constexpr uintptr_t PlayerCharacterDestroyBehavior = 0x2a0;
        inline constexpr uintptr_t PlayerScriptsUseInputActionSystem = 0x2a8;
        inline constexpr uintptr_t PlayerScriptsUseInputActionSystemAlias = 0x2b0;
        inline constexpr uintptr_t PredictiveStreamingMode = 0x2b8;
        inline constexpr uintptr_t PrimalPhysicsSolver = 0x2c0;
        inline constexpr uintptr_t ReadOnlyGravity = 0x9f0;
        inline constexpr uintptr_t RejectCharacterDeletions = 0x2c8;
        inline constexpr uintptr_t RenderingCacheOptimizations = 0x2d0;
        inline constexpr uintptr_t ReplicateInstanceDestroySetting = 0x2d8;
        inline constexpr uintptr_t Retargeting = 0x2e0;
        inline constexpr uintptr_t SandboxedInstanceMode = 0x2e8;
        inline constexpr uintptr_t SendServerTime = 0x3b0;
        inline constexpr uintptr_t SetAvatarUnificationMode = 0x168;
        inline constexpr uintptr_t SetMeshPartHeadsAndAccessories = 0x170;
        inline constexpr uintptr_t SetPhysicsThrottleEnabled = 0x178;
        inline constexpr uintptr_t SignalBehavior = 0x2f0;
        inline constexpr uintptr_t SignalBehavior2 = 0x2f8;
        inline constexpr uintptr_t SignalBehaviorAlias = 0x300;
        inline constexpr uintptr_t StreamOutBehavior = 0x308;
        inline constexpr uintptr_t StreamingAdaptiveRadius = 0x310;
        inline constexpr uintptr_t StreamingEnabled = 0x318;
        inline constexpr uintptr_t StreamingEnabledAlias = 0x320;
        inline constexpr uintptr_t StreamingEnabledStorage = 0x328;
        inline constexpr uintptr_t StreamingIntegrityMode = 0x330;
        inline constexpr uintptr_t StreamingMinRadius = 0x338;
        inline constexpr uintptr_t StreamingPauseMode = 0x340;
        inline constexpr uintptr_t StreamingTargetRadius = 0x348;
        inline constexpr uintptr_t Terrain = 0x350;
        inline constexpr uintptr_t TerrainWeldsFixed = 0x358;
        inline constexpr uintptr_t ThrottleLevel = 0x360;
        inline constexpr uintptr_t TouchEventsUseCollisionGroups = 0x368;
        inline constexpr uintptr_t TouchesUseCollisionGroups = 0x370;
        inline constexpr uintptr_t UnjoinFromOutsiders = 0x180;
        inline constexpr uintptr_t UseFixedSimulation = 0x378;
        inline constexpr uintptr_t UseFixedSimulationAlias = 0x380;
        inline constexpr uintptr_t UseInputSink = 0x388;
        inline constexpr uintptr_t UseNewLuauTypeSolver = 0x390;
        inline constexpr uintptr_t ValidateEnabledProximityPrompt = 0x398;
        inline constexpr uintptr_t WatermarkHash = 0x3a0;
        inline constexpr uintptr_t World = 0x400;
        inline constexpr uintptr_t ZoomToExtents = 0x188;
    }

    namespace World {
        inline constexpr uintptr_t AirProperties = 0x240;
        inline constexpr uintptr_t FallenPartsDestroyHeight = 0x220;
        inline constexpr uintptr_t Gravity = 0x22c;
        inline constexpr uintptr_t Primitives = 0x2b0;
        inline constexpr uintptr_t WorldSteps = 0x728;
        inline constexpr uintptr_t worldStepsPerSec = 0x728;
    }

    namespace WorldAxis {
        inline constexpr uintptr_t Attachment = 0x100;
        inline constexpr uintptr_t DragDetector = 0x108;
    }

    namespace WorldModel {
        inline constexpr uintptr_t UseWorkspaceCollisionGroups = 0x100;
    }

    namespace WorldRoot {
        inline constexpr uintptr_t ArePartsTouchingOthers = 0x100;
        inline constexpr uintptr_t AutoSimulate = 0x230;
        inline constexpr uintptr_t Blockcast = 0x108;
        inline constexpr uintptr_t BulkMoveTo = 0x110;
        inline constexpr uintptr_t CacheCurrentTerrain = 0x118;
        inline constexpr uintptr_t ClearCachedTerrain = 0x120;
        inline constexpr uintptr_t CollisionGroupCollidableChanged = 0x268;
        inline constexpr uintptr_t CollisionGroupData = 0x238;
        inline constexpr uintptr_t CollisionGroupSetCollidable = 0x128;
        inline constexpr uintptr_t CollisionGroupsAreCollidable = 0x130;
        inline constexpr uintptr_t FindPartOnRay = 0x138;
        inline constexpr uintptr_t FindPartOnRayWithIgnoreList = 0x140;
        inline constexpr uintptr_t FindPartOnRayWithWhitelist = 0x148;
        inline constexpr uintptr_t FindPartsInRegion3 = 0x150;
        inline constexpr uintptr_t FindPartsInRegion3WithIgnoreList = 0x158;
        inline constexpr uintptr_t FindPartsInRegion3WithWhiteList = 0x160;
        inline constexpr uintptr_t GetAwakeContactNormals = 0x168;
        inline constexpr uintptr_t GetAwakeContactParts = 0x170;
        inline constexpr uintptr_t GetAwakeContactPositions = 0x178;
        inline constexpr uintptr_t GetAwakeRootParts = 0x180;
        inline constexpr uintptr_t GetMaxCollisionGroups = 0x188;
        inline constexpr uintptr_t GetPartBoundsInBox = 0x190;
        inline constexpr uintptr_t GetPartBoundsInRadius = 0x198;
        inline constexpr uintptr_t GetPartsInPart = 0x1a0;
        inline constexpr uintptr_t GetRegisteredCollisionGroups = 0x1a8;
        inline constexpr uintptr_t GravityDirection = 0x240;
        inline constexpr uintptr_t IKMoveTo = 0x1b0;
        inline constexpr uintptr_t IsCollisionGroupRegistered = 0x1b8;
        inline constexpr uintptr_t IsRegion3Empty = 0x1c0;
        inline constexpr uintptr_t IsRegion3EmptyWithIgnoreList = 0x1c8;
        inline constexpr uintptr_t PhysicsStepTime = 0x248;
        inline constexpr uintptr_t Raycast = 0x1d0;
        inline constexpr uintptr_t RaycastBoundDesc = 0x82c62d0;
        inline constexpr uintptr_t RaycastBoundFn = 0x80;
        inline constexpr uintptr_t RaycastCachedTerrain = 0x1d8;
        inline constexpr uintptr_t RegisterCollisionGroup = 0x1e0;
        inline constexpr uintptr_t RenameCollisionGroup = 0x1e8;
        inline constexpr uintptr_t SetInsertPoint = 0x1f0;
        inline constexpr uintptr_t Shapecast = 0x1f8;
        inline constexpr uintptr_t Simulate = 0x200;
        inline constexpr uintptr_t SimulationRate = 0x250;
        inline constexpr uintptr_t Spherecast = 0x208;
        inline constexpr uintptr_t StepPhysics = 0x210;
        inline constexpr uintptr_t UnregisterCollisionGroup = 0x218;
        inline constexpr uintptr_t Wind = 0x258;
        inline constexpr uintptr_t WindDirection = 0x260;
        inline constexpr uintptr_t findPartOnRay = 0x220;
        inline constexpr uintptr_t findPartsInRegion3 = 0x228;
    }

    namespace WorldSecondaryAxis {
        inline constexpr uintptr_t AudioAnalyzer = 0x100;
        inline constexpr uintptr_t DynamicRotate = 0x108;
    }

    namespace WrapDeformer {
        inline constexpr uintptr_t CreateEditableMeshAsync = 0x100;
        inline constexpr uintptr_t GetDeformedCFrameAsync = 0x108;
        inline constexpr uintptr_t SetCageMeshContent = 0x110;
    }

    namespace WrapLayer {
        inline constexpr uintptr_t AutoSkin = 0x100;
        inline constexpr uintptr_t BindOffset = 0x108;
        inline constexpr uintptr_t Color = 0x110;
        inline constexpr uintptr_t DebugMode = 0x118;
        inline constexpr uintptr_t Enabled = 0x120;
        inline constexpr uintptr_t MaxSize = 0x128;
        inline constexpr uintptr_t Offset = 0x130;
        inline constexpr uintptr_t Order = 0x138;
        inline constexpr uintptr_t Puffiness = 0x140;
        inline constexpr uintptr_t ReferenceMeshContent = 0x148;
        inline constexpr uintptr_t ReferenceMeshId = 0x150;
        inline constexpr uintptr_t ReferenceOrigin = 0x158;
        inline constexpr uintptr_t ReferenceOriginWorld = 0x160;
        inline constexpr uintptr_t ShrinkFactor = 0x168;
        inline constexpr uintptr_t TemporaryReferenceId = 0x170;
        inline constexpr uintptr_t TemporaryReferenceMeshContent = 0x178;
    }

    namespace WrapTarget {
        inline constexpr uintptr_t Color = 0x110;
        inline constexpr uintptr_t CreateTextureInCageSpaceAsync = 0x100;
        inline constexpr uintptr_t CreateTextureInTargetSpaceAsync = 0x108;
        inline constexpr uintptr_t DebugMode = 0x118;
        inline constexpr uintptr_t Stiffness = 0x120;
    }

    namespace WrapTextureTransfer {
        inline constexpr uintptr_t PrepareProjectionMeshDataAsync = 0x100;
        inline constexpr uintptr_t ReferenceCageMeshContent = 0x108;
        inline constexpr uintptr_t UVMaxBound = 0x110;
        inline constexpr uintptr_t UVMinBound = 0x118;
    }

    namespace WriteVoxels {
        inline constexpr uintptr_t Terrain = 0x100;
        inline constexpr uintptr_t WebSocketClient = 0x108;
    }

    namespace ZIndex {
        inline constexpr uintptr_t DeferredAssetManagerService = 0x100;
        inline constexpr uintptr_t GuiService = 0x108;
        inline constexpr uintptr_t Handles = 0x110;
        inline constexpr uintptr_t PathfindingLink = 0x118;
        inline constexpr uintptr_t UISizeConstraint = 0x120;
        inline constexpr uintptr_t UITableLayout = 0x128;
    }

    namespace ZOffset {
        inline constexpr uintptr_t BevelMesh = 0x100;
        inline constexpr uintptr_t PatchMapping = 0x108;
        inline constexpr uintptr_t SurfaceGuiBase = 0x110;
    }

    namespace ZoomToExtents {
        inline constexpr uintptr_t CaptureService = 0x100;
        inline constexpr uintptr_t WorldRoot = 0x108;
    }

    namespace abandon {
        inline constexpr uintptr_t resetting_conversation = 0x100;
    }

    namespace blocked {
        inline constexpr uintptr_t not_eligible = 0x100;
    }

    namespace counter_reset {
        inline constexpr uintptr_t inbound = 0x100;
    }

    namespace d {
        inline constexpr uintptr_t CsmAck = 0x108;
        inline constexpr uintptr_t CurveMarkerCheckerTelemetryEvent = 0x100;
        inline constexpr uintptr_t RbxlChunkTooBigForSerialization = 0x110;
    }

    namespace default {
        inline constexpr uintptr_t d = 0x100;
    }

    namespace eventName {
        inline constexpr uintptr_t entryNotString = 0x100;
    }

    namespace http_method {
        inline constexpr uintptr_t status_code = 0x100;
    }

    namespace inputNotArray {
        inline constexpr uintptr_t wrongName = 0x100;
    }

    namespace joinSuccessPublished {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace joinTimeoutAfterClientCapabilityRejoinEvent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace kVoiceChatNumMutePublishFail {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace kVoiceChatNumMutePublishSent {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace kVoiceChatNumMuteUnmutePublishRequestedAfterJoinFailed {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace kVoiceChatNumUnmutePublishSuccess {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace max_rtt {
        inline constexpr uintptr_t transport_error = 0x100;
    }

    namespace platform_muted {
        inline constexpr uintptr_t action = 0x100;
    }

    namespace rbxtelemetry_invalid_histogram {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace reason {
        inline constexpr uintptr_t action = 0x108;
        inline constexpr uintptr_t age_constraint = 0x100;
    }

    namespace resetting_large_conversation {
        inline constexpr uintptr_t sfu_datacenter_name = 0x100;
    }

    namespace result {
        inline constexpr uintptr_t endpoint = 0x118;
        inline constexpr uintptr_t outbound = 0x110;
        inline constexpr uintptr_t sfuTag = 0x108;
        inline constexpr uintptr_t sfu_datacenter_name = 0x100;
    }

    namespace rewardedVideoAdStudioTestCounter {
        inline constexpr uintptr_t default = 0x100;
    }

    namespace sfuImage {
        inline constexpr uintptr_t sfu_datacenter_name = 0x100;
    }

    namespace sfuTag {
        inline constexpr uintptr_t sfuImage = 0x100;
    }

    namespace sfu_datacenter_name {
        inline constexpr uintptr_t no_rejoin = 0x108;
        inline constexpr uintptr_t result = 0x118;
        inline constexpr uintptr_t sfu_datacenter_name = 0x100;
        inline constexpr uintptr_t success = 0x110;
    }

    namespace subscribe {
        inline constexpr uintptr_t result = 0x100;
    }

    namespace success {
        inline constexpr uintptr_t http_bad_status = 0x100;
    }

    namespace unsubscribe {
        inline constexpr uintptr_t blocklist_not_loaded = 0x100;
    }

}
