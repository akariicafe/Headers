@class NSArray, NSString, UIView, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewSubviewMonitoring, _UIVisualEffectViewParticipating;

@interface _UIVisualEffectImageView : UIImageView <_UIVisualEffectViewParticipatingInternal>

@property (weak, nonatomic) id<_UIVisualEffectViewSubviewMonitoring> subviewMonitor;
@property (nonatomic) BOOL disableGroupFiltering;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (copy, nonatomic) NSArray *viewEffects;
@property (copy, nonatomic) NSArray *filters;
@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyRequestedFilterEffects;
- (void)applyIdentityViewEffects;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)_initialValueForLayer:(id)a0 keyPath:(id)a1 usePresentationValue:(BOOL)a2;
- (void)applyRequestedViewEffects;
- (void).cxx_destruct;
- (void)applyIdentityFilterEffects;

@end
