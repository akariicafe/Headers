@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput {
    AVCaptureDeviceInputInternal *_internal;
}

@property (readonly, nonatomic) AVCaptureDevice *device;
@property (nonatomic) BOOL unifiedAutoExposureDefaultsEnabled;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMinFrameDurationOverride;

+ (void)initialize;
+ (id)deviceInputWithDevice:(id)a0 error:(id *)a1;

- (void)setSimulatedAperture:(float)a0;
- (float)portraitLightingEffectStrength;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (float)simulatedAperture;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setPortraitLightingEffectStrength:(float)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (id)init;
- (id)notReadyError;
- (void)dealloc;
- (id)ports;
- (long long)audioCaptureMode;
- (float)maxGainOverride;
- (struct OpaqueCMClock { } *)clock;
- (void)_resetPortraitLightingEffectStrength;
- (BOOL)isVisionDataDeliveryEnabled;
- (BOOL)_authorizedToUseDeviceAndRequestIfNecessary:(id)a0;
- (BOOL)isMaxGainOverrideSupported;
- (void)_resetSimulatedAperture;
- (void)_applyVideoMinFrameDurationOverride;
- (void)setStudioLightingAllowed:(BOOL)a0;
- (BOOL)isCameraCalibrationDataDeliveryEnabled;
- (void)setSession:(id)a0;
- (id)description;
- (BOOL)isAudioCaptureModeSupported:(long long)a0;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription { } *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)portsWithMediaType:(id)a0 sourceDeviceType:(id)a1 sourceDevicePosition:(long long)a2;
- (void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(BOOL)a0;
- (BOOL)isCenterStageAllowed;
- (void)setCameraCalibrationDataDeliveryEnabled:(BOOL)a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (BOOL)isStudioLightingAllowed;
- (BOOL)isBackgroundBlurAllowed;
- (void)setVisionDataDeliveryEnabled:(BOOL)a0;
- (void)_bumpChangeSeedForFirstPortWithMediaType:(id)a0;
- (void)setMaxGainOverride:(float)a0;
- (id)videoDevice;
- (id)initWithDevice:(id)a0 error:(id *)a1;
- (void)setBackgroundBlurAllowed:(BOOL)a0;
- (void)_resetVideoMinFrameDurationOverride;
- (BOOL)isBuiltInMicrophoneStereoAudioCaptureSupported;
- (id)multiCamPorts;
- (void)setReactionEffectsAllowed:(BOOL)a0;
- (BOOL)isBuiltInMicrophoneStereoAudioCaptureEnabled;
- (void)setCenterStageAllowed:(BOOL)a0;
- (void)setAudioCaptureMode:(long long)a0;
- (BOOL)reactionEffectsAllowed;

@end
