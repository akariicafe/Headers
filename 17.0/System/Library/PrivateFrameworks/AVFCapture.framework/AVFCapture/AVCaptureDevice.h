@class NSString, NSArray, AVCaptureDeviceFormat, AVCaptureDeviceInternal, AVCaptureDeviceInputSource;

@interface AVCaptureDevice : NSObject {
    AVCaptureDeviceInternal *_internal;
}

@property (readonly, nonatomic, getter=isDockedTrackingSupported) BOOL dockedTrackingSupported;
@property (nonatomic, getter=isDockedTrackingEnabled) BOOL dockedTrackingEnabled;
@property (readonly, nonatomic, getter=isDockedTrackingActive) BOOL dockedTrackingActive;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic, getter=isInUseByAnotherApplication) BOOL inUseByAnotherApplication;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic) NSArray *linkedDevices;
@property (readonly, nonatomic) NSArray *formats;
@property (retain, nonatomic) AVCaptureDeviceFormat *activeFormat;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } activeVideoMinFrameDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } activeVideoMaxFrameDuration;
@property (readonly, nonatomic) NSArray *inputSources;
@property (retain, nonatomic) AVCaptureDeviceInputSource *activeInputSource;

+ (void)setStudioLightingIntensity:(float)a0;
+ (void)setPortraitEffectStudioLightQuality:(long long)a0;
+ (void)setReactionEffectsEnabled:(BOOL)a0;
+ (void)setStudioLightingEnabled:(BOOL)a0;
+ (long long)cinematicFramingControlMode;
+ (void)setBackgroundBlurAperture:(float)a0;
+ (void)setCinematicFramingControlMode:(long long)a0;
+ (void)setCinematicFramingEnabled:(BOOL)a0;
+ (BOOL)reactionEffectsEnabled;
+ (void)setBackgroundBlurEnabled:(BOOL)a0;
+ (float)backgroundBlurAperture;
+ (void)setUserPreferredCamera:(id)a0;
+ (id)cameraInfoForCreatorID:(id)a0 uniqueID:(id)a1 specialDeviceType:(unsigned int)a2 centerStageSupported:(BOOL)a3;
+ (BOOL)isEligibleForBackgroundBlur;
+ (void)_reconnectDevices:(id)a0;
+ (void)setCenterStageFramingMode:(long long)a0;
+ (void)setStudioLightingControlMode:(long long)a0;
+ (BOOL)_defaultCenterStageEnabled;
+ (id)_legacyDevicesWithMediaType:(id)a0;
+ (void)setUpMicrophoneModeStateOnce;
+ (void)ensureServerConnection;
+ (void)_studioLightingEnabledChanged:(id)a0;
+ (id)_centerStageAllowList;
+ (id)devicesWithMediaType:(id)a0;
+ (id)_devices;
+ (void)setUpBackgroundBlurStateOnce;
+ (BOOL)isPortraitEffectEnabled;
+ (void)_studioLightEnabledChanged:(id)a0;
+ (void)initialize;
+ (void)updateUserPreferredCameraOverride:(BOOL)a0 cameraInfo:(id)a1;
+ (id)_devicesWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (void)_backgroundBlurEnabledChanged:(id)a0;
+ (void)setUserPreferredCamera:(id)a0 forClientPreferenceDomain:(id)a1;
+ (void)showSystemUserInterface:(long long)a0;
+ (void)updateUserPreferredCameraOverrideHistoryWithDevice:(id)a0 setOverride:(BOOL)a1;
+ (void)_cinematicFramingEnabledChanged:(id)a0;
+ (BOOL)reactionEffectGesturesEnabled;
+ (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
+ (void)requestAccessForMediaType:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)defaultCenterStageEnabledForBundleID:(id)a0;
+ (BOOL)isBackgroundBlurEnabled;
+ (void)_studioLightingIntensityChanged:(id)a0;
+ (void)_initiateRefreshPreferredCameraProperties:(BOOL)a0;
+ (id)extrinsicMatrixFromDevice:(id)a0 toDevice:(id)a1;
+ (void)_reactionsInProgressChangedByControlCenter:(id)a0;
+ (void)setBackgroundBlurControlMode:(long long)a0;
+ (id)continuityCaptureCameraCapabilities;
+ (void)_reactionsEnabledChanged:(id)a0;
+ (long long)studioLightingControlMode;
+ (long long)activeMicrophoneMode;
+ (void)setupKVOLoggingOnce;
+ (id)devices;
+ (void)willChangeValueForKey:(id)a0;
+ (BOOL)isEligibleForReactionEffects;
+ (BOOL)isCenterStageEnabled;
+ (void)_filterConnectedDevices:(id)a0 withDeviceTypes:(id)a1 mediaType:(id)a2 position:(long long)a3;
+ (void)_registerOnceForServerConnectionDiedNotification;
+ (void)_backgroundBlurApertureChanged:(id)a0;
+ (long long)backgroundBlurControlMode;
+ (void)setAllowsSuspendedPreferredCameras:(BOOL)a0;
+ (id)continuityCaptureLastUsedDate;
+ (long long)centerStageControlMode;
+ (struct AudioValueRange { double x0; double x1; })backgroundBlurApertureRange;
+ (id)defaultDeviceWithDeviceType:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)devicesForDefaultDeviceSupport:(BOOL)a0 includeAudioDevices:(BOOL)a1;
+ (void)setCenterStageControlMode:(long long)a0;
+ (BOOL)isEligibleForStudioLighting;
+ (id)userPreferredCamera;
+ (void)_setUpCameraHistoryOnce;
+ (long long)portraitEffectStudioLightQuality;
+ (void)_activeMicrophoneModeChanged:(id)a0;
+ (void)setUpStudioLightingStateOnce;
+ (long long)centerStageFramingMode;
+ (long long)authorizationStatusForMediaType:(id)a0;
+ (BOOL)isStudioLightEnabled;
+ (float)studioLightingIntensityDefault;
+ (void)_filterConnectedLegacyDevices:(id)a0;
+ (void)setUpReactionEffectsStateOnce;
+ (void)_preferredMicrophoneModeChanged:(id)a0;
+ (BOOL)allowsSuspendedPreferredCameras;
+ (BOOL)isCinematicFramingEnabled;
+ (id)deviceWithUniqueID:(id)a0;
+ (long long)preferredMicrophoneMode;
+ (void)_reactionTriggered:(id)a0;
+ (void)setControlCenterVideoEffectUnavailableReasonsForVideoEffect:(id)a0 reasons:(unsigned long long)a1;
+ (BOOL)reactionEffectsEnabledDefault;
+ (BOOL)reactionEffectGesturesEnabledDefault;
+ (void)setCenterStageEnabled:(BOOL)a0;
+ (void)observeSuppressVideoEffectsForDeviceID:(id)a0 handler:(id /* block */)a1;
+ (id)defaultDeviceWithMediaType:(id)a0;
+ (id)_devicesWithPriorRegisteredDevices:(id)a0;
+ (BOOL)isStudioLightingEnabled;
+ (void)removeObserver:(id)a0 forKeyPath:(id)a1;
+ (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
+ (float)studioLightingIntensity;
+ (void)setUpCenterStageStateOnce;
+ (id)systemPreferredCamera;
+ (void)_gesturesEnabledChanged:(id)a0;
+ (float)backgroundBlurApertureDefault;
+ (void)didChangeValueForKey:(id)a0;
+ (void)setReactionEffectGesturesEnabled:(BOOL)a0;
+ (id)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)_defaultDeviceWithDeviceType:(id)a0 mediaType:(id)a1 position:(long long)a2 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a3;

