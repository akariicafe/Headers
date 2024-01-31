@class _UIVisualEffectViewBackdropCaptureGroup, CABackdropLayer;

@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview {
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
}

@property (nonatomic) long long renderMode;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;
@property (readonly, nonatomic) CABackdropLayer *backdropLayer;

+ (Class)layerClass;

- (void)willMoveToWindow:(id)a0;
- (void)applyRequestedFilterEffects;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (BOOL)isTransparentFocusItem;
- (void).cxx_destruct;
- (void)applyIdentityFilterEffects;
- (void)removeFromCurrentCaptureGroup;
- (void)_applyScaleHintAsRequested:(BOOL)a0;

@end
