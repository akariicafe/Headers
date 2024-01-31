@class _UIVisualEffectHost, NSArray, UIVisualEffect, NSString, UIView, _UIVisualEffectEnvironment, _UIVisualEffectViewBackdropCaptureGroup;

@interface UIVisualEffectBackingHost : NSObject {
    struct { unsigned char backgroundNeedsUpdate : 1; unsigned char contentNeedsUpdate : 1; unsigned char isUpdatingSubviews : 1; unsigned char usingPlainViewForBackground : 1; } _flags;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) _UIVisualEffectEnvironment *environment;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;
@property (retain, nonatomic) _UIVisualEffectHost *backgroundHost;
@property (retain, nonatomic) _UIVisualEffectHost *contentHost;
@property (retain, nonatomic) NSArray *visualEffectSubviews;
@property (copy, nonatomic) UIVisualEffect *visualEffect;
@property (copy, nonatomic) NSArray *contentEffects;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (copy, nonatomic, setter=_setCaptureGroupName:) NSString *_captureGroupName;

- (void)willMoveToSuperview:(id)a0;
- (void)_updateSubviews;
- (void)willMoveToWindow:(id)a0;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (id)_mergedTraitCollection;
- (void)dealloc;
- (void)_updateEffectForAccessibilityChanges:(id)a0;
- (void)_updateEnvironmentAndFlagUpdatesIfNecessary:(id /* block */)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)_initialValueForKey:(id)a0;
- (void)_generateBackgroundEffects:(id)a0 contentEffects:(id)a1;
- (void)willLoseDescendent:(id)a0;
- (id)initForView:(id)a0;
- (void)willGainDescendent:(id)a0;
- (void)didMoveToSuperview;
- (void)_ensureContentHost;
- (void)_configureEffects;
- (void)_updateContentViewVibrancyTraitOverride:(id)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;
- (void)invalidateCaptureGroupName;
- (void)_observeSuperviewContainerVibrancy;
- (void)_generateDeferredAnimations:(id)a0;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (void)_ensureBackgroundHost;
- (id)_effectDescriptorForEffects:(id)a0 usage:(long long)a1;
- (void)didMoveToWindow;

@end
