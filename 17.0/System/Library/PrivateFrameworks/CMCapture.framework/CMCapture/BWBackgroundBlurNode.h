@class BWLimitedGMErrorLogger, NSString, BWDeviceOrientationMonitor, PTEffectRenderRequest, NSMutableDictionary, PTEffect, BWStats, NSMutableArray, BWNodeOutput, BWDeviceThermalMonitor, BWNodeInput;

@interface BWBackgroundBlurNode : BWNode <BWPortraitEffectPropertiesDelegate> {
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    PTEffect *_ptEffect;
    BOOL _stillImageCaptureEnabled;
    struct OpaqueVTPixelTransferSession { } *_stillImagePixelTransferSession;
    struct { struct __CVBuffer *pixelBuffer; struct { long long value; int timescale; unsigned int flags; long long epoch; } pts; } _stillCaptureQueue[2];
    unsigned int _stillCaptureEnqueueIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    BWStats *_backgroundBlurProcessingTimeStats;
    int _numberOfFramesThatCouldNotBeBlurred;
    int _maxThermalSystemPressureLevel;
    BOOL _previousEffectBypassed;
    int _maxLossyCompressionLevel;
    BOOL _isHighQualityEffectSupported;
    BOOL _fastSwitchEnabled;
    unsigned long long _availablePTEffects;
    BOOL _upstreamDeviceOrientationCorrectionEnabled;
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
    PTEffectRenderRequest *_ptEffectRenderRequest;
    float _backgroundBlurAperture;
    float _studioLightingIntensity;
    BOOL _gesturesEnabled;
    NSMutableArray *_pendingReactions;
    long long _reactionCounter;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastRenderPTS;
    NSMutableDictionary *_lastActiveReactions;
    BOOL _activeReactionsDirty;
    id /* block */ _reactionsInProgressObserver;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _framerateThrottleNextPTS;
    BWDeviceThermalMonitor *_thermalMonitor;
}

@property (nonatomic) long long effectQuality;
@property (readonly, nonatomic) BWNodeInput *videoInput;
@property (readonly, nonatomic) BWNodeOutput *videoOutput;
@property (readonly, nonatomic) BWNodeInput *stillImageInput;
@property (readonly, nonatomic) BWNodeOutput *stillImageOutput;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) BOOL effectBypassed;
@property (nonatomic) BOOL suppressVideoEffects;
@property (nonatomic) unsigned long long activeBlurEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)performReactionEffect:(id)a0;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)setReactionsInProgressChangedHandler:(id /* block */)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)lowPowerModeChanged:(id)a0;
- (void)didChangeBackgroundBlurAperture:(float)a0;
- (void)didChangePortraitEffectStudioLightQuality:(long long)a0;
- (void)didChangeStudioLightingIntensity:(float)a0;
- (void)didChangeGesturesEnabled:(BOOL)a0;
- (id)initWithStillImageCaptureEnabled:(BOOL)a0 maxLossyCompressionLevel:(int)a1 fastSwitchEnabled:(BOOL)a2 availableEffects:(unsigned long long)a3 activeEffect:(unsigned long long)a4 isHighQualitySupported:(BOOL)a5 upstreamDeviceOrientationCorrectionEnabled:(BOOL)a6;

@end
