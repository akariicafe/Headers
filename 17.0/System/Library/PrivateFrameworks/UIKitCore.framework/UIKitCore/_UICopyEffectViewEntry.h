@class _UIVisualEffectViewBackdropCaptureGroup;

@interface _UICopyEffectViewEntry : _UIVisualEffectViewEntry

@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;

- (void)addEffectToView:(id)a0;
- (BOOL)canTransitionToEffect:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)removeEffectFromView:(id)a0;

@end
