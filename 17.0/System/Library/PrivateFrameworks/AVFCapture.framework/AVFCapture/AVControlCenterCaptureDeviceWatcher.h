@class AVCaptureDeviceDiscoverySession;

@interface AVControlCenterCaptureDeviceWatcher : NSObject {
    AVCaptureDeviceDiscoverySession *_discoverySession;
    id /* block */ _handler;
    BOOL _centerStageSupported;
    BOOL _backgroundBlurSupported;
    BOOL _studioLightingSupported;
    BOOL _reactionEffectsSupported;
    BOOL _micModesSupported;
}

@property (readonly) BOOL centerStageSupported;
@property (readonly) BOOL backgroundBlurSupported;
@property (readonly) BOOL studioLightingSupported;
@property (readonly) BOOL reactionEffectsSupported;
@property (readonly) BOOL micModesSupported;

- (void)dealloc;
- (id)initWithSupportedVideoEffectsDidChangeHandler:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
