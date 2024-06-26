@class NSMutableDictionary, UTType, AVCaptureDevice, NSDictionary, NSObject, AVCaptureSystemPressureState, NSMutableArray, NSString, AVCaptureDeviceControlRequestQueue, NSArray, NSData, AVWeakReference, AVCaptureDeviceFormat, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {
    NSObject<OS_dispatch_queue> *_fcsQueue;
    struct OpaqueFigCaptureSource { } *_fcs;
    NSDictionary *_fcsAttributes;
    NSObject<OS_dispatch_queue> *_devicePropsQueue;
    NSString *_fcsUID;
    long long _position;
    unsigned int _specialDeviceType;
    NSString *_creatorID;
    unsigned int _deviceID;
    NSString *_companionDeskViewCameraUUID;
    NSString *_localizedName;
    NSArray *_formats;
    AVCaptureDeviceFormat *_activeFormat;
    AVCaptureDeviceFormat *_activeDepthDataFormat;
    NSString *_activeSessionPreset;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _activeDepthDataMinFrameDuration;
    BOOL _continuousZoomWithDepthSupported;
    BOOL _continuousZoomWithDepthEnabled;
    BOOL _continuousZoomWithDepthActive;
    BOOL _cinematicVideoZoomEnabled;
    BOOL _widestFallbackPrimaryConstituentDeviceRemovedForDepthDataDelivery;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _videoMinFrameDurationOverride;
    id _videoMinFrameDurationOverrideOwner;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _activeMinFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _activeMinFrameDurationSetByClient;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _activeMaxFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _activeMaxFrameDurationSetByClient;
    BOOL _cachesFigCaptureSourceConfigurationChanges;
    long long _focusMode;
    struct CGPoint { double x; double y; } _focusPointOfInterest;
    float _lensPositionKVO;
    BOOL _adjustingFocus;
    long long _autoFocusRangeRestriction;
    BOOL _smoothAutoFocusEnabled;
    BOOL _automaticallyAdjustsFaceDrivenAutoFocusEnabled;
    BOOL _cameraOption9;
    BOOL _cameraOption10;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cameraFaceResult29;
    BOOL _cameraFaceResult30;
    long long _exposureMode;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _exposureDurationKVO;
    float _ISOKVO;
    float _exposureTargetBias;
    float _exposureTargetOffsetKVO;
    struct CGPoint { double x; double y; } _exposurePointOfInterest;
    BOOL _automaticallyAdjustsFaceDrivenAutoExposureEnabled;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _activeMaxExposureDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _activeMaxExposureDurationClientOverride;
    BOOL _adjustingExposure;
    BOOL _waitingForExposureAdjustmentBeforeLocking;
    long long _wbMode;
    struct { float redGain; float greenGain; float blueGain; } _deviceWhiteBalanceGainsKVO;
    struct { float redGain; float greenGain; float blueGain; } _grayWorldDeviceWhiteBalanceGainsKVO;
    BOOL _adjustingWB;
    unsigned long long _wbCalibrationCount;
    struct { float x0; float x1; } *_wbCalibrationTemperatures;
    double **_wbCalibrationMatrices;
    double _wbLastPredictedTemp;
    double _wbSeedTemp;
    BOOL _wbSeedEnabled;
    unsigned long long _wbTemperatureIterations;
    BOOL _providesStortorgetMetadata;
    BOOL _automaticallyAdjustsImageControlMode;
    AVCaptureDeviceControlRequestQueue *_manualFocusControlRequests;
    AVCaptureDeviceControlRequestQueue *_manualExposureControlRequests;
    AVCaptureDeviceControlRequestQueue *_biasedExposureControlRequests;
    AVCaptureDeviceControlRequestQueue *_manualWhiteBalanceControlRequests;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastCustomExposureDuration;
    float _lastCustomExposureISO;
    long long _imageControlMode;
    long long _flashMode;
    BOOL _avcaptureDeviceAutoFlashEnabled;
    BOOL _photoOutputFlashSceneEnabled;
    BOOL _flashActive;
    BOOL _flashSceneDetectedForPhotoOutput;
    long long _digitalFlashMode;
    NSDictionary *_digitalFlashSceneForPhotoOutput;
    BOOL _flashAvailable;
    long long _torchMode;
    BOOL _torchActive;
    float _torchLevel;
    BOOL _torchAvailable;
    BOOL _isConnected;
    BOOL _isSuspended;
    BOOL _isHidden;
    BOOL _isReadyToUnhide;
    BOOL _subjectMonitoringEnabled;
    int _faceDrivenAEAFMode;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _faceRectangle;
    int _faceRectangleAngle;
    BOOL _automaticallyAdjustsVideoHDREnabled;
    BOOL _videoHDREnabled;
    BOOL _videoHDRSuspended;
    BOOL _HDRSceneDetectedForPhotoOutput;
    BOOL _isStillImageStabilizationScene;
    long long _activeColorSpace;
    float _videoZoomFactor;
    float _videoZoomRampTarget;
    int _videoZoomRampCounter;
    float _videoZoomRampAcceleration;
    double _minAvailableVideoZoomFactor;
    double _maxAvailableVideoZoomFactor;
    BOOL _depthDataDeliveryEnabled;
    long long _shallowDepthOfFieldEffectStatus;
    BOOL _cameraCalibrationDataDeliveryEnabled;
    BOOL _focusedAtMacro;
    AVCaptureDevice *_activePrimaryConstituentDevice;
    long long _activePrimaryConstituentDeviceSwitchingBehavior;
    unsigned long long _activePrimaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
    long long _primaryConstituentDeviceSwitchingBehavior;
    unsigned long long _primaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
    NSArray *_supportedFallbackPrimaryConstituentDevices;
    NSArray *_fallbackPrimaryConstituentDevices;
    AVCaptureDevice *_preferredPrimaryConstituentDevice;
    AVWeakReference *_weakReference;
    NSMutableArray *_captureSourceSupportedMetadata;
    NSDictionary *_supportedOptionalFaceDetectionFeatures;
    BOOL _eyeDetectionEnabled;
    BOOL _eyeClosedDetectionEnabled;
    BOOL _smileDetectionEnabled;
    NSArray *_availableBoxedMetadataFormatDescriptions;
    NSDictionary *_sessionPresetCompressionSettings;
    NSDictionary *_h264EncoderLimitations;
    NSDictionary *_hevcEncoderSettings;
    NSObject<OS_dispatch_queue> *_observedHighFrequencyPropertiesQueue;
    NSMutableDictionary *_observedHighFrequencyPropertyCounts;
    NSMutableDictionary *_propertyToFigCaptureSourcePropertyMap;
    NSObject<OS_dispatch_semaphore> *_serverConnectionDiedSemaphore;
    NSMutableDictionary *_cachedFigCaptureSourceProperties;
    AVCaptureSystemPressureState *_systemPressureState;
    int _highestSystemPressureLevelEncountered;
    BOOL _lowLightVideoCaptureEnabled;
    BOOL _spatialOverCaptureEnabled;
    BOOL _nonDestructiveCropEnabled;
    long long _nonDestructiveCropAspectRatio;
    struct CGSize { double width; double height; } _normalizedNonDestructiveCropSize;
    BOOL _geometricDistortionCorrectionEnabled;
    BOOL _globalToneMappingEnabled;
    BOOL _variableFrameRateVideoCaptureEnabled;
    long long _videoStabilizationStrength;
    long long _timeOfFlightProjectorMode;
    NSData *_cameraPoseMatrix;
    unsigned long long _degradedCaptureQualityFactors;
    BOOL _degradedCaptureQualityFactorsNeedInitialization;
    BOOL _walletDegradesCaptureQuality;
    BOOL _batteryPackDegradesCaptureQuality;
    BOOL _centerStageSupported;
    BOOL _centerStageActive;
    BOOL _centerStageAllowedByClient;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _centerStageRectOfInterest;
    BOOL _backgroundBlurSupported;
    BOOL _backgroundBlurActive;
    BOOL _backgroundBlurAllowedByClient;
    BOOL _studioLightingSupported;
    BOOL _studioLightingActive;
    BOOL _studioLightingAllowedByClient;
    BOOL _reactionEffectsSupported;
    BOOL _reactionEffectsActive;
    BOOL _reactionEffectsAllowedByClient;
    long long _portraitEffectStudioLightQuality;
    float _backgroundBlurAperture;
    float _studioLightingIntensity;
    BOOL _gesturesEnabled;
    long long _deskViewCameraMode;
    BOOL _panningStarted;
    BOOL _centerStageFieldOfViewRestrictedToWide;
    BOOL _manualFramingSupported;
    BOOL _manualFramingEnabled;
    float _manualFramingPanningAngleX;
    float _manualFramingPanningAngleY;
    double _manualFramingMinZoomFactor;
    double _manualFramingMaxZoomFactor;
    double _manualFramingDefaultZoomFactor;
    BOOL _gazeSelectionEnabled;
    NSMutableArray *_cmioActiveExtensionPropertyListenerHandlers;
    NSUUID *_continuityDeviceUniqueID;
    UTType *_hardwareUniformType;
    BOOL _dockedTrackingEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_cameraAccessIsEnabled;
+ (void)setUserPreferredCamera:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)cameraInfoForCreatorID:(id)a0 uniqueID:(id)a1 specialDeviceType:(unsigned int)a2 centerStageSupported:(BOOL)a3;
+ (void)_reconnectDevices:(id)a0;
+ (id)_defaultDeviceWithDeviceType:(id)a0 mediaTypes:(id)a1 position:(long long)a2 cameraOverrideHistoryAllowed:(BOOL)a3 cameraOverrideHistorySuspendedAllowed:(BOOL)a4 wombatsMustBeMagic:(BOOL)a5 userPreferredCameraHistorySuspendedAllowed:(BOOL)a6 invalidSpecialDeviceTypes:(id)a7;
+ (id)_devices;
+ (void)initialize;
+ (void)updateUserPreferredCameraOverride:(BOOL)a0 cameraInfo:(id)a1;
+ (id)_prioritizedDeviceList:(id)a0;
+ (void)setUserPreferredCamera:(id)a0 forClientPreferenceDomain:(id)a1;
+ (void)updateUserPreferredCameraOverrideHistoryWithDevice:(id)a0 setOverride:(BOOL)a1;
+ (id)_cameraHistoryDispatchQueue;
+ (void)_initiateRefreshPreferredCameraProperties:(BOOL)a0;
+ (void)_insurePreferredCameraGlobal:(id *)a0 globalName:(id)a1 preferredCamera:(id)a2;
+ (id)_userPreferredCameraOverrideHistoryKey;
+ (id)_newFigCaptureSources;
+ (id)_userPreferredCameraHistoryKeyForClientPreferencesDomain:(id)a0;
+ (void)setAllowsSuspendedPreferredCameras:(BOOL)a0;
+ (id)userPreferredCamera;
+ (void)_setUpCameraHistoryOnce;
+ (BOOL)allowsSuspendedPreferredCameras;
+ (id)_devicesWithPriorRegisteredDevices:(id)a0;
+ (void)_refreshPreferredCameraProperties:(BOOL)a0;
+ (id)systemPreferredCamera;

