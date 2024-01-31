@class VideoAttributes, NSString, NSArray, TUVideoEffect, AVConferencePreview;
@protocol TUVideoDeviceControllerProviderDelegate;

@interface TUVideoDeviceControllerProvider : NSObject <AVConferencePreviewClientDelegate, TUVideoDeviceControllerProvider, TUVideoEffectsProvider> {
    BOOL _isAVCaptureDeviceReady;
}

@property (readonly, nonatomic) AVConferencePreview *preview;
@property (readonly, nonatomic, getter=isPreviewRunning) BOOL previewRunning;
@property (readonly, copy, nonatomic) NSString *localCameraUID;
@property (readonly, copy, nonatomic) NSArray *inputDevices;
@property (copy, nonatomic) VideoAttributes *localVideoAttributes;
@property (nonatomic, getter=isCinematicFramingEnabled) BOOL cinematicFramingEnabled;
@property (nonatomic, getter=isReactionEffectGestureEnabled) BOOL reactionEffectGestureEnabled;
@property (nonatomic, getter=isStudioLightEnabled) BOOL studioLightEnabled;
@property (nonatomic, getter=isCameraBlurEnabled) BOOL cameraBlurEnabled;
@property (readonly, nonatomic) BOOL hasAvailableDeskViewCameras;
@property (weak, nonatomic) id<TUVideoDeviceControllerProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TUVideoEffect *currentVideoEffect;
@property (readonly, nonatomic) NSArray *availableVideoEffects;

+ (void)prewarm;

- (id)init;
- (void)dealloc;
- (void)setCameraZoomFactor:(double)a0;
- (void)didStartPreview;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)startPreview;
- (void)stopPreview;
- (void)didGetSnapshot:(id)a0;
- (void)didPausePreview;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)cameraCinematicFramingAvailabilityDidChange:(BOOL)a0;
- (void)cameraDidBecomeAvailableForUniqueID:(id)a0;
- (void)cameraZoomAvailabilityDidChange:(BOOL)a0;
- (void)captureDevicesChanged:(id)a0;
- (long long)currentBackgroundBlurControlMode;
- (void)didChangeLocalCameraUID:(id)a0;
- (void)didChangeLocalVideoAttributes:(id)a0;
- (void)didReceiveErrorFromCameraUniqueID:(id)a0 error:(id)a1;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)a0;
- (void)didStopPreview;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)getSnapshot;
- (id)localScreenAttributesForVideoAttributes:(id)a0;
- (id)localVideoLayer:(BOOL)a0;
- (void)pausePreview;
- (void)queryAVCaptureDeviceIfNeeded;
- (void)rampCameraZoomFactor:(double)a0 withRate:(double)a1;
- (void)setCurrentBackgroundBlurControlMode:(long long)a0;
- (void)setLocalCameraWithUID:(id)a0;
- (void)setLocalScreenAttributes:(id)a0;
- (void)setLocalVideoLayer:(id)a0 front:(BOOL)a1;
- (BOOL)supportsCameraBlurForDevice:(id)a0;
- (id)thumbnailImageForVideoEffectName:(id)a0;

@end