- (long long)torchMode;
- (void)setFlashMode:(long long)a0;
- (BOOL)isTorchAvailable;
- (long long)digitalFlashMode;
- (long long)overheadCameraMode;
- (void)startPanningAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)unhide;
- (float)lensPosition;
- (float)torchLevel;
- (void)resetFraming;
- (void)setProvidesStortorgetMetadata:(BOOL)a0;
- (void)performReactionEffect:(id)a0;
- (BOOL)hasTorch;
- (float)ISO;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centerStageRectOfInterest;
- (void)close;
- (void)setManualFramingEnabled:(BOOL)a0;
- (struct { int x0; int x1; })maxH264PhotoDimensions;
- (float)focalLength;
- (long long)flashMode;
- (BOOL)isRampingVideoZoom;
- (id)cameraPoseMatrix;
- (BOOL)hevcAllowBFramesForHighCTUCount;
- (id)digitalFlashSceneForPhotoOutput;
- (BOOL)isFlashActive;
- (float)exposureTargetBias;
- (id)init;
- (BOOL)isCinematicVideoFocusAtPointSupported;
- (long long)focusMode;
- (long long)activePrimaryConstituentDeviceSwitchingBehavior;
- (void)setActiveDepthDataFormat:(id)a0;
- (void)setFocusMode:(long long)a0;
- (int)hevcTurboModeVersion;
- (void)dealloc;
- (BOOL)isHEVCRelaxedAverageBitRateTargetSupported;
- (id)fallbackPrimaryConstituentDevices;
- (void)setVideoMinFrameDurationOverride:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forOwner:(id)a1;
- (long long)position;
- (id)hardwareUniformType;
- (void)setVideoHDREnabled:(BOOL)a0;
- (BOOL)isVideoStabilizationSupported;
- (BOOL)isVariableFrameRateVideoCaptureEnabled;
- (void)setVariableFrameRateVideoCaptureEnabled:(BOOL)a0;
- (void)_setVideoHDREnabled:(BOOL)a0 forceResetVideoHDRSuspended:(BOOL)a1;
- (BOOL)_isFlashScene;
- (BOOL)isFaceDetectionSupported;
- (BOOL)isOpen;
- (id)availableBoxedMetadataFormatDescriptions;
- (BOOL)supportsMultiCamCaptureWithDevice:(id)a0;
- (BOOL)isHEVCSupported;
- (void)rampToVideoZoomFactor:(float)a0 withTuning:(long long)a1;
- (void)performOneShotFraming;
- (BOOL)isVideoHDRSuspended;
- (void)setFocusPointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (void)setVideoStabilizationStrength:(long long)a0;
- (BOOL)isAdjustingFocus;
- (void)enumerateCMIOExtensionPropertiesWithBlock:(id /* block */)a0;
- (BOOL)isWideColorSupported;
- (void)setVideoHDRSuspended:(BOOL)a0;
- (void)setActiveColorSpace:(long long)a0;
- (struct { float x0; float x1; float x2; })deviceWhiteBalanceGainsForChromaticityValues:(struct { float x0; float x1; })a0;
- (struct { float x0; float x1; float x2; })deviceWhiteBalanceGains;
- (BOOL)isFlashAvailable;
- (BOOL)isVideoZoomSmoothingSupported;
- (id)constituentDeviceWithDeviceType:(id)a0;
- (BOOL)isTimeOfFlightProjectorModeSupported:(long long)a0;
- (BOOL)isTorchActive;
- (id)supportedMetadataObjectIdentifiers;
- (void)updateUserPreferredCameraOverride:(BOOL)a0;
- (BOOL)isAutoFocusRangeRestrictionSupported;
- (void)panWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)supportsAVCaptureSessionPreset:(id)a0;
- (struct { float x0; float x1; })chromaticityValuesForDeviceWhiteBalanceGains:(struct { float x0; float x1; float x2; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })exposureDuration;
- (id)continuityDeviceUniqueID;
- (id)_digitalFlashExposureTimes;
- (BOOL)isContinuityCamera;
- (BOOL)wideAngleCameraSourcesFromUltraWide;
- (void)setOverheadCameraMode:(long long)a0;
- (BOOL)isAdjustingExposure;
- (void)setNonDestructiveCropAspectRatio:(long long)a0;
- (BOOL)isNonDestructiveCropEnabled;
- (id)serializedProcessingSettings;
- (BOOL)isFlashModeSupported:(long long)a0;
- (void)setActiveMaxExposureDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (double)dualCameraSwitchOverVideoZoomFactor;
- (BOOL)isHEVCPreferred;
- (void)setAutomaticallyAdjustsFaceDrivenAutoExposureEnabled:(BOOL)a0;
- (void)rampExponentiallyToVideoZoomFactor:(float)a0 withDuration:(double)a1;
- (void)updateStreamingDeviceHistory;
- (void)setTimeLapseCaptureRate:(float)a0;
- (BOOL)isFocusedAtMacro;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isSmoothAutoFocusSupported;
- (id)virtualDeviceSwitchOverVideoZoomFactors;
- (id)systemPressureState;
- (void)updateUserPreferredCameraHistory;
- (int)powerConsumptionAt30FPSForOISMode:(int)a0;
- (void)setFallbackPrimaryConstituentDevices:(id)a0;
- (id)preferredPrimaryConstituentDevice;
- (struct CGPoint { double x0; double x1; })exposurePointOfInterest;
- (void)setClientAudioClockDeviceUID:(id)a0;
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;
- (BOOL)eyeClosedDetectionEnabled;
- (id)bravoCameraSelectionBehavior;
- (BOOL)isAutoRedEyeReductionSupported;
- (BOOL)isFaceDrivenAutoFocusEnabled;
- (void)setSpatialOverCaptureEnabled:(BOOL)a0;
- (float)ISODigitalThreshold;
- (void)setFaceDrivenAutoFocusEnabled:(BOOL)a0;
- (void)resetVideoMinFrameDurationOverrideForOwner:(id)a0;
- (void)setCenterStageFieldOfViewRestrictedToWide:(BOOL)a0;
- (void)setExposureTargetBias:(float)a0 completionHandler:(id /* block */)a1;
- (BOOL)automaticallyAdjustsFaceDrivenAutoFocusEnabled;
- (long long)deskViewCameraMode;
- (long long)_digitalFlashStatus;
- (void)setAutomaticallyAdjustsFaceDrivenAutoFocusEnabled:(BOOL)a0;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)a0;
- (void)setSmoothAutoFocusEnabled:(BOOL)a0;
- (BOOL)open:(id *)a0;
- (BOOL)isConstituentPhotoCalibrationDataSupported;
- (void)setGeometricDistortionCorrectionEnabled:(BOOL)a0;
- (unsigned long long)activePrimaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
- (BOOL)isSmileDetectionSupported;
- (BOOL)isTorchModeSupported:(long long)a0;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)a0;
- (BOOL)isCenterStageFieldOfViewRestrictedToWide;
- (id)supportedFallbackPrimaryConstituentDevices;
- (void)setWhiteBalanceMode:(long long)a0;
- (long long)autoFocusRangeRestriction;
- (void)setLowLightVideoCaptureEnabled:(BOOL)a0;
- (BOOL)isHidden;
- (void)_setCinematicVideoEnabled:(BOOL)a0;
- (BOOL)isBackgroundBlurActive;
- (void)setAutoFocusRangeRestriction:(long long)a0;
- (long long)activeColorSpace;
- (unsigned long long)primaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
- (BOOL)isSubjectAreaChangeMonitoringEnabled;
- (long long)exposureMode;
- (BOOL)isActiveVideoMaxFrameDurationSet;
- (BOOL)isLowLightVideoCaptureEnabled;
- (BOOL)isSoonToBeDisconnected;
- (double)manualFramingMinZoomFactor;
- (id)description;
- (void)setGlobalToneMappingEnabled:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeMaxExposureDuration;
- (BOOL)automaticallyAdjustsVideoHDREnabled;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeMaxExposureDurationClientOverride;
- (BOOL)isSmoothAutoFocusEnabled;
- (BOOL)isPortraitEffectActive;
- (unsigned long long)degradedCaptureQualityFactors;
- (BOOL)isMotionCompensatedTemporalFilteringSupported;
- (BOOL)isStudioLightingActive;
- (BOOL)automaticallyAdjustsImageControlMode;
- (void)unlockForConfiguration;
- (BOOL)isAudioCaptureModeSupported:(long long)a0;
- (float)manualFramingPanningAngleY;
- (BOOL)isWhiteBalanceModeSupported:(long long)a0;
- (BOOL)addCMIOExtensionPropertyValueChangeHandler:(id /* block */)a0;
- (BOOL)isHEIFSupported;
- (float)manualFramingPanningAngleX;
- (float)lensAperture;
- (BOOL)isGazeSelectionEnabled;
- (long long)shallowDepthOfFieldEffectStatus;
- (void)cancelVideoZoomRamp;
- (BOOL)isFlashSceneDetectedForPhotoOutput;
- (void)setCachesFigCaptureSourceConfigurationChanges:(BOOL)a0;
- (BOOL)isSpatialOverCaptureEnabled;
- (BOOL)isFocusModeSupported:(long long)a0;
- (BOOL)isImageControlModeSupported:(long long)a0;
- (long long)fallbackAudioCaptureModeIfApplicableForCurrentRoute:(long long)a0;
- (BOOL)isDeskViewCameraModeSupported:(long long)a0;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)a0;
- (BOOL)cachesFigCaptureSourceConfigurationChanges;
- (long long)whiteBalanceMode;
- (void)setAutomaticallyAdjustsVideoHDREnabled:(BOOL)a0;
- (void)setDigitalFlashMode:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceRectangle;
- (BOOL)hasMediaType:(id)a0;
- (id)companionDeskViewCamera;
- (void)setFaceDrivenAutoExposureEnabled:(BOOL)a0;
- (BOOL)isResponsiveCaptureWithDepthSupported;
- (BOOL)automaticallyAdjustsFaceDrivenAutoExposureEnabled;
- (void)setTimeOfFlightProjectorMode:(long long)a0;
- (struct { float x0; float x1; float x2; })deviceWhiteBalanceGainsForTemperatureAndTintValues:(struct { float x0; float x1; })a0;
- (BOOL)isManualFramingEnabled;
- (struct { float x0; float x1; })temperatureAndTintValuesForDeviceWhiteBalanceGains:(struct { float x0; float x1; float x2; })a0;
- (BOOL)providesStortorgetMetadata;
- (id)clientAudioClockDeviceUID;
- (BOOL)hasFlash;
- (BOOL)appliesSessionPresetMaxIntegrationTimeOverrideToActiveFormat;
- (BOOL)setValue:(id)a0 forCMIOExtensionProperty:(id)a1 error:(id *)a2;
- (void)setDeskViewCameraMode:(long long)a0;
- (id)debugDescription;
- (int)minMacroblocksForHighProfileUpTo30fps;
- (BOOL)startUsingDevice:(id *)a0;
- (void)setContinuousZoomWithDepthEnabled:(BOOL)a0;
- (BOOL)isFaceDrivenAutoExposureEnabled;
- (void)rampToVideoZoomFactor:(double)a0 withRate:(float)a1;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)a0;
- (void)setNonDestructiveCropEnabled:(BOOL)a0;
- (BOOL)isExposureModeSupported:(long long)a0;
- (void)setSmileDetectionEnabled:(BOOL)a0;
- (BOOL)isLockedForConfiguration;
- (void)setExposureModeCustomWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 ISO:(float)a1 completionHandler:(id /* block */)a2;
- (void)_performReaction:(id)a0;
- (long long)timeOfFlightProjectorMode;
- (void)setEyeClosedDetectionEnabled:(BOOL)a0;
- (void)setExposurePointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (void)setFocusModeLockedWithLensPosition:(float)a0 completionHandler:(id /* block */)a1;
- (void)setTorchMode:(long long)a0;
- (void)setManualFramingPanningAngleX:(float)a0;
- (double)manualFramingDefaultZoomFactor;
- (BOOL)isCameraIntrinsicMatrixDeliverySupported;
- (BOOL)lockForConfiguration:(id *)a0;
- (void)_setPhotoSettingsForSceneMonitoring:(id)a0;
- (void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(struct { float x0; float x1; float x2; })a0 completionHandler:(id /* block */)a1;
- (void)setEyeDetectionEnabled:(BOOL)a0;
- (void)setActiveDepthDataMinFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)minimumFocusDistance;
- (void)_setCenterStageAllowed:(BOOL)a0;
- (double)manualFramingMaxZoomFactor;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeDepthDataMinFrameDuration;
- (BOOL)isGeometricDistortionCorrectionSupported;
- (BOOL)isVideoHDREnabled;
- (BOOL)isLockingFocusWithCustomLensPositionSupported;
- (long long)primaryConstituentDeviceSwitchingBehavior;
- (BOOL)isContinuousZoomWithDepthEnabled;
- (void)stopUsingDevice;
- (void)setPrimaryConstituentDeviceSwitchingBehavior:(long long)a0 restrictedSwitchingBehaviorConditions:(unsigned long long)a1;
- (void)removeCMIOExtensionPropertyValueChangeHandler:(id /* block */)a0;
- (void)_setCameraCalibrationDataDeliveryEnabled:(BOOL)a0;
- (BOOL)isMachineReadableCodeDetectionSupported;
- (BOOL)isProResSupported;
- (BOOL)isEyeDetectionSupported;
- (void)updateUserPreferredCameraHistoryForKey:(id)a0;
- (struct OpaqueCMClock { } *)deviceClock;
- (void)setCenterStageRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFaceDetectionDrivenImageProcessingEnabled;
- (BOOL)isExposurePointOfInterestSupported;
- (BOOL)_isDepthDataDeliveryEnabled;
- (void)_checkTCCAccess;
- (int)faceRectangleAngle;
- (BOOL)isFocusPointOfInterestSupported;
- (void)setImageControlMode:(long long)a0;
- (void)_setConnected:(BOOL)a0;
- (int)faceDrivenAEAFMode;
- (id)activePrimaryConstituentDevice;
- (BOOL)isCinematicFramingActive;
- (void)setManualFramingPanningAngleY:(float)a0;
- (float)exposureTargetOffset;
- (id)copyValueForCMIOExtensionProperty:(id)a0 error:(id *)a1;
- (struct { int x0; int x1; })maxH264VideoDimensions;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)supportedVisionDataProperties;
- (BOOL)isGlobalToneMappingEnabled;
- (void)_setBackgroundBlurAllowed:(BOOL)a0;
- (void)_setDepthDataDeliveryEnabled:(BOOL)a0;
- (float)minExposureTargetBias;
- (BOOL)isHDRSceneDetectedForPhotoOutput;
- (BOOL)isCenterStageActive;
- (BOOL)smileDetectionEnabled;
- (BOOL)isEyeClosedDetectionSupported;
- (id)deviceType;
- (void)setVideoZoomFactor:(double)a0;
- (BOOL)isActiveVideoMinFrameDurationSet;
- (double)videoZoomFactor;
- (double)minAvailableVideoZoomFactor;
- (BOOL)setTorchModeOnWithLevel:(float)a0 error:(id *)a1;
- (void)setCinematicVideoFocusAtPoint:(struct CGPoint { double x0; double x1; })a0 objectID:(long long)a1 isHardFocus:(BOOL)a2 isFixedPlaneFocus:(BOOL)a3;
- (long long)imageControlMode;
- (double)maxAvailableVideoZoomFactor;
- (BOOL)isOverheadCameraModeSupported:(long long)a0;
- (struct CGPoint { double x0; double x1; })focusPointOfInterest;
- (float)maxWhiteBalanceGain;
- (BOOL)eyeDetectionEnabled;
- (BOOL)isManualFramingSupported;
- (float)maxExposureTargetBias;
- (struct { float x0; float x1; float x2; })grayWorldDeviceWhiteBalanceGains;
- (void)_setStudioLightingAllowed:(BOOL)a0;
- (void)setExposureMode:(long long)a0;
- (int)minMacroblocksForHighProfileAbove30fps;
- (BOOL)isLensStabilizationSupported;
- (void)setGazeSelectionEnabled:(BOOL)a0;
- (BOOL)isContinuousZoomWithDepthSupported;
- (BOOL)isGeometricDistortionCorrectionEnabled;
- (id)activeDepthDataFormat;
- (BOOL)usesQuantizationScalingMatrix_H264_Steep_16_48;
- (BOOL)shouldAudioCaptureModeTriggerGraphRebuildOnAudioRouteChange:(long long)a0;
- (BOOL)isCenterStageRectOfInterestSupported;
- (long long)nonDestructiveCropAspectRatio;
- (id)AVVideoSettingsForSessionPreset:(id)a0;
- (float)timeLapseCaptureRate;
- (BOOL)canPerformReactionEffects;
- (BOOL)isAdjustingWhiteBalance;
- (long long)timeOfFlightBankCount;
- (BOOL)isLockingWhiteBalanceWithCustomDeviceGainsSupported;
- (long long)videoStabilizationStrength;
- (BOOL)isStudioLightActive;
- (BOOL)isVirtualDevice;
- (void)_setReactionsAllowed:(BOOL)a0;
- (BOOL)_startUsingDevice:(id *)a0;
- (void)_stopUsingDevice;
- (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
- (id)availableReactionTypes;
- (id)companionOverheadCamera;
- (id)constituentDevices;
- (id)initSubclass;
- (BOOL)isLowLightBoostEnabled;
- (BOOL)isLowLightBoostSupported;
- (void)performEffectForReaction:(id)a0;
- (BOOL)reactionEffectsActive;
- (id)reactionEffectsAvailable;
- (id)reactionEffectsInProgress;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)a0;
- (void)updateReactionsInProgress:(id)a0;

@end