- (struct OpaqueFigCaptureSource { } *)figCaptureSource;
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
- (BOOL)hasTorch;
- (float)ISO;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centerStageRectOfInterest;
- (id)manufacturer;
- (struct { float x0; float x1; float x2; })_deviceWhiteBalanceGainsForChromaticityValues:(struct { float x0; float x1; })a0 temperature:(double)a1;
- (void)_incrementObserverCountForHighFrequencyProperty:(id)a0;
- (BOOL)_isCenterStageActiveForEnabled:(BOOL)a0;
- (void)setManualFramingEnabled:(BOOL)a0;
- (struct { int x0; int x1; })maxH264PhotoDimensions;
- (float)focalLength;
- (long long)flashMode;
- (BOOL)isRampingVideoZoom;
- (id)cameraPoseMatrix;
- (BOOL)_isBravoVariant;
- (BOOL)hevcAllowBFramesForHighCTUCount;
- (id)deviceFormatForSessionPreset:(id)a0 sourceVideoFormat:(unsigned int)a1;
- (id)digitalFlashSceneForPhotoOutput;
- (BOOL)isFlashActive;
- (id)_copyFormatsArray;
- (float)exposureTargetBias;
- (id)init;
- (BOOL)_isWBSeedEnabled;
- (BOOL)isCinematicVideoFocusAtPointSupported;
- (long long)focusMode;
- (long long)activePrimaryConstituentDeviceSwitchingBehavior;
- (BOOL)isReadyToUnhide;
- (void)setActiveDepthDataFormat:(id)a0;
- (void)setFocusMode:(long long)a0;
- (int)hevcTurboModeVersion;
- (void)dealloc;
- (BOOL)isHEVCRelaxedAverageBitRateTargetSupported;
- (void)setDockedTrackingEnabled:(BOOL)a0;
- (id)fallbackPrimaryConstituentDevices;
- (void)setVideoMinFrameDurationOverride:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forOwner:(id)a1;
- (long long)position;
- (int)figCaptureSourcePosition;
- (id)formats;
- (id)hardwareUniformType;
- (void)setVideoHDREnabled:(BOOL)a0;
- (BOOL)isVideoStabilizationSupported;
- (BOOL)isVariableFrameRateVideoCaptureEnabled;
- (void)setVariableFrameRateVideoCaptureEnabled:(BOOL)a0;
- (void)_setVideoHDREnabled:(BOOL)a0 forceResetVideoHDRSuspended:(BOOL)a1;
- (BOOL)_isFlashScene;
- (BOOL)isFaceDetectionSupported;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_updateCenterStageActiveForEnabled:(BOOL)a0 updateDependentProperties:(BOOL)a1;
- (id)availableBoxedMetadataFormatDescriptions;
- (BOOL)supportsMultiCamCaptureWithDevice:(id)a0;
- (BOOL)isConnected;
- (BOOL)isHEVCSupported;
- (void)rampToVideoZoomFactor:(float)a0 withTuning:(long long)a1;
- (void)performOneShotFraming;
- (BOOL)isVideoHDRSuspended;
- (void)setFocusPointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (void)setVideoStabilizationStrength:(long long)a0;
- (BOOL)isAdjustingFocus;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeVideoMaxFrameDurationSetByClient;
- (void)_setFlashSceneDetectedForPhotoOutput:(BOOL)a0;
- (void)enumerateCMIOExtensionPropertiesWithBlock:(id /* block */)a0;
- (BOOL)isWideColorSupported;
- (void)setVideoHDRSuspended:(BOOL)a0;
- (void)setActiveColorSpace:(long long)a0;
- (struct { float x0; float x1; float x2; })deviceWhiteBalanceGainsForChromaticityValues:(struct { float x0; float x1; })a0;
- (struct { float x0; float x1; float x2; })deviceWhiteBalanceGains;
- (id)fallbackPrimaryConstituentDevicesAsDeviceTypes;
- (void)_updateGesturesEnabled:(BOOL)a0;
- (id)_copyFigCaptureSourceProperty:(struct __CFString { } *)a0;
- (BOOL)isFlashAvailable;
- (BOOL)isVideoZoomSmoothingSupported;
- (BOOL)isStillImageStabilizationScene;
- (id)constituentDeviceWithDeviceType:(id)a0;
- (BOOL)isTimeOfFlightProjectorModeSupported:(long long)a0;
- (BOOL)isTorchActive;
- (id)supportedMetadataObjectIdentifiers;
- (void)updateUserPreferredCameraOverride:(BOOL)a0;
- (void)_setTorchActive:(BOOL)a0;
- (BOOL)isAutoFocusRangeRestrictionSupported;
- (void)panWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)supportsAVCaptureSessionPreset:(id)a0;
- (void)_updateReactionEffectsActiveForEnabled:(BOOL)a0;
- (struct { float x0; float x1; })chromaticityValuesForDeviceWhiteBalanceGains:(struct { float x0; float x1; float x2; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })exposureDuration;
- (id)continuityDeviceUniqueID;
- (id)_digitalFlashExposureTimes;
- (BOOL)isContinuityCamera;
- (BOOL)wideAngleCameraSourcesFromUltraWide;
- (void)setOverheadCameraMode:(long long)a0;
- (BOOL)isAdjustingExposure;
- (void)setNonDestructiveCropAspectRatio:(long long)a0;
- (void)_updateMinMaxVideoZoomFactorsWithMinZoomFactorFromCameraSelection:(double)a0;
- (BOOL)isNonDestructiveCropEnabled;
- (void)_setFlashAvailable:(BOOL)a0;
- (void)_computeMinVideoZoomFactorOut:(double *)a0 maxVideoZoomFactorOut:(double *)a1 defaultVideoZoomFactorOut:(double *)a2 centerStageActiveOverride:(BOOL)a3 resetZoomFactor:(BOOL)a4;
- (id)serializedProcessingSettings;
- (void)_setIsStillImageStabilizationScene:(BOOL)a0;
- (BOOL)isFlashModeSupported:(long long)a0;
- (void)setActiveMaxExposureDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_cameraInfo;
- (double)dualCameraSwitchOverVideoZoomFactor;
- (int)figCaptureSourceDeviceType;
- (BOOL)isHEVCPreferred;
- (void)setAutomaticallyAdjustsFaceDrivenAutoExposureEnabled:(BOOL)a0;
- (void)rampExponentiallyToVideoZoomFactor:(float)a0 withDuration:(double)a1;
- (id)modelID;
- (BOOL)_isBackgroundBlurActiveForEnabled:(BOOL)a0;
- (void)updateStreamingDeviceHistory;
- (void)setTimeLapseCaptureRate:(float)a0;
- (BOOL)isFocusedAtMacro;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isSmoothAutoFocusSupported;
- (id)virtualDeviceSwitchOverVideoZoomFactors;
- (BOOL)isObjectDetectionSupported;
- (int)_setFocusWithMode:(long long)a0 lensPosition:(float)a1 requestID:(int)a2;
- (id)systemPressureState;
- (void)updateUserPreferredCameraHistory;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (int)powerConsumptionAt30FPSForOISMode:(int)a0;
- (void)_setCenterStageFramingMode:(long long)a0;
- (void)setFallbackPrimaryConstituentDevices:(id)a0;
- (void)_setGlobalToneMappingEnabledInternal:(BOOL)a0;
- (void)_setReactionEffectsAllowed:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeVideoMinFrameDuration;
- (id)preferredPrimaryConstituentDevice;
- (struct CGPoint { double x0; double x1; })exposurePointOfInterest;
- (void)_updateBackgroundBlurAperture:(float)a0;
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;
- (BOOL)eyeClosedDetectionEnabled;
- (id)bravoCameraSelectionBehavior;
- (int)_setFaceDetectionFeatureEnabled:(BOOL)a0 enabledState:(BOOL *)a1;
- (BOOL)isAutoRedEyeReductionSupported;
- (BOOL)isFaceDrivenAutoFocusEnabled;
- (void)setSpatialOverCaptureEnabled:(BOOL)a0;
- (float)ISODigitalThreshold;
- (void)setFaceDrivenAutoFocusEnabled:(BOOL)a0;
- (void)resetVideoMinFrameDurationOverrideForOwner:(id)a0;
- (BOOL)_centerStageRectOfInterestSupportedOnDevice;
- (void)setCenterStageFieldOfViewRestrictedToWide:(BOOL)a0;
- (void)_setDigitalFlashModeInternal:(long long)a0;
- (void)setExposureTargetBias:(float)a0 completionHandler:(id /* block */)a1;
- (int)_setTorchMode:(long long)a0 withLevel:(float)a1;
- (BOOL)automaticallyAdjustsFaceDrivenAutoFocusEnabled;
- (long long)deskViewCameraMode;
- (BOOL)isDiagnosticsTestSupported:(id)a0;
- (long long)_digitalFlashStatus;
- (void)setAutomaticallyAdjustsFaceDrivenAutoFocusEnabled:(BOOL)a0;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)a0;
- (id)_faceDetectionConfigurationDictionary;
- (void)setSmoothAutoFocusEnabled:(BOOL)a0;
- (BOOL)isConstituentPhotoCalibrationDataSupported;
- (void)_drainManualControlRequestQueue:(id)a0;
- (void)setGeometricDistortionCorrectionEnabled:(BOOL)a0;
- (id)_supportedOptionalFaceDetectionFeaturesDictionary;
- (BOOL)isPreviewQualityAdjustedPhotoFilterRenderingSupported;
- (unsigned long long)activePrimaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
- (void)_setImageControlMode:(long long)a0;
- (BOOL)_isStudioLightingActiveForEnabled:(BOOL)a0;
- (double)_whiteBalanceMixingFactorForTemperature:(double)a0;
- (id)uniqueID;
- (BOOL)isSmileDetectionSupported;
- (BOOL)isTorchModeSupported:(long long)a0;
- (struct { float x0; float x1; })_chromaticityValuesForDeviceWhiteBalanceGains:(struct { float x0; float x1; float x2; })a0 atMix:(double)a1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)a0;
- (BOOL)isCenterStageFieldOfViewRestrictedToWide;
- (id)supportedFallbackPrimaryConstituentDevices;
- (void)setWhiteBalanceMode:(long long)a0;
- (long long)autoFocusRangeRestriction;
- (void)setLowLightVideoCaptureEnabled:(BOOL)a0;
- (BOOL)isHidden;
- (void)_setCinematicVideoEnabled:(BOOL)a0;
- (BOOL)isBackgroundBlurActive;
- (void)setActiveVideoMinFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_initDegradedCaptureQualityFactors;
- (void)setAutoFocusRangeRestriction:(long long)a0;
- (unsigned long long)_wbTemperatureIterations;
- (long long)activeColorSpace;
- (unsigned long long)primaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
- (BOOL)isSubjectAreaChangeMonitoringEnabled;
- (void)_setWBSeedEnabled:(BOOL)a0;
- (long long)exposureMode;
- (id)runDiagnosticsWithTestType:(id)a0;
- (BOOL)isActiveVideoMaxFrameDurationSet;
- (BOOL)isLowLightVideoCaptureEnabled;
- (double)manualFramingMinZoomFactor;
- (BOOL)isDockedTrackingEnabled;
- (int)_setFigCaptureSourceProperty:(struct __CFString { } *)a0 withValue:(id)a1;
- (void)setGlobalToneMappingEnabled:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeMaxExposureDuration;
- (BOOL)automaticallyAdjustsVideoHDREnabled;
- (void)_decrementObserverCountForHighFrequencyProperty:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeMaxExposureDurationClientOverride;
- (void)setVideoZoomRampAcceleration:(float)a0;
- (id)_getFigCaptureSourceProperty:(struct __CFString { } *)a0;
- (BOOL)isSmoothAutoFocusEnabled;
- (BOOL)isPortraitEffectActive;
- (unsigned long long)degradedCaptureQualityFactors;
- (BOOL)isMotionCompensatedTemporalFilteringSupported;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (BOOL)isStudioLightingActive;
- (int)_orderInDevicesArray;
- (BOOL)automaticallyAdjustsImageControlMode;
- (void)unlockForConfiguration;
- (void)_populateSupportedFallbackPrimaryConstituentDevices;
- (unsigned int)specialDeviceType;
- (float)manualFramingPanningAngleY;
- (BOOL)isWhiteBalanceModeSupported:(long long)a0;
- (struct CGSize { double x0; double x1; })normalizedNonDestructiveCropSize;
- (int)_setFigCaptureSourceProperty:(struct __CFString { } *)a0 withValue:(id)a1 cacheOnly:(BOOL)a2;
- (void)_updateBackgroundBlurActiveForEnabled:(BOOL)a0;
- (BOOL)addCMIOExtensionPropertyValueChangeHandler:(id /* block */)a0;
- (BOOL)isHEIFSupported;
- (float)manualFramingPanningAngleX;
- (void)_setAdjustingWhiteBalance:(BOOL)a0;
- (float)lensAperture;
- (BOOL)isGazeSelectionEnabled;
- (double)_whiteBalanceTemperatureForMixingFactor:(double)a0;
- (long long)shallowDepthOfFieldEffectStatus;
- (void)cancelVideoZoomRamp;
- (BOOL)isFlashSceneDetectedForPhotoOutput;
- (void)setCachesFigCaptureSourceConfigurationChanges:(BOOL)a0;
- (void)_setVideoZoomFactor:(double)a0;
- (BOOL)isSpatialOverCaptureEnabled;
- (BOOL)isFocusModeSupported:(long long)a0;
- (id)localizedName;
- (BOOL)isImageControlModeSupported:(long long)a0;
- (void)_setMinAvailableVideoZoomFactor:(double)a0;
- (int)_setWhiteBalanceWithMode:(long long)a0 gains:(struct { float x0; float x1; float x2; })a1 requestID:(int)a2;
- (BOOL)isDeskViewCameraModeSupported:(long long)a0;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)cachesFigCaptureSourceConfigurationChanges;
- (long long)whiteBalanceMode;
- (void)setAutomaticallyAdjustsVideoHDREnabled:(BOOL)a0;
- (BOOL)_isStillImageStabilizationScene;
- (void)setDigitalFlashMode:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceRectangle;
- (void)_rampToVideoZoomFactor:(double)a0 withRate:(float)a1 duration:(double)a2 rampType:(int)a3 rampTuning:(int)a4;
- (BOOL)hasMediaType:(id)a0;
- (id)companionDeskViewCamera;
- (void)setFaceDrivenAutoExposureEnabled:(BOOL)a0;
- (BOOL)isResponsiveCaptureWithDepthSupported;
- (BOOL)automaticallyAdjustsFaceDrivenAutoExposureEnabled;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0 allowSendingWorkToMainThread:(BOOL)a1;
- (void)setTimeOfFlightProjectorMode:(long long)a0;
- (struct { float x0; float x1; float x2; })deviceWhiteBalanceGainsForTemperatureAndTintValues:(struct { float x0; float x1; })a0;
- (BOOL)isManualFramingEnabled;
- (struct { float x0; float x1; })temperatureAndTintValuesForDeviceWhiteBalanceGains:(struct { float x0; float x1; float x2; })a0;
- (BOOL)providesStortorgetMetadata;
- (id)activeFormat;
- (void)_updateFigCaptureSourceObserverCounts;
- (BOOL)hasFlash;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeVideoMinFrameDurationSetByClient;
- (BOOL)appliesSessionPresetMaxIntegrationTimeOverrideToActiveFormat;
- (BOOL)setValue:(id)a0 forCMIOExtensionProperty:(id)a1 error:(id *)a2;
- (BOOL)_isHighDynamicRangeScene;
- (void)_setHDRSceneDetectedForPhotoOutput:(BOOL)a0;
- (void)setDeskViewCameraMode:(long long)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeVideoMaxFrameDuration;
- (void)_updateStudioLightingActiveForEnabled:(BOOL)a0;
- (id)currentPrimaryConstituentDevice;
- (int)minMacroblocksForHighProfileUpTo30fps;
- (void)setContinuousZoomWithDepthEnabled:(BOOL)a0;
- (BOOL)isFaceDrivenAutoExposureEnabled;
- (void)rampToVideoZoomFactor:(double)a0 withRate:(float)a1;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)a0;
- (void)setNonDestructiveCropEnabled:(BOOL)a0;
- (BOOL)isExposureModeSupported:(long long)a0;
- (void)_resetVideoHDRSuspended;
- (void)setActiveFormat:(id)a0;
- (void)_performBlockOnMainThread:(id /* block */)a0;
- (void)_restoreFigCaptureSourceProperties;
- (void)setSmileDetectionEnabled:(BOOL)a0;
- (BOOL)isLockedForConfiguration;
- (void)setExposureModeCustomWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 ISO:(float)a1 completionHandler:(id /* block */)a2;
- (void)_performReaction:(id)a0;
- (long long)timeOfFlightProjectorMode;
- (void)setEyeClosedDetectionEnabled:(BOOL)a0;
- (void)setExposurePointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (void)_setAdjustingFocus:(BOOL)a0;
- (void)setFocusModeLockedWithLensPosition:(float)a0 completionHandler:(id /* block */)a1;
- (void)setTorchMode:(long long)a0;
- (void)setManualFramingPanningAngleX:(float)a0;
- (double)manualFramingDefaultZoomFactor;
- (void)_handleManualControlCompletionForRequestQueue:(id)a0 withPayload:(id)a1;
- (BOOL)isCameraIntrinsicMatrixDeliverySupported;
- (BOOL)lockForConfiguration:(id *)a0;
- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (void)_setActivePrimaryConstituentDeviceSwitchingBehavior:(long long)a0 restrictedSwitchingBehaviorConditions:(unsigned long long)a1;
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
- (int)_setActiveVideoMinFrameDurationInternal:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isContinuousZoomWithDepthEnabled;
- (int)_setExposureWithMode:(long long)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 ISO:(float)a2 requestID:(int)a3 newMaxFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a4;
- (void)setPrimaryConstituentDeviceSwitchingBehavior:(long long)a0 restrictedSwitchingBehaviorConditions:(unsigned long long)a1;
- (int)_setActiveVideoMaxFrameDurationInternal:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)_setFallbackPrimaryConstituentDevices:(id)a0;
- (float)videoZoomRampAcceleration;
- (void)removeCMIOExtensionPropertyValueChangeHandler:(id /* block */)a0;
- (void)_setCameraCalibrationDataDeliveryEnabled:(BOOL)a0;
- (BOOL)_reactionEffectsActiveForEnabled:(BOOL)a0;
- (BOOL)isMachineReadableCodeDetectionSupported;
- (void)_setDigitalFlashSceneForPhotoOutput:(id)a0;
- (BOOL)isProResSupported;
- (BOOL)isEyeDetectionSupported;
- (void)updateUserPreferredCameraHistoryForKey:(id)a0;
- (struct OpaqueCMClock { } *)deviceClock;
- (void)setCenterStageRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFaceDetectionDrivenImageProcessingEnabled;
- (BOOL)isExposurePointOfInterestSupported;
- (BOOL)_isDepthDataDeliveryEnabled;
- (void)_checkTCCAccess;
- (void)_setAdjustingExposure:(BOOL)a0;
- (int)faceRectangleAngle;
- (BOOL)isSISSupported;
- (BOOL)isFocusPointOfInterestSupported;
- (void)_updatePortraitEffectStudioLightQuality:(long long)a0;
- (void)setImageControlMode:(long long)a0;
- (void)_updateMinMaxDefaultVideoZoomFactors;
- (void)_updateFallbackPrimaryConstituentDevicesForDepthDataDeliveryEnabled:(BOOL)a0;
- (void)_setConnected:(BOOL)a0;
- (int)faceDrivenAEAFMode;
- (BOOL)isSuspended;
- (void)_handleCMIOExtensionPropertyChangeNotification:(id)a0;
- (id)activePrimaryConstituentDevice;
- (BOOL)isCinematicFramingActive;
- (void)setManualFramingPanningAngleY:(float)a0;
- (float)exposureTargetOffset;
- (id)copyValueForCMIOExtensionProperty:(id)a0 error:(id *)a1;
- (struct { int x0; int x1; })maxH264VideoDimensions;
- (void)_setFlashActive:(BOOL)a0;
- (void)_setTorchAvailable:(BOOL)a0;
- (void)_resetDefaultVideoZoomFactor;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)supportedVisionDataProperties;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (BOOL)isGlobalToneMappingEnabled;
- (void)_setTorchLevel:(float)a0;
- (void)_setBackgroundBlurAllowed:(BOOL)a0;
- (void)_updateStudioLightingIntensity:(float)a0;
- (void)_setDepthDataDeliveryEnabled:(BOOL)a0;
- (float)minExposureTargetBias;
- (BOOL)isHDRSceneDetectedForPhotoOutput;
- (void)_drainManualControlRequestQueues;
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
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (double)maxAvailableVideoZoomFactor;
- (BOOL)isOverheadCameraModeSupported:(long long)a0;
- (struct CGPoint { double x0; double x1; })focusPointOfInterest;
- (float)maxWhiteBalanceGain;
- (BOOL)eyeDetectionEnabled;
- (void)_setShallowDepthOfFieldEffectStatus:(long long)a0;
- (BOOL)isManualFramingSupported;
- (void)_setMaxAvailableVideoZoomFactor:(double)a0;
- (void)_setActiveFormat:(id)a0 resetVideoZoomFactorAndMinMaxFrameDurations:(BOOL)a1 sessionPreset:(id)a2;
- (float)maxExposureTargetBias;
- (double)_predictedTempForGains:(struct { float x0; float x1; float x2; })a0;
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
- (BOOL)isCenterStageRectOfInterestSupported;
- (BOOL)_hasKeyValueObserversForHighFrequencyProperty:(id)a0;
- (long long)nonDestructiveCropAspectRatio;
- (id)AVVideoSettingsForSessionPreset:(id)a0;
- (BOOL)_ensureWhiteBalanceCalibrationUnpacked;
- (float)timeLapseCaptureRate;
- (BOOL)canPerformReactionEffects;
- (BOOL)isAdjustingWhiteBalance;
- (long long)timeOfFlightBankCount;
- (BOOL)isDockedTrackingSupported;
- (BOOL)isLockingWhiteBalanceWithCustomDeviceGainsSupported;
- (long long)videoStabilizationStrength;
- (id)_recommendedFrameRateRangeForVideoFormat:(id)a0 depthFormat:(id)a1 figSystemPressureLevel:(int)a2;
- (BOOL)isStudioLightActive;

@end
