@interface CAMAnalyticsCaptureEvent : CAMAnalyticsEvent

@property (readonly, nonatomic) long long _captureMode;
@property (readonly, nonatomic) long long _captureDevice;
@property (readonly, nonatomic) long long _captureDevicePosition;
@property (readonly, nonatomic) long long _captureVideoConfiguration;
@property (nonatomic) long long _lightingEffectType;
@property (nonatomic) long long _mediaType;
@property (nonatomic) BOOL _isStillDuringVideo;
@property (readonly, nonatomic) long long _videoStabilizationStrength;
@property (nonatomic) BOOL _outputToExternalStorage;
@property (readonly, nonatomic) long long _colorSpace;

- (id)eventName;
- (id)initWithEvent:(id)a0;
- (id)_defaultRangeStringForValue:(float)a0 lowerBound:(float)a1 upperBound:(float)a2 defaultValue:(float)a3;
- (void)_populateFromCaptureRequest:(id)a0;
- (id)_zoomRangeStringForDisplayZoomValue:(double)a0 zoomPoints:(id)a1 mode:(long long)a2 device:(long long)a3;
- (id)initWithGraphConfiguration:(id)a0 outputToExternalStorage:(BOOL)a1;
- (void)populateAEAFLocked:(BOOL)a0;
- (void)populateBurstLength:(long long)a0;
- (void)populateDesiredFlashMode:(long long)a0 desiredLivePhotoMode:(long long)a1 desiredHDRMode:(long long)a2 timerDuration:(long long)a3;
- (void)populateDesiredMacroMode:(long long)a0 isMacroCapture:(BOOL)a1 isMacroSuggested:(BOOL)a2;
- (void)populateDesiredNightModeControlMode:(unsigned long long)a0 resolvedNightModeControlMode:(unsigned long long)a1 resolvedNightModeMode:(long long)a2 nightModeStatus:(long long)a3;
- (void)populateDesiredTorchMode:(long long)a0;
- (void)populateDeviceOrientation:(long long)a0 isDeviceOrientationLocked:(BOOL)a1;
- (void)populateDuration:(double)a0;
- (void)populateExposureSliderBias:(float)a0 exposureTapAndBias:(float)a1 totalExposureBias:(float)a2;
- (void)populateForTimelapseCaptureOrientation:(long long)a0 captureMirrored:(BOOL)a1 origin:(long long)a2 pressType:(long long)a3 startDate:(id)a4;
- (void)populateFromPanoramaCaptureNotification:(long long)a0;
- (void)populateFromPanoramaCaptureRequest:(id)a0;
- (void)populateFromStillImageCaptureRequest:(id)a0 burst:(BOOL)a1 preferences:(id)a2;
- (void)populateFromStillImageCaptureResponse:(id)a0;
- (void)populateFromVideoCaptureRequest:(id)a0 preferences:(id)a1;
- (void)populateFromVideoCaptureResponse:(id)a0;
- (void)populateObjectResultsWithNumberOfFaces:(unsigned long long)a0 numberOfCats:(unsigned long long)a1 numberOfDogs:(unsigned long long)a2;
- (void)populatePanoramaDirection:(long long)a0;
- (void)populatePanoramaInstruction:(long long)a0;
- (void)populatePortraitStatus:(long long)a0 lightingEffectIntensity:(double)a1 apertureValue:(double)a2 zoomFactor:(double)a3 isDepthSuggestionAllowed:(BOOL)a4 request:(id)a5;
- (void)populateSharedLibraryMode:(long long)a0;
- (void)populateZoomFromDisplayZoomValue:(double)a0 zoomPoints:(id)a1 zoomInteractionType:(long long)a2;
- (void)populateZoomFromZoomButtonSymbol:(long long)a0 zoomInteractionType:(long long)a1;

@end
